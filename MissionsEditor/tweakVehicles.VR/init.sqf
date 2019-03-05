//init.sqf
TAG_PathToConfig = "p:\PATH\config.cpp";

//https://community.bistudio.com/wiki/inputAction/actions
TAG_KeyToUpdateVehicle = "reloadMagazine";
TAG_KeyToOpenGarage = "gear";

sleep 1;

/*
gear - Inventory
diary - Diary
tasks - Task Overview
compass - Compass
watch - Watch
nightVision - Night vision
binocular - Binoculars
help - Last help
selectAll - Select all units
*/

///////////////////////////////////////////////////////////////////////////////

player allowDamage false;

TAG_fnc_prepareNewVehicle =
{
	_vehicle = _this select 0;
	_vehiclePosition = _this select 1;
	_turretPosition = _this select 2;

	sleep 0.1;

	_vehicle allowDamage false;

	_positionPlayer = getPos player;

	_vehicle setDir (player getVariable ["TAG_Direction",0]);

	switch (_vehiclePosition) do
	{
		case "driver":		{player moveInDriver _vehicle;};
		case "gunner":		{player moveInGunner _vehicle;};
		case "commander":	{player moveInCommander _vehicle;};
		case "cargo":		{player moveInCargo _vehicle;};
		case "turret":		{player moveInTurret [_vehicle,_turretPosition];};
		default			{player moveInDriver _vehicle;};
	};

	player setDir (player getVariable ["TAG_Direction",0]);

	player action ["engineOn",_vehicle];

	_vehicle setPos _positionPlayer;

//	sleep 0.1;
//	_vehicle setVelocity (player getVariable ["TAG_Velocity",[0,0,0]]);
};

player addAction
[
	"<t color='#FF0000'>Update vehicle</t>",//text
	{
//		_target = _this select 0;
//		_caller = _this select 1;
//		_actionId = _this select 2;
//		_arguments = _this select 3;

		systemChat "MergeConfig";
		diag_mergeConfigFile [TAG_PathToConfig];

		_vehicle = vehicle player;

		if (player == _vehicle) exitWith {};

		_vehiclePosition = "driver";
		_turretPosition = [0];
		_assignedVehicleRole = assignedVehicleRole player;

		if (!(_assignedVehicleRole isEqualTo [])) then
		{
			_vehiclePosition = toLower (_assignedVehicleRole select 0);

			if ((count _assignedVehicleRole) > 1) then
			{
				_turretPosition = _assignedVehicleRole select 1;
			};
		};

		hint "Vehicle updated";

		player setVariable ["TAG_Direction",getDir (vehicle player)];
		player setVariable ["TAG_Velocity",velocity (vehicle player)];

		cutText ["","BLACK OUT",0.001];

		moveOut player;

		_vehicleType = typeOf _vehicle;

		deleteVehicle _vehicle;

		_newVehicle = createVehicle [_vehicleType,position player,[],0,"NONE"];

		[_newVehicle,_vehiclePosition,_turretPosition] spawn TAG_fnc_prepareNewVehicle;

		[] spawn
		{
			sleep 1;

			cutText ["","BLACK IN",0.1];
		};
	},
	[name player],//params
	9999,//action menu priority
	true,//showWindow
	false,//hideOnUse
	TAG_KeyToUpdateVehicle,//shortcut - https://community.bistudio.com/wiki/inputAction/actions
	"true"//condition
];

sleep 0.1;

player addAction
[
	"<t color='#00FF00'>Open Garage</t>",//text
	{
		//Create a position 10 meters infront of the player
		TAG_GaragePreviewPosition = player getPos [10,getDir player];
	
		//Create empty helipad at the position
		_vehicle = createVehicle ["Land_HelipadEmpty_F",TAG_GaragePreviewPosition,[],0,"CAN_COLLIDE"];

		player setVariable ["TAG_Direction",getDir (vehicle player)];
		player setVariable ["TAG_Velocity",velocity (vehicle player)];
	
		//Pass created vehicle to function for use as position
		["Open",[true,_vehicle]] call BIS_fnc_garage;
	},
	[name player],//params
	8888,//action menu priority
	true,//showWindow
	false,//hideOnUse
	TAG_KeyToOpenGarage,//shortcut - https://community.bistudio.com/wiki/inputAction/actions
	"true"//condition
];

//TAG_garageOpened = false;
//TAG_garageClosed = true;

//[missionNamespace,"garageOpened",{TAG_garageOpened = false; TAG_garageClosed = true;}] call BIS_fnc_addScriptedEventHandler;
//[missionNamespace,"garageClosed",{TAG_garageOpened = false; TAG_garageClosed = true;}] call BIS_fnc_addScriptedEventHandler;

[
	missionNamespace,
	"garageOpened",
	{
//		hint "garageOpened";

		_vehicle = vehicle player;

		systemChat "MergeConfig";
		diag_mergeConfigFile [TAG_PathToConfig];

		if (player == _vehicle) exitWith {};

		moveOut player;

		deleteVehicle _vehicle;
	}
] call BIS_fnc_addScriptedEventHandler;

[
	missionNamespace,
	"garageClosed",
	{
//diag_log["garageClosed",_this];

//		_vehicles = TAG_GaragePreviewPosition nearEntities 5;
//		_vehicle = nearestObject [TAG_GaragePreviewPosition,"AllVehicles"];
		_vehicle = BIS_fnc_garage_center;

		if (isNil "_vehicle") exitWith {};
		if (isNull _vehicle) exitWith {};
		if (player == _vehicle) exitWith {};

		[_vehicle,"driver",[0]] spawn TAG_fnc_prepareNewVehicle;
	}
] call BIS_fnc_addScriptedEventHandler;

