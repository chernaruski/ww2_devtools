_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

_myInitString = format ["A3_GUI_Sorted_Inherited.cpp"];
"ConfigDumpFileIO" callExtension ("open:" + _myInitString);

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

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
