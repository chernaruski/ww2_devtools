TEST_IncludedVehicleTypes = [];
TEST_IncludedFactions = ["LIB_ACI","LIB_ARR","LIB_CIV","LIB_DAK","LIB_FFI","LIB_FSJ","LIB_GUER","LIB_LUFTWAFFE","LIB_LUFTWAFFE_w","LIB_MKHL","LIB_NAC","LIB_NKVD","LIB_PANZERWAFFE","LIB_PANZERWAFFE_w","LIB_RAAF","LIB_RAF","LIB_RBAF","LIB_RKKA","LIB_RKKA_w","LIB_UK_AB","LIB_UK_AB_W","LIB_UK_ARMY","LIB_UK_ARMY_W","LIB_UK_DR","LIB_US_101AB","LIB_US_82AB","LIB_US_AIRFORCE","LIB_US_AIRFORCE_w","LIB_US_ARMY","LIB_US_ARMY_w","LIB_US_RANGERS","LIB_US_TANK_TROOPS","LIB_US_TANK_TROOPS_w","LIB_USSR_AIRFORCE","LIB_USSR_AIRFORCE_w","LIB_USSR_TANK_TROOPS","LIB_USSR_TANK_TROOPS_w","LIB_WEHRMACHT","LIB_WEHRMACHT_w","SG_STURM","SG_STURM_w","SG_STURMPANZER"];
TEST_IncludeWinterType = false;

sleep 1;

//startLoadingScreen [""];

TEST_IncludedFactions = TEST_IncludedFactions apply {toLower _x};

//TEST_fn_diagMacrosMapSize = compile preprocessFileLineNumbers "fn_diagMacrosMapSize.sqf";
Test_fn_exportGroupFormations = compile preprocessFileLineNumbers "fn_exportGroupFormations.sqf";

[] call Test_fn_exportGroupFormations;

endLoadingScreen;

endMission "END1";
