/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_backlistedWeaponClasses = ["lib_cannon_empty"];
_backlistedMagazineClasses = [];
_backlistedAmmoClasses = ["lib_pzfaust_30m_used"];

_magazineClassParamtersToExport = ["displayName","displayNameShort","ammo","count","tracersEvery","lastRoundsTracer","mass","weight","initSpeed","maxLeadSpeed"];
_ammoClassParamtersToExport = ["hit","indirectHit","indirectHitRange","caliber","explosive","initTime","thrust","thrustTime","typicalSpeed","maxSpeed","airFriction","sideAirFriction","timeToLive","deflecting","fuseDistance","tracerEndTime","tracerScale","tracerStartTime","cartridge","submunitionAmmo","simulation","simulationStep","irLock","airLock","laserLock","cost","allowAgainstInfantry","aiAmmoUsageFlags","audibleFire","visibleFire","visibleFireTime","dangerRadiusBulletClose","dangerRadiusHit","suppressionRadiusBulletClose","suppressionRadiusHit","whistleDist","whistleOnFire"];

///////////////////////////////////////////////////////////////////////////////

#define push(a,v)		(a) pushBack (v)
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_return","_result"];

//_magazineClassParamtersToExport sort true;
//_ammoClassParamtersToExport sort true;
_return = "";

#define newline (toString [13,10])

// functions
private["_traverseArray","_joinString","_escapeString"];

_traverseArray =
{
	if ((typeName _this) == "array") exitWith
	{
		private "_array";
		_array = [];

		for "_i" from (0) to ((count _this) - 1) do
		{
			push(_array,(_this select _i) call _traverseArray);
		};

		"{" + ([_array,","] call _joinString) + "}";
	};

	if ((typeName _this) == "string") exitWith
	{
		_this call _escapeString;
	};
	str _this;
};

_joinString =
{
	// Fast string concatenation
	private ["_list","_char","_size","_subsize","_oversize","_j"];
	_list = arg(0);
	_char = arg(1);

	if (count _list < 1) exitWith {""};

	for "" from 1 to ceil (log2 (count _list)) do
	{
		_size = (count _list) / 2;
		_subsize = floor _size;
		_oversize = ceil _size;
		_j = 0;

		for "_i" from (0) to (_subsize - 1) do
		{
			_list set [_i,(_list select _j) + _char + (_list select (_j + 1))];
			_j = _j + 2;
		};

		if (_subsize != _oversize) then// to add a tail
		{
			_list set [_j / 2,_list select _j];
		};
		_list resize _oversize;
	};
	_list select 0;
};

_escapeString =
{
	private ["_source","_target","_start","_charCode"];
	_source = toArray _this;
	_start = _source find 34;

	if (_start > -1) then
	{
		_target = +_source;
		_target resize _start;

		for "_i" from (_start) to ((count _source) - 1) do
		{
			_charCode = _source select _i;
			push(_target,_charCode);
			if (_charCode == 34) then
			{
				push(_target,_charCode);
			};
		};

		str toString _target;
	}
	else
	{
		str _this;
	};
};


_logParameterValue =
{
	private _parameter = _this select 0;
	private _class = _this select 1;
//diag_log["_parameter",_parameter,_class];

	if ((typeName _parameter) != "STRING") exitWith {};

	private _paramterConfig = (_class/_parameter);
	private _className = configName _class;

	private _dataType = switch (true) do
	{
		case (isText _paramterConfig): {"text"};
		case (isNumber _paramterConfig): {"number"};
		case (isArray _paramterConfig): {"array"};
		default {"null"};
	};

	private _configValue = switch (_dataType) do
	{
		case "text":
		{
			getText _paramterConfig
		};
		case "number":
		{
			str (getNumber _paramterConfig)
		};
		case "array":
		{
			(getArray _paramterConfig) call _traverseArray
		};
		default {"?"};
	};
	TEST_TextCurrentRow = TEST_TextCurrentRow + str _configValue + "	";
//	diag_log[_className,_parameter,_dataType,_configValue];
//	_result pushBack (_className + "	" + _configValue));
};

// start checking config
_result = [];

TEST_HeaderText = "XXX	";
TEST_RowsText = [];

private _missiles =
[
//	"MissileLauncher",//LauncherCore
	"missiles_ASRAAM",//MissileLauncher
	"missiles_titan",//MissileLauncher
	"missiles_Zephyr",//MissileLauncher
	"Missile_AGM_02_Plane_CAS_01_F",//MissileLauncher
	""
];

private _rockets =
[
//	"RocketPods",//LauncherCore
	"missiles_DAGR",//RocketPods
	"missiles_DAR",//RocketPods
	"missiles_SCALPEL",//RocketPods
	"Missile_AA_04_Plane_CAS_01_F",//RocketPods
	"LIB_BM13",//RocketPods
	"rockets_Skyfire",//RocketPods
	"rockets_230mm_GAT",//RocketPods
	"Rocket_04_HE_Plane_CAS_01_F",//RocketPods
	"LIB_M8_Launcher_P47",//RocketPods
	"GBU12BombLauncher",//RocketPods
	"Mk82BombLauncher",//RocketPods
	"Bomb_04_Plane_CAS_01_F",//RocketPods
	"LIB_Bomb_Mount_base",//RocketPods
	""
];

private _cannons =
[
//	"CannonCore",//Default
	"mortar_82mm",//CannonCore
	"mortar_155mm_AMOS",//CannonCore
	"LIB_MortarCannon_base",//CannonCore
	"gatling_20mm",//CannonCore
	"gatling_25mm",//CannonCore
	"gatling_30mm",//CannonCore
	"autocannon_35mm",//CannonCore
	"LIB_AntiAirCannon_base",//CannonCore
	"Gatling_30mm_Plane_CAS_01_F",//CannonCore
	"Cannon_30mm_Plane_CAS_02_F",//CannonCore
	"LIB_PlaneCannon_base",//CannonCore
	"autocannon_Base_F",//CannonCore
	"cannon_105mm",//CannonCore
	"cannon_120mm",//CannonCore
	"cannon_125mm",//CannonCore
//	"LIB_cannon_reloading",//CannonCore
//	"LIB_CannonCore",//CannonCore
	"LIB_TankAPCannon_base",//LIB_CannonCore
	"LIB_TankAPCRCannon_base",//LIB_CannonCore
	"LIB_TankHECannon_base",//LIB_CannonCore
	"LIB_TankCannon_base",//LIB_CannonCore
//	"LIB_NotLoadedCannon_base",//CannonCore
	""
];

private _launchers =
[
	"Launcher_Base_F",//Launcher
//	"Launcher",//LauncherCore
	"LIB_LAUNCHER",//Launcher_Base_F
	""
];

private _vehicleMGs =
[
	"M2",//MGun
	"LMG_RCWS",//MGun
//	"MGun",//MGunCore
	"M134_minigun",//MGunCore
	"LIB_MLMG_base",//MGun
	"LIB_TankMGun_base",//MGun
	"LIB_PlaneMGun_base",//MGun
	"GMG_F",//MGun
//	"SmokeLauncher",//MGun
//	"SEARCHLIGHT",//MGun
//	"MGunCore",//Default
	""
];

private _pistols =
[
	"Pistol_Base_F",//Pistol
//	"Pistol",//PistolCore
//	"PistolCore",//Default
	"LIB_PISTOL",//Pistol_Base_F
	""
];

private _rifles =
[
	"Rifle_Base_F",//Rifle
//	"RifleCore",//Default
//	"Rifle",//RifleCore
	"LIB_RIFLE",//Rifle_Base_F
	"Rifle_Short_Base_F",//Rifle_Base_F
	"LIB_SMG",//Rifle_Short_Base_F
	"Rifle_Long_Base_F",//Rifle_Base_F
	"LIB_LMG",//Rifle_Long_Base_F
	"LIB_SRIFLE",//Rifle_Long_Base_F
	""
];

//	class GrenadeLauncher: Default
//	class Throw: GrenadeLauncher
//	class Put: Default

TEST_AllWeapons = 'true' configClasses (configFile/"cfgWeapons");
TEST_AllMagazines = 'true' configClasses (configFile/"cfgMagazines");

_fnc_filterWeapons =
{
	private _filters = _this select 0;

	private _return = [];

	{
		private _weaponClass = toLower (configName _x);
		if (!(_weaponClass in _backlistedWeaponClasses)) then
		{
			{
				private _filter = _x;
				if (_weaponClass isKindOf [_filter,configFile/"cfgWeapons"]) exitWith
				{
					_return pushBackUnique _weaponClass;
				};
			} forEach _filters;
		};
	} forEach TEST_AllWeapons;

	_return
};

_missilesFiltered = [_missiles] call _fnc_filterWeapons;
_rocketsFiltered = [_rockets] call _fnc_filterWeapons;
_cannonsFiltered = [_cannons] call _fnc_filterWeapons;
_launchersFiltered = [_launchers] call _fnc_filterWeapons;
_vehicleMGsFiltered = [_vehicleMGs] call _fnc_filterWeapons;
_pistolsFiltered = [_pistols] call _fnc_filterWeapons;
_riflesFiltered = [_rifles] call _fnc_filterWeapons;

_allFilteredWeapons = _missilesFiltered + _rocketsFiltered + _cannonsFiltered + _launchersFiltered + _vehicleMGsFiltered + _pistolsFiltered + _riflesFiltered;

//private _vehicleMagazines = '(configName _x) isKindOf ["VehicleMagazine",configFile/"CfgMagazines"]' configClasses (configFile/"CfgMagazines");
//private _launcherMagazines = '(configName _x) isKindOf ["CA_LauncherMagazine",configFile/"CfgMagazines"]' configClasses (configFile/"CfgMagazines");
//private _allMagazines = '(configName _x) isKindOf ["CA_Magazine",configFile/"CfgMagazines"]' configClasses (configFile/"CfgMagazines");

private _magazines = [];

{
	private _weaponClass = _x;
	private _weaponMagazines = getArray (configFile/"cfgWeapons"/_weaponClass/"magazines");

	{
		private _magazineClass = toLower _x;
		if (!(_magazineClass in _backlistedMagazineClasses)) then
		{
			if (!(_magazineClass in _magazines)) then
			{
				_magazines pushBackUnique _magazineClass;
			};
		};
	} forEach _weaponMagazines;
} forEach _allFilteredWeapons;

{
	private _magazineClass = toLower (configName _x);
	if (getNumber (configFile/"cfgMagazines"/_magazineClass/"scope") > 0) then
	{
		if (!(_magazineClass in _magazines)) then
		{
			if (!(_magazineClass in _backlistedMagazineClasses)) then
			{
				_magazines pushBackUnique _magazineClass;
			};
		};
	};
} forEach TEST_AllMagazines;

//_allMagazineToExport = _vehicleMagazines + _launcherMagazines + _magazines;
_allMagazineToExport = _magazines;

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _magazineClassParamtersToExport;

TEST_HeaderText = TEST_HeaderText + "Ammo" + "	";

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _ammoClassParamtersToExport;

_rootClass = "cfgMagazines";

{
	private _class = (configFile/_rootClass/_x);
//	private _class = _x;

	if (isClass _class) then
	{
		private _className = configName _class;

		if (!((toLower _className) in _backlistedAmmoClasses)) then
		{
			private _ammoClassName = getText (configFile/_rootClass/_className/"ammo");
			private _ammoClass = configFile/"cfgAmmo"/_ammoClassName;

			if (isClass _ammoClass) then
			{
				TEST_TextCurrentRow = _className + "	";

				{
					private _parameter = _x;
					[_parameter,_class] call _logParameterValue;
				} forEach _magazineClassParamtersToExport;

				TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";

				{
					private _parameter = _x;
					[_parameter,_ammoClass] call _logParameterValue;
				} forEach _ammoClassParamtersToExport;

				TEST_RowsText pushBack TEST_TextCurrentRow;
			};
		};
	};
} forEach _allMagazineToExport;
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return = TEST_HeaderText + newline;

{
	_return = _return + _x + newline;
} forEach TEST_RowsText;

copyToClipboard _return;