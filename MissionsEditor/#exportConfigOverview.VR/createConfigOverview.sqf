/* ----------------------------------------------------------------------------
Description:
	TODO

Returns:
	Long text of config key-value pairs [String]

Examples:
	(begin example)
		_string = [] execVM "createConfigOverview.sqf";
	(end)

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

#define push(a,v)		(a) set [count(a),(v)]
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_configKey","_return","_exit","_defaultClass","_testData","_dataType","_result"];

_rootClass = _this select 0;
_rootClass = toLower _rootClass;
_configKey = _this select 1;
_uniqueOnly = _this select 2;

_return = " ";

if ((typeName _rootClass) != "string") exitWith
{
	diag_log ["createConfigOverview","Wrong data type for first parameter"];
	_return
};
if ((typeName _configKey) != "string") exitWith
{
	diag_log ["createConfigOverview","Wrong data type for second parameter"];
	_return
};

_exit = true;
_exit = switch (_rootClass) do
{
	case "cfgammo": {false};
	case "cfgmagazines": {false};
	case "cfgweapons": {false};
	case "cfgvehicles": {false};
	default {true};
};
if (_exit) exitWith
{
	diag_log ["createConfigOverview","rootClass not found"];
	_return
};

_defaultClass = "Default";
if (_rootClass == "cfgvehicles") then {_defaultClass = "All";};

_testData = configFile/_rootClass/_defaultClass/_configKey;

_dataType = "null";
_dataType = switch (true) do
{
	case (isText _testData): {"text"};
	case (isNumber _testData): {"number"};
	case (isArray _testData): {"array"};
	default {"null"};
};
if (_dataType == "null") exitWith
{
	diag_log ["createConfigOverview","dataType not found"];
	_return
};



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

_getConfingParameterValue =
{
	_class = _this select 0;

	private _return = switch (_dataType) do
	{
		case "text":
		{
			getText(_class/_configKey)
		};
		case "number":
		{
			str (getNumber(_class/_configKey))
		};
		case "array":
		{
			(getArray(_class/_configKey)) call _traverseArray
		};
	};
	_return;
};

// start checking config
_result = [];


//CfgVehicles
LIB_Set_Car = [];
LIB_Set_Tank = [];
LIB_Set_Plane = [];
LIB_Set_Ship = [];
LIB_Set_StaticWeapon = [];

LIB_Set_CAManBase = [];

LIB_Set_AllVehicles = [];


//CfgWeapons
LIB_Set_Rifle_Long_Base_F = [];
LIB_Set_Rifle_Short_Base_F = [];
LIB_Set_Rifle_Base_F = [];

LIB_Set_Pistol = [];

LIB_Set_Launcher_Base_F = [];
LIB_Set_Launcher = [];

LIB_Set_GrenadeLauncher = [];

LIB_Set_ItemCore = [];

//vehicles
LIB_Set_CarHorn = [];

LIB_Set_LIB_MLMG_base = [];
LIB_Set_LIB_TankMGun_base = [];
LIB_Set_LIB_PlaneMGun_base = [];
LIB_Set_MGun = [];

LIB_Set_LIB_TankCannon_base = [];
LIB_Set_LIB_StaticGunCannon_base = [];
LIB_Set_LIB_CannonCore = [];
LIB_Set_LIB_NotLoadedCannon_base = [];
LIB_Set_LIB_cannon_reloading = [];
LIB_Set_LIB_cannon_empty = [];
LIB_Set_LIB_PlaneCannon_base = [];
LIB_Set_LIB_AntiAirCannon_base = [];
LIB_Set_LIB_MortarCannon_base = [];
LIB_Set_CannonCore = [];

LIB_Set_LIB_Bomb_Mount_base = [];
LIB_Set_LIB_M8_Launcher_P47 = [];
LIB_Set_RocketPods = [];


//CfgMagazines


//CfgAmmo
LIB_Set_LIB_Bullet_Vehicle_base = [];
LIB_Set_LIB_Bullet_Plane_base = [];
LIB_Set_LIB_Bullet_AA_base = [];
LIB_Set_LIB_Bullet_AP_base = [];

LIB_Set_LIB_Bullet_base = [];
LIB_Set_BulletBase = [];
LIB_Set_BulletCore = [];

LIB_Set_Smokeshell = [];
LIB_Set_GrenadeHand = [];
LIB_Set_FlareCore = [];

LIB_Set_GrenadeBase = [];

LIB_Set_LIB_Rocket_base = [];
LIB_Set_RocketBase = [];

LIB_Set_LIB_ShellHE_base = [];
LIB_Set_LIB_Shell_base = [];
LIB_Set_LIB_ShellAPCR_base = [];

LIB_Set_LIB_FlakExplosion = [];
LIB_Set_ShellBase = [];

LIB_Set_LIB_Bomb_base = [];
LIB_Set_BombCore = [];

LIB_Set_SubmunitionBase = [];


//

LIB_Set_Default = [];

//

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className","_configValue"];
		_className = configName _class;

		_configValue = [_class] call _getConfingParameterValue;

		private _add = true;

		if (_uniqueOnly) then
		{
			private _parentClass = inheritsFrom _class;
			private _parentClassName = configName _parentClass;

			_parentConfigValue = [_parentClass] call _getConfingParameterValue;

			if (_parentConfigValue isEqualTo _configValue) then {_add = false;};
		};

		if (_add) then
		{
			_set = switch (_rootClass) do
			{
				case "cfgvehicles":
				{
					switch (true) do
					{
						case (_className isKindOf "Car"):
						{
							LIB_Set_Car
						};
						case (_className isKindOf "Tank"):
						{
							LIB_Set_Tank
						};
						case (_className isKindOf "Plane"):
						{
							LIB_Set_Plane
						};
						case (_className isKindOf "Ship"):
						{
							LIB_Set_Ship
						};
						case (_className isKindOf "StaticWeapon"):
						{
							LIB_Set_StaticWeapon
						};

						case (_className isKindOf "CAManBase"):
						{
							LIB_Set_CAManBase
						};

						case (_className isKindOf "AllVehicles"):
						{
							LIB_Set_AllVehicles
						};

						default
						{
							LIB_Set_Default
						};
					};
				};
				case "cfgweapons":
				{
					switch (true) do
					{
						case (_className isKindOf ["Rifle_Long_Base_F",configFile >> "CfgWeapons"]):
						{
							LIB_Set_Rifle_Long_Base_F
						};
						case (_className isKindOf ["Rifle_Short_Base_F",configFile >> "CfgWeapons"]):
						{
							LIB_Set_Rifle_Short_Base_F
						};
						case (_className isKindOf ["Rifle_Base_F",configFile >> "CfgWeapons"]):
						{
							LIB_Set_Rifle_Base_F
						};

						case (_className isKindOf ["Pistol",configFile >> "CfgWeapons"]):
						{
							LIB_Set_Pistol
						};

						case (_className isKindOf ["Launcher_Base_F",configFile >> "CfgWeapons"]):
						{
							LIB_Set_Launcher_Base_F
						};
						case (_className isKindOf ["Launcher",configFile >> "CfgWeapons"]):
						{
							LIB_Set_Launcher
						};

						case (_className isKindOf ["GrenadeLauncher",configFile >> "CfgWeapons"]):
						{
							LIB_Set_GrenadeLauncher
						};

						case (_className isKindOf ["ItemCore",configFile >> "CfgWeapons"]):
						{
							LIB_Set_ItemCore
						};

						case (_className isKindOf ["CarHorn",configFile >> "CfgWeapons"]):
						{
							LIB_Set_CarHorn
						};

						case (_className isKindOf ["LIB_MLMG_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_MLMG_base
						};
						case (_className isKindOf ["LIB_TankMGun_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_TankMGun_base
						};
						case (_className isKindOf ["LIB_PlaneMGun_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_PlaneMGun_base
						};
						case (_className isKindOf ["MGun",configFile >> "CfgWeapons"]):
						{
							LIB_Set_MGun
						};

						case (_className isKindOf ["LIB_TankCannon_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_TankCannon_base
						};
						case (_className isKindOf ["LIB_StaticGunCannon_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_StaticGunCannon_base
						};
						case (_className isKindOf ["LIB_CannonCore",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_CannonCore
						};
						case (_className isKindOf ["LIB_NotLoadedCannon_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_NotLoadedCannon_base
						};
						case (_className isKindOf ["LIB_cannon_reloading",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_cannon_reloading
						};
						case (_className isKindOf ["LIB_cannon_empty",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_cannon_empty
						};
						case (_className isKindOf ["LIB_PlaneCannon_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_PlaneCannon_base
						};
						case (_className isKindOf ["LIB_AntiAirCannon_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_AntiAirCannon_base
						};
						case (_className isKindOf ["LIB_MortarCannon_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_MortarCannon_base
						};
						case (_className isKindOf ["CannonCore",configFile >> "CfgWeapons"]):
						{
							LIB_Set_CannonCore
						};

						case (_className isKindOf ["LIB_Bomb_Mount_base",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_Bomb_Mount_base
						};
						case (_className isKindOf ["LIB_M8_Launcher_P47",configFile >> "CfgWeapons"]):
						{
							LIB_Set_LIB_M8_Launcher_P47
						};
						case (_className isKindOf ["RocketPods",configFile >> "CfgWeapons"]):
						{
							LIB_Set_RocketPods
						};

						default
						{
							LIB_Set_Default
						};
					};
				};
				case "cfgammo":
				{
					switch (true) do
					{
						case (_className isKindOf "LIB_Bullet_Vehicle_base"):
						{
							LIB_Set_LIB_Bullet_Vehicle_base
						};
						case (_className isKindOf "LIB_Bullet_Plane_base"):
						{
							LIB_Set_LIB_Bullet_Plane_base
						};
						case (_className isKindOf "LIB_Bullet_AA_base"):
						{
							LIB_Set_LIB_Bullet_AA_base
						};
						case (_className isKindOf "LIB_Bullet_AP_base"):
						{
							LIB_Set_LIB_Bullet_AP_base
						};

						case (_className isKindOf "LIB_Bullet_base"):
						{
							LIB_Set_LIB_Bullet_base
						};
						case (_className isKindOf "BulletBase"):
						{
							LIB_Set_BulletBase
						};
						case (_className isKindOf "BulletCore"):
						{
							LIB_Set_BulletCore
						};

						case (_className isKindOf "Smokeshell"):
						{
							LIB_Set_Smokeshell
						};
						case (_className isKindOf "GrenadeHand"):
						{
							LIB_Set_GrenadeHand
						};
						case (_className isKindOf "FlareCore"):
						{
							LIB_Set_FlareCore
						};

						case (_className isKindOf "GrenadeBase"):
						{
							LIB_Set_GrenadeBase
						};

						case (_className isKindOf "LIB_Rocket_base"):
						{
							LIB_Set_LIB_Rocket_base
						};
						case (_className isKindOf "RocketBase"):
						{
							LIB_Set_RocketBase
						};

						case (_className isKindOf "LIB_ShellHE_base"):
						{
							LIB_Set_LIB_ShellHE_base
						};
						case (_className isKindOf "LIB_Shell_base"):
						{
							LIB_Set_LIB_Shell_base
						};
						case (_className isKindOf "LIB_ShellAPCR_base"):
						{
							LIB_Set_LIB_ShellAPCR_base
						};

						case (_className isKindOf "LIB_FlakExplosion"):
						{
							LIB_Set_LIB_FlakExplosion
						};
						case (_className isKindOf "ShellBase"):
						{
							LIB_Set_ShellBase
						};

						case (_className isKindOf "LIB_Bomb_base"):
						{
							LIB_Set_LIB_Bomb_base
						};
						case (_className isKindOf "BombCore"):
						{
							LIB_Set_BombCore
						};

						case (_className isKindOf "SubmunitionBase"):
						{
							LIB_Set_SubmunitionBase
						};

						default
						{
							LIB_Set_Default
						};
					};
				};
				default
				{
					LIB_Set_Default
				};
			};

//			diag_log ["_set",_rootClass,_className];

			_set pushBack (_configKey + "	" + _className + "	" + _configValue);
//			push(_result,(_configKey + "	" + _className + "	" + _configValue));
		};
	};
};

_result =
	LIB_Set_Car +
	LIB_Set_Tank +
	LIB_Set_Plane +
	LIB_Set_Ship +
	LIB_Set_StaticWeapon +
	LIB_Set_CAManBase +
	LIB_Set_AllVehicles +
	LIB_Set_Rifle_Long_Base_F +
	LIB_Set_Rifle_Short_Base_F +
	LIB_Set_Rifle_Base_F +
	LIB_Set_Pistol +
	LIB_Set_Launcher_Base_F +
	LIB_Set_Launcher +
	LIB_Set_GrenadeLauncher +
	LIB_Set_ItemCore +
	LIB_Set_CarHorn +
	LIB_Set_LIB_MLMG_base +
	LIB_Set_LIB_TankMGun_base +
	LIB_Set_LIB_PlaneMGun_base +
	LIB_Set_MGun +
	LIB_Set_LIB_TankCannon_base +
	LIB_Set_LIB_StaticGunCannon_base +
	LIB_Set_LIB_CannonCore +
	LIB_Set_LIB_NotLoadedCannon_base +
	LIB_Set_LIB_cannon_reloading +
	LIB_Set_LIB_cannon_empty +
	LIB_Set_LIB_PlaneCannon_base +
	LIB_Set_LIB_AntiAirCannon_base +
	LIB_Set_LIB_MortarCannon_base +
	LIB_Set_CannonCore +
	LIB_Set_LIB_Bomb_Mount_base +
	LIB_Set_LIB_M8_Launcher_P47 +
	LIB_Set_RocketPods +
	LIB_Set_LIB_Bullet_Vehicle_base +
	LIB_Set_LIB_Bullet_Plane_base +
	LIB_Set_LIB_Bullet_AA_base +
	LIB_Set_LIB_Bullet_AP_base +
	LIB_Set_LIB_Bullet_base +
	LIB_Set_BulletBase +
	LIB_Set_BulletCore +
	LIB_Set_Smokeshell +
	LIB_Set_GrenadeHand +
	LIB_Set_FlareCore +
	LIB_Set_GrenadeBase +
	LIB_Set_LIB_Rocket_base +
	LIB_Set_RocketBase +
	LIB_Set_LIB_ShellHE_base +
	LIB_Set_LIB_Shell_base +
	LIB_Set_LIB_ShellAPCR_base +
	LIB_Set_LIB_FlakExplosion +
	LIB_Set_ShellBase +
	LIB_Set_LIB_Bomb_base +
	LIB_Set_BombCore +
	LIB_Set_SubmunitionBase +
	LIB_Set_Default +
	[];

_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return;