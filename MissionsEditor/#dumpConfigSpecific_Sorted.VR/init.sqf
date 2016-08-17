_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

//[configFile/"cfgAmmo",true,"cfgAmmo"] call _fnc_configParser;
//[configFile/"CfgRecoils",true,"CfgRecoils"] call _fnc_configParser;
[configFile/"CfgMagazines",true,"CfgMagazines"] call _fnc_configParser;
//[configFile/"Mode_SemiAuto",true,"Mode_SemiAuto"] call _fnc_configParser;
//[configFile/"Mode_Burst",true,"Mode_Burst"] call _fnc_configParser;
//[configFile/"Mode_FullAuto",true,"Mode_FullAuto"] call _fnc_configParser;
//[configFile/"CfgWeapons",true,"CfgWeapons"] call _fnc_configParser;
//[configFile/"cfgVehicles",true,"cfgVehicles"] call _fnc_configParser;

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
