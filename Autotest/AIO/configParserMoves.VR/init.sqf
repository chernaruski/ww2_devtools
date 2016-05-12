startLoadingScreen [""];
_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";
[configFile/"CfgMovesBasic",true] call _fnc_configParser;
[configFile/"CfgMovesMaleSdr",true] call _fnc_configParser;
[configFile/"CfgGesturesMale",true] call _fnc_configParser;
endLoadingScreen;

endMission "END1";