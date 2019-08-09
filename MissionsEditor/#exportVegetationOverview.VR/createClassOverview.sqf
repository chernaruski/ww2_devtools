TEST_exportToWiki = false;
TEST_exportToWiki = true;

///////////////////////////////////////////////////////////////////////////////


_vehiclesRootClass = "CfgVehicles";

_rocks = [];
_clutters = [];
_bushes = [];
_trees = [];
_deadTrees = [];
_wheatFields = [];
_bocage = [];
_haystacks = [];

for "_i" from (0) to ((count(configFile/_vehiclesRootClass)) - 1) do
{
	_class = (configFile/_vehiclesRootClass) select _i;

	if (isClass _class) then
	{
		_scope = getNumber(_class/"scope");
		_model = toLower getText(_class/"model");

		if ((_scope >= 1) && (_model != "")) then
		{
			_className = configName _class;

			_displayNameEmpty = ((getText (_class/"displayName")) == "");
//			_ModelArray = [toLower _model];

			if ((_className isKindOf "Static") /* && {!(_displayNameEmpty)} */) then
			{
				switch (true) do
				{
					case ((_model find "a3\rocks_f\") != -1): {_rocks pushBack _className;};
					case ((_model find "a3\rocks_f_argo\limestone\") != -1): {_rocks pushBack _className;};
					case ((_model find "a3\rocks_f_enoch\") != -1): {_rocks pushBack _className;};
					case ((_model find "a3\rocks_f_enoch\rm_") != -1): {_rocks pushBack _className;};
					case ((_model find "a3\rocks_f_exp\cliff\") != -1): {_rocks pushBack _className;};
					case ((_model find "a3\rocks_f_exp\lavastones\") != -1): {_rocks pushBack _className;};
					case ((_model find "ca\rocks\") != -1): {_rocks pushBack _className;};
					case ((_model find "ca\rocks_e\r_") != -1): {_rocks pushBack _className;};
					case ((_model find "ca\rocks_e\r_tk_") != -1): {_rocks pushBack _className;};
					case ((_model find "ca\rocks2\r2_") != -1): {_rocks pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_objects\s_r_tk_") != -1): {_rocks pushBack _className;};
					case ((_model find "ww2\objects_m\misc\jns_snow_objects_m\rocks\ww2_jns_r_tk_") != -1): {_rocks pushBack _className;};

					case ((_model find "a3\plants_f\clutter\c_") != -1): {_clutters pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\clutter\") != -1): {_clutters pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\clutter\") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants\clutter_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants_e\clutter\c_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants_e\plant\p_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants_e2\clutter\c_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants_e2\plants\p_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants_pmc\clutter\c_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants_pmc\plant\p_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants2\clutter\c_") != -1): {_clutters pushBack _className;};
					case ((_model find "ca\plants2\plant\") != -1): {_clutters pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\clutter\") != -1): {_clutters pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_weeds") != -1): {_clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_mikebart_m\clutter\") != -1): {_clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_clutters_m\") != -1): {_clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_clutterswinter_m\") != -1): {_clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\clutter\") != -1): {_clutters pushBack _className;};

					case ((_model find "a3\plants_f\bush\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "a3\plants_f\bush\bw_") != -1): {_bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_argo\bushes\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\bush\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\crop\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\crop\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\shrub\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "ca\plants_e\bush\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "ca\plants_e2\bush\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "ca\plants_pmc\bush\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "ca\plants2\bush\b_") != -1): {_bushes pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\bushes\") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_bush") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_mikebart_m\bushes\") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\bush\") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_bush_small_1_w.p3d") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_bushes_m\") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_busheswinter_m\") != -1): {_bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rau_plants2winter_m\bushes\") != -1): {_bushes pushBack _className;};

					case ((_model find "a3\plants_f\plant\p_") != -1): {_trees pushBack _className;};
					case ((_model find "a3\plants_f\tree\t_") != -1): {_trees pushBack _className;};
					case ((_model find "a3\vegetation_f_argo\trees\t_") != -1): {_trees pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\tree\t_") != -1): {_trees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\crop\t_") != -1): {_trees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\lianas\d_") != -1): {_trees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\tree\t_") != -1): {_trees pushBack _className;};
					case ((_model find "ca\plants\") != -1): {_trees pushBack _className;};
					case ((_model find "ca\plants_e\tree\t_") != -1): {_trees pushBack _className;};
					case ((_model find "ca\plants_e2\tree\t_") != -1): {_trees pushBack _className;};
					case ((_model find "ca\plants2\tree\t_") != -1): {_trees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\trees\cup_b_") != -1): {_trees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\trees\cup_t_") != -1): {_trees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\trees\s_xmastree.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt1.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt1a.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt1p.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt3.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_tree_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_vine_fence_m\i44_vine") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_forest_m\i44_forest_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_mikebart_m\trees\i44_mb_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_hrt1_w.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_smrk_siroky_w.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_1_down_w.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_1_w.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_sapling_1_w.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\tree\i44_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_trees_m\ww2_str_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_trees_m\ww2_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_treeswinter_m\ww2_str_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_xmastree.p3d") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_cup_plants_m\ww2_cup_palm") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_") != -1): {_trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rjw_normandy_m\trees\") != -1): {_trees pushBack _className;};

					case ((_model find "a3\vegetation_f_enoch\tree\d_") != -1): {_deadTrees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\treeparts\d_") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_e\misc\misc_trunk_torzo_ep1.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_e\misc\misc_trunk_water_ep1.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_brokenspruce_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_burnspruce_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_fallenspruce_1xtrunk_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_fallenspruce_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_fallentrunk_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_stubleafs_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_torzotree_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\tree\t_poplar2f_dead_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\tree\t_willow2s_dead_pmc.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_fallenspruce.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_fallentree1.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_fallentree2.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_stub1.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_stub2.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_trunk_torzo.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_trunk_water.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "cca\plants2\misc\misc_fallenspruce.p3d") != -1): {_deadTrees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\dead\") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_burnt_m\") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_misc_m\") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_miscwinter_m\") != -1): {_deadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\deadtrees\") != -1): {_deadTrees pushBack _className;};

					case ((_model find "ca\plants_e\plant\p_wheat_ep1.p3d") != -1): {_wheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_crops_wheat.p3d") != -1): {_wheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_crops_wheat2.p3d") != -1): {_wheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_ttw_plants_m\i44_wheat.p3d") != -1): {_wheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_wheat_m\") != -1): {_wheatFields pushBack _className;};

					case ((_model find "ww2\objects_m\vegetation\ww2_rjw_normandy_m\bocage\") != -1): {_bocage pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rjw_normandy_m\earth_mounds\") != -1): {_bocage pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_mcn_objects_m\i44_hedge") != -1): {_bocage pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_mcn_winterobjects_m\i44_whedge") != -1): {_bocage pushBack _className;};

					case ((_model find "ca\buildings\misc\Stoh.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "ca\misc\seno_balik.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "ca\structures\misc\misc_haystack\misc_haystack.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\CUP_BuildingsWinter_m\misc\CUP_Stoh_w.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_Buildings_m\Props\WW2_Haystack.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_Buildings_m\Props\WW2_Haystack_low.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_BuildingsWinter_m\Props\WW2_Haystack_low_w.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_BuildingsWinter_m\Props\WW2_Haystack_w.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Vegetation\I44_Plants_Winter_m\I44_Haystack_w.p3d") != -1): {_haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Vegetation\I44_TTW_Plants_m\I44_haystack.p3d") != -1): {_haystacks pushBack _className;};

					default
					{
//						diag_log [_model];
					};
				};
//				_vehicleClasses pushBack _className;
			};
		};
	};
};

_previewModel =
{
	params ["_model"];

	_pos = [10,10,10];

	_object = createSimpleObject [_model, _pos];

	_boundingCenter = boundingCenter _object;

	// Format [[xmin,ymin,zmin],[xmax,ymax,zmax],boundingSphereDiameter].
	_boundingBoxReal = 0 boundingBoxReal _object;
//	_boundingBoxReal = 3 boundingBoxReal _object;

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

	_posWorld = getPosWorld _object;
	_vOffset =+ _posWorld;
	_vOffset set[2,(_vOffset # 2) * -1];

//	_sizeOf = sizeOf _className;

	diag_log [_height,_width,_depth,_boundingSphereDiameter,_vOffset,_boundingCenter,_model];

	deleteVehicle _object;
};

{
	_x call _previewModel;
//} forEach _rocks;
//} forEach _clutters;
//} forEach _bushes;
} forEach _trees;
//} forEach _deadTrees;
//} forEach _wheatFields;
//} forEach _bocage;
//} forEach _haystacks;
