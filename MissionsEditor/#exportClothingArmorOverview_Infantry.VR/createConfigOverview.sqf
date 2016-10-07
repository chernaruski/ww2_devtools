/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_backlistedClasses = [];

_baseClassParamterToExport = ["displayName","descriptionShort"];
_hitPointsClassParamterToExport = ["armor","hitpointName","passThrough"];

_hitpointsProtectionInfoClassesToExport = ["Abdomen","Arms","Body","Chest","Diaphragm","Face","Head","Neck","Pelvis"];

///////////////////////////////////////////////////////////////////////////////

#define push(a,v)		(a) pushBack (v)
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_return","_result"];

//_baseClassParamterToExport sort true;
//_hitPointsClassParamterToExport sort true;
//_hitpointsProtectionInfoClassesToExport sort true;
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

_logHitPointsParameterValue =
{
	private _class = _this select 0;
	private _configPath = _class;
	private _hitpointsProtectionInfoClasses = _this select 1;

	{
		private _hitpointsProtectionInfoClass = (_configPath/_x);
//		diag_log["_hitpointsProtectionInfoClass",_hitpointsProtectionInfoClass];

		TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";

		if (isClass _hitpointsProtectionInfoClass) then
		{
			{
				private _parameter = _x;
				[_parameter,_hitpointsProtectionInfoClass] call _logParameterValue;
			} forEach _hitPointsClassParamterToExport;
		}
		else
		{
			{
				TEST_TextCurrentRow = TEST_TextCurrentRow + "-" + "	";
			} forEach _hitPointsClassParamterToExport;
		};
	} forEach _hitpointsProtectionInfoClasses;
};

// start checking config
_result = [];

_rootClass = "CfgWeapons";

TEST_HeaderText = "XXX	";
TEST_RowsText = [];

TEST_InfantryArmorStats = [];

private _allUniforms = '(configName _x) isKindOf ["Uniform_Base",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");
private _allUniforms = [];
private _allVests = '(configName _x) isKindOf ["Vest_Camo_Base",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");
private _allHelmets = '(configName _x) isKindOf ["HelmetBase",configFile/"CfgWeapons"] || (configName _x) isKindOf ["H_HelmetB",configFile/"CfgWeapons"]' configClasses (configFile/"CfgWeapons");

_allClothing = _allUniforms + _allVests + _allHelmets;

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _baseClassParamterToExport;

TEST_HeaderText = TEST_HeaderText + "ItemInfo" + "	";
TEST_HeaderText = TEST_HeaderText + "mass" + "	";
TEST_HeaderText = TEST_HeaderText + "containerClass" + "	";
TEST_HeaderText = TEST_HeaderText + "HitpointsProtectionInfo" + "	";

{
//	TEST_HeaderText = TEST_HeaderText + configName _hitpointsProtectionInfoClass + "	";
	TEST_HeaderText = TEST_HeaderText + _x + "	";
	{
		private _parameter = _x;
		TEST_HeaderText = TEST_HeaderText + _parameter + "	";
	} forEach _hitPointsClassParamterToExport;
} forEach _hitpointsProtectionInfoClassesToExport;

{
//	private _class = (configFile/_rootClass/_x);
	private _class = _x;

	if (isClass _class) then
	{
		private _className = configName _class;

		if (!((toLower _className) in _backlistedClasses)) then
		{
			private _add = true;

			private _armorStatsNewVehicleClass = [];

			{
				private _hitpointsProtectionInfoClass = _x;

				private _valueArmor = getNumber (configFile/"CfgWeapons"/_className/"ItemInfo"/"HitpointsProtectionInfo"/_hitpointsProtectionInfoClass/"armor");
				private _valuePassThrough = getNumber (configFile/"CfgWeapons"/_className/"ItemInfo"/"HitpointsProtectionInfo"/_hitpointsProtectionInfoClass/"passThrough");
				private _valueHitpointName = getText (configFile/"CfgWeapons"/_className/"ItemInfo"/"HitpointsProtectionInfo"/_hitpointsProtectionInfoClass/"hitpointName");
				private _hitPointsStatsNewVehicleClass = [_valueArmor,_valuePassThrough,_valueHitpointName];

				_armorStatsNewVehicleClass pushBack [_hitpointsProtectionInfoClass,_hitPointsStatsNewVehicleClass];
			} forEach _hitpointsProtectionInfoClassesToExport;

			{
				if (_x isEqualTo _armorStatsNewVehicleClass) exitWith {_add = false;};
			} forEach TEST_InfantryArmorStats;

			if (_add) then
			{
				TEST_TextCurrentRow = _className + "	";

				{
					private _parameter = _x;
					[_parameter,_class] call _logParameterValue;
				} forEach _baseClassParamterToExport;

				if (isClass (_class/"ItemInfo")) then
				{
					TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";

					TEST_TextCurrentRow = TEST_TextCurrentRow + str (getNumber (_class/"ItemInfo"/"mass")) + "	";

					TEST_TextCurrentRow = TEST_TextCurrentRow + getText (_class/"ItemInfo"/"containerClass") + "	";

					private _curretClassName = _class/"ItemInfo"/"HitpointsProtectionInfo";
					if (isClass (_curretClassName)) then
					{
						TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";
						[_curretClassName,_hitpointsProtectionInfoClassesToExport] call _logHitPointsParameterValue;
					};
				};

//				TEST_InfantryArmorStats pushBack _armorStatsNewVehicleClass;

				TEST_RowsText pushBack TEST_TextCurrentRow;
			};
		};
	};
} forEach _allClothing;
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return = TEST_HeaderText + newline;

{
	_return = _return + _x + newline;
} forEach TEST_RowsText;

copyToClipboard _return;