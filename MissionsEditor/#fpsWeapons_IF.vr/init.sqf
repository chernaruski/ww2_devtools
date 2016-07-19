setViewDistance 1500;
setTerrainGrid 25;

_doScreenshots = false;

//sleep 1;

///////////////////////////////////////////////////////////////////////////////
//
// how many times each weapon should be put on the floor
_multiplier = 10;
//
// should screenshots get taken
//_doScreenshots = true;
///////////////////////////////////////////////////////////////////////////////

startLoadingScreen [""];

_rootClass = "cfgWeapons";
_weaponClasses = [];


for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		_className = configName _class;
		if
		(
//			(toUpper (getText (configFile/_rootClass/_className/"author")) isEqualTo "AWAR") or
//			(_className isKindOf ["Binocular",configFile/_rootClass]) or

//			(_className isKindOf ["Pistol_Base_F",configFile/_rootClass]) or
//			(_className isKindOf ["Rifle_Base_F",configFile/_rootClass]) or
//			(_className isKindOf ["Launcher_Base_F",configFile/_rootClass]) or

			(_className isKindOf ["LIB_PISTOL",configFile/_rootClass]) or
			(_className isKindOf ["LIB_SMG",configFile/_rootClass]) or
			(_className isKindOf ["LIB_RIFLE",configFile/_rootClass]) or
			(_className isKindOf ["LIB_LMG",configFile/_rootClass]) or
			(_className isKindOf ["LIB_SRIFLE",configFile/_rootClass]) or
			(_className isKindOf ["LIB_LAUNCHER",configFile/_rootClass])
		) then
		{
			if (getNumber (configFile/_rootClass/_className/"scope") > 0) then
			{
				for "_i" from 1 to _multiplier do
				{
					_weaponClasses pushBack _className;
				};
			};
		};
	};
};

_numberOfWeapons = count _weaponClasses;
_xMax = round (sqrt _numberOfWeapons);

_logicPosition = getPos WW2_logic;
_logicPositionX = _logicPosition select 0;
_logicPositionY = _logicPosition select 1;

_x = 0;
_y = 0;

_spaceBetweenItems = 2;

for "_i" from 0 to (_numberOfWeapons - 1) do
{
	_weaponClassItem = "Weapon_" + (_weaponClasses select _i);
//	diag_log ["_weaponClassItem",_weaponClassItem];
	_weapon = createVehicle [_weaponClassItem,[_logicPositionX + _x * _spaceBetweenItems,_logicPositionY + _y * _spaceBetweenItems,0],[],0,"CAN_COLLIDE"];

	_x = _x + 1;

	if (_x >= _xMax) then
	{
		_x = 0;
		_y = _y + 1;
	};
};

endLoadingScreen;

sleep 1;

_xMax = _xMax/2;

_camHeightDefault = 5;
_distance = 1;
_startPosition = [_logicPositionX + _xMax * _spaceBetweenItems,_logicPositionY - (_xMax * _spaceBetweenItems)/5,_camHeightDefault];
_centerPosition = [_logicPositionX + _xMax * _spaceBetweenItems,_logicPositionY + _xMax * _spaceBetweenItems,0];
//diag_log ["_centerPosition",_centerPosition];
WW2_CamPosition = +_centerPosition;
WW2_CamPosition set [2,_camHeightDefault];
//diag_log ["_centerPosition",_centerPosition];
//diag_log ["WW2_CamPosition",WW2_CamPosition];

_version = format ["%1 1.%2.%3",productVersion select 0, (productVersion select 2) % 100, productVersion select 3];
diag_log ["diag_fps - Weapons - "+ _version];

WW2_Cam = "camera" camCreate [0,0,0];
//WW2_Cam = "camera" camCreate _startPosition;
WW2_Cam cameraEffect ["Internal","back"];
//WW2_Cam cameraEffect ["internal","TOP"];
//WW2_Cam cameraEffect ["fixed","TOP"];
showCinemaBorder false;

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 0;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
diag_log ["_filename",_filename];
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 2;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 3;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 4;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 5;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 6;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 7;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 8;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 9;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 10;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 15;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 20;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = "WW2_FPS_Weapon_IF_" + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

sleep 1;

camDestroy WW2_Cam;

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