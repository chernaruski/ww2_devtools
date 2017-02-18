_starTick = diag_tickTime;

[configFile/"cfgWeapons"/"LIB_SMG",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_RIFLE",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_LMG",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_PISTOL",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";

[configFile/"cfgWeapons"/"LIB_Colt_M1911",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_DP28",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_DT",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_G43",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_K98",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_K98ZF39",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1_Carbine",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1_Garand",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1895",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1903A4_Springfield",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1918A2_BAR",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1A1_Bazooka",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M1A1_Thompson",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M9130",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_M9130PU",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"lib_maxim_m30",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_MG42",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_MLMG42",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_MP40",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_MP44",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_P38",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_PPSh41_m",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_RPzB",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_SVT_40",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
[configFile/"cfgWeapons"/"LIB_TT33",true,"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
