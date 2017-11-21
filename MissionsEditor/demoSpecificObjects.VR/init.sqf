startLoadingScreen ["Wait",""];

setViewDistance 3000;
setObjectViewDistance 3000;

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["ALPHA","PRESENT",true];
_radioTrigger setTriggerStatements ["this","if (Test_IsWinter) then {Test_IsWinter = false;} else {Test_IsWinter = true;};",""];
(1) setRadioMsg "Toggle Winter type";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Environment_Clutter_base']] call test_fn_createEditorObjects;",""];
(2) setRadioMsg "Clutter";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["CHARLIE","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Environment_Vegetation_base']] call test_fn_createEditorObjects;",""];
(3) setRadioMsg "Vegetation";
//LIB_Objects_Environment_Vegetation_Bushes_base
//LIB_Objects_Environment_Vegetation_Crops_base
//LIB_Objects_Environment_Plant_base
//LIB_Objects_Environment_Shrub_base
//LIB_Objects_Environment_Vegetation_Trees_base
//LIB_Objects_Environment_Vegetation_Burnt_base
//LIB_Objects_Environment_Vegetation_DeadTrees_base
//LIB_Objects_Environment_Vegetation_Misc_base
//LIB_Objects_Environment_Vegetation_Wheat_base
//LIB_Objects_Environment_Vegetation_Hedgerows_base
//LIB_Objects_Environment_Vegetation_Bocage_base

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["DELTA","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Environment_Stones_Rocks_base']] call test_fn_createEditorObjects;",""];
(4) setRadioMsg "Stones";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["ECHO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Environment_Other_Ponds_base']] call test_fn_createEditorObjects;",""];
(5) setRadioMsg "Ponds";


_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["FOXTROT","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Structures_Churches_base','LIB_Objects_Structures_Buildings_base','LIB_Objects_Structures_SmallBuildings_base','LIB_Objects_Structures_Castle_base','LIB_Objects_Structures_Misc_base','LIB_Objects_Structures_Shed_base'],50] call test_fn_createEditorObjects;",""];
(6) setRadioMsg "Structures (Churches,Buildings,SmallBuildings,Castle,Misc,Shed)";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["GOLF","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Military_Bunker_base','LIB_Objects_Military_Fortifications_base','LIB_Objects_Military_CamoNets_base','LIB_Objects_Military_Trenches_base'],50] call test_fn_createEditorObjects;",""];
(7) setRadioMsg "Military (Bunker,Fortifications,CamoNets,Trenches)";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["HOTEL","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Environment_Other_Craters_base','LIB_Objects_Ruins_base']] call test_fn_createEditorObjects;",""];
(8) setRadioMsg "Craters,Ruins";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["INDIA","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Walls_base']] call test_fn_createEditorObjects;",""];
(9) setRadioMsg "Walls";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["JULIET","PRESENT",true];
_radioTrigger setTriggerStatements ["this",'["Paste",[worldName,getPos player,getDir player,0.7,[0,0],0,0,855.569,0.3,1]] call bis_fnc_camera;',""];
(10) setRadioMsg "Camera";

/*
_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["JULIET","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Signs_base','LIB_Objects_Signs_Billboards_base','LIB_Objects_Signs_Military_base','LIB_Objects_Signs_Towns_base']] call test_fn_createEditorObjects;",""];
() setRadioMsg "Signs";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["JULIET","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Misc_Lamps_base','LIB_Objects_Misc_Things_base']] call test_fn_createEditorObjects;",""];
() setRadioMsg "Lamps,Things";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Misc_NonStrategic_base']] call test_fn_createEditorObjects;",""];
() setRadioMsg "NonStrategic";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Scenery_base']] call test_fn_createEditorObjects;",""];
() setRadioMsg "Scenery";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Pathway_Bridges_base','LIB_Objects_Pathway_Streets_base','LIB_Objects_Pathway_Railways_base','LIB_Objects_Pathway_SideWalks_base']] call test_fn_createEditorObjects;",""];
() setRadioMsg "Pathway (Bridges,Streets,Railways,SideWalks)";

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioTrigger setTriggerStatements ["this","[['LIB_Objects_Wrecks_base']] call test_fn_createEditorObjects;",""];
() setRadioMsg "Wrecks";
*/





test_fn_createObjectList = compile preprocessFileLineNumbers "createObjectList.sqf";
test_fn_createEditorObjects = compile preprocessFileLineNumbers "createEditorObjects.sqf";

Test_CreatedObjects = [];

Test_IsWinter = false;

Test_PositionSourceX = 500;
Test_PositionSourceY = 500;
Test_ObjectDistance = 25;

player setPos [Test_PositionSourceX - Test_ObjectDistance,Test_PositionSourceY - Test_ObjectDistance,0];
player allowDamage false;

Test_PlayerVehicle = createVehicle ["B_MBT_01_cannon_F",[Test_PositionSourceX - 2 * Test_ObjectDistance,Test_PositionSourceY - 2 * Test_ObjectDistance,0],[],0,"NONE"];
Test_PlayerVehicle allowDamage false;

player enableFatigue false;

player onMapSingleClick "if (_alt) then {player setPosATL _pos}";

setAccTime 4;

endLoadingScreen;

