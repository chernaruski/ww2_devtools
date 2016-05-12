startLoadingScreen [""];
_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";
[configFile/"CfgMovesBasic"] call _fnc_configParser;
[configFile/"CfgMovesMaleSdr"] call _fnc_configParser;
[configFile/"CfgGesturesMale"] call _fnc_configParser;
endLoadingScreen;

endMission "END1";