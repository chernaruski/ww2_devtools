/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_filterBaseClass = "Tank_F";
//_filterBaseClass = "Car_F";
_backlistedClasses = ["lib_armored_target_dummy"];
_whitelistedClasses = [];

_engineSoundsClassParamterToExport = ["frequency","sound","volume","cone"];

_engineSoundsClassesToExport = ["Idle_ext","Idle_int","IdleOut","IdleThrust","IdleThrust_int","IdleThrust_Int","Engine","EngineThrust","EngineThrust_int","EngineThrust_Int","Engine_int","Engine1_ext","Engine1_int","Engine1_Thrust_ext","Engine1_Thrust_int","Engine2_ext","Engine2_int","Engine2_Thrust_ext","Engine2_Thrust_int","Engine3_ext","Engine3_int","Engine3_Thrust_ext","Engine3_Thrust_int","Engine4_ext","Engine4_int","Engine4_Thrust_ext","Engine4_Thrust_int","Engine5_ext","Engine5_int","Engine5_Thrust_ext","Engine5_Thrust_int"];
//_engineSoundsClassesToExport = ["Idle_ext","Idle_int","IdleIn","IdleOut","IdleThrust","IdleThrust_int","IdleThrust_Int","NoiseExt","NoiseIn","NoiseInt","NoiseOut","acceleration_ext_dirt","acceleration_ext_road","acceleration_int_dirt","acceleration_int_road","breaking_ext_dirt","breaking_ext_road","breaking_int_dirt","breaking_int_road","TiresAsphaltIn","TiresAsphaltOut","TiresGrassIn","TiresGrassOut","TiresGravelIn","TiresGravelOut","TiresMudIn","TiresMudOut","TiresRockIn","TiresRockOut","TiresSandIn","TiresSandOut","Movement","Engine","EngineHighIn","EngineHighOut","EngineLowIn","EngineThrust","EngineThrust_int","EngineThrust_Int","Engine_ext","Engine_int","Engine_RPM1","Engine_RPM2","Engine_RPM3","Engine_RPM4","Engine1_ext","Engine1_int","Engine1_Thrust_ext","Engine1_Thrust_int","Engine2_ext","Engine2_int","Engine2_Thrust_ext","Engine2_Thrust_int","Engine3_ext","Engine3_int","Engine3_Thrust_ext","Engine3_Thrust_int","Engine4_ext","Engine4_int","Engine4_Thrust_ext","Engine4_Thrust_int","Engine5_ext","Engine5_int","Engine5_Thrust_ext","Engine5_Thrust_int","Engine6_ext","Engine6_int","Engine6_Thrust_ext","Engine6_Thrust_int","Engine7_ext","Engine7_int","Engine7_Thrust_ext","Engine7_Thrust_int","Engine8_ext","Engine8_int","Engine8_Thrust_ext","Engine8_Thrust_int","Engine9_ext","Engine9_int","Engine9_Thrust_ext","Engine9_Thrust_int","Engine10_ext","Engine10_int","Engine10_Thrust_ext","Engine10_Thrust_int"];

///////////////////////////////////////////////////////////////////////////////

#define push(a,v)		(a) pushBack (v)
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_return","_result"];

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
	private _armorStatsNewVehicleClass = _this select 2;
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
	_armorStatsNewVehicleClass pushBack (str _configValue);
//	diag_log[_className,_parameter,_dataType,_configValue];
//	_result pushBack (_className + "	" + _configValue));
};

_logEngineSoundsParameterValue =
{
	private _class = _this select 0;
	private _configPath = _class;
	private _engineSoundsClasses = _this select 1;
	private _armorStatsNewVehicleClass = _this select 2;

	if (isClass (_class/"Sounds")) then
	{
		{
			TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";

			private _engineSoundsClass = (_configPath/"Sounds"/_x);
//			diag_log["_engineSoundsClass",_engineSoundsClass];

			if (isClass _engineSoundsClass) then
			{
				{
					private _parameter = _x;
					[_parameter,_engineSoundsClass,_armorStatsNewVehicleClass] call _logParameterValue;
				} forEach _engineSoundsClassParamterToExport;
			}
			else
			{
				{
					TEST_TextCurrentRow = TEST_TextCurrentRow + "-" + "	";
					_armorStatsNewVehicleClass pushBack "	";
				} forEach _engineSoundsClassParamterToExport;

//				TEST_TextCurrentRow = TEST_TextCurrentRow + "-" + "	";
			};
		} forEach _engineSoundsClasses;
	};
};

// start checking config
_result = [];

_rootClass = "cfgVehicles";

TEST_HeaderText = "XXX	";
TEST_RowsText = [];

TEST_VehicleArmorStats = [];
TEST_VehicleStoredClasses = [];

{
	private _class = _x;
	TEST_HeaderText = TEST_HeaderText + _class + "	";

	{
		private _parameter = _x;
		TEST_HeaderText = TEST_HeaderText + _parameter + "	";
	} forEach _engineSoundsClassParamterToExport;
} forEach _engineSoundsClassesToExport;

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
				TEST_TextCurrentRow = _className + "	";

				private _model = getText (configFile/"CfgVehicles"/_className/"model");
				private _armorStatsNewVehicleClass = [_model];

				[_class,_engineSoundsClassesToExport,_armorStatsNewVehicleClass] call _logEngineSoundsParameterValue;

				private _add = true;
				_exit = false;
				{
					if (_x isEqualTo _armorStatsNewVehicleClass) then
					{
						{
							if (_className isKindOf _x) exitWith {_exit = true;};
						} forEach TEST_VehicleStoredClasses;
					};
					if (_exit) exitWith {_add = false;};
				} forEach TEST_VehicleArmorStats;

				if ((toLower _className) in _whitelistedClasses) then
				{
					_add = true;
				};

				if (_add) then
				{
					TEST_VehicleArmorStats pushBack _armorStatsNewVehicleClass;
					if (getNumber (configFile/"CfgVehicles"/_className/"scope") == 2) then {_className = "dummy";};
					TEST_VehicleStoredClasses pushBack _className;

					TEST_RowsText pushBack TEST_TextCurrentRow;
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