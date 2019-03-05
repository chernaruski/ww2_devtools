TEST_IncludedVehicleTypes = ["LIB_Tank_base"];
TEST_IncludedFactions = ["LIB_RKKA","LIB_NKVD","LIB_USSR_TANK_TROOPS","LIB_USSR_AIRFORCE","LIB_WEHRMACHT","LIB_PANZERWAFFE","LIB_LUFTWAFFE","LIB_FSJ","SG_STURMPANZER","SG_STURM","LIB_GUER","LIB_US_ARMY","LIB_US_TANK_TROOPS","LIB_US_AIRFORCE","LIB_US_101AB","LIB_US_82AB","LIB_DAK","LIB_NAC","LIB_US_RANGERS","LIB_UK_ARMY","LIB_CIV","LIB_FFI","LIB_MKHL","LIB_ARR","LIB_RBAF","LIB_RAF","LIB_RAAF","LIB_ACI","LIB_RKKA_w","LIB_USSR_TANK_TROOPS_w","LIB_USSR_AIRFORCE_w","LIB_WEHRMACHT_w","LIB_PANZERWAFFE_w","LIB_LUFTWAFFE_w","LIB_US_ARMY_w","LIB_US_TANK_TROOPS_w","LIB_US_AIRFORCE_w","SG_STURM_w"];
TEST_IncludeWinterType = false;

startLoadingScreen ["WAIT",""];
MyVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";
endLoadingScreen;

_vehicles = [];
_speedModes = ["slow","normal","fast"];

_stats = [];

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 10;
	_yCoord = 10;

	_i = 0;

	{
		_vehicleType = _x;

		{
			_speedMode = _x;

			_vehicle = createVehicle [_vehicleType,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];
			_vehicles pushBack _vehicle;

			createVehicleCrew _vehicle;

			{_x setCaptive true;} forEach (crew _vehicle);

			_driver = driver _vehicle;

	//		(group _driver) setSpeedMode "LIMITED";
	//		(group _driver) setSpeedMode "NORMAL";
	//		(group _driver) setSpeedMode "FULL";

			_maxSpeed = getNumber (configFile >> "CfgVehicles" >> _vehicleType >> "maxSpeed");
			_normalSpeedForwardCoef = getNumber (configFile >> "CfgVehicles" >> _vehicleType >> "normalSpeedForwardCoef");
			_slowSpeedForwardCoef = getNumber (configFile >> "CfgVehicles" >> _vehicleType >> "slowSpeedForwardCoef");

			_factor = switch (_speedMode) do
			{
				case "slow":	{(_slowSpeedForwardCoef * _maxSpeed)};
				case "normal":	{(_normalSpeedForwardCoef * _maxSpeed)};
				case "fast":	{(1 * _maxSpeed)};
				default 	{0};
			};

			_driver forceSpeed _factor;
			_vehicle forceSpeed _factor;

			_text = _vehicleType + "	" + _speedMode + "	" + str _factor;
			_stats pushBack _text;

			_name = format ["destination%1",_i];
			_destination = createMarker [_name,[_xCoord,1000]];
			_driver doMove (getMarkerPos _name);

			_driver forceSpeed _factor;
			_vehicle forceSpeed _factor;

			_xCoord = _xCoord + 1000;
			_i = _i + 1;

			_vehicle allowDamage false;
		} forEach _speedModes;
	} forEach MyVehicles;
};

sleep 1;

//{
//	_vehicle = _x;
//
//	_mod = (3 + _forEachIndex) mod 3;
//
//	_speedMode = _speedModes select _mod;
//	_text = (typeOf _vehicle) + "	" + _speedMode;
//	_stats pushBack _text;
//} forEach _vehicles;

//{
//	diag_log _x;
//} forEach _stats;

while {true} do
{
	{
		_vehicle = _x;

		_data = _stats select _forEachIndex;

		_speed = str (speed _vehicle);
		_data = _data + "	" + _speed;

		_stats set [_forEachIndex,_data];

	} forEach _vehicles;

	sleep 1;

	if (time > 60) exitWith {};
};

{
	diag_log _x;
} forEach _stats;

endMission "1";