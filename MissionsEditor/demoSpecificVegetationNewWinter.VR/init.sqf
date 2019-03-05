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

BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Betulahumilis_w_half","LIB_B_Canina2s_w_half","LIB_B_Corylus_w_half","LIB_B_Corylus2s_w_half","LIB_B_Craet1_w_half","LIB_B_Craet2_w_half","LIB_B_Prunus_w_half","LIB_B_Salix2s_w_half","LIB_B_Sambucus_w_half"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_B_Betulahumilis_w_dead","LIB_B_Canina2s_w_dead","LIB_B_Corylus2s_w_dead","LIB_B_Craet1_w_dead","LIB_B_Craet2_w_dead"];
BIS_ItemsToCreate = BIS_ItemsToCreate + ["","LIB_T_Acer2s_w_leaf","LIB_T_Acer2se_w_leaf","LIB_T_Alnus2s_w_leaf","LIB_T_Betula1f_w_leaf","LIB_T_Betula2f_w_leaf","LIB_T_Betula2s_w_leaf","LIB_T_Betula2w_w_leaf","LIB_T_Carpinus2s_w_leaf","LIB_T_Elm_DLC_w_leaf","LIB_T_Fagus2s_w_leaf","LIB_T_Fagus2w_w_leaf","LIB_T_Fraxinus2s_w_leaf","LIB_T_Fraxinus2w_w_leaf","LIB_T_Fraxinus2ws_w_leaf","LIB_T_Habr_w_leaf"];


BIS_EditorObjectsFromSheet = [];
