/*
	Author: Karel Moricky

	Description:
	Export list of objects for Community Wiki
	http://community.bistudio.com/wiki/Category:Arma_3:_Assets

	Parameter(s):
		0: NUMBER - duration in seconds for which an objects remains on the screen before its screen is captured (default: 1 s)
		1: STRING:
			"vehicles" - only characters and vehicles will be used
			"props" - only props will be used
			"all" (default) - all objects will be used
		2: ARRAY of SIDEs - list of sides. Only objects of these sides will be used  (default: all sides)
		3: ARRAY of STRINGs - list of CfgMods classes. Only objects belonging to these mods will be used (default: all mods)
		4: ARRAY of STRINGs - list of CfgPatches classes. Only objects belonging to these addons will be used (default: all addons)
		5: ARRAY of STRINGs - list of CfgVehicles classes. Only these objects will be used (default: all classes)

	Returns:
	Nothing
*/

//#define DEBUG

disableserialization;

_delay = param [0,1,[0]];
_allVehicles = _this param [1,0,[0,""]];
_sides = param [2,[],[[]]];
_mods = param [3,[],[[]]];
_patches = param [4,[],[[]]];
_classes = param [5,[],[[]]];

_product = productversion select 1;

//--- Convert allVehicle to number
if (_allVehicles isequaltype "") then {
	_allVehicles = switch (tolower _allVehicles) do {
		case "props": {-1};
		case "vehicles": {1};
		default {0};
	};
};

//--- Convert sides to numbers
_sides = +_sides;
{
	if (_x isequaltype sideunknown) then {_sides set [_foreachindex,_x call bis_fnc_sideid];};
} foreach _sides;
if (count _sides == 0) then {_sides = [0,1,2,3,4,8];};

//--- Convert CfgMods classes to lower case for comparison
_mods = +_mods;
{
	_mods set [_foreachindex,tolower _x];
} foreach _mods;
_allMods = count _mods == 0;

//--- Convert CfgPatches classes to lower case for comparison
_patches = +_patches;
{
	_patches set [_foreachindex,tolower _x];
} foreach _patches;
_allPatches = count _patches == 0;

//--- Convert vehicle classes classes to lower case for comparison
_classes = +_classes;
{
	_classes set [_foreachindex,tolower _x];
} foreach _classes;
_allClasses = count _classes == 0;

//--- Get the list of affected objects
_cfgAll = configfile >> "cfgvehicles" >> "all";

//--- Decide DLC folders
_dlcTable = [];
_fnc_getDlc = {
	_dlc = "";
	_addonList = configsourceaddonlist _this;
	if (count _addonList > 0) then {
		_dlcList = configsourcemodlist (configfile >> "cfgpatches" >> (_addonList select 0)); //--- Check mod of first object's addon to get the first occurance
		_dlc = "";
		if (count _dlcList > 0) then {
			_dlc = _dlcList select 0;
			{
				if (_dlc == (_x select 0)) exitwith {_dlc = _x select 1;};
			} foreach _dlcTable;
		};
	};
	_dlc
};


//--- Get the list of affected objects
_cfgVehicles = "
	getnumber (_x >> 'scope') == 2
	&&
	{
		getnumber (_x >> 'side') in _sides
		&&
		{
			_class = configname _x;
			_isAllVehicles = _class iskindof 'allvehicles';
			(_allVehicles == 0 || (_allVehicles == 1 && _isAllVehicles) || (_allVehicles == -1 && !_isAllVehicles))
			&&
			{
				(_allMods || {(tolower _x) in _mods} count (configsourcemodlist _x) > 0)
				&&
				{
					(_allPatches || {(tolower _x) in _patches} count (configsourceaddonlist _x) > 0)
					&&
					{
						(_allClasses || {(tolower _class) in _classes})
						&&
						{
							!(gettext (_x >> 'model') in Test_restrictedModels)
							&&
							{
								((toLower gettext (_x >> 'author')) in TEST_IncludedAuthors)
								&&
								{
									inheritsfrom _x != _cfgAll
									&&
									{
										{_class iskindof _x} count Test_blacklistClassTree == 0
									}
								}
							}
						}
					}
				};
			}
		}
	}
" configclasses (configfile >> "cfgVehicles");
_cfgVehiclesCount = count _cfgVehicles;

{
	diag_log _x;
} forEach _cfgVehicles;

diag_log ["1",_cfgVehiclesCount];

if (_cfgVehiclesCount == 0) exitwith {};//["No classes found!"] call bis_fnc_error;};

if ((count Test_whiteListClassTree) > 0) then
{
	private _tempArray = [];
	{
		private _vehicleConfig = _x;
		private _vehicleClass = configName _vehicleConfig;
		{
			private _filter = _x;
			if (_vehicleClass isKindOf _filter) exitWith {_tempArray pushBack _vehicleConfig;};
		} forEach Test_whiteListClassTree;
	} forEach _cfgVehicles;

	_cfgVehicles = _tempArray;
};

_cfgVehiclesCount = count _cfgVehicles;

diag_log ["2",_cfgVehiclesCount];

{
	diag_log _x;
} forEach _cfgVehicles;

if (_cfgVehiclesCount == 0) exitwith {};//["No classes found!"] call bis_fnc_error;};

//--- Export config macros --------------------------------
#ifdef MACROS
	private ["_path","_br","_result","_resultText"];
	startloadingscreen [""];
	_path = configfile >> "cfgvehicles";//_this param [0,configfile >> "cfgvehicles",[configfile]];
	_br = tostring [13,10];
	_result = [];

	//--- Pre-expansion DLC content is all in the default addon
	_dlcTable = [
		["curator",		""],
		["kart",		""],
		["heli",		""],
		["mark",		""],
		["expansion",		"Exp"],
		["expansionpremium",	"Exp"]
	];
	{
		_dlc = _x call _fnc_getDlc;
		if (_dlc != "") then {_dlc = "_" + _dlc;};
		_result = _result + [format ["#define CFGVEHICLES_EDITORPREVIEW_%1	editorPreview = ""\A3\EditorPreviews_F%2\Data\CfgVehicles\%1.jpg"";",configname _x,_dlc]];
	} foreach _cfgVehicles;
	_result = _result call BIS_fnc_sortAlphabetically;

	_resultText = "";
	{_resultText = _resultText + _x + _br;} foreach _result;
	copytoclipboard _resultText;
	endloadingscreen;
	if (true) exitwith {};
#endif

//--- Export pictures ------------------------------------

//--- Prepare the scene
_posZ = 250;
_pos = [1024,1024,_posZ];

_cam = "camera" camcreate _pos;
_cam cameraeffect ["internal","back"];
_cam campreparefocus [-1,-1];
_cam campreparefov 0.4;
_cam camcommitprepared 0;
showcinemaborder false;

_sphereColor = "#(argb,8,8,3)color(0.93,1.0,0.98,0.1)"; //--- VR ground
//_sphereColor = "#(argb,8,8,3)color(0.93,1.0,0.98,0.028)"; //--- VR sky
//_sphereColor = "#(argb,8,8,3)color(1,1,1,1)"; //--- White
_sphereGround = createvehicle ["Sphere_3DEN",_pos,[],0,"none"];
_sphereNoGround = createvehicle ["SphereNoGround_3DEN",_pos,[],0,"none"];
{
	_x setposatl _pos;
	_x setdir 0;
	_x setobjecttexture [0,_sphereColor];
	_x setobjecttexture [1,_sphereColor];
	_x hideobject true;
} foreach [_sphereGround,_sphereNoGround];

setaperture 45;//35;
setdate [2035,5,28,10,0];

//--- Is preview capturing in Eden?
_display = [] call bis_fnc_displayMission;
if (is3DEN) then {
	_display = finddisplay 313;
	["showinterface",false] call bis_fnc_3DENInterface;
};

//--- Prepare the UI
_ctrlInfoW = 0.5;
_ctrlInfoH = 0.2;
_ctrlInfo = _display ctrlcreate ["RscStructuredText",-1];
_ctrlInfo ctrlsetposition [
	safezoneX + 0.1,//safezoneX + safezoneW - _ctrlInfoW - 0.1,
	safezoneY + safezoneH - _ctrlInfoH,
	safezoneW - 0.2,//_ctrlInfoW,
	_ctrlInfoH
];
//_ctrlInfo ctrlsetbackgroundcolor [0,0,0,1];
//_ctrlInfo ctrlsetfontheight (_ctrlInfoH * 0.7);
_ctrlInfo ctrlcommit 0;

_ctrlProgressH = 0.01;
_ctrlProgress = _display ctrlcreate ["RscProgress",-1];
_ctrlProgress ctrlsetposition [
	safezoneX,
	safezoneY + safezoneH - _ctrlProgressH,
	safezoneW,
	_ctrlProgressH
];
_ctrlProgress ctrlcommit 0;

_screenTop = safezoneY;
_screenBottom = safezoneY + safezoneH;
_screenLeft = safezoneX;
_screenRight = safezoneX + safezoneW;

#ifdef DEBUG
	_helpers = [
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"],
		createvehicle ["Sign_Sphere10cm_F",[1,1,1],[],0,"none"]
	];
	{
		(_helpers select _foreachindex) setobjecttexture [0,_x];
	} foreach [
		"#(argb,8,8,3)color(1,1,1,1)",
		"#(argb,8,8,3)color(0,0,1,1)",
		"#(argb,8,8,3)color(0,1,0,1)",
		"#(argb,8,8,3)color(0,1,1,1)",
		"#(argb,8,8,3)color(1,0,0,1)",
		"#(argb,8,8,3)color(1,0,1,1)",
		"#(argb,8,8,3)color(1,1,0,1)",
		"#(argb,8,8,3)color(1,1,1,1)"
	];
#endif


//--- Main loop -------------------------------------------
{
	_class = configname _x;

	//--- Get filename
	_dlc = _x call _fnc_getDlc;
	if (_dlc != "") then {_dlc = _dlc + "\";};
	_fileName = format ["EditorPreviews\%2%1.png",_class,_dlc];

	//--- Update UI
	_ctrlInfo ctrlsetstructuredtext parsetext format ["Saving screenshot to<br /><t font='EtelkaMonospaceProBold' size='0.875'>[Arma 3 Profile]\Screenshots\%1</t><br />Note: The text overlay will not be saved.",_fileName];
	_ctrlProgress progresssetposition (_foreachindex / _cfgVehiclesCount);

	//--- Set position and camera angles (exsception for helipads)
	_camDirH = 135;
	_camDirV = 15;
	_posLocal = +_pos;
	if (_class iskindof "HeliH") then {
		_posLocal set [2,0];
		_camDirH = 90;
		_camDirV = 75;
	};

	//--- Create object
	_object = objNull;
	if (!(_class isKindOf "Bag_Base")) then
	{
		_object = createvehicle [_class,_posLocal,[],0,"none"];
	}
	else
	{
		_object = "GroundWeaponHolder" createVehicle _posLocal;
		_object addBackpackCargoGlobal [_class, 1];
//		_object addItem _class;
	};

	if (_class iskindof "allvehicles") then {_object setdir 90;} else {_object setdir 270;};
	if (primaryweapon _object != "") then {_object switchmove "amovpercmstpslowwrfldnon"} else {_object switchmove "amovpercmstpsnonwnondnon";};
	_object setposatl _posLocal;
	_object switchaction "default";
	_timeCapture = time + _delay;
	if (_object iskindof "FlagCarrierCore") then {
		_object spawn {_this enablesimulation false;}; // Delay freezing to initialize flag
	} else {
		_object enablesimulation false;
	};

	//--- Caulculate bounding box corners
	_bbox = boundingboxreal _object;
	_bbox1 = _bbox select 0;
	_bbox2 = _bbox select 1;
	_worldPositions = [
		_object modeltoworld [_bbox1 select 0,_bbox1 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox1 select 0,_bbox1 select 1,_bbox2 select 2],
		_object modeltoworld [_bbox1 select 0,_bbox2 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox1 select 0,_bbox2 select 1,_bbox2 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox1 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox1 select 1,_bbox2 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox2 select 1,_bbox1 select 2],
		_object modeltoworld [_bbox2 select 0,_bbox2 select 1,_bbox2 select 2]
	];

	#ifdef DEBUG
		{
			_x setpos (_worldPositions select _foreachindex);
		} foreach _helpers;
	#endif

	//--- Set background sphere
	_pointLowest = 0;
	_pointHighest = 0;
	{
		_xZ = (_x select 2) - _posZ;
		if (_xZ > _pointHighest) then {_pointHighest = _xZ;};
		if (_xZ < _pointLowest) then {_pointLowest = _xZ;};
	} foreach _worldPositions;
	_sphere = if (abs(_pointLowest) > abs(_pointHighest * 2/3)) then {_sphereNoGround} else {_sphereGround};
	_sphere hideobject false;
	_sphere setpos _pos;

	//--- Set camera
	_camAngle = _camDirV;
	_camDis = (1.5 * ((sizeof _class) max 0.1)) min 124 max 0.2; //--- 125 m is a sphere diameter
	_camPos = [_posLocal,_camDis,_camDirH] call bis_fnc_relpos;
	_camPos set [2,/*_posZ*/((_object modeltoworld [0,0,0]) select 2) + (tan _camAngle * _camDis)];
	_cam campreparepos _camPos;
	_cam campreparetarget (_object modeltoworld [0,0,0]);
	_cam campreparefocus [-1,-1];
	_cam campreparefov 0.7;
	_cam camcommitprepared 0;
	sleep 0.01; //--- Delay for camera to load

	if (_class iskindof "man" && !(_class iskindof "animal")) then {
		//--- Zoom in to character's torso to make inventory more apparent
		_cam campreparetarget (_object modeltoworld [0,0,1.25]);
		_cam campreparefov 0.075;
		_cam camcommitprepared 0;
	} else {
		//--- Calculate target
		_extremes = [0.5,0.5,0.5,0.5]; //--- Left, Right, Top, Bottom
		{
			_screenPos = worldtoscreen _x;
			if (count _screenPos > 0) then {
				_screenPosX = _screenPos select 0;
				_screenPosY = _screenPos select 1;
				if (_screenPosX < (_extremes select 0)) then {_extremes set [0,_screenPosX];};
				if (_screenPosX > (_extremes select 1)) then {_extremes set [1,_screenPosX];};
				if (_screenPosY > (_extremes select 3)) then {_extremes set [3,_screenPosY];};
				if (_screenPosY < (_extremes select 2)) then {_extremes set [2,_screenPosY];};
			};
		} foreach _worldPositions;
		_cam campreparetarget screentoworld [
			(_extremes select 0) + ((_extremes select 1) - (_extremes select 0)) / 2,
			(_extremes select 2) + ((_extremes select 3) - (_extremes select 2)) / 2
		];

		//--- Calculate zoom - get the closest zoom where all bounding box corners are still visible
		_fovStart = if (_camDis < 0.35) then {0.4} else {0.1}; //--- When camera is too close, it cuts into the model itself
		for "_f" from _fovStart to 0.7 step 0.01 do {
			_cam campreparefov _f;
			_cam camcommitprepared 0;
			sleep 0.01; //--- Delay for camera to load
			_onScreen = true;
			{
				_screenPos = worldtoscreen _x;
				if (count _screenPos == 0) then {_screenPos = [10,10];};
				if (abs (linearconversion [_screenLeft,_screenRight,_screenPos select 0,-1,1]) > 1) exitwith {_onScreen = false;};
				if (abs (linearconversion [_screenTop,_screenBottom,_screenPos select 1,-1,1]) > 1) exitwith {_onScreen = false;};
			} foreach _worldPositions;
			if (_onScreen) exitwith {};
		};
	};

	//--- Wait for model to load and take a screenshot
	waituntil {time > _timeCapture};
	screenshot _fileName;
	sleep 0.01;

	//--- Delete the object
	_object setpos [10,10,10];
	deletevehicle _object;
	_sphere hideobject true;

} foreach _cfgVehicles;



//--- Reset the scene
_cam cameraeffect ["terminate","back"];
camdestroy _cam;
deletevehicle _sphereGround;
deletevehicle _sphereNoGround;
setaperture -1;
ctrldelete _ctrlInfo;
ctrldelete _ctrlProgress;

if (is3DEN) then {
	get3dencamera cameraeffect ["internal","back"];
	["showinterface",true] call bis_fnc_3DENInterface;
};

#ifdef DEBUG
	{deletevehicle _x;} foreach _helpers;
#endif