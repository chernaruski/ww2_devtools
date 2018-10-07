TEST_IncludedVehicleTypes = ["LIB_Boat_base"];
TEST_IncludedFactions = ["LIB_RKKA","LIB_NKVD","LIB_USSR_TANK_TROOPS","LIB_USSR_AIRFORCE","LIB_WEHRMACHT","LIB_PANZERWAFFE","LIB_LUFTWAFFE","LIB_FSJ","SG_STURMPANZER","SG_STURM","LIB_GUER","LIB_US_ARMY","LIB_US_TANK_TROOPS","LIB_US_AIRFORCE","LIB_US_101AB","LIB_US_82AB","LIB_DAK","LIB_NAC","LIB_US_RANGERS","LIB_UK_ARMY","LIB_CIV","LIB_FFI","LIB_MKHL","LIB_ARR","LIB_RBAF","LIB_RAF","LIB_RAAF","LIB_ACI","LIB_RKKA_w","LIB_USSR_TANK_TROOPS_w","LIB_USSR_AIRFORCE_w","LIB_WEHRMACHT_w","LIB_PANZERWAFFE_w","LIB_LUFTWAFFE_w","LIB_US_ARMY_w","LIB_US_TANK_TROOPS_w","LIB_US_AIRFORCE_w","SG_STURM_w"];
TEST_IncludeWinterType = false;

startLoadingScreen ["WAIT",""];
MyVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 10;
	_yCoord = 10;
	{
		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		_xCoord = _xCoord + 10;
		if (_xCoord > 250) then
		{
			_yCoord = _yCoord + 10;
			_xCoord = 10;
		};

		_vehicle allowDamage false;
	} forEach MyVehicles;
};
endLoadingScreen;
