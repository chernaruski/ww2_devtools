player allowDamage false;
player addEventHandler ["HandleDamage",{0}];

if (!isServer) exitWith {};

TEST_IncludedVehicleTypes = ["LIB_StaticCannon_base"];
TEST_IncludedFactions = [];
TEST_IncludeWinterType = false;

startLoadingScreen ["WAIT",""];
_staticWeapon = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

TEST_IncludedVehicleTypes = ["LIB_Truck_base","LIB_Wheeled_APC_base"];
_trucks = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";
_wheeled_APCs = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

_fnc_createVehicles =
{
	private _vehicles = _this select 0;
	private _startPosition = _this select 1;
	private _turnVehicle = _this select 2;

	private["_xCoord","_yCoord"];
	_xCoord = _startPosition select 0;
	_yCoord = _startPosition select 1;
	{
		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		_xCoord = _xCoord + 20;
		if (_xCoord > 290) then
		{
			_yCoord = _yCoord + 20;
			_xCoord = _startPosition select 0;
		};

		_vehicle allowDamage false;
		_vehicle addEventHandler ["HandleDamage",{0}];
		if (_turnVehicle) then {_vehicle setDir 180;};
	} forEach _vehicles;
};

[_staticWeapon + _staticWeapon + _staticWeapon + _staticWeapon + _staticWeapon,[10,10],true] call _fnc_createVehicles;
[_wheeled_APCs + _trucks,[10,40],false] call _fnc_createVehicles;

endLoadingScreen;
