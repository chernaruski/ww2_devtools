/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_filterBaseClass = "CAManBase";
_backlistedClasses = ["virtualman_f","headlessclient_f","virtualcurator_f","b_virtualcurator_f","o_virtualcurator_f","i_virtualcurator_f","c_virtualcurator_f","virtualspectator_f"];
_whitelistedClasses = ["lib_ger_soldier_base","lib_sov_soldier_base","lib_us_soldier_base","lib_ger_soldier_camo_base","lib_ger_tank_crew_base","lib_wp_base","lnrd_luftwaffe_base","sg_sturmpanzer_base","sg_sturmtrooper_base","lib_us_rifleman_ads","lnrd_luftwaffe_rifleman_ads","sg_sturmtrooper_rifleman_ads","lib_ger_rifleman_ads","lib_wp_strzelec_ads","lib_sov_rifleman_ads"];

_baseClassParamterToExport = ["armor","armorLights","armorStructural","damageResistance","explosionShielding","impactDamageMultiplier","minTotalDamageThreshold"];
_hitPointsClassParamterToExport = ["armor","depends","explosionShielding","material","minimalHit","name","passThrough","radius","visual"];

_hitPointsClassesToExport = ["HitHead","HitFace","HitNeck","HitBody","HitPelvis","HitAbdomen","HitDiaphragm","HitChest","HitHands","HitArms","hand_l","hand_r","HitLegs","leg_l","leg_r"];
_hitPointsTurretClassesToExport = ["HitTurret","HitGun"];

///////////////////////////////////////////////////////////////////////////////

#define push(a,v)		(a) pushBack (v)
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_return","_result"];

//_baseClassParamterToExport sort true;
//_hitPointsClassParamterToExport sort true;
//_hitPointsClassesToExport sort true;
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
	if (!TEST_HeaderDone) then
	{
		TEST_HeaderText = TEST_HeaderText + _parameter + "	";
	};
	TEST_TextCurrentRow = TEST_TextCurrentRow + str _configValue + "	";
//	diag_log[_className,_parameter,_dataType,_configValue];
//	_result pushBack (_className + "	" + _configValue));
};

_logHitPointsParameterValue =
{
	private _class = _this select 0;
	private _configPath = _class;
	private _hitPointsClasses = _this select 1;
//diag_log["_class",_class];
//diag_log["_configPath",_configPath];

	if (isClass (_class/"HitPoints")) then
	{
		if (!TEST_HeaderDone) then
		{
			TEST_HeaderText = TEST_HeaderText + "HitPoints" + "	";
		};
		TEST_TextCurrentRow = TEST_TextCurrentRow + "*" + "	";

/*
		private _hitPointsClasses = [];
		for "_j" from (0) to ((count(_configPath/"HitPoints")) - 1) do
		{
			private _hitPointsClass = (_configPath/"HitPoints") select _j;
			private _hitPointsClassName = configName _hitPointsClass;

			//if X in array then ADD

			_hitPointsClasses pushBack _hitPointsClassName;
		};

		_hitPointsClasses sort true;
*/

		{
			private _hitPointsClass = (_configPath/"HitPoints"/_x);
//			diag_log["_hitPointsClass",_hitPointsClass];

			if (!TEST_HeaderDone) then
			{
//				TEST_HeaderText = TEST_HeaderText + configName _hitPointsClass + "	";
				TEST_HeaderText = TEST_HeaderText + _x + "	";
			};
			TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";

			if (isClass _hitPointsClass) then
			{
				{
					private _parameter = _x;
					[_parameter,_hitPointsClass] call _logParameterValue;
				} forEach _hitPointsClassParamterToExport;
			}
			else
			{
				{
					if (!TEST_HeaderDone) then
					{
						TEST_HeaderText = TEST_HeaderText + "-" + "	";
						TEST_TextCurrentRow = TEST_TextCurrentRow + "-" + "	";
					}
					else
					{
						TEST_TextCurrentRow = TEST_TextCurrentRow + "-" + "	";
					};
				} forEach _hitPointsClassParamterToExport;

//				TEST_TextCurrentRow = TEST_TextCurrentRow + "-" + "	";
			};

/*
			private _hitPointsParameters = [];
			for "_k" from (0) to ((count(_hitPointsClass)) - 1) do
			{
				private _parameter = configName (_hitPointsClass select _k);
				_hitPointsParameters pushBack _parameter;
			};

			_hitPointsParameters sort true;

			{
				[_x,_hitPointsClass] call _logParameterValue;
			} forEach _hitPointsParameters;
*/
		} forEach _hitPointsClasses;
	};
};

// start checking config
_result = [];

_rootClass = "cfgVehicles";

TEST_HeaderText = "XXX	";
TEST_HeaderDone = false;
TEST_RowsText = [];

TEST_InfantryArmorStats = [];
TEST_InfantryStoredClasses = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className","_configValue"];
		_className = configName _class;

		if (_className isKindOf _filterBaseClass) then
		{
			if (!((toLower _className) in _backlistedClasses)) then
			{
				private _add = true;

				private _valueArmor = getNumber (configFile/"CfgVehicles"/_className/"armor");
				private _valueArmorStructural = getNumber (configFile/"CfgVehicles"/_className/"armorStructural");
				private _valueExplosionShielding = getNumber (configFile/"CfgVehicles"/_className/"explosionShielding");
				private _valueMinTotalDamageThreshold = getNumber (configFile/"CfgVehicles"/_className/"minTotalDamageThreshold");
				private _valueImpactDamageMultiplier = getNumber (configFile/"CfgVehicles"/_className/"impactDamageMultiplier");
				private _armorStatsNewVehicleClass = [_valueArmor,_valueArmorStructural,_valueExplosionShielding,_valueMinTotalDamageThreshold,_valueImpactDamageMultiplier];

				{
					private _hitPointsClass = _x;
				
					private _valueArmor = getNumber (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"armor");
					private _valueDepends = getText (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"depends");
					private _valueExplosionShielding = getNumber (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"explosionShielding");
					private _valueMinimalHit = getNumber (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"minimalHit");
					private _valuePassThrough = getNumber (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"passThrough");
					private _valueRadius = getNumber (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"radius");
					private _valueVisual = getText (configFile/"CfgVehicles"/_className/"HitPoints"/_hitPointsClass/"visual");
					private _hitPointsStatsNewVehicleClass = [_valueArmor,_valueDepends,_valueExplosionShielding,_valueMinimalHit,_valuePassThrough,_valueRadius,_valueVisual];

					_armorStatsNewVehicleClass pushBack _hitPointsClass;
					_armorStatsNewVehicleClass pushBack _hitPointsStatsNewVehicleClass;
				} forEach _hitPointsClassesToExport;

				_exit = false;
				{
					if (_x isEqualTo _armorStatsNewVehicleClass) then
					{
						{
							if (_className isKindOf _x) exitWith {_exit = true;};
						} forEach TEST_InfantryStoredClasses;
					};
					if (_exit) exitWith {_add = false;};
				} forEach TEST_InfantryArmorStats;

				if ((toLower _className) in _whitelistedClasses) then
				{
					_add = true;
				};

				if (_add) then
				{
					TEST_TextCurrentRow = _className + "	";

					{
						private _parameter = _x;
						[_parameter,_class] call _logParameterValue;
					} forEach _baseClassParamterToExport;

					[_class,_hitPointsClassesToExport] call _logHitPointsParameterValue;

					TEST_InfantryArmorStats pushBack _armorStatsNewVehicleClass;
					if (getNumber (configFile/"CfgVehicles"/_className/"scope") == 2) then {_className = "dummy";};
					TEST_InfantryStoredClasses pushBack _className;

					TEST_RowsText pushBack TEST_TextCurrentRow;
					TEST_HeaderDone = true;
				};
			};
		};
	};
};
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return = TEST_HeaderText + newline;

{
	_return = _return + _x + newline;
} forEach TEST_RowsText;

copyToClipboard _return;