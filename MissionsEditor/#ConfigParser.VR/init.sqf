startLoadingScreen [""];

_a = diag_ticktime;
[configFile, false] call compile preprocessFileLineNumbers "ConfigParser.sqf";
_b = diag_ticktime;

endLoadingScreen;

diag_log str(_b - _a);

endMission "END1";