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

BIS_PlayerVehicle = createVehicle ["B_MBT_01_cannon_F",[BIS_PositionSourceX - 2 * BIS_ObjectDistance,BIS_PositionSourceY - 2 * BIS_ObjectDistance,0],[],0,"NONE"];
BIS_PlayerVehicle allowDamage false;

setAccTime 4;

BIS_ItemsToCreate = [];

//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","t_broussonetiap1s_f","t_ficusb1s_f","t_ficusb2s_f","t_fraxinusav2s_f","t_oleae1s_f","t_oleae2s_f","t_phoenixc1s_f","t_phoenixc3s_f","t_pinusp3s_f","t_pinuss1s_f","t_pinuss2s_b_f","t_pinuss2s_f","t_poplar2f_dead_f","t_populusn3s_f","t_quercusir2s_f","grave_forest_f","trench_01_forest_f","t_cupressus_stricta_2s_f","t_cupressus_stricta_3s_f","t_ficus_3d_f","t_phoenixrupicola1s_f","t_phoenixrupicola3s_f","t_banana_f","t_banana_slim_f","t_banana_wild_f","t_cacao_ripe_f","d_lianatangle_narrow_f","d_lianatangle_wide_f","t_agathis_tall_f","t_agathis_wide_f","t_albizia_f","t_cocosnucifera2s_small_f","t_cocosnucifera3s_bend_f","t_cocosnucifera3s_tall_f","t_cocos_small_f","t_cocos_tall_f","t_cyathea_f","t_ficus_big_f","t_ficus_medium_f","t_ficus_small_f","t_inocarpus_f","t_leucaena_f","t_millettia_f","t_millettia_plantation_f","t_palaquium_f","t_pritchardia_f","t_rhizophora_f"];
//(bw_setbig_brains_f|bw_setbig_corals_f|bw_setbig_tubeg_f|bw_setbig_tubey_f|bw_setsmall_brains_f|bw_setsmall_tubeg_f|bw_setsmall_tubey_f|b_arundod2s_f|b_arundod3s_f|b_ficusc1s_f|b_ficusc2d_f|b_ficusc2s_f|b_neriumo2d_f|b_neriumo2s_f|b_neriumo2s_white_f|b_thistle_thorn_green|b_opuntiaficusindica3s_f|b_vitis_vinifera_f|b_ginger_20_f|b_ginger_3_f|b_ginger_9_f|b_sugarcane_mature_row_f|b_sugarcane_sapling_row_f|b_sugarcane_sapling_single_f|b_calochlaena_f|b_cestrum_f|b_colored_red_f|b_colored_yellow_f|b_cycas_f|b_ficusc2d_tanoa_f|b_gardenia_dec_01_f|b_gardenia_dec_02_f|b_gardenia_f|b_leucaena_f|b_neriumo2d_tanoa_f|b_pipermeth_f|b_rhizophora_f)
//(c_bigfallenbranches_pine|c_bigfallenbranches_pine02|c_bigfallenbranches_pine03|c_branchbig|c_carduus|c_coral1|c_coral2|c_coral3|c_coral4|c_coral5|c_corals_set_t|c_coral_brain|c_coral_brain_flat1|c_coral_brain_flat2|c_coral_brain_flat3|c_coral_brain_flat4|c_coral_brain_flat_set1|c_coral_brain_white|c_coral_plant1|c_coral_plant2|c_coral_plant_set1|c_coral_sps_pink_set|c_coral_sps_pink_single|c_crack_clutter1|c_crack_clutter2|c_crack_clutter3|c_crack_clutter4|c_flower_brushmedium_blue|c_flower_brushmedium_white|c_flower_cakile|c_flower_low_yellow1|c_flower_low_yellow2|c_flower_medium_white1|c_flower_medium_white2|c_flower_tansy|c_grasscrooked|c_grassdead_tuft_stony|c_grassdesert_grouphard|c_grassgreen_grouphard|c_grassgreen_groupsoft|c_grasslong_drybunch|c_grasstall|c_grass_brushhigh_dry|c_grass_brushhigh_green|c_grass_brushlow_sharp|c_grass_bunch_small|c_grass_dry|c_grass_green|c_grass_tall_dead|c_grass_tuftdry|c_plant_chicory|c_plant_dock|c_plant_greenbunch|c_plant_green_small|c_plant_mullein|c_rubble_clutter1|c_rubble_clutter2|c_rubble_clutter3|c_rubble_clutter4|c_rubble_clutter5|c_rubble_clutter6|c_seadollar1|c_seadollar2|c_seadollar3|c_seadollar4|c_seadollars_set1|c_seaweed1|c_seaweed2|c_sharpstones_erosion|c_sharpstones_erosion_v2|c_spong_tube_green1|c_spong_tube_green2|c_spong_tube_green3|c_spong_tube_green4|c_spong_tube_yellow1|c_spong_tube_yellow2|c_spong_tube_yellow3|c_spong_tube_yellow4|c_starfish1|c_starfish2|c_strflowerwhitesmall|c_strgrassdry|c_strgrassdrymedium_group|c_strgrassdry_group|c_strgrassgreen_group|c_strplantgermader_group|c_strplantgreenshrub|c_strplantgreensmall|c_strplantmullein|c_strthistlepurple_small|c_strthistlesmallyellow|c_strthistleyellowshrub|c_strthorngray|c_strthorngreen|c_strthornkhaki|c_strweedbrowntall_group|c_strweedgreentall|c_thistle_high|c_thistle_high_dead|c_thistle_medium|c_thistle_small|c_thistle_small_greenyellow|c_thistle_small_yellow|c_thistle_thorn_brown|c_thistle_thorn_desert|c_thistle_thorn_gray|c_thistle_thorn_green|c_urchin_black|c_urchin_black_grp|c_urchin_brown|c_urchin_brown_grp|c_urchin_red|c_urchin_red_grp|c_grass_tall_dead_inhouse|c_rock_stones|c_forest_biglleaves|c_forest_biglleaves2|c_forest_fern|c_forest_roots|c_forest_violet_leaves|c_forest_violet_leaves2|c_forest_violet_single|c_grassbunch_hi|c_grassbunch_lo|c_grass_leaf_big|c_grass_leaves_coltsfoot|c_grass_mimosa|c_grass_nettle|c_grass_short_bunch|c_grass_short_leaf|c_grass_short_mimosa|c_grass_short_nettle|c_grass_short_small|c_grass_tropic|c_red_dirt_large_stones|c_red_dirt_leaves|c_red_dirt_leaves_w3|c_red_dirt_mimosa|c_red_dirt_short_grass|c_red_dirt_small_stones|c_red_dirt_small_stones1|c_red_dirt_small_stones2|c_red_dirt_sparse_grass|c_red_dirt_sparse_grass2|c_red_dirt_sparse_grass3|c_coral1_exp|c_coral2_exp|c_coral3_exp|c_coral4_exp|c_coral5_exp|c_seaweed1_exp|c_seaweed2_exp|c_volcano_grass|c_volcano_grassmix|c_volcano_grassmix2|c_volcano_largestone|c_volcano_stones)
//(d_fallenbranch_f|d_fallenbranch_lc_f|d_fallentrunk_branches_f|d_fallentrunk_branches_lc_f|d_fallentrunk_clear_f|d_fallentrunk_clear_lc_f|d_fallentrunk_roots_f|d_fallentrunk_roots_lc_f|d_treestump_cut_large_f|d_treestump_cut_small_f|d_treestump_natural_large_f|d_treestump_natural_small_f)
//(p_reeds_f|leaf_arundodonax|leaf_broussonetiapapyrifera|leaf_damage_biglong_green_01|leaf_damage_biglong_green_02|leaf_damage_biglong_green_03|leaf_damage_biglong_green_04|leaf_damage_biglong_green_05|leaf_damage_big_green|leaf_damage_small_green|leaf_ficusbenjamina|leaf_ficuscarica|leaf_neriumoleander|leaf_neriumoleander_d|leaf_oleaeuropaea|leaf_phoenixcanariensis|leaf_pines|leaf_populusnigra|leaf_quercusilex_rotundifolia|Akat02S|banana_1|banana_2|banana_3|banana_4|bodlak_group|bolsevnik_group|DD_borovice|DD_borovice02|grass_desert|grass_general_shader|hrusen2|jablon|jitrocel_shader|ker buxus|ker deravej|ker pichlavej|ker s bobulema|ker trs travy3|ker trs travy5|klady_ihlic|klady_smrk|kmen_1_buk|koprivy|Krovi|Krovi2|Krovi4|Krovi_bigest|Krovi_long|les_buk|les_dub|les_dub_jiny|les_fikovnik2|les_singlestrom|les_singlestrom_b|lopuch|oliva|palmTest|palm_01|palm_02|palm_03|palm_04|palm_08small|palm_09|palm_10|parez|pinus_mugo_lowpoly|Smrk_maly|Smrk_siroky|Smrk_velky|str briza|str buk|str dub jiny|str dub|str habr|str jalovec|str javor|str jerabina|str kastan|str krovisko vysoke|str lipa|str osika|str trnka|str vrba|str_Briza_kriva|str_Briza_rovna|str_fikovnik|str_fikovnik2|str_fikovnik_ker|str_liskac|str_pinie|str_topol|str_Topol2|vetev_1_buk|vetev_2_dub|vetev_3_borovice|vetev_4_smrk|lopuch_podzimni|pumpkin|pumpkin2|p_articum|p_carduus|p_Helianthus|p_heracleum|p_Phragmites|p_urtica|sunFlower|p_fiberPlant_EP1|p_papaver_EP1|p_wheat_EP1|p_articum_summer|p_carduus_summer|p_Helianthus_summer|p_heracleum_summer|p_Phragmites_summer|p_pumpkin2_summer|p_pumpkin_summer|p_Reeds_PMC)

//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_t_acer2s","CUP_t_alnus2s","CUP_t_betula1f","CUP_t_betula2f","CUP_t_betula2s","CUP_t_carpinus2s","CUP_t_fagus2f","CUP_t_fagus2s","CUP_t_fraxinus2s","CUP_t_larix3f","CUP_t_larix3s","CUP_t_malus1s","CUP_t_picea1s","CUP_t_pinusN1s","CUP_t_pinusN2s","CUP_t_pinusS2f","CUP_t_populus3s","CUP_t_pyrus2s","CUP_t_quercus2f","CUP_t_quercus3s","CUP_t_salix2s","CUP_t_sorbus2s","CUP_t_AmygdalusC2s_EP1","CUP_t_FicusB2s_EP1","CUP_t_PinusE2s_EP1","CUP_t_PinusS3s_EP1","CUP_t_PistaciaL2s_EP1","CUP_t_PrunusS2s_EP1","CUP_t_JuniperusC2s_EP1","CUP_t_picea2s","CUP_t_picea3f","CUP_t_PopulusB2s_EP1","CUP_t_PopulusF2s_EP1","CUP_A2_t_juniperusc2s_ep1","CUP_A2_t_picea2s","CUP_A2_t_picea3f","CUP_A2_t_populusb2s_ep1","CUP_A2_t_populusf2s_ep1"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_t_betula2f_summer","CUP_t_betula2s_summer","CUP_t_fagus2f_summer","CUP_t_fagus2s_summer","CUP_t_malus1s_summer","CUP_t_quercus2f_summer"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_t_betula2w","CUP_t_fagus2W","CUP_t_fraxinus2W","CUP_t_betula2sW","CUP_t_fagus2fW","CUP_t_fagus2sW","CUP_t_fagus2WW","CUP_t_larix3fW","CUP_t_larix3sW","CUP_t_picea1sW","CUP_t_picea2sW","CUP_t_picea3fWW","CUP_t_pinusN1sW","CUP_t_pinusN2sW","CUP_t_pinusS2fW","CUP_t_acer2sW","CUP_t_alnus2sW","CUP_t_carpinus2sW","CUP_t_betula2fW","CUP_t_betula2wW","CUP_t_fraxinus2sW","CUP_t_fraxinus2wW","CUP_t_malus1sW","CUP_t_populus3sW","CUP_t_pyrus2sW","CUP_t_quercus2fW","CUP_t_quercus3sW","CUP_t_salix2sW","CUP_t_sorbus2sW","CUP_t_xmastree","CUP_Winter_obj_t_betula1f","CUP_Winter_obj_t_picea1s","CUP_Winter_obj_t_picea2s","CUP_Winter_obj_t_picea3f"];

//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_T_Habr","LIB_T_Acer2s","LIB_T_Acer2se","LIB_T_Alnus2s","LIB_T_Betula1f","LIB_T_Betula2f","LIB_T_Betula2s","LIB_T_Betula2w","LIB_T_Carpinus2s","LIB_T_Elm_Dlc","LIB_T_Fagus2f","LIB_T_Fagus2f_Full","LIB_T_Fagus2s","LIB_T_Fagus2w","LIB_T_Fraxinus2s","LIB_T_Fraxinus2w","LIB_T_Fraxinus2ws","LIB_T_Larix3f","LIB_T_Larix3s","LIB_T_Malus1s","LIB_T_Malus1s_Burn","LIB_T_Picea1s","LIB_T_Picea2s","LIB_T_Picea3f","LIB_T_Pinusn1s","LIB_T_Pinusn2s","LIB_T_Pinusn4s","LIB_T_Pinusn5s","LIB_T_Pinuss2f","LIB_T_Poplar2f_Burn_FixedHeight","LIB_T_Poplar2f_Dead","LIB_T_Populus3s","LIB_T_Pyrus2s","LIB_T_Quercus2f","LIB_T_Quercus3s","LIB_T_Salix2s","LIB_T_Sorbus2s","LIB_T_Willow2s_Dead"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_T_Habr_w","LIB_T_Acer2s_w","LIB_T_Acer2se_w","LIB_T_Alnus2s_w","LIB_T_Betula1f_w","LIB_T_Betula2f_w","LIB_T_Betula2s_w","LIB_T_Betula2w_w","LIB_T_Carpinus2s_w","LIB_T_Elm_DLC_w","LIB_T_Fagus2f_w","LIB_T_Fagus2f_Full_w","LIB_T_Fagus2s_w","LIB_T_Fagus2w_w","LIB_T_Fraxinus2s_w","LIB_T_Fraxinus2w_w","LIB_T_Fraxinus2ws_w","LIB_T_Larix3f_w","LIB_T_Larix3s_w","LIB_T_Malus1s_w","LIB_T_Malus1s_Burn_w","LIB_T_Picea1s_w","LIB_T_Picea2s_w","LIB_T_Picea3f_w","LIB_T_Pinusn1s_w","LIB_T_Pinusn2s_w","LIB_T_Pinusn4s_w","LIB_T_Pinusn5s_w","LIB_T_Pinuss2f_w","LIB_T_Poplar2f_Burn_FixedHeight_w","LIB_T_Poplar2f_Dead_w","LIB_T_Populus3s_w","LIB_T_Pyrus2s_w","LIB_T_Quercus2f_w","LIB_T_Quercus3s_w","LIB_T_Salix2s_w","LIB_T_Sorbus2s_w","LIB_T_Willow2s_Dead_w"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","WW2_JNS_T_Betula1f","WW2_JNS_T_Picea1s","WW2_JNS_T_Picea2s","WW2_JNS_T_Picea3f","WW2_JNS_Xmastree"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","WW2_RAU_T_Acer2s_w","WW2_RAU_T_Alnus2s_w","WW2_RAU_T_Betula1f_w","WW2_RAU_T_Betula2f_w","WW2_RAU_T_Betula2s_w","WW2_RAU_T_Betula2w_w","WW2_RAU_T_Carpinus2s_w","WW2_RAU_T_Fagus2f_w","WW2_RAU_T_Fagus2s_w","WW2_RAU_T_Fagus2W_w","WW2_RAU_T_Fraxinus2s_w","WW2_RAU_T_Fraxinus2W_w","WW2_RAU_T_Larix3f_w","WW2_RAU_T_Larix3s_w","WW2_RAU_T_Malus1s_w","WW2_RAU_T_Picea1s_w","WW2_RAU_T_Picea2s_w","WW2_RAU_T_Picea3f_w","WW2_RAU_T_PinusN1s_w","WW2_RAU_T_PinusN2s_w","WW2_RAU_T_PinusS2f_w","WW2_RAU_T_Populus3s_w","WW2_RAU_T_Pyrus2s_w","WW2_RAU_T_Quercus2f_w","WW2_RAU_T_Quercus3s_w","WW2_RAU_T_Salix2s_w","WW2_RAU_T_Sorbus2s_w"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","rjw_oak","rjw_oak2"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_I44_Buildings_Tree_Birch_1","Land_I44_Buildings_Tree_Decid_3","Land_I44_Buildings_Tree_Decid_4","Land_I44_Buildings_Tree_Fancypine","Land_I44_Buildings_Tree_Fancypine2","Land_I44_Buildings_Tree_Oak_1","Land_I44_Buildings_Tree_Oak_2"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_Forest_Buk1","I44_Vegetation_Forest_Buk2","I44_Vegetation_Forest_Dub_Jiny1","I44_Vegetation_Forest_Dub_Jiny2"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_Tree_Oak_1_Winter","I44_Vegetation_Tree_Oak_1_Down","I44_Vegetation_Tree_Oak_Sapling_1","I44_Vegetation_T_Fagus2f_Winter","I44_Vegetation_T_Fagus2s_Winter"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_MB_T_Ulmus_Forest","I44_Vegetation_MB_T_Ulmus_ForestIvy","I44_Vegetation_MB_T_Ulmus_ForestIvy_W","I44_Vegetation_MB_T_Ulmus_Forest_W","I44_Vegetation_MB_T_Ulmus_Large","I44_Vegetation_MB_T_Ulmus_LargeIvy","I44_Vegetation_MB_T_Ulmus_LargeIvy_W","I44_Vegetation_MB_T_Ulmus_Large_W","I44_Vegetation_MB_T_Ulmus_Small","I44_Vegetation_MB_T_Ulmus_Smallivy","I44_Vegetation_MB_T_Ulmus_SmallIvy_W","I44_Vegetation_MB_T_Ulmus_Small_W","I44_Vegetation_MB_T_Ulmus_Treeling"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_T_Picea1s","I44_Vegetation_T_Picea2s","I44_Vegetation_T_Picea3f","I44_Vegetation_T_Pinusn1s","I44_Vegetation_T_Pinusn2s","I44_Vegetation_T_Pinuss2f"];


//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_DD_bush01","CUP_DD_bush02","CUP_b_betulaHumilis","CUP_b_canina2s","CUP_b_corylus","CUP_b_corylus2s","CUP_b_craet1","CUP_b_craet2","CUP_b_pmugo","CUP_b_prunus","CUP_b_salix2s","CUP_b_sambucus","CUP_b_AmygdalusN1s_EP1","CUP_b_PinusM1s_EP1","CUP_b_PistaciaL1s_EP1","CUP_b_Elderberry2s_PMC","CUP_b_Hip2s_PMC","CUP_Winter_obj_b_sambucus","CUP_A1_DD_bush01","CUP_A1_DD_bush02"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_b_betula2w_summer","CUP_b_canina2s_summer","CUP_b_corylus2s_summer","CUP_b_craet1_summer","CUP_b_sambucus_summer"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_b_betulaHumilisW","CUP_b_corylusW","CUP_b_pmugoW","CUP_b_canina2sW","CUP_b_corylus2sW","CUP_b_craet1W","CUP_b_craet2W","CUP_b_prunusW","CUP_b_salix2sW","CUP_b_sambucusW"];

//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Acer2s","LIB_B_Acer2sl","LIB_B_Betulahumilis","LIB_B_Canina2s","LIB_B_Corylus","LIB_B_Corylus2s","LIB_B_Craet1","LIB_B_Craet2","LIB_B_Hedgerows","LIB_B_Hedgerows_Big","LIB_B_Hedgerows_New","LIB_B_Pmugo","LIB_B_Prunus","LIB_B_Salix2s","LIB_B_Sambucus","LIB_B_Ker_Deravej_Big"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Acer2s_w","LIB_B_Acer2sl_w","LIB_B_Betulahumilis_w","LIB_B_Canina2s_w","LIB_B_Corylus_w","LIB_B_Corylus2s_w","LIB_B_Craet1_w","LIB_B_Craet2_w","LIB_B_Hedgerows_w","LIB_B_Hedgerows_Big_w","LIB_B_Hedgerows_New_w","LIB_B_Pmugo_w","LIB_B_Prunus_w","LIB_B_Salix2s_w","LIB_B_Sambucus_w","LIB_B_Ker_Deravej_Big_w"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","WW2_RAU_B_BetulaHumilis_w","WW2_RAU_B_Canina2s_w","WW2_RAU_B_Corylus2s_w","WW2_RAU_B_Corylus_w","WW2_RAU_B_Craet1_w","WW2_RAU_B_Craet2_w","WW2_RAU_B_Pmugo_w","WW2_RAU_B_Prunus_w","WW2_RAU_B_Salix2s_w","WW2_RAU_B_Sambucus_w"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","rjw_HedgeWithFoliage","rjw_HedgeWithFoliage_2","rjw_HedgeWithFoliage_3","rjw_BocageImpassable"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","RJW_Bocage_1","RJW_Bocage_1_Lighter","RJW_Bocage_2","RJW_Bocage_2_Lighter","RJW_Bocage_3","RJW_Bocage_3_Lighter","RJW_Bocage_4","RJW_Bocage_4_Lighter","RJW_Bocage_5","RJW_Bocage_5_Lighter","RJW_Bocage_Tree","RJW_Bocage_Tree_Lighter","RJW_Bocage_Tree_2","RJW_Bocage_Tree_2_Lighter"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_rjw_EarthMound_Bocage1","Land_rjw_EarthMound_Bocage2","Land_rjw_EarthMound_Bocage3","Land_rjw_EarthMound_Bocage4","Land_rjw_EarthMound_Bocage5","Land_rjw_EarthMound_Bocage6","Land_rjw_EarthMound_Wall1","Land_rjw_EarthMound_Wall2","Land_rjw_EarthMound_Wall3"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_I44_Buildings_Bush","Land_I44_Buildings_Bush2","Land_I44_Buildings_Bushtall","Land_I44_Buildings_Bush_Alt_1","Land_I44_Buildings_Bush_Bigest","Land_I44_Buildings_Bush_Long"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_I44_Misc_Hedge1","Land_I44_Misc_Hedge2"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_Bush_Long","I44_Vegetation_Bushtall","I44_Vegetation_Bush_Small_1"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_MB_B_Tussock01","I44_Vegetation_MB_B_Ulmus","I44_Vegetation_MB_B_Ulmus_winter"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","rjw_Mb_B_Ulmus","rjw_Mb_B_Ulmus2"];


BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_clutter_flower_mix","CUP_clutter_grass_desert2","CUP_clutter_grass_short","CUP_clutter_mochomurka","CUP_clutter_trava_dlouha","CUP_c_GrassAutumn","CUP_c_GrassAutumnBrown","CUP_c_GrassAutumn_t","CUP_c_GrassDryLong","CUP_c_leaves","CUP_c_PlantsAutumnForest","CUP_C_SmallLeafPlant","CUP_c_TreeSmallForest","CUP_c_GrassDry_EP1","CUP_c_GrassGreen_AreaLowSoft_EP1","CUP_c_GrassGreen_GroupHard_EP1","CUP_c_Grass_desert_bunch_EP1","CUP_c_grass_desert_EP1","CUP_c_grass_desert_long_EP1","CUP_c_papaver_05_EP1","CUP_c_papaver_06_EP1","CUP_c_papaver_07_EP1","CUP_c_papaver_flower01_EP1","CUP_c_papaver_flower02_EP1","CUP_c_papaver_flower03_EP1","CUP_c_papaver_flower04_EP1","CUP_c_Plants_HightSingleDeath_EP1","CUP_c_Plants_HightSingleHard_EP1","CUP_c_Plants_HightSingleSoft_EP1","CUP_c_Plants_Thistle_desert_EP1","CUP_c_Plants_Yellow_EP1","CUP_c_weed2_EP1","CUP_c_blueBerryW","CUP_c_fernW","CUP_c_GrassCrookedW","CUP_c_piceaW","CUP_c_raspBerryW","CUP_A1_clutter_babka","CUP_A1_clutter_flower_mix","CUP_A1_clutter_forest_fern","CUP_A1_clutter_grass_desert","CUP_A1_clutter_grass_flowers","CUP_A1_clutter_grass_general","CUP_A1_clutter_grass_long","CUP_A1_clutter_grass_sevenbaeuty","CUP_A1_clutter_grass_short","CUP_A1_clutter_grass_yellow","CUP_A1_clutter_horcak","CUP_A1_clutter_muchomurka","CUP_A1_clutter_prasivky","CUP_A1_clutter_smetanka","CUP_A1_clutter_trava_dlouha","CUP_A1_clutter_white_flower","CUP_A1_clutter_stone_small"];

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_C_Blueberry","LIB_C_Caluna","LIB_C_Deadgrassbunch","LIB_C_Ferntall","LIB_C_France_Caluna","LIB_C_France_Grass","LIB_C_France_Greenweat","LIB_C_France_Mak","LIB_C_Grassautumnbrown","LIB_C_Grasstall","LIB_C_Mushroombabka","LIB_C_Mushroommuchomurka","LIB_C_Mushroomprasivky","LIB_C_Picea","LIB_C_Raspberry","LIB_C_Stubble","LIB_C_Weed3","LIB_C_Weeddead","LIB_C_Grass_Flowers","LIB_C_White_Flower","LIB_P_Articum","LIB_P_Phragmites_Dark","LIB_P_Phragmites_Dark_larger","LIB_P_Phragmites_Dark2","LIB_P_Phragmites_Dark2_larger","LIB_P_Phragmites_Light","LIB_P_Phragmites_Light_larger","LIB_C_Pshenitsa","LIB_C_Pshenitsa2","LIB_C_Stasograss"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_C_Blueberry_w","LIB_C_Caluna_w","LIB_C_Deadgrassbunch_w","LIB_C_Ferntall_w","LIB_C_France_Caluna_w","LIB_C_France_Grass_w","LIB_C_France_Greenweat_w","LIB_C_France_Mak_w","LIB_C_Grassautumnbrown_w","LIB_C_Grasstall_w","LIB_C_Mushroombabka_w","LIB_C_Mushroommuchomurka_w","LIB_C_Mushroomprasivky_w","LIB_C_Picea_w","LIB_C_Raspberry_w","LIB_C_Stubble_w","LIB_C_Weed3_w","LIB_C_Weeddead_w","LIB_C_Grass_Flowers_w","LIB_C_White_Flower_w","LIB_P_Articum_w","LIB_P_Phragmites_Dark_w","LIB_P_Phragmites_Dark2_w","LIB_P_Phragmites_Light_w","LIB_C_Pshenitsa_w","LIB_C_Pshenitsa2_w","LIB_C_Stasograss_w"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","WW2_JNS_B_Sambucus","WW2_JNS_C_GrassCrookedGreen","WW2_JNS_C_GrassTall","WW2_JNS_Phragmites"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_I44_Buildings_Weeds","Land_I44_Buildings_Weeds_Flowers","Land_I44_Buildings_Weeds_Kek","Land_I44_Buildings_Weeds_Thistles","Land_I44_Buildings_Weeds_White_Flowers","Land_I44_Buildings_Weeds_Yellow_Purple_Flowers"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_MB_C_Forestweed01","I44_Vegetation_MB_C_Forestweedgroup01","I44_Vegetation_MB_C_GrassDry01","I44_Vegetation_MB_C_GrassLush01","I44_Vegetation_MB_C_GrassShort01","I44_Vegetation_MB_C_GrassTall01","I44_Vegetation_MB_C_Ivy01","I44_Vegetation_MB_C_Taraxacum01","I44_Vegetation_MB_C_Taraxacum02","I44_Vegetation_MB_C_Tussock01","I44_Vegetation_MB_C_Ulmus01","I44_Vegetation_MB_C_Ulmus02","I44_Vegetation_MB_C_Ulmus03"];


BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_misc_BrokenSpruce_PMC","CUP_misc_BurnSpruce_PMC","CUP_misc_StubLeafs_PMC","CUP_misc_TorzoTree_PMC","CUP_Winter_obj_misc_FallenSpruce","CUP_Winter_obj_misc_FallenTree1","CUP_Winter_obj_misc_FallenTree2","CUP_Winter_obj_misc_stub1","CUP_Winter_obj_misc_stub2","CUP_Winter_obj_Misc_trunk_torzo","CUP_Winter_obj_Misc_trunk_water","CUP_A2_misc_fallenspruce","CUP_A2_misc_fallenspruce_1xtrunk_pmc","CUP_A2_misc_fallenspruce_pmc","CUP_A2_misc_fallentree1","CUP_A2_misc_fallentree2","CUP_A2_misc_fallentrunk_pmc","CUP_A2_misc_stub1","CUP_A2_misc_stub2","CUP_A2_misc_trunk_torzo","CUP_A2_misc_trunk_torzo_ep1","CUP_A2_misc_trunk_water","CUP_A2_misc_trunk_water_ep1","CUP_A2_pinuss2f_destruct","CUP_A2_t_poplar2f_dead_pmc","CUP_A2_t_stub_picea","CUP_A2_t_willow2s_dead_pmc"];

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Acer2s_Burn","LIB_B_Craet2_Burn","LIB_T_Fraxinus2s_Burn","LIB_MV_Brokenspruce","LIB_MV_Burnspruce","LIB_MV_Fallenspruce","LIB_MV_Fallenspruce_1xtrunk","LIB_MV_Fallenspruce2","LIB_MV_Fallentree1","LIB_MV_Fallentree2","LIB_MV_Fallentrunk","LIB_MV_Stub1","LIB_MV_Stub2","LIB_MV_Stubleafs","LIB_MV_Torzotree","LIB_MV_Trunk_Torzo","LIB_MV_Trunk_Water"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_MV_Brokenspruce_w","LIB_MV_Burnspruce_w","LIB_MV_Fallenspruce_w","LIB_MV_Fallenspruce_1xtrunk_w","LIB_MV_Fallenspruce2_w","LIB_MV_Fallentree1_w","LIB_MV_Fallentree2_w","LIB_MV_Fallentrunk_w","LIB_MV_Stub1_w","LIB_MV_Stub2_w","LIB_MV_Stubleafs_w","LIB_MV_Torzotree_w","LIB_MV_Trunk_Torzo_w","LIB_MV_Trunk_Water_w"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","WW2_JNS_Misc_FallenSpruce","WW2_JNS_Misc_FallenTree1","WW2_JNS_Misc_FallenTree2","WW2_JNS_Misc_Stub1","WW2_JNS_Misc_Stub2","WW2_JNS_Misc_Trunk_Torzo","WW2_JNS_Misc_Trunk_Water","WW2_JNS_Timbers"];


BIS_ItemsToCreate = BIS_ItemsToCreate + ["","CUP_Akat02S","CUP_banana_1","CUP_banana_2","CUP_banana_3","CUP_banana_4","CUP_bodlak_group","CUP_bolsevnik_group","CUP_DD_borovice","CUP_DD_borovice02","CUP_grass_desert","CUP_grass_general_shader","CUP_hrusen2","CUP_jablon","CUP_jitrocel_shader","CUP_ker_buxus","CUP_ker_deravej","CUP_ker_pichlavej","CUP_ker_s_bobulema","CUP_ker_trs_travy3","CUP_ker_trs_travy5","CUP_kmen_1_buk","CUP_koprivy","CUP_Krovi","CUP_Krovi2","CUP_Krovi4","CUP_Krovi_bigest","CUP_Krovi_long","CUP_les_buk","CUP_les_dub","CUP_les_dub_jiny","CUP_les_fikovnik2","CUP_les_singlestrom","CUP_les_singlestrom_b","CUP_lopuch","CUP_oliva","CUP_palm_01","CUP_palm_02","CUP_palm_03","CUP_palm_04","CUP_palm_08small","CUP_palm_09","CUP_palm_10","CUP_parez","CUP_pinus_mugo_lowpoly","CUP_Smrk_maly","CUP_Smrk_siroky","CUP_Smrk_velky","CUP_str_briza","CUP_str_buk","CUP_str_dub_jiny","CUP_str_dub","CUP_str_habr","CUP_str_jalovec","CUP_str_javor","CUP_str_jerabina","CUP_str_kastan","CUP_str_krovisko_vysoke","CUP_str_lipa","CUP_str_osika","CUP_str_trnka","CUP_str_vrba","CUP_str_Briza_kriva","CUP_str_Briza_rovna","CUP_str_fikovnik","CUP_str_fikovnik2","CUP_str_fikovnik_ker","CUP_str_liskac","CUP_str_pinie","CUP_str_topol","CUP_str_Topol2","CUP_vetev_1_buk","CUP_vetev_2_dub","CUP_vetev_3_borovice","CUP_vetev_4_smrk","CUP_lopuch_podzimni","CUP_pumpkin","CUP_pumpkin2","CUP_p_articum","CUP_p_carduus","CUP_p_Helianthus","CUP_p_heracleum","CUP_p_Phragmites","CUP_p_urtica","CUP_p_fiberPlant_EP1","CUP_p_papaver_EP1","CUP_p_wheat_EP1","CUP_p_articum_summer","CUP_p_carduus_summer","CUP_p_Helianthus_summer","CUP_p_heracleum_summer","CUP_p_Phragmites_summer","CUP_p_pumpkin2_summer","CUP_p_pumpkin_summer","CUP_p_Reeds_PMC","CUP_A1_Akat02S","CUP_A1_banana_2","CUP_A1_banana_3","CUP_A1_banana_4","CUP_A1_bodlak_group","CUP_A1_bolsevnik_group","CUP_A1_DD_borovice","CUP_A1_DD_borovice02","CUP_A1_grass_desert","CUP_A1_grass_general_shader","CUP_A1_hrusen2","CUP_A1_jablon","CUP_A1_jitrocel_shader","CUP_A1_ker_buxus","CUP_A1_ker_deravej","CUP_A1_ker_pichlavej","CUP_A1_ker_s_bobulema","CUP_A1_ker_trs_travy3","CUP_A1_ker_trs_travy5","CUP_A1_klady_smrk","CUP_A1_kmen_1_buk","CUP_A1_koprivy","CUP_A1_Krovi","CUP_A1_Krovi2","CUP_A1_Krovi4","CUP_A1_Krovi_bigest","CUP_A1_Krovi_long","CUP_A1_les_buk","CUP_A1_les_dub","CUP_A1_les_dub_jiny","CUP_A1_les_fikovnik2","CUP_A1_les_singlestrom","CUP_A1_les_singlestrom_b","CUP_A1_lopuch","CUP_A1_oliva","CUP_A1_palmTest","CUP_A1_palm_01","CUP_A1_palm_02","CUP_A1_palm_03","CUP_A1_palm_04","CUP_A1_palm_08small","CUP_A1_palm_09","CUP_A1_palm_10","CUP_A1_parez","CUP_A1_pinus_mugo_lowpoly","CUP_A1_Smrk_maly","CUP_A1_Smrk_siroky","CUP_A1_Smrk_velky","CUP_A1_str_briza","CUP_A1_str_buk","CUP_A1_str_dub_jiny","CUP_A1_str_dub","CUP_A1_str_habr","CUP_A1_str_jalovec","CUP_A1_str_javor","CUP_A1_str_jerabina","CUP_A1_str_kastan","CUP_A1_str_krovisko_vysoke","CUP_A1_str_lipa","CUP_A1_str_osika","CUP_A1_str_trnka","CUP_A1_str_vrba","CUP_A1_str_Briza_kriva","CUP_A1_str_Briza_rovna","CUP_A1_str_fikovnik","CUP_A1_str_fikovnik2","CUP_A1_str_fikovnik_ker","CUP_A1_str_liskac","CUP_A1_str_pinie","CUP_A1_str_topol","CUP_A1_str_Topol2","CUP_A1_vetev_1_buk","CUP_A1_vetev_2_dub","CUP_A1_vetev_3_borovice","CUP_A1_vetev_4_smrk","CUP_A2_sunflower","CUP_p_urticaW","CUP_p_heracleumW","CUP_A2_x_baleofstraw","CUP_A2_x_strawheap","CUP_A2_x_timbers"];

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_Wheat1_XXL","LIB_Wheat1_XL","LIB_Wheat1_L","LIB_Wheat1_M","LIB_Wheat1_S","LIB_Wheat2_XXL","LIB_Wheat2_XL","LIB_Wheat2_L","LIB_Wheat2_M","LIB_Wheat2_S","LIB_Wheat4_XXL","LIB_Wheat4_XL","LIB_Wheat4_L","LIB_Wheat4_M","LIB_Wheat4_S","LIB_Wheat5_XXL","LIB_Wheat5_XL","LIB_Wheat5_L","LIB_Wheat5_M","LIB_Wheat5_S"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_I44_Buildings_Braken","Land_I44_Buildings_Crops_Wheat","Land_I44_Buildings_Crops_Wheat2","Land_I44_Buildings_Hrt1","Land_I44_Buildings_Hrt1a","Land_I44_Buildings_Hrt1p","Land_I44_Buildings_Hrt3"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","I44_Vegetation_Smrk_Siroky","I44_Vegetation_Hrt1"];

BIS_EditorObjectsFromSheet = [];
