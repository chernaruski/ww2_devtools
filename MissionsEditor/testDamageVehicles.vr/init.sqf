#include "idds.hpp"

///////////////////////////////////////////////////////////////////////////////

TEST_DEBUG_ProjectileCam_Enabled = false;
TEST_DEBUG_OnScreenOutput_Enabled = false;
TEST_DEBUG_ShowExplosions = false;

TEST_DefaultTargetDistance = 50;

///////////////////////////////////////////////////////////////////////////////

TEST_IFA3_ONLY = false;
TEST_IFA3_ONLY = true;

///////////////////////////////////////////////////////////////////////////////

if ((TEST_IFA3_ONLY) && (!isClass(configFile/"CfgPatches"/"LIB_Core"))) then
{
	TEST_IFA3_ONLY = false;
};

TEST_Weapons = [];

private _allLaunchers = '(configName _x) isKindOf ["Launcher",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");

{
	private _weaponClass = configName _x;

	private _condition = switch (true) do
	{
		case (TEST_IFA3_ONLY): {_weaponClass isKindOf ["LIB_LAUNCHER",configFile/"CfgWeapons"]};
//		default {false};
		default {true};
	};

	private _filterOutClass = ["lib_pzfaust_30m_used"];

	if (_condition) then
	{
		if (getNumber (configFile/"CfgWeapons"/_weaponClass/"scope") > 0) then
		{
			if (!((toLower _weaponClass) in _filterOutClass)) then
			{
				TEST_Weapons pushBackUnique _weaponClass;
			};
		};
	};
} forEach _allLaunchers;

private _allSniperRifles = '(configName _x) isKindOf ["Rifle_Long_Base_F",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");

{
	private _weaponClass = configName _x;

	private _condition = switch (true) do
	{
		case (TEST_IFA3_ONLY): {_weaponClass isKindOf ["LIB_SRIFLE",configFile/"CfgWeapons"]};
//		default {false};
		default {true};
	};

	private _filterOutClass = ["fakeweapon_moduletracers_f"];

	if (_condition) then
	{
		if (getNumber (configFile/"CfgWeapons"/_weaponClass/"scope") > 0) then
		{
			if (!((toLower _weaponClass) in _filterOutClass)) then
			{
				TEST_Weapons pushBackUnique _weaponClass;
			};
		};
	};
} forEach _allSniperRifles;

TEST_Bombs = [];

//private _allBombs = '(configName _x) isKindOf ["CA_Magazine",configFile/"CfgMagazines"]' configClasses (configFile/"CfgMagazines");
private _allBombs = '(configName _x) isKindOf ["MineBase",configFile/"CfgVehicles"]' configClasses (configFile/"CfgVehicles");

{
	private _magazineClass = configName _x;

	private _whitelistClassType = ["ATMine_Range_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","LIB_Mine_Magazine"];

	private _condition = switch (true) do
	{
		case (TEST_IFA3_ONLY): {_magazineClass isKindOf ["LIB_Mine_base",configFile/"CfgVehicles"]};
//		default {false};
		default
		{
			{
		//		if (_magazineClass isKindOf [_x,configFile/"CfgMagazines"]) exitWith {true;};
				if (_magazineClass isKindOf [_x,configFile/"CfgVehicles"]) exitWith {true;};
			} forEach _whitelistClassType;

//			true
		};
	};

	private _filterOutClass = ["lib_marker_mine"];

	if (_condition) then
	{
//		if (getNumber (configFile/"CA_Magazine"/_magazineClass/"scope") > 0) then
		if (getNumber (configFile/"CfgVehicles"/_magazineClass/"scope") > 0) then
		{
			if (!((toLower _magazineClass) in _filterOutClass)) then
			{
				TEST_Bombs pushBackUnique _magazineClass;
			};
		};
	};
} forEach _allBombs;

TEST_VehicleWeapons = [];

TEST_fnc_filterWeapons =
{
	private _weaponClass = _this select 0;

	private _add = true;

	{
		if (_weaponClass isKindOf [_x,configFile/"CfgWeapons"]) exitWith {_add = false;};
	} forEach TEST_VehicleWeapons;

	if (_add) then
	{
		TEST_VehicleWeapons pushBackUnique _weaponClass;
	};
};

_allCannonCores = '(configName _x) isKindOf ["CannonCore",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");

{
	private _weaponClass = configName _x;

	private _whitelistClassType = switch (true) do
	{
		case (TEST_IFA3_ONLY): {["LIB_PlaneCannon_base","LIB_MortarCannon_base","LIB_AntiAirCannon_base","LIB_CannonCore"]};
//		default {false};
		default
		{
			[_weaponClass]
		};
	};

	private _condition = false;

	{
		if (_weaponClass isKindOf [_x,configFile/"CfgWeapons"]) exitWith {_condition = true;};
	} forEach _whitelistClassType;

	private _filterOutClass = ["lib_cannon_reloading","lib_cannon_empty"];

	if (_condition) then
	{
		if (getNumber (configFile/"CfgWeapons"/_weaponClass/"scope") > 0) then
		{
			if (getText (configFile/"CfgWeapons"/_weaponClass/"displayName") != "") then
			{
				if (count (getArray (configFile/"CfgWeapons"/_weaponClass/"magazines")) > 0) then
				{
					if (!((toLower _weaponClass) in _filterOutClass)) then
					{
						[_weaponClass] call TEST_fnc_filterWeapons;
					};
				};
			};
		};
	};
} forEach _allCannonCores;

_allMissiles = '(configName _x) isKindOf ["MissileLauncher",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");

{
	private _weaponClass = configName _x;

	private _condition = switch (true) do
	{
		case (TEST_IFA3_ONLY): {false};
//		default {false};
		default
		{
			true
		};
	};

	private _filterOutClass = [];

	if (_condition) then
	{
		if (getNumber (configFile/"CfgWeapons"/_weaponClass/"scope") > 0) then
		{
			if (getText (configFile/"CfgWeapons"/_weaponClass/"displayName") != "") then
			{
				if (count (getArray (configFile/"CfgWeapons"/_weaponClass/"magazines")) > 0) then
				{
					if (!((toLower _weaponClass) in _filterOutClass)) then
					{
						[_weaponClass] call TEST_fnc_filterWeapons;
					};
				};
			};
		};
	};
} forEach _allMissiles;

_allRockets = '(configName _x) isKindOf ["RocketPods",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");

{
	private _weaponClass = configName _x;

	private _whitelistClassType = switch (true) do
	{
		case (TEST_IFA3_ONLY): {["LIB_M8_Launcher_P47","LIB_BM13"]};
//		default {false};
		default
		{
			[_weaponClass]
		};
	};

	private _condition = false;

	{
		if (_weaponClass isKindOf [_x,configFile/"CfgWeapons"]) exitWith {_condition = true;};
	} forEach _whitelistClassType;

	private _filterOutClass = ["gbu12bomblauncher","gbu12bomblauncher_plane_fighter_03_f","mk82bomblauncher","bomb_04_plane_cas_01_f","bomb_03_plane_cas_02_f","lib_sc50_bomb","lib_us_500lb_bomb","lib_fab250_bomb","lib_sc250_bomb","lib_fab500_bomb","lib_sc500_bomb"];

	if (_condition) then
	{
		if (getNumber (configFile/"CfgWeapons"/_weaponClass/"scope") > 0) then
		{
			if (getText (configFile/"CfgWeapons"/_weaponClass/"displayName") != "") then
			{
				if (count (getArray (configFile/"CfgWeapons"/_weaponClass/"magazines")) > 0) then
				{
					if (!((toLower _weaponClass) in _filterOutClass)) then
					{
						[_weaponClass] call TEST_fnc_filterWeapons;
					};
				};
			};
		};
	};
} forEach _allRockets;

TEST_Vehicles = [];
TEST_VehiclesModel = [];
TEST_VehiclesArmorStats = [];
TEST_PlayerVehicles = [];

private _allVehicles = '(configName _x) isKindOf "Car" || (configName _x) isKindOf "Tank"' configClasses (configFile/"CfgVehicles");

{
	private _vehicleClass = configName _x;

//	_conditionAny = true;
	_conditionAny = false;

	_conditionCar = _vehicleClass isKindOf "Car_F";
	_conditionTruck = _vehicleClass isKindOf "Truck_F";
	_conditionWheeled_APC = _vehicleClass isKindOf "Wheeled_APC_F";
	_conditionTank = _vehicleClass isKindOf "Tank_F";

	switch (true) do
	{
		case TEST_IFA3_ONLY:
		{
			_conditionCar = _vehicleClass isKindOf "LIB_Car_base";
			_conditionTruck = _vehicleClass isKindOf "LIB_Truck_base";
			_conditionWheeled_APC = _vehicleClass isKindOf "LIB_Wheeled_APC_base";
			_conditionTank = _vehicleClass isKindOf "LIB_Tank_base";
		};
	};

	private _filterOutClass = ["papercar","lib_fake_car2","lib_armored_target_dummy","lib_pzkpfwv_no_lods","lib_pzkpfwv_no_lods_dlv"];//all lower case!
	private _filterOutType = ["LIB_Tank_Destruct_Tower_base"];

	if (_conditionAny || _conditionCar || _conditionTruck || _conditionWheeled_APC || _conditionTank) then
	{
		if (getNumber (configFile/"CfgVehicles"/_vehicleClass/"scope") > 0) then
		{
			if (!((toLower _vehicleClass) in _filterOutClass)) then
			{
				private _add = true;
				private _model = getText (configFile/"CfgVehicles"/_vehicleClass/"model");
				private _indexModel = TEST_VehiclesModel find _model;

				private _valueArmor = getNumber (configFile/"CfgVehicles"/_vehicleClass/"armor");
				private _valueArmorStructural = getNumber (configFile/"CfgVehicles"/_vehicleClass/"armorStructural");
				private _valueCrewCrashProtection = getNumber (configFile/"CfgVehicles"/_vehicleClass/"crewCrashProtection");
				private _valueCrewExplosionProtection = getNumber (configFile/"CfgVehicles"/_vehicleClass/"crewExplosionProtection");
				private _valueCrewVulnerable = getNumber (configFile/"CfgVehicles"/_vehicleClass/"crewVulnerable");
				private _valueDamageResistance = getNumber (configFile/"CfgVehicles"/_vehicleClass/"damageResistance");
				private _valueExplosionShielding = getNumber (configFile/"CfgVehicles"/_vehicleClass/"explosionShielding");
				private _valueMinTotalDamageThreshold = getNumber (configFile/"CfgVehicles"/_vehicleClass/"minTotalDamageThreshold");
				private _armorStatsNewVehicleClass = [_valueArmor,_valueArmorStructural,_valueCrewCrashProtection,_valueCrewExplosionProtection,_valueCrewVulnerable,_valueDamageResistance,_valueExplosionShielding,_valueMinTotalDamageThreshold];

				if (_indexModel != -1) then
				{
					private _armorStatsFoundVehicleClass = TEST_VehiclesArmorStats select _indexModel;

					if (_armorStatsFoundVehicleClass isEqualTo _armorStatsNewVehicleClass) then
					{
						_add = false;
					};
				};

				if (_add) then
				{
					private _filterOutTypeFound = false;
					{
						if (_vehicleClass isKindOf _x) exitWith {_filterOutTypeFound = true;};
					} forEach _filterOutType;

					if (!_filterOutTypeFound) then
					{
						TEST_Vehicles pushBackUnique _vehicleClass;
						TEST_VehiclesModel pushBack _model;
						TEST_VehiclesArmorStats pushBack _armorStatsNewVehicleClass;

						private _vehicleWeapons = [];
						private _vehicleWeaponsDriver = getArray (configFile/"CfgVehicles"/_vehicleClass/"weapons");
						private _vehicleWeaponsGunner = getArray (configFile/"CfgVehicles"/_vehicleClass/"Turrets"/"MainTurret"/"weapons");

						{
							if (!(_x isKindOf ["CarHorn",configFile/"CfgWeapons"])) then
							{
								_vehicleWeapons pushBackUnique _x;
							};
						} forEach (_vehicleWeaponsDriver + _vehicleWeaponsGunner);

						if ((count _vehicleWeapons) > 0) then
						{
							TEST_PlayerVehicles pushBackUnique _vehicleClass;
						};
					};
				};
			};
		};
	};
} forEach _allVehicles;

///////////////////////////////////////////////////////////////////////////////

setViewDistance 5000;
setObjectViewDistance 5000;

sleep 1;

enableRadio false;
enableSentences false;
player setSpeaker "NoVoice";

TEST_PlayerModelType = "B_Soldier_F";
if (TEST_IFA3_ONLY) then {TEST_PlayerModelType = "LIB_GER_Soldier2";};

player setUnitLoadout TEST_PlayerModelType;

{player removeWeapon _x;} forEach (weapons player);
{player removeMagazines _x} forEach (magazines player);
{player removeItem _x} forEach (items player);

player setCaptive true;
player allowDamage false;
player addEventHandler ["HandleDamage",{0}];
player addEventHandler ["Fired",
{
	[_this select 6] call TEST_fnc_CacheProjectiles;
	[_this select 6] spawn TEST_fnc_projectileCamera;

	player setWeaponReloadingTime [player,currentMuzzle player,0.1];

	private _weapon = currentWeapon player;
	player removeWeapon _weapon;

	private _magazines = magazines player;
	{
		if (!(_x in _magazines)) then
		{
			player addMagazine _x;
		};
	}forEach TEST_CurrentMagazines;

	player setVehicleAmmo 1;

	player addWeapon _weapon;
	player selectWeapon _weapon;
}];

private _opfor = switch (side (group player)) do {case west:{east}; case east:{west}; default {east}};
createCenter _opfor;
TEST_VehicleGroup = createGroup _opfor;

TEST_PlayerVehicleType = "B_MBT_01_TUSK_F";
if (TEST_IFA3_ONLY) then {TEST_PlayerVehicleType = "LIB_M4A3_75";};
TEST_PlayerVehicleIndex = 0;
TEST_PlayerVehicleGunnerTurret = [0];
TEST_PlayerVehicleCommanderTurret = [0,0];
TEST_PlayerVehicleWeaponSet = [];

TEST_TargetVehicleType = "B_MBT_01_TUSK_F";
if (TEST_IFA3_ONLY) then {TEST_TargetVehicleType = "LIB_M4A3_75";};
TEST_CurrentTargetIndex = 0;

TEST_CurrentWeaponIndex = 0;
TEST_CurrentWeapon = "";
TEST_CurrentMagazines = [];

TEST_CurrentBombIndex = 0;
TEST_CurrentBomb = "";

TEST_CurrentVehicleWeaponIndex = 0;
TEST_CurrentVehicleWeaponSelection = [];
TEST_CurrentVehicleWeapon = "";
TEST_CurrentVehicleMagazine = "";

TEST_VehicleNorthWest = objNull;
TEST_VehicleNorth = objNull;
TEST_VehicleNorthEast = objNull;
TEST_VehicleEast = objNull;
TEST_VehicleSouthEast = objNull;
TEST_VehicleSouth = objNull;
TEST_VehicleSouthWest = objNull;
TEST_VehicleWest = objNull;

TEST_VehicleTargets = [TEST_VehicleNorthWest,TEST_VehicleNorth,TEST_VehicleNorthEast,TEST_VehicleEast,TEST_VehicleSouthEast,TEST_VehicleSouth,TEST_VehicleSouthWest,TEST_VehicleWest];
TEST_VehicleTargetHit = false;

TEST_Distance = TEST_DefaultTargetDistance;

createCenter sideLogic;
private _groupLogic = createGroup sideLogic;
TEST_Logic = _groupLogic createUnit ["Logic",[0,0,0],[],0,"NONE"];

TEST_PlayerVehicleOffset = 10;

TEST_fnc_CreatePlayerVehicle =
{
	_vehicleDirection = 0;
	if ((!(isNil "TEST_PlayerVehicle")) && {(!(isNull TEST_PlayerVehicle))}) then
	{
		_vehicleDirection = getDir TEST_PlayerVehicle;

		moveOut player;

		deleteVehicle TEST_PlayerVehicle;
	};

	private _positionX = (position player) select 0;
	private _positionY = (position player) select 1;
	TEST_PlayerVehicle = createVehicle [TEST_PlayerVehicleType,[_positionX + TEST_PlayerVehicleOffset,_positionY + TEST_PlayerVehicleOffset,0],[],0,"CAN_COLLIDE"];

	TEST_PlayerVehicle lockDriver true;
	TEST_PlayerVehicle lockCargo true;
	TEST_PlayerVehicle lockTurret [TEST_PlayerVehicleCommanderTurret,true];
//TODO: lock all turrets
	TEST_PlayerVehicle allowDamage false;
	TEST_PlayerVehicle addEventHandler ["HandleDamage",{0}];
	TEST_PlayerVehicle addEventHandler ["Fired",
	{
		[_this select 6] call TEST_fnc_CacheProjectiles;
		[_this select 6] spawn TEST_fnc_projectileCamera;

		TEST_PlayerVehicle setWeaponReloadingTime [gunner TEST_PlayerVehicle,currentMuzzle (gunner TEST_PlayerVehicle),0.1];
	//	TEST_PlayerVehicle setWeaponReloadingTime [commander TEST_PlayerVehicle,currentMuzzle (commander TEST_PlayerVehicle),0.1];

		TEST_PlayerVehicle setVehicleAmmo 1;
	}];

	player moveInGunner TEST_PlayerVehicle;

	TEST_PlayerVehicle setDir _vehicleDirection;

	player action ["engineOn",TEST_PlayerVehicle];

	TEST_PlayerVehicle setPos [_positionX,_positionY,0];
	[] spawn TEST_fnc_SelectWeapon;
};

[] spawn TEST_fnc_CreatePlayerVehicle;

{
	_x addAction ["RESET",{0 = [] spawn TEST_fnc_CreateVehicle;}];
//	_x addAction ["REPAIR",{0 = [] spawn TEST_fnc_RepairVehicles;}];
	_x addAction ["SET WEAPON",{0 = [] spawn TEST_fnc_SelectWeapon;}];
	_x addAction ["SET TARGET",{0 = [] spawn TEST_fnc_SetTarget;}];
	_x addAction ["SET VEHICLE",{0 = [] spawn TEST_fnc_SetVehicle;}];
	_x addAction ["SET BOMB",{0 = [] spawn TEST_fnc_SetBomb;}];
	_x addAction ["+100",{[+100] call TEST_fnc_AdjustPosition;}];
	_x addAction ["-100",{[-100] call TEST_fnc_AdjustPosition;}];
	_x addAction ["+500",{[+500] call TEST_fnc_AdjustPosition;}];
	_x addAction ["-500",{[-500] call TEST_fnc_AdjustPosition;}];
} forEach [player];//,TEST_PlayerVehicle];

(findDisplay 46) displayAddEventHandler ["KeyDown",
{
	params ["_displayOrControl","_key","_shift","_ctrl","_alt"];

	_return = true;

	switch (true) do
	{
		case ((inputAction "reloadMagazine") > 0):
		{
			//RESET
			[] spawn TEST_fnc_CreateVehicle;
		};

		case ((inputAction "SwitchWeaponGrp1") > 0):
		{
			//SET WEAPON
			[] spawn TEST_fnc_SelectWeapon;
		};
		case ((inputAction "SwitchWeaponGrp2") > 0):
		{
			//SET TARGET
			[] spawn TEST_fnc_SetTarget;
		};
		case ((inputAction "SwitchWeaponGrp3") > 0):
		{
			//SET VEHICLE
			[] spawn TEST_fnc_SetVehicle;
		};
		case ((inputAction "SwitchWeaponGrp4") > 0):
		{
			//SET BOMB
			[] spawn TEST_fnc_SetBomb;
		};

		case ((inputAction "GunElevUp") > 0):
		{
			//+100
			[+100] call TEST_fnc_AdjustPosition;
		};
		case ((inputAction "GunElevDown") > 0):
		{
			//-100
			[-100] call TEST_fnc_AdjustPosition;
		};
		default
		{
			_return = false;
		};
	};

	_return
}];

TEST_fnc_RepairVehicles =
{
	{
		_x setDamage 0;
		{_x setDamage 0;} forEach (crew _x);
	} forEach TEST_VehicleTargets;
};

TEST_fnc_AdjustPosition =
{
	private _change = _this select 0;
	TEST_Distance = TEST_Distance + _change;

	if (TEST_Distance < 50) then {TEST_Distance = 50;};
	if (TEST_Distance > 5000) then {TEST_Distance = 5000;};

	call Test_fnc_RepositionVehicles;
};

TEST_fnc_RepositionVehicles =
{
	private _positionX = (position player) select 0;
	private _positionY = (position player) select 1;
	TEST_VehicleNorthWest setPos	[_positionX - TEST_Distance/2,		_positionY + TEST_Distance/2,0];
	TEST_VehicleNorth setPos	[_positionX,				_positionY + TEST_Distance,0];
	TEST_VehicleNorthEast setPos	[_positionX + TEST_Distance/2,		_positionY + TEST_Distance/2,0];
	TEST_VehicleEast setPos		[_positionX + TEST_Distance,		_positionY,0];
	TEST_VehicleSouthEast setPos	[_positionX + TEST_Distance/2,		_positionY - TEST_Distance/2,0];
	TEST_VehicleSouth setPos	[_positionX,				_positionY - TEST_Distance,0];
	TEST_VehicleSouthWest setPos	[_positionX - TEST_Distance/2,		_positionY - TEST_Distance/2,0];
	TEST_VehicleWest setPos		[_positionX - TEST_Distance,		_positionY,0];
};

TEST_fnc_CreateVehicle =
{
	{
		if (!(isNull _x)) then
		{
			_x setPos [-10000,-10000,0];
			deleteVehicle _x;
		};
	} forEach TEST_VehicleTargets;

	private _positionX = (position player) select 0;
	private _positionY = (position player) select 1;
//	TEST_VehicleNorth = TEST_VehicleGroup createUnit [TEST_TargetVehicleType,[_positionX,_positionY + TEST_Distance,0],[],0,"NONE"];
//	TEST_VehicleEast = TEST_VehicleGroup createUnit [TEST_TargetVehicleType,[_positionX + TEST_Distance,_positionY,0],[],0,"NONE"];
//	TEST_VehicleSouth = TEST_VehicleGroup createUnit [TEST_TargetVehicleType,[_positionX,_positionY - TEST_Distance,0],[],0,"NONE"];
//	TEST_VehicleWest = TEST_VehicleGroup createUnit [TEST_TargetVehicleType,[_positionX - TEST_Distance,_positionY,0],[],0,"NONE"];
	TEST_VehicleNorthWest =	[TEST_TargetVehicleType,[_positionX - TEST_Distance/2,	_positionY + TEST_Distance/2,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleNorth =	[TEST_TargetVehicleType,[_positionX,				_positionY + TEST_Distance,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleNorthEast =	[TEST_TargetVehicleType,[_positionX + TEST_Distance/2,	_positionY + TEST_Distance/2,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleEast =	[TEST_TargetVehicleType,[_positionX + TEST_Distance,		_positionY,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleSouthEast =	[TEST_TargetVehicleType,[_positionX + TEST_Distance/2,	_positionY - TEST_Distance/2,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleSouth =	[TEST_TargetVehicleType,[_positionX,				_positionY - TEST_Distance,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleSouthWest =	[TEST_TargetVehicleType,[_positionX - TEST_Distance/2,	_positionY - TEST_Distance/2,0]] call Test_fnc_CreateNewVehicle;
	TEST_VehicleWest =	[TEST_TargetVehicleType,[_positionX - TEST_Distance,		_positionY,0]] call Test_fnc_CreateNewVehicle;

	TEST_VehicleTargets = [TEST_VehicleNorthWest,TEST_VehicleNorth,TEST_VehicleNorthEast,TEST_VehicleEast,TEST_VehicleSouthEast,TEST_VehicleSouth,TEST_VehicleSouthWest,TEST_VehicleWest];

	{
		private _vehicle = _x;

		_vehicle allowCrewInImmobile true;
		_vehicle addEventHandler ["GetOut",
		{
			_vehicle = _this select 0;
			_position = _this select 1;
			_unit = _this select 2;
			_turret = _this select 3;

			TEST_Logic globalChat format ["%2 left %3 (turret %4)",typeOf _unit,_position,typeOf _vehicle,_turret];

			_unit setPos [-10000,-10000,0];
			deleteVehicle _unit;
		}];
		_vehicle addEventHandler ["HandleDamage",
		{
			_affectedUnit = _this select 0;
			_selectionName = _this select 1;
			_damage = [_this select 2,2] call BIS_fnc_cutDecimals;
			_projectile = _this select 4;
			_projectileClassName = _this select 5;

			diag_log "HD	Projectile	Selection	DMG";
			diag_log _this;
			diag_log format ["%1	%2	%3	%4",[diag_tickTime,2] call BIS_fnc_cutDecimals,_projectile,_selectionName,_damage];

			TEST_LastHandleDamageEventTimeStamp = diag_tickTime;
			TEST_NewHandleDamageEvent = true;

			_affectedSelections = _affectedUnit getVariable ["TEST_AffectedSelections",[]];
			_cachedAffectedSelections = _affectedUnit getVariable ["TEST_CachedAffectedSelections",[]];

//diag_log["_affectedSelections",_affectedSelections,_selectionName];
			_affectedSelectionIndex = _affectedSelections find _selectionName;

//			if (_affectedUnit == TEST_AffectedVehicle) then
//			{
//				_affectedUnit
//			}
//			else
//			{
//				_affectedUnit
//			};

//diag_log["_affectedSelectionIndex",_affectedSelectionIndex];
//diag_log["_cachedAffectedSelections 1",_cachedAffectedSelections];
			if (_affectedSelectionIndex == -1) then
			{
				_numberOfHits = 1;
				_isDestroy = 0;
				_isUndamaged = 0;
				//nr of hits at > 1
				if (_damage > 1) then {_isDestroy = 1;};
				//nur of hits at == 0
				if (_damage == 0) then {_isUndamaged = 1;};

				_cachedSelectionDamageArray = [_selectionName,_damage,_numberOfHits,_isDestroy,_isUndamaged];
				_cachedAffectedSelections pushBack _cachedSelectionDamageArray;
			}
			else
			{
				_cachedSelectionDamageArray = _cachedAffectedSelections select _affectedSelectionIndex;

				_numberOfHits = (_cachedSelectionDamageArray select 2) + 1;
				_isDestroy = _cachedSelectionDamageArray select 3;
				if (_damage > 1) then {_isDestroy = _isDestroy + 1;};
				_isUndamaged = _cachedSelectionDamageArray select 4;
				if (_damage == 0) then {_isUndamaged = _isUndamaged + 1;};

				_cachedSelectionDamageArray = [_selectionName,_damage,_numberOfHits,_isDestroy,_isUndamaged];
				_cachedAffectedSelections set [_affectedSelectionIndex,_cachedSelectionDamageArray];
			};
//diag_log["_cachedAffectedSelections 2",_cachedAffectedSelections];
			_affectedSelections pushBackUnique _selectionName;
			_affectedUnit setVariable ["TEST_AffectedSelections",_affectedSelections];
			_affectedUnit setVariable ["TEST_CachedAffectedSelections",_cachedAffectedSelections];
			_affectedUnit setVariable ["TEST_ProjectileClass",toLower _projectile];
			TEST_AffectedVehicle = _affectedUnit;

			TEST_VehicleTargetHit = true;

			_damage
		}];
		_vehicle addEventHandler ["HitPart",
		{
//			diag_log [[diag_tickTime,2] call BIS_fnc_cutDecimals,"HP:	",_this];
//			_shooter = (_this select 0) select 1;
//			_projectile = (_this select 0) select 2;
//			_velocity = ((_this select 0) select 4) call TEST_fnc_cutDecimalsArray;
			_ammo = (_this select 0) select 6;// [hit value, indirect hit value, indirect hit range, explosive damage, ammo class name] OR, if there is no shot object: [impulse value on object collided with,0,0,0]
			_ammoHitValue = _ammo select 0;
			_ammoIndirectHitValue = _ammo select 1;
			_ammoIndirectHitRange = _ammo select 2;
			_ammoExplosiveDamage = _ammo select 3;
			_ammoClassName = _ammo select 4;

			diag_log "HP	Hit	iHit	iHitRange	ExplosiveDmg	ClassName";
			diag_log format ["%1	%2	%3	%4	%5	%6	%7",[diag_tickTime,2] call BIS_fnc_cutDecimals,_ammoHitValue,_ammoIndirectHitValue,_ammoIndirectHitRange,_ammoExplosiveDamage,_ammoClassName];
//			diag_log [[diag_tickTime,2] call BIS_fnc_cutDecimals,"HP:	","Projectile: ",_projectile,"	","Velocity: ",_velocity,"	","Ammo: ",_ammo];

			diag_log "Velocity	Direct	SelectionName	Surface	Radius	Direction	Position";
			{
				_shooter = _x select 1;
				_projectile = _x select 2;
				_position = (_x select 3) call TEST_fnc_cutDecimalsArray;
				_velocity = (_x select 4) call TEST_fnc_cutDecimalsArray;
				_selectionName = _x select 5;
				if ((typeName _selectionName) == "ARRAY") then {_selectionName = _selectionName select 0;};
//				_ammo = _x select 6;// [hit value, indirect hit value, indirect hit range, explosive damage, ammo class name] OR, if there is no shot object: [impulse value on object collided with,0,0,0]
				_direction = (_x select 7) call TEST_fnc_cutDecimalsArray;
				_radius = [_x select 8,2] call BIS_fnc_cutDecimals;
				_surface = _x select 9;
				_direct = _x select 10;

				diag_log format ["%1	%2	%3	%4	%5	%6	%7",_projectile,_direct,_selectionName,_surface,_radius,_direction,_position];
			} forEach _this;

			TEST_VehicleTargetHit = true;

			true
		}];

		_vehicle disableAI "TARGET";
		_vehicle disableAI "AUTOTARGET";
		_vehicle disableAI "MOVE";
		_vehicle disableAI "FSM";
		_vehicle disableAI "CHECKVISIBLE";
		_vehicle disableAI "COVER";
		_vehicle disableAI "AUTOCOMBAT";
		_vehicle disableAI "PATH";
//		_vehicle disableAI "ALL";

		_vehicle setBehaviour "COMBAT";
		_vehicle allowFleeing 0;
		_vehicle setCombatMode "RED";
		_vehicle doWatch objNull;

	} forEach TEST_VehicleTargets;
};

TEST_fnc_SelectWeapon =
{
	if ((vehicle player) == player) then
	{
		call TEST_fnc_SetWeapon;
	}
	else
	{
		call TEST_fnc_SetVehicleWeapon;
	};
};

TEST_fnc_SetWeapon =
{
	disableSerialization;

	createDialog "TEST_WeaponSelection";

	sleep 0.1;

	private _controlWeaponList = (findDisplay TEST_WeaponSelection_IDD) displayCtrl TEST_List_IDC;

	for "_i" from 0 to ((count TEST_Weapons) - 1) do
	{
		private _weapon = TEST_Weapons select _i;
		lbAdd [TEST_List_IDC,format ["%1 (%2)",getText (configFile/"CfgWeapons"/_weapon/"displayName"),_weapon]];
		lbSetValue [TEST_List_IDC,_i,_i];
	};
	lbSort (findDisplay TEST_WeaponSelection_IDD displayCtrl TEST_List_IDC);

	lbSetCurSel [TEST_WeaponSelection_IDD,TEST_CurrentWeaponIndex];

	TEST_WeaponSelected = false;
	while {ctrlVisible TEST_List_IDC} do
	{
//		_index = lbCurSel TEST_List_IDC;
		private _index = lbCurSel _controlWeaponList;
		TEST_CurrentWeaponIndex = lbValue [TEST_List_IDC,_index];
//diag_log ["TEST_WeaponSelected2",TEST_WeaponSelected,_index,lbValue [TEST_List_IDC,_index]];
//diag_log ["ctrlVisible TEST_List_IDC",ctrlVisible TEST_List_IDC,ctrlShown _controlWeaponList];
		if (TEST_WeaponSelected) then
		{
//diag_log ["_index",_index,lbValue [TEST_List_IDC,_index]];
			TEST_CurrentWeaponIndex = lbValue [TEST_List_IDC,_index];
//			closeDialog TEST_WeaponSelection_IDD;
		};
		sleep 0.1;
	};
	TEST_CurrentWeapon = TEST_Weapons select TEST_CurrentWeaponIndex;

	TEST_CurrentMagazines = [];
	{
		player removeMagazine _x;
	} forEach (magazines player);
	{
		player removeItemFromUniform _x;
	} forEach (magazines player);
	{
		player removeItemFromUniform _x;
	} forEach (items player);

	removeBackpack player;
	player addBackpack "B_Kitbag_rgr";
	private _backpack = unitBackpack player;
	clearWeaponCargo _backpack;
	clearMagazineCargo _backpack;
	clearAllItemsFromBackpack _backpack;

	private _muzzles = getArray (configFile/"cfgWeapons"/TEST_CurrentWeapon/"muzzles");

	{
		if (_x == "this") then
		{
			private _magazines = getArray (configFile/"cfgWeapons"/TEST_CurrentWeapon/"magazines");
			{
				TEST_CurrentMagazines pushBackUnique _x;
				player addMagazine _x;
				player addMagazineCargo [_x,1];
				player addMagazineAmmoCargo [_x,1,1];
			} forEach _magazines;
		}
		else
		{
			private _magazines = getArray (configFile/"cfgWeapons"/TEST_CurrentWeapon/_x/"magazines");
			{
				TEST_CurrentMagazines pushBackUnique _x;
				player addMagazine _x;
				player addMagazineCargo [_x,1];
				player addMagazineAmmoCargo [_x,1,1];
			} forEach _magazines;
		};
	} forEach _muzzles;

	{
		if (_x != TEST_CurrentWeapon) then {player removeWeapon _x};
	} forEach (weapons player);

	player addWeapon TEST_CurrentWeapon;
	player selectWeapon TEST_CurrentWeapon;

	player setWeaponReloadingTime [player,currentMuzzle player,0.1];
};

TEST_fnc_SetVehicleWeapon =
{
	disableSerialization;

	createDialog "TEST_WeaponSelection";

	sleep 0.1;

	waitUntil {!isNull (findDisplay TEST_WeaponSelection_IDD)};
	private _controlWeaponList = (findDisplay TEST_WeaponSelection_IDD) displayCtrl TEST_List_IDC;

	TEST_PlayerVehicleWeaponSet = [];

	_row = 0;

	for "_i" from 0 to ((count TEST_VehicleWeapons) - 1) do
	{
		private _vehicleWeapon = TEST_VehicleWeapons select _i;

		private _weaponMagazines = [];

		private _muzzles = getArray (configFile/"cfgWeapons"/_vehicleWeapon/"muzzles");

		{
			if (_x == "this") then
			{
				private _magazines = getArray (configFile/"cfgWeapons"/_vehicleWeapon/"magazines");
				{
					_weaponMagazines pushBackUnique _x;
				} forEach _magazines;
			}
			else
			{
				private _magazines = getArray (configFile/"cfgWeapons"/_vehicleWeapon/_x/"magazines");
				{
					_weaponMagazines pushBackUnique _x;
				} forEach _magazines;
			};
		} forEach _muzzles;

		private _vehicleMagazines = [];
		private _ammoAdded = [];
		{
			private _magazine = _x;
			private _ammo = toLower (getText (configFile/"cfgMagazines"/_magazine/"ammo"));

			if (!(_ammo in _ammoAdded)) then
			{
				_vehicleMagazines pushBackUnique _magazine;
				_ammoAdded pushBackUnique _ammo;
			};
		} forEach _weaponMagazines;

		{
			private _weaponMagazine = _x;

			lbAdd [TEST_List_IDC,format ["%1 (%2) - %3 (%4)",getText (configFile/"CfgWeapons"/_vehicleWeapon/"displayName"),_vehicleWeapon,getText (configFile/"CfgMagazines"/_weaponMagazine/"displayName"),_weaponMagazine]];
//			lbSetValue [TEST_List_IDC,_row,_row];
			_controlWeaponList lbSetValue [_row,_row];
//			lbSetData [TEST_List_IDC,_row,_weaponMagazine];
			_controlWeaponList lbSetData [_row,_weaponMagazine];
			TEST_PlayerVehicleWeaponSet pushBack [_vehicleWeapon,_weaponMagazine];

			_row = _row + 1;
		} forEach _vehicleMagazines;
	};
	lbSort ((findDisplay TEST_WeaponSelection_IDD) displayCtrl TEST_List_IDC);

	lbSetCurSel [TEST_WeaponSelection_IDD,TEST_CurrentVehicleWeaponIndex];

	TEST_VehicleWeaponsSelected = false;
	while {ctrlVisible TEST_List_IDC} do
	{
//		_index = lbCurSel TEST_List_IDC;
		private _index = lbCurSel _controlWeaponList;
//		TEST_CurrentVehicleWeaponIndex = lbValue [TEST_List_IDC,_index];
		TEST_CurrentVehicleWeaponIndex = _controlWeaponList lbValue _index;
//		TEST_CurrentVehicleWeaponIndex = _index;
		hint str TEST_CurrentVehicleWeaponIndex;
//		TEST_CurrentVehicleMagazine = lbData [TEST_List_IDC,_index];
//diag_log ["TEST_VehicleWeaponsSelected2",TEST_VehicleWeaponsSelected,_index,lbValue [TEST_List_IDC,_index]];
//diag_log ["ctrlVisible TEST_List_IDC",ctrlVisible TEST_List_IDC,ctrlShown _controlWeaponList];
		if (TEST_VehicleWeaponsSelected) then
		{
//diag_log ["_index",_index,lbValue [TEST_List_IDC,_index]];
//			TEST_CurrentVehicleWeaponIndex = lbValue [TEST_List_IDC,_index];
			TEST_CurrentVehicleWeaponIndex = _index;
//			TEST_CurrentVehicleMagazine = lbData [TEST_List_IDC,_index];
//			closeDialog TEST_WeaponSelection_IDD;
		};
		sleep 0.01;
	};
//	TEST_CurrentVehicleWeapon = TEST_VehicleWeapons select TEST_CurrentVehicleWeaponIndex;
	TEST_CurrentVehicleWeaponSelection = TEST_PlayerVehicleWeaponSet select TEST_CurrentVehicleWeaponIndex;
//diag_log ["TEST_CurrentVehicleWeaponSelection",TEST_CurrentVehicleWeaponSelection];
	TEST_CurrentVehicleWeapon = TEST_CurrentVehicleWeaponSelection select 0;
	TEST_CurrentVehicleMagazine = TEST_CurrentVehicleWeaponSelection select 1;

//	TEST_CurrentMagazines = [];

	{
		TEST_PlayerVehicle removeMagazineTurret [_x,TEST_PlayerVehicleGunnerTurret];//removeMagazinesTurret
	} forEach (TEST_PlayerVehicle magazinesTurret TEST_PlayerVehicleGunnerTurret);

//	private _muzzles = getArray (configFile/"cfgWeapons"/TEST_CurrentVehicleWeapon/"muzzles");

//	{
//		if (_x == "this") then
//		{
//			private _magazines = getArray (configFile/"cfgWeapons"/TEST_CurrentVehicleWeapon/"magazines");
//			{
//				TEST_CurrentMagazines pushBackUnique _x;
//				TEST_PlayerVehicle addMagazineTurret [_x,TEST_PlayerVehicleGunnerTurret];
//			} forEach _magazines;
//		}
//		else
//		{
//			private _magazines = getArray (configFile/"cfgWeapons"/TEST_CurrentVehicleWeapon/_x/"magazines");
//			{
//				TEST_CurrentMagazines pushBackUnique _x;
//				TEST_PlayerVehicle addMagazineTurret [_x,TEST_PlayerVehicleGunnerTurret];
//			} forEach _magazines;
//		};
//	} forEach _muzzles;

	TEST_PlayerVehicle addMagazineTurret [TEST_CurrentVehicleMagazine,TEST_PlayerVehicleGunnerTurret];

	{
		if (_x != TEST_CurrentVehicleWeapon) then {TEST_PlayerVehicle removeWeaponTurret [_x,TEST_PlayerVehicleGunnerTurret]};
	} forEach (TEST_PlayerVehicle weaponsTurret TEST_PlayerVehicleGunnerTurret);

	TEST_PlayerVehicle addWeaponTurret [TEST_CurrentVehicleWeapon,TEST_PlayerVehicleGunnerTurret];
	TEST_PlayerVehicle selectWeaponTurret [TEST_CurrentVehicleWeapon,TEST_PlayerVehicleGunnerTurret];

	sleep 0.1;

	TEST_PlayerVehicle setWeaponReloadingTime [gunner TEST_PlayerVehicle,currentMuzzle (gunner TEST_PlayerVehicle),0.1];
//	TEST_PlayerVehicle setWeaponReloadingTime [commander TEST_PlayerVehicle,currentMuzzle (commander TEST_PlayerVehicle),0.1];
};

TEST_fnc_SetBomb =
{
	disableSerialization;

	createDialog "TEST_BombSelection";

	sleep 0.1;

	private _controlBombList = (findDisplay TEST_BombSelection_IDD) displayCtrl TEST_List_IDC;

	for "_i" from 0 to ((count TEST_Bombs) - 1) do
	{
		private _bomb = TEST_Bombs select _i;
		lbAdd [TEST_List_IDC,format ["%1 (%2)",getText (configFile/"CfgVehicles"/_bomb/"displayName"),_bomb]];
		lbSetValue [TEST_List_IDC,_i,_i];
	};
	lbSort (findDisplay TEST_BombSelection_IDD displayCtrl TEST_List_IDC);

	lbSetCurSel [TEST_BombSelection_IDD,TEST_CurrentBombIndex];

	TEST_BombsSelected = false;
	while {ctrlVisible TEST_List_IDC} do
	{
//		_index = lbCurSel TEST_List_IDC;
		private _index = lbCurSel _controlBombList;
		TEST_CurrentBombIndex = lbValue [TEST_List_IDC,_index];
//diag_log ["TEST_BombsSelected2",TEST_BombsSelected,_index,lbValue [TEST_List_IDC,_index]];
//diag_log ["ctrlVisible TEST_List_IDC",ctrlVisible TEST_List_IDC,ctrlShown _controlBombList];
		if (TEST_BombsSelected) then
		{
//diag_log ["_index",_index,lbValue [TEST_List_IDC,_index]];
			TEST_CurrentBombIndex = lbValue [TEST_List_IDC,_index];
//			closeDialog TEST_BombSelection_IDD;
		};
		sleep 0.1;
	};
	TEST_CurrentBomb = TEST_Bombs select TEST_CurrentBombIndex;

//	TEST_PlayerVehicle addMagazine "TEST_CurrentBomb";

//	bomb = "SatchelCharge_Remote_Ammo" createVehicle (getPos ied)
//	"class name of explosive" createVehicle _somePosition;
	_cursorTarget = cursorTarget;
	if (!isNull _cursorTarget) then
	{
		if (_cursorTarget in TEST_VehicleTargets) then
		{
			_mine = createMine [TEST_CurrentBomb,position _cursorTarget,[],0];
			_mine setDamage 1;
		};
	};
};

TEST_fnc_SetVehicle =
{
	disableSerialization;

	createDialog "TEST_VehicleSelection";

	sleep 0.1;

	private _controlVehicleList = (findDisplay TEST_VehicleSelection_IDD) displayCtrl TEST_List_IDC;

	for "_i" from 0 to ((count TEST_PlayerVehicles) - 1) do
	{
		private _vehicle = TEST_PlayerVehicles select _i;
		lbAdd [TEST_List_IDC,format ["%1 (%2)",getText (configFile/"CfgVehicles"/_vehicle/"displayName"),_vehicle]];
		lbSetValue [TEST_List_IDC,_i,_i];
	};
	lbSort (findDisplay TEST_VehicleSelection_IDD displayCtrl TEST_List_IDC);

	lbSetCurSel [TEST_VehicleSelection_IDD,TEST_PlayerVehicleIndex];

	TEST_VehicleSelected = false;
	while {ctrlVisible TEST_List_IDC} do
	{
//		_index = lbCurSel TEST_List_IDC;
		private _index = lbCurSel _controlVehicleList;
		TEST_PlayerVehicleIndex = lbValue [TEST_List_IDC,_index];
//diag_log ["TEST_VehicleSelected2",TEST_VehicleSelected,_index,lbValue [TEST_List_IDC,_index]];
//diag_log ["ctrlVisible TEST_List_IDC",ctrlVisible TEST_List_IDC,ctrlShown _controlVehicleList];
		if (TEST_VehicleSelected) then
		{
//diag_log ["_index",_index,lbValue [TEST_List_IDC,_index]];
			TEST_PlayerVehicleIndex = lbValue [TEST_List_IDC,_index];
//			closeDialog TEST_VehicleSelection_IDD;
		};
		sleep 0.1;
	};
	TEST_PlayerVehicleType = TEST_PlayerVehicles select TEST_PlayerVehicleIndex;

	[] spawn TEST_fnc_CreatePlayerVehicle;
};

TEST_fnc_SetTarget =
{
	disableSerialization;

	createDialog "TEST_VehicleSelection";

	sleep 0.1;

	private _controlVehicleList = (findDisplay TEST_VehicleSelection_IDD) displayCtrl TEST_List_IDC;

	for "_i" from 0 to ((count TEST_Vehicles) - 1) do
	{
		private _vehicle = TEST_Vehicles select _i;
		lbAdd [TEST_List_IDC,format ["%1 (%2)",getText (configFile/"CfgVehicles"/_vehicle/"displayName"),_vehicle]];
		lbSetValue [TEST_List_IDC,_i,_i];
	};
	lbSort (findDisplay TEST_VehicleSelection_IDD displayCtrl TEST_List_IDC);

	lbSetCurSel [TEST_VehicleSelection_IDD,TEST_CurrentTargetIndex];

	TEST_TargetSelected = false;
	while {ctrlVisible TEST_List_IDC} do
	{
//		_index = lbCurSel TEST_List_IDC;
		private _index = lbCurSel _controlVehicleList;
		TEST_CurrentTargetIndex = lbValue [TEST_List_IDC,_index];
//diag_log ["TEST_TargetSelected2",TEST_TargetSelected,_index,lbValue [TEST_List_IDC,_index]];
//diag_log ["ctrlVisible TEST_List_IDC",ctrlVisible TEST_List_IDC,ctrlShown _controlVehicleList];
		if (TEST_TargetSelected) then
		{
//diag_log ["_index",_index,lbValue [TEST_List_IDC,_index]];
			TEST_CurrentTargetIndex = lbValue [TEST_List_IDC,_index];
//			closeDialog TEST_VehicleSelection_IDD;
		};
		sleep 0.1;
	};
	TEST_TargetVehicleType = TEST_Vehicles select TEST_CurrentTargetIndex;

	[] spawn TEST_fnc_CreateVehicle;
};

Test_fnc_CreateNewVehicle =
{
	private _vehicleType = _this select 0;
	private _position = _this select 1;

	private _newVehicle = createVehicle [_vehicleType,_position,[],0,"CAN_COLLIDE"];

	createVehicleCrew _newVehicle;
//	_crewType = getText (configFile/"CfgVehicles"/_vehicleType/"crew");
//	{
//		for "_i" from 1 to (_newVehicle emptyPositions _vehicleType) do
//		{
//			[_newVehicle,_crewType] call TEST_fnc_addCrew;
//		};
//	} forEach ["Commander","Driver","Gunner","Cargo"];

	{
		_x setSpeaker "NoVoice";
	} forEach (crew _newVehicle);

	_newVehicle;
};

TEST_fnc_addCrew =
{
	private _vehicle = _this select 0;
	private _unitType = _this select 1;

	private _unit = _unitType createVehicle [0,0,0];
//	_unit = TEST_VehicleGroup createUnit [_unitType,[0,0,0],[],0,"NONE"];

	_unit moveInAny _vehicle;
};

TEST_fnc_cutDecimalsArray =
{
	private _array = _this;// select 0;
	private _newArray = [];

	{
		private _value = [_x,2] call BIS_fnc_cutDecimals;
		if (_value > 10) then {_value = floor _value;};
		_newArray pushBack _value;
	} forEach _array;

	_newArray;
};

TEST_Draw3D = addMissionEventHandler ["Draw3D",{call TEST_fnc_DrawProjectiles;}];

//removeMissionEventHandler ["Draw3D",TEST_Draw3D];

TEST_Projectiles = [];
TEST_MaxProjectileSegments = 100;
TEST_MaxProjectiles = 100;

TEST_fnc_DrawProjectiles =
{

	private _projectiles =+ TEST_Projectiles;
	private _projectilesNew = [];

	if (count _projectiles > 0) then
	{
		{
			private _projectile = _x param [0,objNull,[objNull]];
			private _segments = _x param [1,[],[[]]];

			if (!isNull _projectile) then
			{
				private _speed = vectorMagnitude velocity _projectile;
				private _newColor = switch (true) do
				{
					case (_speed < 250): {[0,0,1,1]};
					case (_speed < 500): {[0,1,0,1]};
					default {[1,0,0,1]};
				};

				_segments pushBackUnique [getPosVisual _projectile,_newColor];

				if ((count _segments) > TEST_MaxProjectileSegments) then
				{
					reverse _segments;
					_segments resize TEST_MaxProjectileSegments;
					reverse _segments;
				};

				{
					private _nextSegmentIndex = _forEachIndex + 1;

					if ((count _segments) > _nextSegmentIndex) then
					{
						private _locationOld = _x select 0;
//						private _colorOld = _x select 1;

						private _locationNew = (_segments select _nextSegmentIndex) select 0;
						private _colorNew = (_segments select _nextSegmentIndex) select 1;

						drawLine3D [_locationOld,_locationNew,_colorNew];
					};
				}
				forEach _segments;

				_projectilesNew pushBackUnique [_projectile,_segments];
			};
		}
		forEach _projectiles;
	};
	TEST_Projectiles = _projectilesNew;
};

TEST_fnc_CacheProjectiles =
{
	private _projectile = _this select 0;

	if (!isNull _projectile) then
	{
		private _projectiles = TEST_Projectiles;

		if (count _projectiles > TEST_MaxProjectiles) then {_projectiles deleteAt 0};
		_projectiles pushBackUnique [_projectile,[[getPosVisual _projectile,[1,0,0,0]]]];
		TEST_Projectiles = _projectiles;
	};
};

TEST_fnc_projectileCamera =
{
	if (!(TEST_DEBUG_ProjectileCam_Enabled)) exitWith {};

	_projectile = _this select 0;//6;
//diag_log["_projectile 1",diag_tickTime,_projectile,isNull _projectile,getPos _projectile,TEST_VehicleTargetHit];
	if (isNil "TEST_ProjectileCamera") then
	{
		TEST_ProjectileCamera = "camera" camCreate (position _projectile);
		TEST_ProjectileCamera cameraEffect ["internal","back"];//external

//		private _speed = vectorMagnitude velocity _projectile;
		private _speed = speed _projectile;
//diag_log ["speed",_projectile,typeOf _projectile,speed _projectile,_speed];

		while {((!isNull _projectile) && ((player distance _projectile) < (TEST_Distance * 1.5)) && (!TEST_VehicleTargetHit))} do
		{
//diag_log["_projectile 2",diag_tickTime,_projectile,isNull _projectile,getPos _projectile,TEST_VehicleTargetHit];
//			TEST_ProjectileCamera setPos (position _projectile);
//			TEST_ProjectileCamera setDir (direction _projectile);

			TEST_ProjectileCamera camSetTarget _projectile;
//			TEST_ProjectileCamera camSetRelPos [0,-3,0];
			TEST_ProjectileCamera camSetRelPos [0,-13,1.2];
			TEST_ProjectileCamera camCommit 0;

			private _closeToTarget = false;
			{
				if ((_x distance _projectile) < 25) exitWith
				{
					_closeToTarget = true;
				};
			} forEach TEST_VehicleTargets;

			if (_closeToTarget || TEST_VehicleTargetHit)then
			{
				private _projectileSpeedFactor = 300/_speed;

				setAccTime (0.25 * _projectileSpeedFactor);
			}
			else
			{
				setAccTime 1;
			};

			sleep 0.0001;
		};
//diag_log["_projectile 3",diag_tickTime,_projectile,isNull _projectile,getPos _projectile,TEST_VehicleTargetHit];

		setAccTime 0.25;
		sleep 0.1;

//		if ((!isNull _projectile) && TEST_VehicleTargetHit) then
		if (TEST_VehicleTargetHit) then
		{
			sleep 1;
		};

		TEST_ProjectileCamera cameraeffect ["terminate","back"];
		camDestroy TEST_ProjectileCamera;

		TEST_ProjectileCamera = nil;

		setAccTime 1;

		TEST_VehicleTargetHit = false;
	};
};

TEST_fnc_normalizeString =
{
	private _text = _this select 0;
	private _length = _this select 1;

	private _textAsArray = toArray _text;
	private _lengthText = count _textAsArray;

	if (_lengthText < _length) then
	{
		for "_i" from (_lengthText) to _length do
		{
			_text = _text + " ";
		};
	};

	_text;
};

TEST_fnc_normalizeNumber =
{
	private _number = _this select 0;
	private _length = _this select 1;

	private _numberAsString = str _number;
	private _numberAsArray = toArray _numberAsString;
	private _sizeNumber = count _numberAsArray;

	private _preTag = " ";

	if (_number >= 100) then
	{
		_preTag = "  ";
	}
	else
	{
		if (_number >= 10) then
		{
			if (_sizeNumber < _length) then
			{
				_preTag = "";
				_numberAsString = _numberAsString + ".00";
			};
		}
		else
		{
			if (_sizeNumber < _length) then
			{
				_numberAsString = _numberAsString + ".00";
			};
		};
	};
	_preTag + _numberAsString
};

TEST_fnc_colorizeNumber =
{
	private _damageAsNumber = _this select 0;
	private _damage = _this select 1;

	_damage = switch (true) do
	{
		case (_damageAsNumber > 1.00): {format ["<t color='#000000'>%1</t>",_damage]};//black
		case (_damageAsNumber > 0.75): {format ["<t color='#ff0000'>%1</t>",_damage]};//red
		case (_damageAsNumber > 0.50): {format ["<t color='#ffa500'>%1</t>",_damage]};//orange
		case (_damageAsNumber > 0.25): {format ["<t color='#ffff00'>%1</t>",_damage]};//yellow
		case (_damageAsNumber > 0.00): {format ["<t color='#cccccc'>%1</t>",_damage]};//light grey
		default {_damage};
	};
	_damage;
};

// total damage
// damage per components from highest to lowest - percentage of total and additional
// pentration
// full penetration
// energy/velocity loss
// indirect dmg
//selection	dmg	nr of hits	nr of hits at > 1	nur of hits at > 0

call compile preprocessFileLineNumbers "selectionNameMapping.sqf";

//TEST_oldSelectionNames pushBackUnique "znaceni";
//TEST_newSelectionNames pushBackUnique "marking";


_radioMsgAlphaTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioMsgAlphaTrigger setTriggerActivation ["ALPHA","PRESENT",true];
_radioMsgAlphaTrigger setTriggerStatements ["this","if (TEST_DEBUG_ProjectileCam_Enabled) then {TEST_DEBUG_ProjectileCam_Enabled = false;} else {TEST_DEBUG_ProjectileCam_Enabled = true;};",""];
(1) setRadioMsg "Toggle ProjectileCam";

_radioMsgBravoTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioMsgBravoTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_radioMsgBravoTrigger setTriggerStatements ["this","if (TEST_DEBUG_OnScreenOutput_Enabled) then {TEST_DEBUG_OnScreenOutput_Enabled = false;} else {TEST_DEBUG_OnScreenOutput_Enabled = true;};",""];
(2) setRadioMsg "Toggle OnScreenOutPut";

_radioMsgCharlieTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_radioMsgCharlieTrigger setTriggerActivation ["CHARLIE","PRESENT",true];
_radioMsgCharlieTrigger setTriggerStatements ["this","if (TEST_DEBUG_ShowExplosions) then {TEST_DEBUG_ShowExplosions = false;} else {TEST_DEBUG_ShowExplosions = true;};",""];
(3) setRadioMsg "Toggle ShowExplosions";


//TEST_Logic globalChat str (_x distance _projectile);
//"TEST_Distance" cutText [str (_x distance _projectile),"PLAIN DOWN"];
//titleText [format["Current distance: %1 meters",TEST_Distance],"plain down"];

titleText["Use action menu","plain down"];

//_particleSize = 0.5;
//drop ["\A3\data_f\ParticleEffects\Universal\Refract","","Billboard",1,0.1,_pATL,[0,0,0],0,1.275,1,0,[_particleSize,_particleSize],[[0,0,0,0.6],[0,0,0, 0.4]],[1,0],0,0,"","",""];
//drop ["\A3\data_f\ParticleEffects\Universal\Refract","","Billboard",1,  8,_pATL,[0,0,0],0,1.275,1,0,[_particleSize,_particleSize],[[0,0,0,0.3],[0,0,0,0.15]],[1,0],0,0,"","",""];

TEST_LastHandleDamageEventTimeStamp = diag_tickTime + 3;
TEST_NewHandleDamageEvent = false;
TEST_AffectedVehicle = objNull;

while {true} do
{
	if (((diag_tickTime + 1) > TEST_LastHandleDamageEventTimeStamp) && TEST_NewHandleDamageEvent) then
	{
		if (isNull TEST_AffectedVehicle) exitWith {};

		_cachedAffectedSelections = TEST_AffectedVehicle getVariable ["TEST_CachedAffectedSelections",[]];

		_sortedArray = [];
		{
			_selectionName = _x select 0;
			_damage = _x select 1;
			_numberOfHits = _x select 2;
			_isDestroy = _x select 3;
			_isUndamaged = _x select 4;

			_sortedArray pushBack [_damage,_selectionName,_numberOfHits,_isDestroy,_isUndamaged];
		} forEach _cachedAffectedSelections;

		_sortedArray sort false;

		_messages = [];
		{
			_damage = _x select 0;
			_selectionName = _x select 1;
			_numberOfHits = _x select 2;
			_isDestroy = _x select 3;
			_isUndamaged = _x select 4;

//			_selectionName = [_selectionName,20] call TEST_fnc_normalizeString;

			_damageAsNumber = _damage;
			_damage = [_damage,3] call TEST_fnc_normalizeNumber;
			_damage = [_damageAsNumber,_damage] call TEST_fnc_colorizeNumber;

			_newline = format ["%1 - %2 - %3 - %4 - %5",_damage,_numberOfHits,_isDestroy,_isUndamaged,_selectionName];
			_messages pushBack _newline;
		} forEach _sortedArray;

		_textLines = ["DMG - Hits - DestroyHits - UndamagedHits - Selection",parseText "<br />","",parseText "<br />"];
		{
			_textLines pushBack (parseText _x);
			_textLines pushBack lineBreak;//parseText "<br />";
		} forEach _messages;
//diag_log ["TEST_AffectedVehicle",TEST_AffectedVehicle];
//diag_log ["_cachedAffectedSelections",_cachedAffectedSelections];
//diag_log ["_messages",_messages];

		_textLines pushBack lineBreak;//parseText "<br />";

		_textLines pushBack "DMG - alive - role - turret";
		_textLines pushBack lineBreak;//parseText "<br />";
		_textLines pushBack lineBreak;//parseText "<br />";

		_crew = fullCrew TEST_AffectedVehicle;
		{
			_unit = _x select 0;
			_role = _x select 1;
//			_cargoIndex = _x select 2;
			_turretPath = _x select 3;
//			_personTurret = _x select 4;

			_damage = [getDammage _unit,2] call BIS_fnc_cutDecimals;
			_damageAsNumber = _damage;
			_damage = [_damage,3] call TEST_fnc_normalizeNumber;
			_damage = [_damageAsNumber,_damage] call TEST_fnc_colorizeNumber;

			_text = format ["%1 - %2 - %3 - %4",_damage,alive _unit,_role,_turretPath];
			_textLines pushBack (parseText _text);
			_textLines pushBack lineBreak;//parseText "<br />";
		} forEach _crew;

		_title = "HD Overview";


		_projectile = TEST_AffectedVehicle getVariable ["TEST_ProjectileClass",""];
		_isExplosion = _projectile in ["fuelexplosion","fuelexplosionbig","helicopterexplosmall","helicopterexplobig","smallsecondary"];

		if ((_isExplosion && TEST_DEBUG_ShowExplosions) || (!_isExplosion)) then
		{
			_composedText = composeText _textLines;

			if (TEST_DEBUG_OnScreenOutput_Enabled) then
			{
				_title hintC _composedText;
			}
			else
			{
				hintSilent _composedText;
			}
		};

		TEST_NewHandleDamageEvent = false;
	};

	sleep 0.1;
};