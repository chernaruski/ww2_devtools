_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

[configFile/"cfgVehicles"/"LIB_kfz1",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Kfz1_MG42",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_Willys_MB",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_opelblitz_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_open_y_camo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_open_g_camo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_tent_y_camo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_fuel",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_ambulance",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_parm",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_opelblitz_ammo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Scout_m3",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Scout_M3_FFV",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_Scout_m3",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_base_unarmed",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_open",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_tent",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_tent_cargo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_open_cargo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_ammo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_us6_bm13",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_GMC_Open",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_GMC_Tent",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_GMC_Ammo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_GMC_Ambulance",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_GMC_Parm",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_GMC_Fuel",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_Willys_MB",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_zis5v_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_zis5v",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_zis5v_med",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_zis6_parm",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_zis5v_fuel",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"Lib_sdkfz251",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SdKfz251_FFV",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"Lib_SdKfz251_captured",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SdKfz_7_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SdKfz_7",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SdKfz_7_AA",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_US_M3_Halftrack",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SOV_M3_Halftrack",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_tank_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_JS2_43",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_M4A3_75",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_M4A3_75_Tubes",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_M4A2_SOV",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwIV_H_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwIV_H",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwV_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwV_no_lods",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwV",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwVI_B_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwVI_B",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwVI_B_camo",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwVI_E_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_PzKpfwVI_E",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_StuG_III_G_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_StuG_III_G",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_StuG_III_G_WS",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_t34_76",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_t34_85",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SU85",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_SearchLight_GER",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_SearchLight_SU",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_MG42_Lafette",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_MG42_Lafette_trench",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_MG42_Lafette_low",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"lib_maxim_m30_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_maxim_m30_trench",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_FW190F8",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Ju87",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_P39",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Pe2",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Li2",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_P47",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_LCVP",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_Zis3_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Zis3",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_61k_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_61k",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Pak40_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Pak40",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Pak40_g",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_FlaK_38_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_FlaK_38",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Flakvierling_38_base",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_Flakvierling_38",true,"cfgVehicles"] call _fnc_configParser;

[configFile/"cfgVehicles"/"LIB_BM37",true,"cfgVehicles"] call _fnc_configParser;
[configFile/"cfgVehicles"/"LIB_GrWr34",true,"cfgVehicles"] call _fnc_configParser;

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
