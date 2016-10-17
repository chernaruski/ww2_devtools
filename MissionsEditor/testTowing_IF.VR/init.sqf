private["_log","_delete","_allowDamage","_enableSimulation"];

player allowDamage false;
player addEventHandler ["HandleDamage",{0}];

if (!isServer) exitWith {};

//startLoadingScreen ["WAIT",""];
_staticWeapon = ["LIB_StaticCannon_base"] call compile preprocessFileLineNumbers "createVehicleList.sqf";
_trucks = ["LIB_Truck_base"] call compile preprocessFileLineNumbers "createVehicleList.sqf";
_wheeled_APCs = ["LIB_Wheeled_APC_base"] call compile preprocessFileLineNumbers "createVehicleList.sqf";
//endLoadingScreen;

_fnc_createVehicles =
{
	private _vehicles = _this select 0;
	private _startPosition = _this select 1;
	private _turnVehicle = _this select 2;

	private["_xCoord","_yCoord"];
	_xCoord = _startPosition select 0;
	_yCoord = _startPosition select 1;
	{
		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];//getMarkerPos "target"
		_vehicle allowDamage false;
		_vehicle addEventHandler ["HandleDamage",{0}];
		if (_turnVehicle) then {_vehicle setDir 180;};

		_xCoord = _xCoord + 20;
		if (_xCoord > 290) then
		{
			_yCoord = _yCoord + 20;
			_xCoord = 0;
		};
	} forEach _vehicles;
};

[_staticWeapon + _staticWeapon + _staticWeapon + _staticWeapon + _staticWeapon,[0,0],true] call _fnc_createVehicles;
[_wheeled_APCs + _trucks,[0,40],false] call _fnc_createVehicles;

endLoadingScreen;