///////////////////////////////////////////////////////////////////////////////

#include "\a3\ui_f\hpp\definedikcodes.inc"

_vehiclesRootClass = "CfgVehicles";

enableSaving [false,false];

//a3\plants_f\_leafs\leaf_arundodonax.p3d
//a3\plants_f\_leafs\leaf_broussonetiapapyrifera.p3d
//a3\plants_f\_leafs\leaf_damage_biglong_green_01.p3d
//a3\plants_f\_leafs\leaf_damage_biglong_green_02.p3d
//a3\plants_f\_leafs\leaf_damage_biglong_green_03.p3d
//a3\plants_f\_leafs\leaf_damage_biglong_green_04.p3d
//a3\plants_f\_leafs\leaf_damage_biglong_green_05.p3d
//a3\plants_f\_leafs\leaf_damage_big_green.p3d
//a3\plants_f\_leafs\leaf_damage_small_green.p3d
//a3\plants_f\_leafs\leaf_ficusbenjamina.p3d
//a3\plants_f\_leafs\leaf_ficuscarica.p3d
//a3\plants_f\_leafs\leaf_neriumoleander.p3d
//a3\plants_f\_leafs\leaf_neriumoleander_d.p3d
//a3\plants_f\_leafs\leaf_oleaeuropaea.p3d
//a3\plants_f\_leafs\leaf_phoenixcanariensis.p3d
//a3\plants_f\_leafs\leaf_pines.p3d
//a3\plants_f\_leafs\leaf_populusnigra.p3d
//a3\plants_f\_leafs\leaf_quercusilex_rotundifolia.p3d
//
//a3\vegetation_f_exp\lianas\d_lianatangle_narrow_f.p3d
//a3\vegetation_f_exp\lianas\d_lianatangle_wide_f.p3d

//TEST_Rocks = [];
TEST_Clutters = ["a3\plants_f\plant\p_reeds_f.p3d","ca\plants2\plant\pumpkin.p3d","ca\plants2\plant\pumpkin2.p3d","ca\plants2\plant\sunflower.p3d","a3\plants_f\clutter\c_coral2.p3d","a3\plants_f\clutter\c_coral3.p3d","a3\plants_f\clutter\c_coral4.p3d","a3\plants_f\clutter\c_coral5.p3d","a3\plants_f\clutter\c_corals_set_t.p3d","a3\plants_f\clutter\c_coral_brain.p3d","a3\plants_f\clutter\c_coral_brain_flat1.p3d","a3\plants_f\clutter\c_coral_brain_flat2.p3d","a3\plants_f\clutter\c_coral_brain_flat3.p3d","a3\plants_f\clutter\c_coral_brain_flat4.p3d","a3\plants_f\clutter\c_coral_brain_flat_set1.p3d","a3\plants_f\clutter\c_coral_brain_white.p3d","a3\plants_f\clutter\c_coral_plant1.p3d","a3\plants_f\clutter\c_coral_plant2.p3d","a3\plants_f\clutter\c_coral_plant_set1.p3d","a3\plants_f\clutter\c_coral_sps_pink_set.p3d","a3\plants_f\clutter\c_coral_sps_pink_single.p3d","a3\plants_f\clutter\c_crack_clutter1.p3d","a3\plants_f\clutter\c_crack_clutter2.p3d","a3\plants_f\clutter\c_crack_clutter3.p3d","a3\plants_f\clutter\c_crack_clutter4.p3d","a3\plants_f\clutter\c_rubble_clutter1.p3d","a3\plants_f\clutter\c_rubble_clutter2.p3d","a3\plants_f\clutter\c_rubble_clutter3.p3d","a3\plants_f\clutter\c_rubble_clutter4.p3d","a3\plants_f\clutter\c_rubble_clutter5.p3d","a3\plants_f\clutter\c_rubble_clutter6.p3d","a3\plants_f\clutter\c_seadollar1.p3d","a3\plants_f\clutter\c_seadollar2.p3d","a3\plants_f\clutter\c_seadollar3.p3d","a3\plants_f\clutter\c_seadollar4.p3d","a3\plants_f\clutter\c_seadollars_set1.p3d","a3\plants_f\clutter\c_seaweed1.p3d","a3\plants_f\clutter\c_seaweed2.p3d","a3\plants_f\clutter\c_spong_tube_green1.p3d","a3\plants_f\clutter\c_spong_tube_green2.p3d","a3\plants_f\clutter\c_spong_tube_green3.p3d","a3\plants_f\clutter\c_spong_tube_green4.p3d","a3\plants_f\clutter\c_spong_tube_yellow1.p3d","a3\plants_f\clutter\c_spong_tube_yellow2.p3d","a3\plants_f\clutter\c_spong_tube_yellow3.p3d","a3\plants_f\clutter\c_spong_tube_yellow4.p3d","a3\plants_f\clutter\c_starfish1.p3d","a3\plants_f\clutter\c_starfish2.p3d","a3\plants_f\clutter\c_strthistlesmallyellow.p3d","a3\plants_f\clutter\c_urchin_black.p3d","a3\plants_f\clutter\c_urchin_black_grp.p3d","a3\plants_f\clutter\c_urchin_brown.p3d","a3\plants_f\clutter\c_urchin_brown_grp.p3d","a3\plants_f\clutter\c_urchin_red.p3d","a3\plants_f\clutter\c_urchin_red_grp.p3d","a3\vegetation_f_exp\clutter\cliff\c_rock_stones.p3d","a3\vegetation_f_exp\clutter\grass\c_grass_mimosa.p3d","a3\vegetation_f_exp\clutter\seabed\c_coral2_exp.p3d","a3\vegetation_f_exp\clutter\seabed\c_coral3_exp.p3d","a3\vegetation_f_exp\clutter\seabed\c_coral4_exp.p3d","a3\vegetation_f_exp\clutter\seabed\c_coral5_exp.p3d","a3\vegetation_f_exp\clutter\seabed\c_seaweed1_exp.p3d","a3\vegetation_f_exp\clutter\seabed\c_seaweed2_exp.p3d","ca\plants\grass_desert.p3d","ca\plants\grass_general_shader.p3d","ca\plants2\clutter\cr_leaf.p3d","ca\plants2\clutter\cr_leaf2.p3d","ca\plants2\clutter\cr_leaf3.p3d","ca\plants2\clutter\c_autumn_flowers.p3d","ca\plants2\clutter\c_blueberry.p3d","ca\plants2\clutter\c_caluna.p3d","ca\plants2\clutter\c_deadgrassbunch.p3d","ca\plants2\clutter\c_fern.p3d","ca\plants2\clutter\c_ferntall.p3d","ca\plants2\clutter\c_grassbunch.p3d","ca\plants2\clutter\c_grasscrookedforest.p3d","ca\plants2\clutter\c_grasscrookedgreen.p3d","ca\plants2\clutter\c_grassdrylongbunch.p3d","ca\plants2\clutter\c_mushroombabka.p3d","ca\plants2\clutter\c_mushroomhorcak.p3d","ca\plants2\clutter\c_mushroommuchomurka.p3d","ca\plants2\clutter\c_mushroomprasivky.p3d","ca\plants2\clutter\c_picea.p3d","ca\plants2\clutter\c_raspberry.p3d","ca\plants2\clutter\c_smallleafplant.p3d","ca\plants2\clutter\c_stubble.p3d","ca\plants2\clutter\c_weed2.p3d","ca\plants2\clutter\c_weed3.p3d","ca\plants2\clutter\c_weeddead.p3d","ca\plants2\clutter\c_weeddead2.p3d","ca\plants2\clutter\c_wideleafplant.p3d","ca\plants_e\clutter\c_brush_hard_ep1.p3d","ca\plants_e\clutter\c_brush_soft_ep1.p3d","ca\plants_e\clutter\c_grassdesert_groupsoft_ep1.p3d","ca\plants_e\clutter\c_grassdrylong_ep1.p3d","ca\plants_e\clutter\c_grassdry_ep1.p3d","ca\plants_e\clutter\c_grassgreenlong_ep1.p3d","ca\plants_e\clutter\c_grassgreen_ep1.p3d","ca\plants_e\clutter\c_plants_violet_ep1.p3d","ca\plants_e\clutter\c_plants_white_ep1.p3d","ca\plants_e\clutter\c_stonemiddlegroupcamp_ep1.p3d","ca\plants_e\clutter\c_stonemiddlegroupmount_ep1.p3d","ca\plants_e\clutter\c_stonemiddlesharpsingle_ep1.p3d","ca\plants_e\clutter\c_stonesmallrounded_ep1.p3d","ca\plants_e\clutter\c_weed_1_ep1.p3d","ca\plants_e\clutter\c_weed_thistle_ep1.p3d","ca\plants_e2\clutter\c_blueberry_summer.p3d","ca\plants_e2\clutter\c_caluna_summer.p3d","ca\plants_e2\clutter\c_ferntall_summer.p3d","ca\plants_e2\clutter\c_grasscrookedgreen_summer.p3d","ca\plants_e2\clutter\c_grasscrooked_summer.p3d","ca\plants_e2\clutter\c_grasstall_summer.p3d","ca\plants_e2\clutter\c_raspberry_summer.p3d","ca\plants_e2\clutter\c_summer_flowers.p3d","ca\plants_e2\clutter\c_summer_smetanka.p3d","ca\plants_e2\clutter\c_summer_white_flower.p3d","ca\plants_pmc\clutter\c_branchbig_pmc.p3d","ca\plants_pmc\clutter\c_carduus_pmc.p3d","ca\plants_pmc\clutter\c_grasscrooked_pmc.p3d","ca\plants_pmc\clutter\c_grassdesert_groupsoft_pmc.p3d","ca\plants_pmc\clutter\c_grassdrylongbunch_pmc.p3d","ca\plants_pmc\clutter\c_grassgreen_grouphard_pmc.p3d","ca\plants_pmc\clutter\c_grassgreen_groupsoft_pmc.p3d","ca\plants_pmc\clutter\c_grasstall_pmc.p3d","cup\terrains\cup_terrains_worlds\clutter\c_grasscrookedforest.p3d","cup\terrains\cup_terrains_worlds\clutter\c_grasscrookedgreen.p3d","cup\terrains\cup_terrains_worlds\clutter\c_grasscrookedforest.p3d","cup\terrains\cup_terrains_worlds\clutter\c_grasscrookedgreen.p3d","ww2\objects_m\vegetation\i44_mikebart_m\clutter\i44_mb_c_grasslush_nm.p3d","ww2\objects_m\vegetation\i44_mikebart_m\clutter\i44_mb_c_taraxacum02.p3d","ww2\objects_m\vegetation\i44_mikebart_m\clutter\i44_mb_c_tussock01.p3d","ww2\objects_m\vegetation\i44_mikebart_m\clutter\i44_mb_c_ulmus01.p3d","ww2\objects_m\vegetation\i44_mikebart_m\clutter\i44_mb_c_ulmus02.p3d","ww2\objects_m\vegetation\i44_mikebart_m\clutter\i44_mb_c_ulmus03.p3d","ww2\objects_m\vegetation\if_clutters_m\ww2_c_treesmallforest.p3d","ww2\objects_m\vegetation\if_clutters_m\ww2_p_articum.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_clutter_grass_flowers_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_clutter_white_flower_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_blueberry_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_caluna_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_deadgrassbunch_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_ferntall_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_france_caluna_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_france_grass_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_france_greenweat_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_france_mak_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_grassautumnbrown_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_grasstall_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_mushroombabka_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_mushroommuchomurka_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_mushroomprasivky_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_picea_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_raspberry_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_stubble_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_treesmallforest_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_weed3_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_c_weeddead_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_pshenitsa2_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_pshenitsa_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_p_articum_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_p_phragmites_dark2_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_p_phragmites_dark_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_p_phragmites_light_w.p3d","ww2\objects_m\vegetation\if_clutterswinter_m\ww2_stasograss_w.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\clutter\ww2_jns_b_sambucus.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\clutter\ww2_jns_c_grasscrookedgreen.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\clutter\ww2_jns_c_grasstall.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\clutter\ww2_jns_phragmites.p3d","ww2\objects_m\vegetation\ww2_clutter_m\ww2_swu_desert_rock_clutter.p3d","ww2\objects_m\vegetation\ww2_rjw_normandy_m\clutter\rjw_bocage_grass.p3d","ww2\objects_m\vegetation\ww2_rjw_normandy_m\clutter\rjw_i44_mb_c_grassshort01.p3d"];
TEST_Bushes = ["ww2\objects_m\vegetation\if_burnt_m\ww2_b_acer2s_burn.p3d","ww2\objects_m\vegetation\if_burnt_m\ww2_b_craet2_burn.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_betulahumilis_w_dead.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_betulahumilis_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_canina2s_w_dead.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_canina2s_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_corylus2s_w_dead.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_corylus2s_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_corylus_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_craet1_w_dead.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_craet1_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_craet2_w_dead.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_craet2_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_prunus_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_salix2s_w_half.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_sambucus_w_half.p3d","a3\plants_f\bush\b_arundod2s_f.p3d","a3\plants_f\bush\b_arundod3s_f.p3d","a3\plants_f\bush\b_neriumo2d_f.p3d","a3\plants_f\bush\b_neriumo2s_f.p3d","a3\plants_f\bush\b_neriumo2s_white_f.p3d","a3\plants_f\bush\b_thistle_thorn_green.p3d","a3\plants_f\bush\bw_setbig_brains_f.p3d","a3\plants_f\bush\bw_setbig_corals_f.p3d","a3\plants_f\bush\bw_setbig_tubeg_f.p3d","a3\plants_f\bush\bw_setbig_tubey_f.p3d","a3\plants_f\bush\bw_setsmall_brains_f.p3d","a3\plants_f\bush\bw_setsmall_tubeg_f.p3d","a3\plants_f\bush\bw_setsmall_tubey_f.p3d","a3\vegetation_f_argo\bushes\b_opuntiaficusindica3s_f.p3d","a3\vegetation_f_argo\bushes\b_vitis_vinifera_f.p3d","a3\vegetation_f_exp\crop\b_ginger_20_f.p3d","a3\vegetation_f_exp\crop\b_ginger_3_f.p3d","a3\vegetation_f_exp\crop\b_ginger_9_f.p3d","a3\vegetation_f_exp\crop\b_sugarcane_mature_row_f.p3d","a3\vegetation_f_exp\crop\b_sugarcane_sapling_row_f.p3d","a3\vegetation_f_exp\crop\b_sugarcane_sapling_single_f.p3d","a3\vegetation_f_exp\shrub\b_calochlaena_f.p3d","a3\vegetation_f_exp\shrub\b_colored_red_f.p3d","a3\vegetation_f_exp\shrub\b_colored_yellow_f.p3d","a3\vegetation_f_exp\shrub\b_cycas_f.p3d","a3\vegetation_f_exp\shrub\b_gardenia_dec_01_f.p3d","a3\vegetation_f_exp\shrub\b_gardenia_dec_02_f.p3d","a3\vegetation_f_exp\shrub\b_neriumo2d_tanoa_f.p3d","a3\vegetation_f_exp\shrub\b_pipermeth_f.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_bush2.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_bush_alt_2.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_bush_long.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_bwf_6_mlod.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_hrt1.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_hrt1a.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_hrt1p.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_hrt3.p3d","ww2\objects_m\vegetation\i44_mikebart_m\bushes\i44_mb_b_tussock01.p3d","ww2\objects_m\vegetation\i44_mikebart_m\bushes\i44_mb_b_ulmus_winter.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\i44_bush_small_1_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\bush\i44_bushtall_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\bush\i44_bush_long_w.p3d","ww2\objects_m\vegetation\if_bushes_m\ww2_b_hedgerows.p3d","ww2\objects_m\vegetation\if_bushes_m\ww2_b_hedgerows_big.p3d","ww2\objects_m\vegetation\if_bushes_m\ww2_b_hedgerows_new.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_acer2s_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_acer2sl_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_betulahumilis_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_canina2s_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_corylus_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_corylus2s_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_craet1_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_craet2_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_hedgerows_big_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_hedgerows_new_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_hedgerows_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_pmugo_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_prunus_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_salix2s_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_b_sambucus_w.p3d","ww2\objects_m\vegetation\if_busheswinter_m\ww2_ker_deravej_big_w.p3d"];
TEST_Trees = ["a3\plants_f\tree\t_broussonetiap1s_f.p3d","a3\plants_f\tree\t_ficusb1s_f.p3d","a3\plants_f\tree\t_phoenixc1s_f.p3d","a3\plants_f\tree\t_phoenixc3s_f.p3d","a3\plants_f\tree\t_pinusp3s_f.p3d","a3\plants_f\tree\t_pinuss1s_f.p3d","a3\plants_f\tree\t_pinuss2s_b_f.p3d","a3\plants_f\tree\t_pinuss2s_f.p3d","a3\vegetation_f_argo\trees\t_cupressus_stricta_2s_f.p3d","a3\vegetation_f_argo\trees\t_cupressus_stricta_3s_f.p3d","a3\vegetation_f_argo\trees\t_ficus_3d_f.p3d","a3\vegetation_f_argo\trees\t_phoenixrupicola1s_f.p3d","a3\vegetation_f_argo\trees\t_phoenixrupicola3s_f.p3d","a3\vegetation_f_exp\crop\t_banana_f.p3d","a3\vegetation_f_exp\crop\t_banana_slim_f.p3d","a3\vegetation_f_exp\crop\t_banana_wild_f.p3d","a3\vegetation_f_exp\crop\t_cacao_ripe_f.p3d","a3\vegetation_f_exp\tree\t_cocosnucifera2s_small_f.p3d","a3\vegetation_f_exp\tree\t_cocosnucifera3s_bend_f.p3d","a3\vegetation_f_exp\tree\t_cocosnucifera3s_tall_f.p3d","a3\vegetation_f_exp\tree\t_cocos_bend_f.p3d","a3\vegetation_f_exp\tree\t_cocos_small_f.p3d","a3\vegetation_f_exp\tree\t_cocos_tall_f.p3d","a3\vegetation_f_exp\tree\t_cyathea_f.p3d","a3\vegetation_f_exp\tree\t_ficus_big_f.p3d","a3\vegetation_f_exp\tree\t_ficus_medium_f.p3d","a3\vegetation_f_exp\tree\t_ficus_small_f.p3d","a3\vegetation_f_exp\tree\t_inocarpus_f.p3d","a3\vegetation_f_exp\tree\t_leucaena_f.p3d","a3\vegetation_f_exp\tree\t_millettia_f.p3d","a3\vegetation_f_exp\tree\t_millettia_plantation_f.p3d","a3\vegetation_f_exp\tree\t_palaquium_f.p3d","a3\vegetation_f_exp\tree\t_pritchardia_f.p3d","a3\vegetation_f_exp\tree\t_rhizophora_f.p3d","ca\plants\banana_1.p3d","ca\plants\banana_2.p3d","ca\plants\banana_3.p3d","ca\plants\banana_4.p3d","ca\plants\bodlak_group.p3d","ca\plants\bolsevnik_group.p3d","ca\plants\jitrocel_shader.p3d","ca\plants\ker buxus.p3d","ca\plants\ker deravej.p3d","ca\plants\ker pichlavej.p3d","ca\plants\ker s bobulema.p3d","ca\plants\ker trs travy3.p3d","ca\plants\ker trs travy5.p3d","ca\plants\klady_ihlic.p3d","ca\plants\klady_smrk.p3d","ca\plants\kmen_1_buk.p3d","ca\plants\koprivy.p3d","ca\plants\krovi.p3d","ca\plants\krovi2.p3d","ca\plants\krovi4.p3d","ca\plants\krovi_bigest.p3d","ca\plants\krovi_long.p3d","ca\plants\lopuch.p3d","ca\plants\oliva.p3d","ca\plants\palmtest.p3d","ca\plants\palm_01.p3d","ca\plants\palm_02.p3d","ca\plants\palm_03.p3d","ca\plants\palm_04.p3d","ca\plants\palm_08small.p3d","ca\plants\palm_09.p3d","ca\plants\palm_10.p3d","ca\plants\parez.p3d","ca\plants\str trnka.p3d","ca\plants\str_briza_kriva.p3d","ca\plants\str_briza_rovna.p3d","ca\plants\vetev_1_buk.p3d","ca\plants\vetev_2_dub.p3d","ca\plants\vetev_3_borovice.p3d","ca\plants\vetev_4_smrk.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_tree_fancypine.p3d","ww2\objects_m\vegetation\i44_mikebart_m\trees\i44_mb_t_ulmus_large_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_1_down_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_1_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_sapling_1_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\i44_hrt1_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\i44_smrk_siroky_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\tree\i44_t_fagus2f_w.p3d","ww2\objects_m\vegetation\i44_plants_winter_m\tree\i44_t_fagus2s_w.p3d","ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_picea1s.p3d","ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_picea2s.p3d","ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_picea3f.p3d","ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_pinusn1s.p3d","ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_pinusn2s.p3d","ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_pinuss2f.p3d","ww2\objects_m\vegetation\if_trees_m\ww2_str_habr.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_str_habr_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_str_habr_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_acer2se_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_acer2se_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_acer2s_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_alnus2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_alnus2s_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula1f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula1f_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula2f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula2f_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula2s_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula2w_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_betula2w_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_carpinus2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_carpinus2s_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_elm_dlc_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_elm_dlc_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fagus2f_full_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fagus2f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fagus2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fagus2s_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fagus2w_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fagus2w_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fraxinus2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fraxinus2s_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fraxinus2ws_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fraxinus2ws_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fraxinus2w_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_fraxinus2w_w_leaf.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_larix3f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_larix3s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_malus1s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_picea1s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_picea2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_picea3f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_pinusn1s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_pinusn2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_pinusn4s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_pinusn5s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_pinuss2f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_populus3s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_pyrus2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_quercus2f_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_quercus3s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_salix2s_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_sorbus2s_w.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_t_betula1f.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_t_picea1s.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_t_picea2s.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_t_picea3f.p3d","ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_xmastree.p3d","ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_larix3f_w.p3d","ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_larix3s_w.p3d","ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_picea2s_w.p3d","ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_picea3f_w.p3d"];
TEST_DeadTrees = ["ca\plants_pmc\tree\t_poplar2f_dead_pmc.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_poplar2f_dead_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_willow2s_dead_w.p3d","ww2\objects_m\vegetation\if_trees_m\ww2_t_poplar2f_burn.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_malus1s_burn_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_poplar2f_burn_fixedheight_w.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_poplar2f_burn_w.p3d","ca\plants2\tree\t_stub_picea.p3d","ww2\objects_m\vegetation\if_trees_m\ww2_t_stub_picea.p3d","ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_stub_picea_w.p3d","ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_stub_picea_w.p3d"];
//TEST_WheatFields = ["ww2\objects_m\misc\i44_objects_map_m\i44_crops_wheat.p3d","ww2\objects_m\misc\i44_objects_map_m\i44_crops_wheat2.p3d","ww2\objects_m\vegetation\i44_ttw_plants_m\i44_wheat.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat1_l.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat1_m.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat1_s.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat1_xl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat1_xxl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat2_l.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat2_m.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat2_s.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat2_xl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat2_xxl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat4_l.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat4_m.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat4_s.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat4_xl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat4_xxl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat5_l.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat5_m.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat5_s.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat5_xl.p3d","ww2\objects_m\vegetation\ww2_wheat_m\ww2_opx_wheat5_xxl.p3d"];
//TEST_Bocage = [];
//TEST_Haystacks = ["ww2\objects_m\vegetation\i44_plants_winter_m\i44_haystack_w.p3d","ww2\objects_m\vegetation\i44_ttw_plants_m\i44_haystack.p3d"];

///////////////////////////////////////////////////////////////////////////////

TEST_CurrentObject = objNull;
TEST_CurrentModel = "";

TEST_fnc_previewModel =
{
	TEST_CurrentModel = TEST_CurrentModels select TEST_ModelIndex;

	_pos = [100,100,5.5];


	if (!(isNull TEST_CurrentObject)) then
	{
		deleteVehicle TEST_CurrentObject;
	};

	TEST_CurrentObject = createSimpleObject [TEST_CurrentModel, _pos];

	_boundingCenter = boundingCenter TEST_CurrentObject;

	// Format [[xmin,ymin,zmin],[xmax,ymax,zmax],boundingSphereDiameter].
	_boundingBoxReal = 0 boundingBoxReal TEST_CurrentObject;
//	_boundingBoxReal = 3 boundingBoxReal TEST_CurrentObject;

	_xMin = (_boundingBoxReal select 0) select 0;
	_yMin = (_boundingBoxReal select 0) select 1;
	_zMin = (_boundingBoxReal select 0) select 2;

	_xMax = (_boundingBoxReal select 1) select 0;
	_yMax = (_boundingBoxReal select 1) select 1;
	_zMax = (_boundingBoxReal select 1) select 2;

	_boundingSphereDiameter = _boundingBoxReal select 2;

	_height = _xMax - _xMin;
	_width = _yMax - _yMin;
	_depth = _zMax - _zMin;

	_posWorld = getPosWorld TEST_CurrentObject;

	_vOffset =+ _posWorld;
	_vOffset set[2,(_vOffset # 2) * -1];

//	_sizeOf = sizeOf _className;

//	diag_log [_height,_width,_depth,_boundingSphereDiameter,_vOffset,_boundingCenter,TEST_CurrentModel];

//	TEST_CurrentObject setPos _vOffset;

	systemChat format ["%1: Height %2, Width: %3, Depth: %4, Diamater: %5",TEST_CurrentModel,_height toFixed 2,_width toFixed 2,_depth toFixed 2,_boundingSphereDiameter toFixed 2];
};

TEST_fnc_previewModels =
{
	TEST_CurrentModels = _this select 0;
	TEST_CurrentType = _this select 1;

	TEST_ModelIndex = 0;

	TEST_DEH_KeyDownMainDisplayIndex = (findDisplay 46) displayAddEventHandler["KeyDown","_this call TEST_fnc_DEH_KeyDownMainDisplay"];

	TEST_GroupOne = [];
	TEST_GroupTwo = [];
	TEST_GroupThree = [];
	TEST_GroupFour = [];
	TEST_GroupFive = [];
	TEST_GroupSix = [];
	TEST_GroupSeven = [];
	TEST_GroupEight = [];

	switch (true) do
	{
		case (TEST_CurrentModels isEqualTo TEST_Trees):
		{
			TEST_NameGroupOne = "Broadleaf - small";
			TEST_NameGroupTwo = "Broadleaf - big";
			TEST_NameGroupThree = "Broadleaf - tall";
			TEST_NameGroupFour = "Conifer - small";
			TEST_NameGroupFive = "Conifer - big";
			TEST_NameGroupSix = "Conifer - tall";
			TEST_NameGroupSeven = "Leafless";
			TEST_NameGroupEight = "";
		};
		case (TEST_CurrentModels isEqualTo TEST_DeadTrees):
		{
			TEST_NameGroupOne = "Stumps";
			TEST_NameGroupTwo = "Fallen trees";
			TEST_NameGroupThree = "Burnt tree";
			TEST_NameGroupFour = "";
			TEST_NameGroupFive = "";
			TEST_NameGroupSix = "";
			TEST_NameGroupSeven = "";
			TEST_NameGroupEight = "";
		};
		case (TEST_CurrentModels isEqualTo TEST_Bushes):
		{
			TEST_NameGroupOne = "Bush";
			TEST_NameGroupTwo = "Broadleaf";
			TEST_NameGroupThree = "Conifer";
			TEST_NameGroupFour = "Leafless";
			TEST_NameGroupFive = "";
			TEST_NameGroupSix = "";
			TEST_NameGroupSeven = "";
			TEST_NameGroupEight = "";
		};
		case (TEST_CurrentModels isEqualTo TEST_Clutters):
		{
			TEST_NameGroupOne = "Grass - small";
			TEST_NameGroupTwo = "Grass - tall";
			TEST_NameGroupThree = "Branches";
			TEST_NameGroupFour = "Fern";
			TEST_NameGroupFive = "Forest";
			TEST_NameGroupSix = "Leaves";
			TEST_NameGroupSeven = "Field";
			TEST_NameGroupEight = "Rocks";
		};
		case (TEST_CurrentModels isEqualTo TEST_WheatFields):
		{
			TEST_NameGroupOne = "Wheat";
			TEST_NameGroupTwo = "Crops";
			TEST_NameGroupThree = "";
			TEST_NameGroupFour = "";
			TEST_NameGroupFive = "";
			TEST_NameGroupSix = "";
			TEST_NameGroupSeven = "";
			TEST_NameGroupEight = "";
		};
	};

	_text = "";
	{
		_name = _x;

		if (_name != "") then
		{
			_text = _text + format ["%1 is %2 - ",_forEachIndex,_name];
		};
	} forEach [TEST_NameGroupOne,TEST_NameGroupTwo,TEST_NameGroupThree,TEST_NameGroupFour,TEST_NameGroupFive,TEST_NameGroupSix,TEST_NameGroupSeven,TEST_NameGroupEight];

	hintSilent _text;
	systemChat _text;

	[] spawn TEST_fnc_previewModel;
};

TEST_fnc_DEH_KeyDownMainDisplay =
{
	_pressedButton = _this select 1;
	_pressedShift = _this select 2;
	_pressedControl = _this select 3;
	_pressedAlt = _this select 4;

	_return = true;

	switch (_pressedButton) do
	{
		case (DIK_ESCAPE):
		{
			(findDisplay 46) displayRemoveEventHandler ["keyDown",TEST_DEH_KeyDownMainDisplayIndex];

			if (!(isNull TEST_CurrentObject)) then
			{
				deleteVehicle TEST_CurrentObject;
			};

			TEST_CurrentObject = objNull;

			_return = false;
		};

		case (DIK_1):
		{
			if (TEST_CurrentModel in TEST_GroupOne) then
			{
				TEST_GroupOne = TEST_GroupOne - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupOne];
			}
			else
			{
				TEST_GroupOne pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupOne];
			};
		};
		case (DIK_2):
		{
			if (TEST_CurrentModel in TEST_GroupTwo) then
			{
				TEST_GroupTwo = TEST_GroupTwo - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupTwo];
			}
			else
			{
				TEST_GroupTwo pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupTwo];
			};
		};
		case (DIK_3):
		{
			if (TEST_CurrentModel in TEST_GroupThree) then
			{
				TEST_GroupThree = TEST_GroupThree - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupThree];
			}
			else
			{
				TEST_GroupThree pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupThree];
			};
		};
		case (DIK_4):
		{
			if (TEST_CurrentModel in TEST_GroupFour) then
			{
				TEST_GroupFour = TEST_GroupFour - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupFour];
			}
			else
			{
				TEST_GroupFour pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupFour];
			};
		};
		case (DIK_5):
		{
			if (TEST_CurrentModel in TEST_GroupFive) then
			{
				TEST_GroupFive = TEST_GroupFive - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupFive];
			}
			else
			{
				TEST_GroupFive pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupFive];
			};
		};
		case (DIK_6):
		{
			if (TEST_CurrentModel in TEST_GroupSix) then
			{
				TEST_GroupSix = TEST_GroupSix - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupSix];
			}
			else
			{
				TEST_GroupSix pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupSix];
			};
		};
		case (DIK_7):
		{
			if (TEST_CurrentModel in TEST_GroupSeven) then
			{
				TEST_GroupSeven = TEST_GroupSeven - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupSeven];
			}
			else
			{
				TEST_GroupSeven pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupSeven];
			};
		};
		case (DIK_8):
		{
			if (TEST_CurrentModel in TEST_GroupEigh) then
			{
				TEST_GroupEight = TEST_GroupEigh - [TEST_CurrentModel];
				systemChat format ["%1 removed from %2",TEST_CurrentModel,TEST_NameGroupEight];
			}
			else
			{
				TEST_GroupEight pushBack TEST_CurrentModel;
				systemChat format ["%1 added to %2",TEST_CurrentModel,TEST_NameGroupEight];
			};
		};

		case (DIK_RIGHT): // next item
		{
			TEST_ModelIndex = TEST_ModelIndex + 1;

			if ((TEST_ModelIndex >= (count TEST_CurrentModels) - 1)) then
			{
				TEST_ModelIndex = (count TEST_CurrentModels) - 1;

				(findDisplay 46) displayRemoveEventHandler ["keyDown",TEST_DEH_KeyDownMainDisplayIndex];

				TEST_CurrentObject = objNull;
				TEST_CurrentModel = "";

				{
					_groupPair = _x;

					_name = _groupPair select 0;
					_models = _groupPair select 1;

					diag_log ["---",_name,"---"];

					{
						diag_log [_x];
					} forEach _models;
				} forEach [[TEST_NameGroupOne,TEST_GroupOne],[TEST_NameGroupTwo,TEST_GroupTwo],[TEST_NameGroupThree,TEST_GroupThree],[TEST_NameGroupFour,TEST_GroupFour],[TEST_NameGroupFive,TEST_GroupFive],[TEST_NameGroupSix,TEST_GroupSix],[TEST_NameGroupSeven,TEST_GroupSeven],[TEST_NameGroupEight,TEST_GroupEight]];

//				diag_log [TEST_NameGroupOne,TEST_GroupOne];
//				diag_log [TEST_NameGroupTwo,TEST_GroupTwo];
//				diag_log [TEST_NameGroupThree,TEST_GroupThree];
//				diag_log [TEST_NameGroupFour,TEST_GroupFour];
//				diag_log [TEST_NameGroupFive,TEST_GroupFive];
//				diag_log [TEST_NameGroupSix,TEST_GroupSix];
//				diag_log [TEST_NameGroupSeven,TEST_GroupSeven];
//				diag_log [TEST_NameGroupEight,TEST_GroupEight];

				systemChat format ["Completed %1",TEST_CurrentType];
			}
			else
			{
				[] spawn TEST_fnc_previewModel;
			};
		};
		case (DIK_LEFT): // previous item
		{
			TEST_ModelIndex = TEST_ModelIndex - 1;

			if (TEST_ModelIndex < 0) then {TEST_ModelIndex = 0;};

			[] spawn TEST_fnc_previewModel;

			_return = false;
		};
	};

	_return;
};

///////////////////////////////////////////////////////////////////////////////

_radio = createTrigger ["EmptyDetector",[0,0]];
_radio setTriggerActivation ["Alpha","PRESENT",true];
_radio setTriggerStatements ["this","[TEST_Trees,'trees'] spawn TEST_fnc_previewModels;",""];
1 setRadioMsg "Trees";

_radio = createTrigger ["EmptyDetector",[0,0]];
_radio setTriggerActivation ["Bravo","PRESENT",true];
_radio setTriggerStatements ["this","[TEST_DeadTrees,'dead trees'] spawn TEST_fnc_previewModels;",""];
2 setRadioMsg "Dead Trees";

_radio = createTrigger ["EmptyDetector",[0,0]];
_radio setTriggerActivation ["Charlie","PRESENT",true];
_radio setTriggerStatements ["this","[TEST_Bushes,'bushes'] spawn TEST_fnc_previewModels;",""];
3 setRadioMsg "Bushes";

_radio = createTrigger ["EmptyDetector",[0,0]];
_radio setTriggerActivation ["Delta","PRESENT",true];
_radio setTriggerStatements ["this","[TEST_Clutters,'clutters'] spawn TEST_fnc_previewModels;",""];
4 setRadioMsg "Clutter";

//_radio = createTrigger ["EmptyDetector",[0,0]];
//_radio setTriggerActivation ["Echo","PRESENT",true];
//_radio setTriggerStatements ["this","[TEST_Bocage] spawn TEST_fnc_previewModels;",""];
//5 setRadioMsg "Bocage";
//
//_radio = createTrigger ["EmptyDetector",[0,0]];
//_radio setTriggerActivation ["Foxtrot","PRESENT",true];
//_radio setTriggerStatements ["this","[TEST_WheatFields] spawn TEST_fnc_previewModels;",""];
//6 setRadioMsg "Wheat Fields";
//
//_radio = createTrigger ["EmptyDetector",[0,0]];
//_radio setTriggerActivation ["Golf","PRESENT",true];
//_radio setTriggerStatements ["this","[TEST_Haystacks] spawn TEST_fnc_previewModels;",""];
//7 setRadioMsg "Haystacks";
//
//_radio = createTrigger ["EmptyDetector",[0,0]];
//_radio setTriggerActivation ["Hotel","PRESENT",true];
//_radio setTriggerStatements ["this","[TEST_Rocks] spawn TEST_fnc_previewModels;",""];
//8 setRadioMsg "Rocks";
//
//_radio = createTrigger ["EmptyDetector",[0,0]];
//_radio setTriggerActivation ["Juliet","PRESENT",true];
//_radio setTriggerStatements ["this","[] spawn TEST_fnc_previewModels;",""];
//10 setRadioMsg "XXX";

//_x call _previewModel;

player setPos  [100,90,0];

_text = "Use radio menu 0-0-X to select the vegetation type";

hintSilent _text;
systemChat _text;
