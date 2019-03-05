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

BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Cemetery_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Wrecks_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Poles_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Fences_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Walls_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Wire_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_TankBarrier_base_F") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_BagFence_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Military_Trenches_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Military_Fortifications_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Military_Bunker_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Military_CamoNets_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Tents_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});
BIS_ItemsToCreate = BIS_ItemsToCreate + [""] + ('((configName _x) isKindOf "LIB_Objects_Environment_Other_Craters_base") && (getNumber (configfile >> "CfgVehicles" >> (configName _x) >> "scope") > 1)' configClasses (configFile >> "CfgVehicles") apply {configName _x});

{
	diag_log _x;
} forEach BIS_ItemsToCreate;

BIS_EditorObjectsFromSheet = [];
