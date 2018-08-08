_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile/"RadioProtocolENG",true] call _fnc_configParser;
[configFile/"RadioProtocol_SU",true] call _fnc_configParser;
[configFile/"RadioProtocol_GER",true] call _fnc_configParser;

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
