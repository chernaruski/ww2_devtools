if_fnc_exportCfgVehicles = compile preprocessFileLineNumbers "fn_exportCfgVehicles.sqf";
if_fnc_exportCfgWeapons = compile preprocessFileLineNumbers "fn_exportCfgWeapons.sqf";
if_fnc_getAllCfgPatches = compile preprocessFileLineNumbers "fn_getAllCfgPatches.sqf";

if_savePath = "E:\SteamLibrary\steamapps\common\Arma 3\if_screenshots\";

player addAction ["Export All CfgVehicles", {
	private _cfgPatches = [true, 1] call if_fnc_getAllCfgPatches;
	["screenshots", [0,1,2,3], _cfgPatches] spawn if_fnc_exportCfgVehicles;
}];

player addAction ["Export All CfgWeapons", {
	private _cfgPatches = [true, 1] call if_fnc_getAllCfgPatches;
	["screenshots", _cfgPatches] spawn if_fnc_exportCfgWeapons;
}];
