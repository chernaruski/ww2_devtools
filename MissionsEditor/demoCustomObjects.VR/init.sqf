//Add classes:
Test_ObjectsToCreate = [];//"SampleA","SampleB"

//////////////////////////////////////

startLoadingScreen ["Wait",""];

setViewDistance 3000;
setObjectViewDistance 3000;

_radioTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioTrigger setTriggerActivation ["JULIET","PRESENT",true];
_radioTrigger setTriggerStatements ["this",'["Paste",[worldName,getPos player,getDir player,0.7,[0,0],0,0,855.569,0.3,1]] call bis_fnc_camera;',""];
(10) setRadioMsg "Camera";

test_fn_createEditorObjects = compile preprocessFileLineNumbers "createEditorObjects.sqf";

call test_fn_createEditorObjects;

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

