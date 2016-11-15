startLoadingScreen [""];

///////////////////////////////////////////////////////////////////////////////

WW2_NumberOfRuns = 5;

WW2_MeasureEachVehicleAlone = false;

// how many times each weapon should be put on the floor
WW2_Multiplier = 50;//50-100
WW2_Vehicles = ["LIB_JS2_43","LIB_M4A3_75","LIB_M4A2_SOV","LIB_PzKpfwIV_H","LIB_PzKpfwV","LIB_PzKpfwVI_B","LIB_PzKpfwVI_E","LIB_StuG_III_G","LIB_StuG_III_G_WS","LIB_SU85","LIB_T34_76","LIB_T34_85"];
WW2_SpaceBetweenItems = 10;

//WW2_Vehicles = ["LIB_LCVP"];
//WW2_Vehicles = ["LIB_Kfz1","LIB_Willys_MB"];
//WW2_Vehicles = ["LIB_Scout_m3","LIB_Opelblitz_open_y_camo","LIB_Opelblitz_open_g_camo","LIB_Opelblitz_tent_y_camo","LIB_Opelblitz_fuel","LIB_Opelblitz_ambulance","LIB_Opelblitz_parm","LIB_Opelblitz_ammo","LIB_US6_Unarmed_base","LIB_Us6_open","LIB_Us6_tent","LIB_Us6_tent_cargo","LIB_Us6_open_cargo","LIB_Us6_ammo","LIB_Us6_bm13","LIB_US_GMC_Open","LIB_US_GMC_Tent","LIB_US_GMC_Ammo","LIB_US_GMC_Ambulance","LIB_US_GMC_Parm","LIB_US_GMC_Fuel","LIB_Zis5v","LIB_Zis5v_med","LIB_Zis6_parm","LIB_Zis5v_fuel"];
//WW2_Vehicles = ["LIB_Sdkfz251","LIB_SdKfz_7","LIB_SdKfz_7_AA","LIB_US_M3_Halftrack"];
//WW2_Vehicles = ["LIB_Zis3","LIB_61k","LIB_Pak40","LIB_GER_SearchLight","LIB_SU_SearchLight","LIB_MG42_Lafette_trench","LIB_MG42_Lafette_low","LIB_Maxim_m30_base","LIB_Maxim_m30_trench","LIB_BM37","LIB_GrWr34","LIB_FlaK_38","LIB_Flakvierling_38"];

//WW2_Multiplier = 25;//25-50
//WW2_Vehicles = ["LIB_FW190F8","LIB_Ju87","LIB_P39","LIB_Pe2","LIB_Li2","LIB_P47"];
//WW2_SpaceBetweenItems = 30;

// should screenshots get taken
WW2_DoScreenshots = false;
WW2_CustomScreenshotTag = "Tanks_";
WW2_ScreenshotFilename = "WW2_FPS_Vehicles_IF_";

// how smooth the transition should be (higher = more, but also takes longer)
WW2_SceneCameraPositionTransitionDuration = 1;

///////////////////////////////////////////////////////////////////////////////

WW2_fnc_createVehicle =
{
	startLoadingScreen [""];
	private["_vehicleClasses","_xPos","_yPos"];
	_vehicleClasses = _this select 0;

	_xPos = 0;
	_yPos = 0;

	WW2_NumberOfVehicles = count _vehicleClasses;

	for "_i" from 0 to (WW2_NumberOfVehicles - 1) do
	{
		private["_vehicleClass","_unit"];
		_vehicleClass = _vehicleClasses select _i;

//		diag_log ["_vehicleClass",_vehicleClass];

		private["_unit"];
		_unit = createVehicle [_vehicleClass,[WW2_LogicPositionX + _xPos * WW2_SpaceBetweenItems,WW2_LogicPositionY + _yPos * WW2_SpaceBetweenItems,0],[],0,"CAN_COLLIDE"];
		_unit setDir 180;

		_xPos = _xPos + 1;

		if (_xPos >= WW2_xMax) then
		{
			_xPos = 0;
			_yPos = _yPos + 1;
		};
	};
	endLoadingScreen;
};

WW2_fnc_cameraScene =
{
	private["_tag","_run","_distance","_fpsOfCurrentRun","_filename"];
	_tag = _this select 0;
	_run = _this select 1;
	_distance = _this select 2;
	_fpsOfCurrentRun = _this select 3;

	WW2_StartPosition set [2,_distance * WW2_CamHeightDefault];

	waitUntil {preloadCamera WW2_StartPosition};

	WW2_Cam camPrepareTarget WW2_CenterPosition;
	WW2_Cam camPreparePos WW2_StartPosition;
	WW2_Cam camPrepareFov 0.7;
	WW2_Cam camCommitPrepared WW2_SceneCameraPositionTransitionDuration;
	sleep WW2_SceneCameraPositionTransitionDuration;
	waitUntil {camCommitted WW2_Cam};

	_fpsOfCurrentRun pushBack diag_fps;

	_filename = WW2_ScreenshotFilename + WW2_CustomScreenshotTag + _tag + format ["_%1",_distance] + format ["_%1",_run] + ".png";
//	diag_log ["_filename",_filename];
	if (WW2_DoScreenshots) then {screenshot _filename;};
};

WW2_fnc_wholeCameraScene =
{
	startLoadingScreen [""];
	private["_tag","_run","_fpsOfCurrentRun","_distance"];
	_tag = _this select 0;
	_run = _this select 1;
	_fpsOfCurrentRun = _this select 2;

	WW2_Cam = "camera" camCreate [0,0,0];
	WW2_Cam cameraEffect ["Internal","back"];
	showCinemaBorder false;

	WW2_Cam setPos WW2_StartPosition;
	endLoadingScreen;

	_distance = 1;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 5;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 10;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 20;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 35;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 60;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 100;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

	_distance = 150;
	_handle = [_tag,_run,_distance,_fpsOfCurrentRun] spawn WW2_fnc_cameraScene;
	waitUntil {scriptDone _handle};

//	startLoadingScreen [""];
	WW2_StartPosition set [2,1 * WW2_CamHeightDefault];

	WW2_Cam setPos WW2_StartPosition;

//	WW2_Cam camPrepareTarget WW2_CenterPosition;
//	WW2_Cam camPreparePos WW2_StartPosition;
	WW2_Cam camCommitPrepared 0.1;
	sleep 0.1;
	waitUntil {camCommitted WW2_Cam};

	sleep 1;

	camDestroy WW2_Cam;
//	endLoadingScreen;
};

WW2_fnc_measureFPS =
{
	private["_tag","_run","_fpsOfAllRuns","_fpsOfCurrentRun","_handle"];
	_tag = _this select 0;
	_run = _this select 1;
	_fpsOfAllRuns = _this select 2;

	_fpsOfCurrentRun = [];

	_handle = [_tag,_run,_fpsOfCurrentRun] spawn WW2_fnc_wholeCameraScene;
	waitUntil {scriptDone _handle};

	_fpsOfAllRuns set [_run - 1,_fpsOfCurrentRun];
};

WW2_fnc_logFPS =
{
	private["_fpsOfAllRuns","_tempArray"];
	_fpsOfAllRuns = _this select 0;

	_tempArray = [];
	_tempArray resize (count (_fpsOfAllRuns select 0));
	_tempArray = _tempArray apply {0};

	{
		private["_fpsOfCurrentRun","_i"];
		_fpsOfCurrentRun = _x;

		_i = 0;
		{
			private["_fps"];
			_fps = _x;
			_tempArray set [_i,(_tempArray select _i) + _fps];

			_i = _i + 1;
		} forEach _fpsOfCurrentRun;
	} forEach _fpsOfAllRuns;
	
	{
		private["_totalFps","_averageFps"];
		_totalFps = _x;
		_averageFps = _totalFps/WW2_NumberOfRuns;
		diag_log _averageFps;
	} forEach _tempArray;
};

///////////////////////////////////////////////////////////////////////////////

setViewDistance 1500;
setTerrainGrid 25;

///////////////////////////////////////////////////////////////////////////////


WW2_NumberOfVehicles = WW2_Multiplier;
WW2_xMax = round (sqrt WW2_NumberOfVehicles);

WW2_LogicPosition = getPos WW2_logic;
WW2_LogicPositionX = WW2_LogicPosition select 0;
WW2_LogicPositionY = WW2_LogicPosition select 1;

_xMax = WW2_xMax/2;

WW2_CamHeightDefault = 5;
WW2_StartPosition = [WW2_LogicPositionX + _xMax * WW2_SpaceBetweenItems,WW2_LogicPositionY - (_xMax * WW2_SpaceBetweenItems)/1,WW2_CamHeightDefault];
WW2_CenterPosition = [WW2_LogicPositionX + _xMax * WW2_SpaceBetweenItems,WW2_LogicPositionY + _xMax * WW2_SpaceBetweenItems,0];
WW2_CamPosition = +WW2_CenterPosition;
WW2_CamPosition set [2,WW2_CamHeightDefault];
//endLoadingScreen;

//sleep 1;

if (true) then
{
	private["_vehicleClassesUnique","_version","_message","_vehicleClasses","_fpsOfAllRuns"];
	_vehicleClassesUnique = [];
	{
		for "_i" from 1 to WW2_Multiplier do
		{
			_vehicleClassesUnique pushBackUnique _x;
		};
	} forEach WW2_Vehicles;

	_version = format ["%1 1.%2.%3",productVersion select 0,(productVersion select 2) % 100,productVersion select 3];

	_message = "diag_fps - Vehicles - "+ _version;
	_message = _message + " " + "WW2_Multiplier: "+ str WW2_Multiplier;
	_message = _message + " " + "WW2_SpaceBetweenItems: "+ str WW2_SpaceBetweenItems;

	{
		_message = _message + " " + _x;
	} forEach _vehicleClassesUnique;

	diag_log _message;

//	endLoadingScreen;

//	startLoadingScreen [""];
	_vehicleClasses = [];
	{
		for "_i" from 1 to floor (WW2_Multiplier/((count WW2_Vehicles) - 1)) do
		{
			_vehicleClasses pushBack _x;
		};
	} forEach WW2_Vehicles;
	endLoadingScreen;
	//diag_log[WW2_Multiplier,count _vehicleClasses];

	_fpsOfAllRuns = [];

	[_vehicleClasses] call WW2_fnc_createVehicle;

	sleep 3;

	for "_i" from 1 to WW2_NumberOfRuns do
	{
		private["_run","_handle"];
		_run = _i;
		_handle = ["all",_run,_fpsOfAllRuns] spawn WW2_fnc_measureFPS;
		waitUntil {scriptDone _handle};
	};

	{deleteVehicle _x} forEach vehicles;

	[_fpsOfAllRuns] call WW2_fnc_logFPS;
};

if (WW2_MeasureEachVehicleAlone) then
{
	//single vehicles
	{
		private["_vehicleClasses","_fpsOfAllRuns"];
		diag_log _x;

		_vehicleClasses = [];
		for "_i" from 1 to WW2_Multiplier do
		{
			_vehicleClasses pushBack _x;
		};

		_fpsOfAllRuns = [];

		[_vehicleClasses] call WW2_fnc_createVehicle;

		sleep 3;

		for "_i" from 1 to WW2_NumberOfRuns do
		{
			private["_run","_handle"];
			_run = _i;
			_handle = [_x,_run,_fpsOfAllRuns] spawn WW2_fnc_measureFPS;
			waitUntil {scriptDone _handle};
		};

		{deleteVehicle _x} forEach vehicles;

		[_fpsOfAllRuns] call WW2_fnc_logFPS;
	} forEach WW2_Vehicles;
};

endMission "END1";

/*

_pos = getPosATL cameraOn;
_pos set [2,(_pos select 2) + 2];
WW2_Cam = "camera" camCreate _pos;
WW2_Cam cameraEffect ["terminate","back"];
WW2_Cam setDir direction cameraOn;
WW2_Cam camCommand "manual off";
WW2_Cam camCommand "inertia on";
showCinemaBorder false;
showHUD false;
*/