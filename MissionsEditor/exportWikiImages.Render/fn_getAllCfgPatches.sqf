/* ----------------------------------------------------------------------------
	Function: if_fnc_getAllCfgPatches
	Description:
		Returns all CfgPatches loaded in game. Passed parameters dictate whether or not to exclude vanilla CfgPatches, sort alphabetically
	Parameters:
		_excludeVanilla - Boolean of whether the resulting array should include CfgPatches from vanilla A3 [Boolean, defaults to false]
		_sortAlphabetically - Number dicating if the array should be sorted, 1 for A-Z, -1 for Z-A, 0 for not sorted [Number, defaults to 0]
	Returns:
		_result - Array of strings (CfgPatches)
	Examples:
		
	Author:
		Pennyworth
---------------------------------------------------------------------------- */

params [
	["_excludeVanilla", false, [false]],
	["_sortAlphabetically", 0, [0]]
];

private _configs = [];
if(_excludeVanilla) then {
	private _vanillaMods = ["", "curator", "dlcbundle", "expansion", "heli", "kart", "mark"];
	_configs = "!(configSourceMod _x in _vanillaMods)" configClasses (configFile >> "CfgPatches") apply {configName _x};
} else {
	_configs = "true" configClasses (configFile >> "CfgPatches") apply {configName _x};
};

switch _sortAlphabetically do {
	case -1: {
		_configs sort false;
	};
	case 1: {
		_configs sort true;
	};
};

_configs
