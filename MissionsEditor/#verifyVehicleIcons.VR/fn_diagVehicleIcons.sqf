/*
	Author: Karel Moricky

	Description:
	Previews all vehicle icons on map

	Parameter(s):
		0: STRING (Optional) - Parent class of scanned vehicles (default "All")
		1: ARRAY (Optional) - Position of the fist icon, others will be layered on top of it (default: [100,100], i.e. bottom left corner)
		2: CONTROL (Optional) - Map on which markers are displayed (default value: main map)

	Returns:
	BOOL
*/
disableserialization;

TEST_WhiteListedClassTypes = ["LandVehicle","Air","Ship"];//"Static"

_parent = _this param [0,"all",[""]];
_posStart = _this param [1,[100,100]];
_map = _this param [2,findDisplay 12 displayCtrl 51,[controlNull]];

if (isNull _map) exitWith {"Map control not found" call bis_fnc_error;};
_posStart = _posStart call bis_fnc_position;

BIS_fnc_diagVehicleIcons_posStart = _posStart;

//--- Extract all vehicle icons
startLoadingScreen [""];
_iconList = [];
_uniqueModels = [];
//_duplicity = [];

_cfgIslandMap = configFile >> "cfgIngameUI" >> "islandMap";
_cfg = configFile >> "cfgVehicles";

for "_i" from 0 to (count _cfg - 1) do
{
	_class = _cfg select _i;

	if (isClass _class) then
	{
		_scope = getNumber (_class >> "scope");

		if (_scope > 0) then
		{
			_skip = true;
			_className = configName _class;

			{
				if (_className isKindOf _x) exitWith {_skip = false;};
			} forEach TEST_WhiteListedClassTypes;

			if (!_skip) then
			{
//				_parents = [_class,true] call bis_fnc_returnparents;

//				if ({_x == _parent} count _parents > 0) then
//				{
					_icon = getText (_class >> "icon");

//					if ({tolower _icon == _x} count _duplicity == 0) then
//					{
						_author = getText (_class >> "author");

						if (toLower _author in TEST_IncludedAuthors) then
						{
							_model = toLower (getText (_class >> "model"));

							if (!(_model in _uniqueModels)) then
							{
//diag_log["_model",_model];
								_uniqueModels pushBack _model;

								_vehicleIcon = getText (configFile >> "cfgvehicleicons" >> "icon");
								_mapSize = getNumber (_class >> "mapSize");

								_iconList set [count _iconList,[_className,_model,_icon,_vehicleIcon,_mapSize]];
//								_duplicity set [count _duplicity,tolower _icon];
							};
						};
//					};
//				};
			};
		};
	};
};
endloadingscreen;

BIS_fnc_diagVehicleIcons_list = _iconList;

//--- Create text description
_markers = missionnamespace getvariable ["BIS_fnc_diagVehicleIcons_markers",[]];
{deletemarker _x;} forEach _markers;
_markers = [];
{
	_className = _x select 0;
	_model = _x select 1;
	_icon = _x select 2;
	_vehicleicon = _x select 3;
	_mapSize = _x select 4;

	_pos = [
		(BIS_fnc_diagVehicleIcons_posStart select 0) + 60,
		(BIS_fnc_diagVehicleIcons_posStart select 1) + 15 * _forEachIndex
	];

	_text = format ["%1 (%5) - %3",_className,_model,_icon,_vehicleicon,_mapSize];

	//--- White box behind testing icon
	_marker = createmarker ["BIS_fnc_diagVehicleIcons_marker_" + str _forEachIndex,_pos];
	_marker setmarkertype "mil_box";
	_marker setmarkersize [3,3];
	_marker setmarkercolor "colorwhite";
	_markers set [count _markers,_marker];

	//--- Icon path
	_marker = createmarker ["BIS_fnc_diagVehicleIcons_markertext_" + str _forEachIndex,_pos];
	_marker setmarkertype "mil_box";
	_marker setmarkertext _text;
	_marker setmarkersize [0,0];
	_marker setmarkercolor "colorblack";
	_markers set [count _markers,_marker];

} forEach BIS_fnc_diagVehicleIcons_list;
BIS_fnc_diagVehicleIcons_markers = _markers;

//--- Create icons
BIS_fnc_diagVehicleIcons_sidecolors = [
	[1,0,0,1],//	getarray (_cfgIslandMap >> "colorenemy"),
	[0,0,1,1],//	getarray (_cfgIslandMap >> "colorcivilian"),
	[0,1,0,1],//	getarray (_cfgIslandMap >> "colorfriendly"),
	[0,0,0,1],//	getarray (_cfgIslandMap >> "colorneutral"),
	[0,0,0,1]
];
BIS_fnc_diagVehicleIcons_code =
{
	_map = _this select 0;
	{
		_className = _x select 0;
		_model = _x select 1;
		_icon = _x select 2;
		_vehicleicon = _x select 3;
		_mapSize = _x select 4;

		_texture = if (_vehicleicon == "") then {_icon} else {_vehicleicon};
		_posy = (BIS_fnc_diagVehicleIcons_posStart select 1) + 15 * _forEachIndex;

		{
			_sideColor = BIS_fnc_diagVehicleIcons_sidecolors select _forEachIndex;
			_map drawIcon [
				_texture,	//texture
				_sideColor,	//color
				[(BIS_fnc_diagVehicleIcons_posStart select 0) + _forEachIndex * 15,_posy],	//position
				_mapSize * 4,//32,	//width
				_mapSize * 4,//32,	//height
				_x,	//angle
				"",	//text
				0	//shadow
			];
		} forEach [-90,-45,-30,-15,0];

	} forEach BIS_fnc_diagVehicleIcons_list;
};

//--- Display icons on map
_map ctrlSetEventHandler ["draw","_this call BIS_fnc_diagVehicleIcons_code"];