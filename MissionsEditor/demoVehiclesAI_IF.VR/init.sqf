//"inf"
//"vehicles"
//"other"

createCenter west;
createCenter east;
createCenter resistance;
createCenter civilian;

_tempGroup = createGroup civilian;

startLoadingScreen ["WAIT",""];
MyVehicles = ["vehicles"] call compile preprocessFileLineNumbers "createVehicleList.sqf";
endLoadingScreen;

_fnc_addCrew =
{
	_vehicle = _this select 0;
	_unitType = _this select 1;

	_unit = _unitType createVehicle [0,0,0];
	_unit moveInAny _vehicle;
};

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 0;
	_yCoord = 0;

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

		{
			for "_i" from 1 to (_newVehicle emptyPositions _x) do
			{
				[_newVehicle,_crewType] call _fnc_addCrew;
			};
		} forEach ["Commander","Driver","Gunner","Cargo"];

		{
			[_newVehicle,_crewType] call _fnc_addCrew;
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
			_xCoord = 0;
		};
	} forEach MyVehicles;
};

//endLoadingScreen;