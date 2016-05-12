startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile] call _fnc_configParser;

endLoadingScreen;

endMission "END1";