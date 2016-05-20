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

BIS_ItemsToCreate = [];

BIS_EditorObjectsFromSheet = [];
