_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

/*
//["LIB_Boat_base",true] call _fnc_configParser;
["LIB_Plane_base",true] call _fnc_configParser;
//["LIB_StaticMGWeapon_base",true] call _fnc_configParser;
//["LIB_StaticCannon_base",true] call _fnc_configParser;
//["LIB_StaticCanon_base",true] call _fnc_configParser;
//["LIB_StaticSearchLight_base",true] call _fnc_configParser;
//["LIB_StaticMortar_base",true] call _fnc_configParser;
["LIB_Tank_base",true] call _fnc_configParser;
["LIB_Car_base",true] call _fnc_configParser;
["LIB_Truck_base",true] call _fnc_configParser;
["LIB_WheeledTracked_APC_base",true] call _fnc_configParser;
*/

["Car",true] call _fnc_configParser;
["Tank",true] call _fnc_configParser;
["StaticWeapon",true] call _fnc_configParser;
["Plane",true] call _fnc_configParser;
["Ship",true] call _fnc_configParser;
//["Helicopter",true] call _fnc_configParser;
//["Man",true] call _fnc_configParser;

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
