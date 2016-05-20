startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile/"CfgWeapons"] call _fnc_configParser;

endLoadingScreen;

endMission "END1";