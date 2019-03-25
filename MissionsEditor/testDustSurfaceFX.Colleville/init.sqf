TEST_IncludedVehicleTypes = [];
TEST_IncludedFactions = ["LIB_ACI","LIB_ARR","LIB_CIV","LIB_DAK","LIB_FFI","LIB_FSJ","LIB_GUER","LIB_LUFTWAFFE","LIB_LUFTWAFFE_w","LIB_MKHL","LIB_NAC","LIB_NKVD","LIB_PANZERWAFFE","LIB_PANZERWAFFE_w","LIB_RAAF","LIB_RAF","LIB_RBAF","LIB_RKKA","LIB_RKKA_w","LIB_UK_AB","LIB_UK_AB_W","LIB_UK_ARMY","LIB_UK_ARMY_W","LIB_UK_DR","LIB_US_101AB","LIB_US_82AB","LIB_US_AIRFORCE","LIB_US_AIRFORCE_w","LIB_US_ARMY","LIB_US_ARMY_w","LIB_US_RANGERS","LIB_US_TANK_TROOPS","LIB_US_TANK_TROOPS_w","LIB_USSR_AIRFORCE","LIB_USSR_AIRFORCE_w","LIB_USSR_TANK_TROOPS","LIB_USSR_TANK_TROOPS_w","LIB_WEHRMACHT","LIB_WEHRMACHT_w","SG_STURM","SG_STURM_w","SG_STURMPANZER"];
TEST_IncludeWinterType = false;

//startLoadingScreen ["WAIT",""];
Test_Vehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

TEST_VehicleIndex = 0;
TEST_CurrentVehicle = objNull;
TEST_CurrentVehicleType = "";

player allowDamage false;

Test_fnc_prepareNewVehicle =
{
	_vehicle = _this select 0;

	sleep 0.1;

	_vehicle allowDamage false;

	_positionPlayer = getPos player;

	_vehicle setDir (player getVariable ["Test_Direction",0]);

	player moveInDriver _vehicle;

	player setDir (player getVariable ["Test_Direction",0]);

	player action ["engineOn",_vehicle];

	_vehicle setPos _positionPlayer;

//	sleep 0.1;
//	_vehicle setVelocity (player getVariable ["Test_Velocity",[0,0,0]]);
};

TEST_GetIntoNextVehicle =
{
	if (TEST_VehicleIndex > (count Test_Vehicles)) exitWith {endMission "END1";};

	_vehicle = vehicle player;

	player setVariable ["Test_Direction",getDir _vehicle];
	player setVariable ["Test_Velocity",velocity _vehicle];

	if (player != _vehicle) then
	{
		moveOut player;

		deleteVehicle _vehicle;
	};

	TEST_CurrentVehicleType = Test_Vehicles select TEST_VehicleIndex;

	TEST_CurrentVehicle = createVehicle [TEST_CurrentVehicleType,position player,[],0,"NONE"];

	[TEST_CurrentVehicle] spawn Test_fnc_prepareNewVehicle;
	
	TEST_VehicleIndex = TEST_VehicleIndex + 1;
};

player addAction ["Next vehicle","[] spawn TEST_GetIntoNextVehicle",nil,9999,true,false,"gear"];
player addAction ["Log buggy vehicle","diag_log ['Buggy surface FX for: ',TEST_CurrentVehicleType]; hint format ['Logged: %1',TEST_CurrentVehicleType]",nil,9989,true,false,""];
player addAction ["Too much dust for surface","diag_log ['Too much dust for: ',surfaceType position player]; hint format ['Logged: %1',surfaceType position player]",nil,9979,true,false,""];
player addAction ["Too little dust for surface","diag_log ['Too little dust for: ',surfaceType position player]; hint format ['Logged: %1',surfaceType position player]",nil,9969,true,false,""];
