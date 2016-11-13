TEST_IncludedVehicleTypes = ["StaticWeapon"];
TEST_IncludedFactions = [];
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
