//_handle = configFile execVM "dumpConfig.sqf";

_starTick = diag_tickTime;

//[configFile] call compile preprocessFileLineNumbers "dumpConfig.sqf";
[configFile] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
