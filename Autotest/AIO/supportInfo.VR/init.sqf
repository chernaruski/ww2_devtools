startLoadingScreen [""];

cba_fnc_debug = compile preprocessFileLineNumbers "fnc_debug.sqf";
CBA_fnc_formatElapsedTime = compile preprocessFileLineNumbers "fnc_formatElapsedTime.sqf";
CBA_fnc_formatNumber = compile preprocessFileLineNumbers "fnc_formatNumber.sqf";
CBA_fnc_defaultParam = compile preprocessFileLineNumbers "fnc_defaultParam.sqf";

[supportInfo ''] call cba_fnc_debug;

endMission "END1";

endLoadingScreen;