TEST_IncludedVehicleTypes = [];
TEST_IncludedFactions = ["LIB_LUFTWAFFE_w","LIB_PANZERWAFFE_w","LIB_RKKA_w","LIB_UK_AB_W","LIB_UK_ARMY_W","LIB_US_AIRFORCE_w","LIB_US_ARMY_w","LIB_US_TANK_TROOPS_w","LIB_USSR_AIRFORCE_w","LIB_USSR_TANK_TROOPS_w","LIB_WEHRMACHT_w","SG_STURM_w"];
TEST_IncludeWinterType = true;

startLoadingScreen ["WAIT",""];
MyVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

_fnc_addCrew =
{
	_vehicle = _this select 0;
	_unitType = _this select 1;
	_tempGroup = _this select 2;

//	_unit = _unitType createVehicle [10,10,0];
	_unit = _tempGroup createUnit [_unitType,[10,10,0],[],0,"NONE"];
	_unit moveInAny _vehicle;
};

createCenter west;
createCenter east;
createCenter resistance;
createCenter civilian;

_tempGroup = createGroup civilian;

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 10;
	_yCoord = 10;

	{
		_position = [_xCoord,_yCoord,0];

//		_newVehicle = _tempGroup createUnit [_x,_position,[],0,"CAN_COLLIDE"];
		_newVehicle = createVehicle [_x,_position,[],0,"CAN_COLLIDE"];
//		createVehicleCrew _newVehicle;

/*
		_vehicleArray = [_position,0,_x,_tempGroup] call bis_fnc_spawnvehicle;
		//0: created vehicle (Object), 1: all crew (Array of Objects), 2: vehicle's group (Group)
		_newVehicle = _vehicleArray select 0;
*/

		_crewType = getText (configFile/"CfgVehicles"/_x/"crew");
/*
		_transportSoldier = getNumber (configFile/"CfgVehicles"/_x/"transportSoldier");

		if (_transportSoldier > 0) then
		{
			for "_i" from 0 to _transportSoldier do
			{
				_unit = _tempGroup createUnit [_crewType,[-10,-10,0],[],0,"CAN_COLLIDE"];
//				_tempGroup addVehicle _newVehicle;
				_unit moveInCargo _newVehicle;
			};
		};
*/

		_tempGroup = createGroup civilian;

		{
			for "_i" from 1 to (_newVehicle emptyPositions _x) do
			{
				[_newVehicle,_crewType,_tempGroup] call _fnc_addCrew;
			};
		} forEach ["Commander","Driver","Gunner","Cargo"];

		{
//			[_newVehicle,_crewType,_tempGroup] call _fnc_addCrew;
		} forEach (allTurrets _newVehicle);

//		_newVehicle setPos _position;
//		_newVehicle setVelocity [0,0,0];

		_newVehicle setCaptive true;
		_newVehicle disableAI "TARGET";
		_newVehicle disableAI "AUTOTARGET";
		_newVehicle disableAI "MOVE";
		_newVehicle disableAI "FSM";
		_newVehicle disableAI "CHECKVISIBLE";
		_newVehicle disableAI "COVER";
		_newVehicle disableAI "AUTOCOMBAT";
		_newVehicle disableAI "PATH";

		[_newVehicle] joinSilent _tempGroup;
		[_newVehicle] joinSilent grpNull;

		_xCoord = _xCoord + 20;
		if (_xCoord > 250) then
		{
			_yCoord = _yCoord + 20;
			_xCoord = 10;
		};
	} forEach MyVehicles;
};
endLoadingScreen;
