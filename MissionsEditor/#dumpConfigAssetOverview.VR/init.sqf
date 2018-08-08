_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_aiocfg_mbfileio = compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//_tag = "CSA";
//_tag = "FOW";
//_tag = "LEN";
//_tag = "GEIST";
_tag = "LIB";

[configFile/"CfgFactionClasses",false,_tag] call _fnc_aiocfg_mbfileio;
[configFile/"CfgMagazines",false,_tag] call _fnc_aiocfg_mbfileio;
[configFile/"CfgWeapons",false,_tag] call _fnc_aiocfg_mbfileio;
[configFile/"CfgVehicles",false,_tag] call _fnc_aiocfg_mbfileio;
[configFile/"cfgPatches",false,_tag] call _fnc_aiocfg_mbfileio;

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
