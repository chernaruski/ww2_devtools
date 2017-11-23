startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile/"CfgWorlds",true,"CfgWorlds"] call _fnc_configParser;

endLoadingScreen;

endMission "END1";
