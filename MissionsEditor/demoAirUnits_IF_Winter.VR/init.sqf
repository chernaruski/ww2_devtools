TEST_IncludedVehicleTypes = ["LIB_Plane_base"];
TEST_IncludedFactions = ["LIB_LUFTWAFFE_w","LIB_PANZERWAFFE_w","LIB_RKKA_w","LIB_UK_AB_W","LIB_UK_ARMY_W","LIB_US_AIRFORCE_w","LIB_US_ARMY_w","LIB_US_TANK_TROOPS_w","LIB_USSR_AIRFORCE_w","LIB_USSR_TANK_TROOPS_w","LIB_WEHRMACHT_w","SG_STURM_w"];
TEST_IncludeWinterType = true;

startLoadingScreen ["WAIT",""];
MyVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 10;
	_yCoord = 10;
	{
		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		_xCoord = _xCoord + 40;
//		if (_xCoord > 250) then
//		{
//			_yCoord = _yCoord + 40;
//			_xCoord = 10;
//		};

		_vehicle allowDamage false;
	} forEach MyVehicles;
};
endLoadingScreen;
