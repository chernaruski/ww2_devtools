_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile/"CfgMovesBasic",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"CfgMovesMaleSdr",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"CfgGesturesMale",true,"cfgVehicles"] call _fnc_configParser;

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
