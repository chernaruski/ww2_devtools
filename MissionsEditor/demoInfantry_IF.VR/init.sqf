TEST_IncludedVehicleTypes = ["LIB_sov_Soldier_base","LIB_GER_Soldier_base","LIB_US_Soldier_base"];
TEST_IncludedFactions = ["LIB_RKKA","LIB_NKVD","LIB_USSR_TANK_TROOPS","LIB_USSR_AIRFORCE","LIB_WEHRMACHT","LIB_PANZERWAFFE","LIB_LUFTWAFFE","SG_STURMPANZER","SG_STURM","LIB_GUER","LIB_US_ARMY","LIB_US_TANK_TROOPS","LIB_US_AIRFORCE","LIB_MKHL","LIB_ARR","LIB_RBAF","LIB_RAF","LIB_RAAF","LIB_ACI"];
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

		_xCoord = _xCoord + 5;
		if (_xCoord > 100) then
		{
			_yCoord = _yCoord + 5;
			_xCoord = 10;
		};

		_vehicle allowDamage false;
	} forEach MyVehicles;
};
endLoadingScreen;
