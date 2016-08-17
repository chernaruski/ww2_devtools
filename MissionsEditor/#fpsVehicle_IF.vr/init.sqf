setViewDistance 1500;
setTerrainGrid 25;

_doScreenshots = false;

//sleep 1;

///////////////////////////////////////////////////////////////////////////////
//
// how many times each weapon should be put on the floor
//_multiplier = 500;//50-100
//_vehicles = ["LIB_M4A3_75"];//LIB_M4A3_75	LIB_StuG_III_G	LIB_SdKfz251	LIB_US_M3_Halftrack	LIB_US_Scout_M3
//_spaceBetweenItems = 10;
_multiplier = 25;//25-50
_vehicles = ["LIB_FW190F8","LIB_Ju87","LIB_P39","LIB_Pe2","LIB_Li2"];
_spaceBetweenItems = 30;
//
// should screenshots get taken
//_doScreenshots = true;
///////////////////////////////////////////////////////////////////////////////

startLoadingScreen [""];

_vehicleClasses = [];
_vehicleClassesUnique = [];
{
	for "_i" from 1 to _multiplier do
	{
		_vehicleClasses pushBack _x;
		_vehicleClassesUnique pushBackUnique _x;
	};
} forEach _vehicles;

_numberOfVehicles = _multiplier * (count _vehicles);
_xMax = round (sqrt _numberOfVehicles);

_logicPosition = getPos WW2_logic;
_logicPositionX = _logicPosition select 0;
_logicPositionY = _logicPosition select 1;

_x = 0;
_y = 0;

for "_i" from 0 to (_numberOfVehicles - 1) do
{
	_vehicleClass = _vehicleClasses select _i;
//	diag_log ["_vehicleClass",_vehicleClass];
	_unit = createVehicle [_vehicleClass,[_logicPositionX + _x * _spaceBetweenItems,_logicPositionY + _y * _spaceBetweenItems,0],[],0,"CAN_COLLIDE"];
	_unit setDir 180;

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
WW2_CamPosition = +_centerPosition;
WW2_CamPosition set [2,_camHeightDefault];

_version = format ["%1 1.%2.%3",productVersion select 0, (productVersion select 2) % 100, productVersion select 3];
_message = "diag_fps - Vehicle - "+ _version;
_message = _message + " " + "_multiplier: "+ str _multiplier;
_message = _message + " " + "_spaceBetweenItems: "+ str _spaceBetweenItems;
{
	_message = _message + " " + _x;
} forEach _vehicleClassesUnique;
diag_log _message;

_filenameType = "WW2_FPS_Vehicles_IF_";

WW2_Cam = "camera" camCreate [0,0,0];
WW2_Cam cameraEffect ["Internal","back"];
showCinemaBorder false;

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 0;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = _filenameType + format ["%1",_distance] + ".png";
//diag_log ["_filename",_filename];
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
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
_filename = _filenameType + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 30;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = _filenameType + format ["%1",_distance] + ".png";
if (_doScreenshots) then {screenshot _filename;};

//_centerPosition
_distance = 50;
_startPosition set [2,_distance * _camHeightDefault];

WW2_Cam camPrepareTarget _centerPosition;
WW2_Cam camPreparePos _startPosition;
WW2_Cam camPrepareFov 0.7;
WW2_Cam camCommitPrepared 5;
sleep 3;
waitUntil {camCommitted WW2_Cam};

diag_log diag_fps;
_filename = _filenameType + format ["%1",_distance] + ".png";
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