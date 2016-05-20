startLoadingScreen [""];
_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile/"CfgVoice"] call _fnc_configParser;
[configFile/"CfgGlasses"] call _fnc_configParser;
[configFile/"CfgFaces"] call _fnc_configParser;

//[configFile/"CfgVoice",true] call _fnc_configParser;
//[configFile/"CfgGlasses",true] call _fnc_configParser;
//[configFile/"CfgFaces",true] call _fnc_configParser;

//[configFile/"CfgVehicles",false] call _fnc_configParser;
//[configFile/"CfgVehicles"/"All",true] call _fnc_configParser;

endLoadingScreen;

endMission "END1";