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
BIS_ObjectDistance = 50;

player setPos [BIS_PositionSourceX - BIS_ObjectDistance,BIS_PositionSourceY - BIS_ObjectDistance,0];
player allowDamage false;

BIS_PlayerVehicle = createVehicle ["B_MBT_01_cannon_F",[BIS_PositionSourceX - 2 * BIS_ObjectDistance,BIS_PositionSourceY - 2 * BIS_ObjectDistance,0],[],0,"NONE"];
BIS_PlayerVehicle allowDamage false;

setAccTime 4;

BIS_ItemsToCreate = [];
BIS_ItemsToCreate =
[
//	"Land_Bridge_01_PathLod_F","Land_Bridge_Asphalt_PathLod_F","Land_Bridge_Concrete_PathLod_F","Land_Bridge_HighWay_PathLod_F",
	"Land_Obstacle_Bridge_F","Land_Obstacle_Ramp_F","Land_prebehlavka","CUP_A2_Road_Bridge_wood_25","CUP_A2_Road_PMC_bridge_asf_PMC","CUP_Winter_rails_bridge_40","Land_Ind_SiloVelke_most","Land_rails_bridge_40","FootBridge_0_ACR","FootBridge_30_ACR","Land_BridgeSea_01_pillar_F","Land_BridgeWooden_01_pillar_F","Land_Canal_Dutch_01_bridge_F","CUP_A2_bridge_asf_pmc","CUP_A2_bridge_asf1_25","CUP_A2_bridge_stone_asf2_25","CUP_A2_bridge_wood_25","CUP_A2_rails_bridge_40","Land_WW2_Ponton_Apparel1","Land_WW2_Ponton_Bridge","Land_WW2_Ponton_Apparel1_w","Land_WW2_Ponton_Bridge_w","Land_WW2_Pegasus_Bridge","Land_WW2_Ranville_Bridge","Land_I44_Misc_Old_Bridge","WW2_JNS_Rails_Bridge_40",

	"Land_Bridge_01_F","Land_Bridge_Asphalt_F","Land_Bridge_Concrete_F","Land_Bridge_HighWay_F","Land_Pier_doubleside_F","Land_Bridge_stone_asf2_25","Land_BridgeConcrete_01_F","Land_BridgeSea_01_F","Land_BridgeSea_01_ramp_down_F","Land_BridgeSea_01_ramp_F","Land_BridgeSea_01_ramp_up_F","Land_BridgeWooden_01_F"//CfgNonAIVehicles
];

BIS_SimpleObjets = [];
//BIS_SimpleObjets =
//[
//	"A3\Structures_F\Bridges\Bridge_01_PathLod_F.p3d","A3\Structures_F\Bridges\Bridge_Asphalt_PathLod_F.p3d","A3\Structures_F\Bridges\Bridge_Concrete_PathLod_F.p3d","A3\Structures_F\Bridges\Bridge_HighWay_PathLod_F.p3d",
//	"A3\Structures_F\Training\Obstacle_Bridge_F.p3d","A3\Structures_F\Training\Obstacle_Ramp_F.p3d","ca\misc\prebehlavka.p3d","ca\roads2\bridge\bridge_asf1_25.p3d","ca\roads2\bridge\Bridge_wood_25.p3d","ca\roads_pmc\Bridge\bridge_asf_PMC.p3d","cup\terrains\cup_terrains_winter_objects\Railway\wc_rails_bridge_40.p3d","CA\buildings2\Ind_CementWorks\Ind_SiloVelke\Ind_SiloVelke_most.p3d","Ca\Structures\Rail\Railway\rails_bridge_40.p3d","Ca\Misc_ACR\ScaffoldingSmall\Misc_Crossing0st.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_pillar_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeWooden_01_pillar_F.p3d","A3\Structures_F_Exp\Naval\Canals\Canal_Dutch_01_bridge_F.p3d","ca\roads_pmc\bridge\bridge_asf_pmc.p3d","ca\roads2\bridge\bridge_asf1_25.p3d","ca\roads2\bridge\bridge_stone_asf2_25.p3d","ca\roads2\bridge\bridge_wood_25.p3d","WW2\Objects_m\Structures\IF_Ponton_m\WW2_Ponton_Apparel1.p3d","WW2\Objects_m\Structures\IF_Ponton_m\WW2_Ponton_Bridge.p3d","WW2\Objects_m\Structures\IF_PontonWinter_m\WW2_Ponton_Apparel1_w.p3d","WW2\Objects_m\Structures\IF_PontonWinter_m\WW2_Ponton_Bridge_w.p3d","WW2\Objects_m\Structures\WW2_Pegasus_Bridge_m\WW2_Pegasus_Bridge.p3d","WW2\Objects_m\Structures\WW2_Pegasus_Bridge_m\WW2_Ranville_Bridge.p3d","WW2\Objects_m\Misc\I44_TTW1_Objects_m\I44_old_bridge.p3d","WW2\Objects_m\Misc\JNS_Snow_Objects_m\Railway\WW2_JNS_Rails_Bridge_40.p3d",
//CfgNonAIVehicles
//	"A3\Structures_F\Bridges\Bridge_01_F.p3d","A3\Structures_F\Bridges\Bridge_Asphalt_F.p3d","A3\Structures_F\Bridges\Bridge_Concrete_F.p3d","A3\Structures_F\Bridges\Bridge_HighWay_F.p3d","A3\Structures_F\Naval\Piers\Pier_doubleside_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeConcrete_01_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_down_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeSea_01_ramp_up_F.p3d","A3\Structures_F_Exp\Infrastructure\Bridges\BridgeWooden_01_F.p3d"
//
//];

BIS_EditorObjectsFromSheet = [];
