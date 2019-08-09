///////////////////////////////////////////////////////////////////////////////

#include "\a3\ui_f\hpp\definedikcodes.inc"

_vehiclesRootClass = "CfgVehicles";

enableSaving [false,false];

TEST_Rocks = [];
TEST_Clutters = [];
TEST_Bushes = [];
TEST_Trees = [];
TEST_DeadTrees = [];
TEST_WheatFields = [];
TEST_Bocage = [];
TEST_Haystacks = [];

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
					case ((_model find "a3\rocks_f\") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "a3\rocks_f_argo\limestone\") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "a3\rocks_f_enoch\") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "a3\rocks_f_enoch\rm_") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "a3\rocks_f_exp\cliff\") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "a3\rocks_f_exp\lavastones\") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "ca\rocks\") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "ca\rocks_e\r_") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "ca\rocks_e\r_tk_") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "ca\rocks2\r2_") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_objects\s_r_tk_") != -1): {TEST_Rocks pushBack _className;};
					case ((_model find "ww2\objects_m\misc\jns_snow_objects_m\rocks\ww2_jns_r_tk_") != -1): {TEST_Rocks pushBack _className;};

					case ((_model find "a3\plants_f\clutter\c_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\clutter\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\clutter\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants\clutter_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants_e\clutter\c_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants_e\plant\p_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants_e2\clutter\c_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants_e2\plants\p_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants_pmc\clutter\c_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants_pmc\plant\p_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants2\clutter\c_") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ca\plants2\plant\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\clutter\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_weeds") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_mikebart_m\clutter\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_clutters_m\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_clutterswinter_m\") != -1): {TEST_Clutters pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\clutter\") != -1): {TEST_Clutters pushBack _className;};

					case ((_model find "a3\plants_f\bush\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "a3\plants_f\bush\bw_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_argo\bushes\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\bush\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\crop\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\crop\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\shrub\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ca\plants_e\bush\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ca\plants_e2\bush\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ca\plants_pmc\bush\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ca\plants2\bush\b_") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\bushes\") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_bush") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_mikebart_m\bushes\") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\bush\") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_bush_small_1_w.p3d") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_bushes_m\") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_busheswinter_m\") != -1): {TEST_Bushes pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rau_plants2winter_m\bushes\") != -1): {TEST_Bushes pushBack _className;};

					case ((_model find "a3\plants_f\plant\p_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "a3\plants_f\tree\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "a3\vegetation_f_argo\trees\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "a3\vegetation_f_enoch\tree\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\crop\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\lianas\d_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\tree\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ca\plants\") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ca\plants_e\tree\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ca\plants_e2\tree\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ca\plants2\tree\t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\trees\cup_b_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\trees\cup_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\trees\s_xmastree.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt1.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt1a.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt1p.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_hrt3.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_tree_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_vine_fence_m\i44_vine") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_forest_m\i44_forest_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_mikebart_m\trees\i44_mb_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_hrt1_w.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_smrk_siroky_w.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_1_down_w.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_1_w.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\i44_tree_oak_sapling_1_w.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plants_winter_m\tree\i44_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_plr_trees_m\i44_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_trees_m\ww2_str_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_trees_m\ww2_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_treeswinter_m\ww2_str_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_treeswinter_m\ww2_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\trees\ww2_jns_xmastree.p3d") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_cup_plants_m\ww2_cup_palm") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rau_plants2winter_m\trees\ww2_rau_t_") != -1): {TEST_Trees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rjw_normandy_m\trees\") != -1): {TEST_Trees pushBack _className;};

					case ((_model find "a3\vegetation_f_enoch\tree\d_") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "a3\vegetation_f_exp\treeparts\d_") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_e\misc\misc_trunk_torzo_ep1.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_e\misc\misc_trunk_water_ep1.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_brokenspruce_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_burnspruce_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_fallenspruce_1xtrunk_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_fallenspruce_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_fallentrunk_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_stubleafs_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\misc\misc_torzotree_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\tree\t_poplar2f_dead_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants_pmc\tree\t_willow2s_dead_pmc.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_fallenspruce.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_fallentree1.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_fallentree2.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_stub1.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_stub2.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_trunk_torzo.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ca\plants2\misc\misc_trunk_water.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "cca\plants2\misc\misc_fallenspruce.p3d") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "cup\terrains\cup_terrains_winter_plants\dead\") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_burnt_m\") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_misc_m\") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\if_miscwinter_m\") != -1): {TEST_DeadTrees pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\jns_snow_objects_m\deadtrees\") != -1): {TEST_DeadTrees pushBack _className;};

					case ((_model find "ca\plants_e\plant\p_wheat_ep1.p3d") != -1): {TEST_WheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_crops_wheat.p3d") != -1): {TEST_WheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_objects_map_m\i44_crops_wheat2.p3d") != -1): {TEST_WheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\i44_ttw_plants_m\i44_wheat.p3d") != -1): {TEST_WheatFields pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_wheat_m\") != -1): {TEST_WheatFields pushBack _className;};

					case ((_model find "ww2\objects_m\vegetation\ww2_rjw_normandy_m\bocage\") != -1): {TEST_Bocage pushBack _className;};
					case ((_model find "ww2\objects_m\vegetation\ww2_rjw_normandy_m\earth_mounds\") != -1): {TEST_Bocage pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_mcn_objects_m\i44_hedge") != -1): {TEST_Bocage pushBack _className;};
					case ((_model find "ww2\objects_m\misc\i44_mcn_winterobjects_m\i44_whedge") != -1): {TEST_Bocage pushBack _className;};

					case ((_model find "ca\buildings\misc\Stoh.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "ca\misc\seno_balik.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "ca\structures\misc\misc_haystack\misc_haystack.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\CUP_BuildingsWinter_m\misc\CUP_Stoh_w.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_Buildings_m\Props\WW2_Haystack.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_Buildings_m\Props\WW2_Haystack_low.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_BuildingsWinter_m\Props\WW2_Haystack_low_w.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Structures\IF_BuildingsWinter_m\Props\WW2_Haystack_w.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Vegetation\I44_Plants_Winter_m\I44_Haystack_w.p3d") != -1): {TEST_Haystacks pushBack _className;};
					case ((_model find "WW2\Objects_m\Vegetation\I44_TTW_Plants_m\I44_haystack.p3d") != -1): {TEST_Haystacks pushBack _className;};

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
