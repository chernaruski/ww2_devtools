_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["ALPHA","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createEditorObjects.sqf';",""];
(1) setRadioMsg "Create all objects";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","{_x setDamage 1;} forEach BIS_EditorItems",""];
(2) setRadioMsg "Destroy all objects";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["CHARLIE","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createClassOverview.sqf';",""];
(3) setRadioMsg "Generate class overview";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["DELTA","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createObjectList.sqf';",""];
(4) setRadioMsg "Generate object list";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["ECHO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createMapSizeOverview.sqf';",""];
(5) setRadioMsg "Generate mapSize overview";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["FOXTROT","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createDestructionTypeOverview.sqf';",""];
(6) setRadioMsg "Generate destrType overview";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["GOLF","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createArmorOverview.sqf';",""];
(7) setRadioMsg "Generate armor overview";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["HOTEL","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[] execVM 'createAccuracyOverview.sqf';",""];
(8) setRadioMsg "Generate accuracy overview";

BIS_EditorItems = [];

BIS_PositionSourceX = 500;
BIS_PositionSourceY = 500;
BIS_ObjectDistance = 25;

player setPos [BIS_PositionSourceX - BIS_ObjectDistance,BIS_PositionSourceY - BIS_ObjectDistance,0];
player allowDamage false;

BIS_PlayerVehicle = createVehicle ["B_Slammer_M2A4",[BIS_PositionSourceX - 2 * BIS_ObjectDistance,BIS_PositionSourceY - 2 * BIS_ObjectDistance,0],[],0,"NONE"];
BIS_PlayerVehicle allowDamage false;

setAccTime 4;

BIS_ItemsToCreate = ["Land_A_Castle_Bastion","Land_A_Castle_Bastion_ruins","Land_A_Castle_Bergfrit","Land_A_Castle_Bergfrit_ruins","Land_A_Castle_Donjon","Land_A_Castle_Donjon_ruins","Land_A_Castle_Gate","Land_A_Castle_Gate_ruins","Land_A_Castle_Stairs_A","Land_A_Castle_Stairs_A_ruins","Land_A_Castle_Wall1_20","Land_A_Castle_Wall1_20_ruins","Land_A_Castle_Wall1_20_Turn","Land_A_Castle_Wall1_20_turn_ruins","Land_A_Castle_Wall1_Corner","Land_A_Castle_Wall1_Corner_2","Land_A_Castle_Wall1_Corner_2_ruins","Land_A_Castle_Wall1_Corner_ruins","Land_A_Castle_Wall1_End","Land_A_Castle_Wall1_End_2","Land_A_Castle_Wall1_End_2_ruins","Land_A_Castle_Wall1_End_ruins","Land_A_Castle_Wall2_30","Land_A_Castle_Wall2_30_ruins","Land_A_Castle_Wall2_Corner","Land_A_Castle_Wall2_Corner_2","Land_A_Castle_Wall2_Corner_2_ruins","Land_A_Castle_Wall2_Corner_ruins","Land_A_Castle_Wall2_End","Land_A_Castle_Wall2_End_2","Land_A_Castle_Wall2_End_2_ruins","Land_A_Castle_Wall2_End_ruins","Land_A_Castle_WallS_10","Land_A_Castle_WallS_10_ruins","Land_A_Castle_WallS_5_D","Land_A_Castle_WallS_5_D_ruins","Land_A_Castle_WallS_End","Land_A_Castle_WallS_End_ruins","Land_Barn_W_01","Land_Barn_W_02_ruins","land_barrier_p1","land_bench","land_blockhouse","Land_Bouda1","Land_Bouda2_vnitrek","Land_Bouda3","Land_Brana02nodoor","Land_Church_05R","Land_Church_tomb_1","Land_Church_tomb_2","Land_Church_tomb_3","Land_Deutshe","Land_Dulni_bs","Land_Dum01","land_element_c","Land_Farm_Cowshed_a","Land_Farm_Cowshed_b","Land_Farm_Cowshed_c","Land_Gate_IndVar2_5","Land_Gate_Wood1_5","Land_Gate_wood2_5","land_haystack","land_haystack_low","land_Hemmbalken_1","Land_HouseV2_03B_dam","Land_Ind_SawMillPen","Land_Ind_Shed_01_end","Land_Ind_TankSmall","Land_Ind_Timbers","land_klumba","Land_Kulna","land_lib_admin","land_lib_admin2","land_lib_apteka","land_lib_banya","land_lib_banya_destroyed","land_lib_banya_ruins","Land_lib_budova2_ruins","land_lib_bunker_gun_l","land_lib_bunker_gun_r","land_lib_bunker_mg","Land_LIB_CamoNet_Tank","land_lib_central_3e_1","land_lib_chik_house","land_lib_chik_house_ruins","land_lib_chik_house2","land_lib_chik_house2_ruins","land_lib_church","land_lib_city_house_2e_lone","land_lib_city_house_2e_lone_2","land_lib_city_house_2e_lone_2_ruins","land_lib_city_house_2e_lone_3","land_lib_city_house_2e_lone_3_ruins","land_lib_city_house_2e_lone_damaged","land_lib_city_house_2e_shops","land_lib_city_house_2e_shops_damaged","land_lib_city_house_2e_shops_destroyed","land_lib_city_house_2e_shops_ruins","land_lib_city_house_2floor","land_lib_city_shop_1e","land_lib_city_shop_1e_2","land_lib_city_shop_1e_2_damage","land_lib_city_shop_1e_2_detroyed","land_lib_city_shop_1e_2_ruins","land_lib_city_shop_1e_damaged","land_lib_city_shop_1e_destroyed","land_lib_city_shop_1e_ruins","land_lib_corner_house_1","land_lib_corner_house_1_damaged","land_lib_corner_house_1b","land_lib_corner_house_1c","land_lib_corner_house_2e_2","land_lib_corner_house_2e_2_damaged","land_lib_corner_house_2e_3","land_lib_corner_house_2e_4","land_lib_corner_house_2e_5","land_lib_corner_house_2e_5_damaged","land_lib_corner_house_2e_5_destroyed","land_lib_corner_house_2e_5_ruins","land_lib_corner_house_3","land_lib_countryside_house_1","land_lib_countryside_house_1_damaged","land_lib_countryside_house_1_destroyed","land_lib_countryside_house_1_ruins","land_lib_countryside_house_2","land_lib_countryside_house_2_damaged","land_lib_countryside_house_2_destroyed","land_lib_countryside_house_2_ruins","land_lib_cr_mid","land_lib_dlc1_apteka","land_lib_dlc1_apteka_damaged","land_lib_dlc1_apteka_destroyed","land_lib_dlc1_apteka_ruins","land_lib_dlc1_city_house_2e_lone_3","land_lib_dlc1_city_house_2e_lone_3_damaged","land_lib_dlc1_city_house_2e_lone_3_destroyed","land_lib_dlc1_city_house_2e_lone_3_ruins","land_lib_dlc1_corner_house_2e_5","land_lib_dlc1_corner_house_2e_5_damaged","land_lib_dlc1_corner_house_2e_5_destroyed","land_lib_dlc1_corner_house_3","land_lib_dlc1_corner_house_3_damaged","land_lib_dlc1_house_1floor_pol","land_lib_dlc1_house_1floor_pol_damaged","land_lib_dlc1_house_1floor_pol_ruins","land_lib_dlc1_house_2e_arc1","land_lib_dlc1_house_2e_arc1_damaged","land_lib_dlc1_house_2e_arc1_destroyed","land_lib_dlc1_kirpich_1floor","land_lib_dlc1_kirpich_1floor_damaged","land_lib_dlc1_kirpich_1floor_ruins","land_lib_dom_pl_avrg","land_lib_dom_pl_avrg_destroyed","land_lib_dom_pl_big","land_lib_dom_pl_big_damage","land_lib_dom_pl_big_destroyed","land_lib_dom_pl_big_ruins","land_lib_dom_pl_big2","land_lib_dom_pl_big2_damage","land_lib_dom_pl_big2_destroyed","land_lib_dom_pl_big2_ruins","land_lib_dom_pl_sml","land_lib_dom_pl_sml_damage","land_lib_dom_pl_sml_destroyed","land_lib_dom_pl_sml_ruins","land_lib_dom_pol","land_lib_dom_pol_damage","land_lib_dom_pol_destroyed","land_lib_dom_pol_ruins","land_lib_dom_pol2","land_lib_dom_pol2_destroyed","land_lib_enter1","land_lib_enter2","land_lib_french_stone_house","land_lib_french_stone_house2","land_lib_gryada","land_lib_hata_1","land_lib_hata_1_dam","land_lib_hata_1_Ruins","land_lib_hata_2","land_lib_hata_2_dam","land_lib_hata_2_Ruins","land_lib_house_1floor_pol","land_lib_house_2e_1","land_lib_house_2e_1_damaged","land_lib_house_2e_1_destroyed","land_lib_house_2e_1_ruins","land_lib_house_2e_arc1","land_lib_house_2e_arc2","land_lib_house_city1e_1","land_lib_house_city1e_1_damaged","land_lib_house_city1e_1_destroyed","land_lib_house_city1e_1_ruins","land_lib_house_city1e_2","land_lib_house_city1e_2_damaged","land_lib_house_city1e_2_destroyed","land_lib_house_city1e_2_ruins","land_lib_house_small_1","land_lib_HQ","land_lib_kirpich_1floor","land_lib_Kladovka_1","land_lib_Kladovka2","land_lib_Kladovka2_ruins","land_lib_kolonka","land_lib_kostel_1","land_lib_kostel_2","land_lib_market1","land_lib_market2","land_lib_market3","Land_lib_Mil_Barracks","Land_lib_Mil_Barracks_L","land_lib_Plot_Ohrada","land_lib_Plot_Ohrada_Pruchozi","land_lib_Plot_Ohrada_Zlomena","land_lib_posed","land_lib_psi_bouda","land_lib_ratusha","land_lib_sarai_big","land_lib_sarai_big_dam","land_Lib_sarai_big_destroyed","land_lib_sarai_big_ruins","land_lib_sarai_mid","land_lib_sarai_mid_ruins","land_lib_Shed_M01","Land_lib_Shed_M01_ruins","land_lib_Shed_W01","Land_lib_Shed_W01_ruins","land_lib_Shed_W02","Land_lib_Shed_W02_ruins","land_lib_Shed_W03","Land_lib_Shed_W03_ruins","land_lib_Shed_W4","land_lib_synagogue","land_lib_town_house_1","land_lib_well","land_lib_windmill","land_lib_zed_civil","land_lib_zed_civil_down","land_lib_zed_dira_civi","Land_Misc_deerstand","Land_Misc_Scaffolding","Land_Nav_Boathouse_PierL","Land_Nav_Boathouse_PierT","Land_Plot_zboreny","Land_R_Barn_W_01","land_Rommelspargel_1","land_rus_plash_palatka","Land_Sara_domek_kovarna","Land_Sara_domek_ruina","Land_Sara_stodola","Land_Sara_stodola3","Land_setka_dor","Land_setka_tank","Land_setka_vert","Land_Statek_brana","Land_Statek_brana_open","Land_Statek_hl_bud","Land_Statek_kulna","Land_Stodola_old_open","Land_Stodola_open","land_Tetra","land_toilet","land_wagon","land_wagon_dam","land_wagon_dam2","Land_Wall_CBrk_5_D","Land_Wall_CGry_5_D","Land_Wall_Gate_Wood1","Land_ZalChata","land_zamok","land_Zeltbahn","land_zidka_branka","land_zidka03","Park_bench1","Park_bench2","Pile_of_wood","Grave","Haystack","land_krater","land_krater_sand","land_krater2","land_krater2_city","Land_Lampa_ind","Land_Lib_R2_Boulder1","Land_Lib_R2_Boulder2","land_lib_Wall_Wood2_5","land_lib_Wall_WoodVil_4_2","land_lib_wire_2","land_lib_wire_3","land_lib_wire_bruno","land_misc_woodpile","land_sign1","land_sign10","land_sign11","land_sign12","land_sign2","land_sign21","land_sign22","land_sign23","land_sign24","land_sign25","land_sign26","land_sign27","land_sign28","land_sign37","land_sign38","land_sign39","land_sign40","land_sign41","land_sign42","land_sign5","land_sign50","land_sign9","land_wicker_fence_short"];

BIS_EditorObjectsFromSheet = [];
