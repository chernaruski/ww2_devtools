/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_backlistedWeaponClasses = ["lib_cannon_empty"];

_weaponClassParamtersToExport = ["minRange","minRangeProbab","midRange","midRangeProbab","maxRange","maxRangeProbab","aiRateOfFire","aiRateOfFireDispersion","aiRateOfFireDistance","aiDispersionCoefY","aiDispersionCoefX","burstRangeMax","aiBurstTerminable"];

///////////////////////////////////////////////////////////////////////////////

#define push(a,v)		(a) pushBack (v)
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_return","_result"];

//_weaponClassParamtersToExport sort true;
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

	for "_z" from 1 to ceil (log2 (count _list)) do
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

TEST_HeaderText = "";
TEST_RowsText = [];

private _missiles =
[
//	"MissileLauncher",//LauncherCore
	"missiles_ASRAAM",//MissileLauncher
	"missiles_titan",//MissileLauncher
	"missiles_Zephyr",//MissileLauncher
	"Missile_AGM_02_Plane_CAS_01_F",//MissileLauncher
	"weapon_R73Launcher",//MissileLauncher
	"weapon_R77Launcher",//MissileLauncher
	"weapon_AGM_KH25Launcher",//MissileLauncher
	"weapon_rim116Launcher",//MissileLauncher
	"weapon_rim162Launcher",//MissileLauncher
	"weapon_AMRAAMLauncher",//MissileLauncher
	"weapon_BIM9xLauncher",//MissileLauncher
	""
];

private _rockets =
[
//	"RocketPods",//LauncherCore
	"missiles_SCALPEL",//RocketPods
	"missiles_DAR",//RocketPods
	"rockets_Skyfire",//RocketPods
	"missiles_DAGR",//RocketPods
	"weapon_AGM_65Launcher",//RocketPods
	"Missile_AA_04_Plane_CAS_01_F",//RocketPods
	"rockets_230mm_GAT",//RocketPods

	"LIB_BM13",//RocketPods

	"Rocket_04_HE_Plane_CAS_01_F",//RocketPods

	"LIB_M8_Launcher_P47",//RocketPods
	""
];

private _bombs =
[
	"Mk82BombLauncher",//RocketPods
	"GBU12BombLauncher",//RocketPods
	"weapon_GBU12Launcher",//RocketPods
	"weapon_KAB250Launcher",//RocketPods
	"Bomb_04_Plane_CAS_01_F",//RocketPods

	"LIB_Bomb_Mount_base",//RocketPods
	""
];

private _vehicleMGs =
[
	"LMG_RCWS",//MGun
//	"LMG_coax",//LMG_RCWS
//	"LMG_65mm_body",//LMG_RCWS
//	"LMG_M200",//LMG_RCWS
//	"LMG_Minigun",//LMG_RCWS
	"M134_minigun",//MGunCore
	"HMG_127",//LMG_RCWS
//	"HMG_127_APC",//HMG_127
//	"HMG_127_UGV",//HMG_127
//	"HMG_01",//HMG_127
//	"HMG_static",//HMG_01
//	"HMG_M2",//HMG_01
//	"HMG_NSVT",//HMG_127

	"LIB_MLMG_base",//MGun
	"LIB_TankMGun_base",//MGun
	"LIB_PlaneMGun_base",//MGun
	""
];

private _autoCannons =
[
//	"autocannon_Base_F",//CannonCore
	"autocannon_30mm_CTWS",//autocannon_Base_F
	"autocannon_35mm",//CannonCore
	"autocannon_40mm_CTWS",//autocannon_Base_F
	"weapon_Cannon_Phalanx",//CannonCore

	"LIB_AntiAirCannon_base",//CannonCore
	""
];

private _planeCannons =
[
	"gatling_20mm",//CannonCore
	"gatling_25mm",//CannonCore
	"gatling_30mm_base",//CannonCore
	"Gatling_30mm_Plane_CAS_01_F",//CannonCore
	"Cannon_30mm_Plane_CAS_02_F",//CannonCore
	"weapon_Fighter_Gun20mm_AA",//CannonCore
	"weapon_Fighter_Gun_30mm",//CannonCore

	"LIB_PlaneCannon_base",//CannonCore
	""
];

private _tankGuns =
[
	"cannon_105mm",//CannonCore
	"cannon_120mm",//CannonCore
	"cannon_125mm",//CannonCore

//	"LIB_CannonCore",//CannonCore
	"LIB_TankHECannon_base",//LIB_CannonCore
	"LIB_TankAPCannon_base",//LIB_CannonCore
	"LIB_TankAPCRCannon_base",//LIB_CannonCore
	"LIB_TankCannon_base",//LIB_CannonCore
	""
];

private _grenadeLaunchers =
[
	"GMG_F",//MGun
	""
];

private _mortars =
[
	"mortar_82mm",//CannonCore
	"mortar_155mm_AMOS",//CannonCore

	"LIB_MortarCannon_base",//CannonCore
	""
];

private _launchers =
[
//	"Launcher",//LauncherCore
//	"Launcher_Base_F",//Launcher
	"launch_RPG32_F",//Launcher_Base_F
	"launch_RPG7_F",//Launcher_Base_F
	"launch_NLAW_F",//Launcher_Base_F
	"launch_Titan_base",//Launcher_Base_F

	"LIB_LAUNCHER",//Launcher_Base_F
	""
];

private _pistols =
[
//	"Pistol_Base_F",//Pistol
	"hgun_ACPC2_F",//Pistol_Base_F
	"hgun_P07_F",//Pistol_Base_F
	"hgun_Pistol_heavy_01_F",//Pistol_Base_F
	"hgun_Pistol_heavy_02_F",//Pistol_Base_F
	"hgun_Rook40_F",//Pistol_Base_F
	"hgun_Pistol_Signal_F",//Pistol_Base_F
	"hgun_Pistol_01_F",//Pistol_Base_F

	"LIB_PISTOL",//Pistol_Base_F
	""
];

private _smg =
[
//	"Rifle_Short_Base_F",//Rifle_Base_F
	"pdw2000_base_F",//Rifle_Short_Base_F
	"SMG_01_Base",//Rifle_Short_Base_F
	"SMG_02_base_F",//Rifle_Short_Base_F
	"SMG_05_base_F",//Rifle_Short_Base_F

	"LIB_SMG",//Rifle_Short_Base_F
	""
];

private _lmg =
[
	"LMG_Mk200_F",//Rifle_Long_Base_F
	"LMG_Zafir_F",//Rifle_Long_Base_F
	"LMG_03_base_F",//Rifle_Long_Base_F

	"LIB_LMG",//Rifle_Long_Base_F
	""
];

private _mmg =
[
	"MMG_01_base_F",//Rifle_Long_Base_F
	"MMG_02_base_F",//Rifle_Long_Base_F
	""
];

private _rifles =
[
//	"Rifle_Base_F",//Rifle
	"arifle_Katiba_Base_F",//Rifle_Base_F
	"mk20_base_F",//Rifle_Base_F
	"arifle_MX_Base_F",//Rifle_Base_F
	"SDAR_base_F",//Rifle_Base_F
	"Tavor_base_F",//Rifle_Base_F
	"arifle_AK12_base_F",//Rifle_Base_F
	"arifle_AKM_base_F",//Rifle_Base_F
	"arifle_AKS_base_F",//Rifle_Base_F
	"arifle_ARX_base_F",//Rifle_Base_F
	"arifle_CTAR_base_F",//Rifle_Base_F
	"arifle_CTARS_base_F",//Rifle_Base_F
	"arifle_SPAR_01_base_F",//Rifle_Base_F
	"arifle_SPAR_02_base_F",//Rifle_Base_F
	"arifle_SPAR_03_base_F",//Rifle_Base_F

	"LIB_RIFLE",//Rifle_Base_F
	""
];

private _sniperRifles =
[
	"Rifle_Long_Base_F",//Rifle_Base_F
	"DMR_01_base_F",//Rifle_Long_Base_F
	"DMR_02_base_F",//Rifle_Long_Base_F
	"DMR_03_base_F",//Rifle_Long_Base_F
	"DMR_04_base_F",//Rifle_Long_Base_F
	"DMR_05_base_F",//Rifle_Long_Base_F
	"DMR_06_base_F",//Rifle_Long_Base_F
	"DMR_07_base_F",//Rifle_Long_Base_F
	"EBR_base_F",//Rifle_Long_Base_F
	"GM6_base_F",//Rifle_Long_Base_F
	"LRR_base_F",//Rifle_Long_Base_F

	"LIB_SRIFLE",//Rifle_Long_Base_F
	""
];

TEST_AllWeapons = 'true' configClasses (configFile/"cfgWeapons");

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
_bombsFiltered = [_bombs] call _fnc_filterWeapons;
_vehicleMGsFiltered = [_vehicleMGs] call _fnc_filterWeapons;
_autoCannonsFiltered = [_autoCannons] call _fnc_filterWeapons;
_planeCannonsFiltered = [_planeCannons] call _fnc_filterWeapons;
_tankGunsFiltered = [_tankGuns] call _fnc_filterWeapons;
_grenadeLaunchersFiltered = [_grenadeLaunchers] call _fnc_filterWeapons;
_mortarsFiltered = [_mortars] call _fnc_filterWeapons;
_launchersFiltered = [_launchers] call _fnc_filterWeapons;
_pistolsFiltered = [_pistols] call _fnc_filterWeapons;
_smgFiltered = [_smg] call _fnc_filterWeapons;
_lmgFiltered = [_lmg] call _fnc_filterWeapons;
_mmgFiltered = [_mmg] call _fnc_filterWeapons;
_riflesFiltered = [_rifles] call _fnc_filterWeapons;
_sniperRiflesFiltered = [_sniperRifles] call _fnc_filterWeapons;

_allFilteredWeapons = _missilesFiltered + _rocketsFiltered + _bombsFiltered + _vehicleMGsFiltered + _autoCannonsFiltered + _planeCannonsFiltered + _tankGunsFiltered + _grenadeLaunchersFiltered + _mortarsFiltered + _launchersFiltered + _pistolsFiltered + _smgFiltered + _lmgFiltered + _mmgFiltered + _riflesFiltered + _sniperRiflesFiltered;

diag_log ["_allFilteredWeapons",_allFilteredWeapons];

TEST_HeaderText = TEST_HeaderText + "Weapon" + "	" + "WeaponMode" + "	";

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _weaponClassParamtersToExport;

_rootClass = "cfgWeapons";

{
	private _class = (configFile/_rootClass/_x);
//	private _class = _x;

	if (isClass _class) then
	{
		private _weaponClass = configName _class;

		TEST_TextCurrentRow = _weaponClass + "	" + "#" + "	";

		{
			private _parameter = _x;
			[_parameter,_class] call _logParameterValue;
		} forEach _weaponClassParamtersToExport;

		TEST_RowsText pushBack TEST_TextCurrentRow;

		private _weaponModes = getArray (configFile/_rootClass/_weaponClass/"modes");

		{
			_weaponMode = _x;
			if (_weaponMode != "this") then
			{
				TEST_TextCurrentRow = _weaponClass + "	" + _weaponMode + "	";

				{
					private _parameter = _x;
					[_parameter,_class/_weaponMode] call _logParameterValue;
				} forEach _weaponClassParamtersToExport;

				TEST_RowsText pushBack TEST_TextCurrentRow;
			};
		} forEach _weaponModes;

		TEST_RowsText pushBack "";
	};
} forEach _allFilteredWeapons;
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return = TEST_HeaderText + newline;

{
	_return = _return + _x + newline;
} forEach TEST_RowsText;

copyToClipboard _return;