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



// start checking config
_result = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className","_configValue"];
		_className = configName _class;
		
		_configValue = switch (_dataType) do
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
		push(_result,(_configKey + "	" + _className + "	" + _configValue));
	};
};
_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return;