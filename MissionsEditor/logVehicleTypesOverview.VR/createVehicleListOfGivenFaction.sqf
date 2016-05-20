/* ----------------------------------------------------------------------------
Description:
	Enumurates the available vehicles

Params:
	Faction class
	List of all vehicles

Returns:
	List of vehicles for given faction [Array]

Examples:
	(begin example)
		_weaponsArray = [] execVM "createVehicleListOfGivenFaction.sqf";
	(end)

Author:
	(c) kju 2011
---------------------------------------------------------------------------- */
private["_faction","_allVehicles","_return"];

_faction = _this select 0;
_allVehicles = _this select 1;
_return = [];

{
	_vehicleClass = _x;
	_factionOfVehicle = toLower (getText (configFile/"CfgVehicles"/_vehicleClass/"faction"));
	if (_factionOfVehicle == _faction) then
	{
		_return set [count _return,_vehicleClass];
	};
} forEach _allVehicles;

_return;