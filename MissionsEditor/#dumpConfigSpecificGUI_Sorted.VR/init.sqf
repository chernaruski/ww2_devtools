_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

"mb_fileio" callExtension format ["open_w|A3_GUI_Sorted_Inherited.cpp"];

//[configFile/"CfgMovesBasic",true] call _fnc_configParser;

[configFile/"RscMapControl",true] call _fnc_configParser;
[configFile/"RscMiniMap",true] call _fnc_configParser;
[configFile/"RscObjectives",true] call _fnc_configParser;
[configFile/"RscInGameUI",true] call _fnc_configParser;
[configFile/"cfgGroupIcons",true] call _fnc_configParser;
[configFile/"CfgMarkers",true] call _fnc_configParser;
[configFile/"CfgMarkerColors",true] call _fnc_configParser;
[configFile/"CfgMarkerBrushes",true] call _fnc_configParser;
[configFile/"CfgLocationTypes",true] call _fnc_configParser;
[configFile/"RscCompass",true] call _fnc_configParser;
[configFile/"RscWatch",true] call _fnc_configParser;
[configFile/"RscDisplayMainMap",true] call _fnc_configParser;

"mb_fileio" callExtension "close";

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
