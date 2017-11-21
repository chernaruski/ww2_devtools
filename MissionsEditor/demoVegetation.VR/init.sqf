TEST_IncludedVehicleTypes = [];
TEST_ExcludedAuthors = [];//["Bohemia Interactive"];

//startLoadingScreen ["WAIT",""];
_func = compile preprocessFileLineNumbers "createVehicleList.sqf";
MyVehicles = [];
{MyVehicles pushBack _x} forEach (["EdSubcat_Bushes"] call _func);
{MyVehicles pushBack _x} forEach (["EdSubcat_Trees"] call _func);
{MyVehicles pushBack _x} forEach (["EdSubcat_Plants"] call _func);

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 10;
	_yCoord = 10;
	{
		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		_xCoord = _xCoord + 10;
		if (_xCoord > 25000) then//250
		{
			_yCoord = _yCoord + 10;
			_xCoord = 10;
		};

		_vehicle allowDamage false;
	} forEach MyVehicles;
};
endLoadingScreen;
