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

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_I44_Misc_Hedge1","Land_I44_Misc_Hedge2","Land_I44_Misc_Whedge1","Land_I44_Misc_Whedge2"];

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Hedgerows","LIB_B_Hedgerows_big","LIB_B_Hedgerows_new"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Hedgerows_w","LIB_B_Hedgerows_big_w","LIB_B_Hedgerows_new_w"];

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","rjw_HedgeWithFoliage_3","rjw_HedgeWithFoliage_2","rjw_HedgeWithFoliage"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","rjw_BocageImpassable"];
//BIS_ItemsToCreate = BIS_ItemsToCreate + ["","Land_rjw_EarthMound_Bocage1","Land_rjw_EarthMound_Bocage2","Land_rjw_EarthMound_Bocage3","Land_rjw_EarthMound_Bocage4","Land_rjw_EarthMound_Bocage5","Land_rjw_EarthMound_Bocage6"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","RJW_Bocage_1","RJW_Bocage_1_Lighter","RJW_Bocage_2","RJW_Bocage_2_Lighter","RJW_Bocage_3","RJW_Bocage_3_Lighter","RJW_Bocage_4","RJW_Bocage_4_Lighter","RJW_Bocage_5","RJW_Bocage_5_Lighter","RJW_Bocage_Tree","RJW_Bocage_Tree_Lighter","RJW_Bocage_Tree_2","RJW_Bocage_Tree_2_Lighter"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","rjw_Mb_B_Ulmus","rjw_Mb_B_Ulmus2","rjw_oak","rjw_oak2"];//,"Land_rjw_EarthMound_Wall1","Land_rjw_EarthMound_Wall2","Land_rjw_EarthMound_Wall3"];


BIS_EditorObjectsFromSheet = [];
