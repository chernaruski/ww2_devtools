/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_backlistedClasses = ["groupsquad","groupplatoon","groupcompany","groupnames","groupcolors","genericnames","defaultlighting"];

_baseClassParametersToExport = ["zoomMax","format","formatX","formatY","stepX","stepY"];

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
//diag_log["_parameter",_parameter,_class];

	if ((typeName _parameter) != "STRING") exitWith {};

	private _paramterConfig = (_class/_parameter);

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
	private _className = configName _class;
//	diag_log[_className,_parameter,_dataType,_configValue];
//	_result pushBack (_className + "	" + _configValue));
};

// start checking config
_result = [];

TEST_HeaderText = "XXX	offsetX	offsetY	CLASS	";
TEST_RowsText = [];

private _vehicles = [];

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _baseClassParametersToExport;

_rootClass = "CfgWorlds";

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private _class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private _className = configName _class;

		if (!((toLower _className) in _backlistedClasses)) then
		{
			//base
			TEST_TextCurrentRow = "";

			_offsetX = getNumber (configFile/_rootClass/_className/"Grid"/"offsetX");
			_offsetY = getNumber (configFile/_rootClass/_className/"Grid"/"offsetY");

			TEST_TextCurrentRow = str _offsetX + "	" + str _offsetY + "	" + TEST_TextCurrentRow;

			if (count(configFile/_rootClass/_className/"Grid") == 0) exitWith {};

			for "_j" from (0) to ((count(configFile/_rootClass/_className/"Grid")) - 1) do
			{
				private _zoomClass = (configFile/_rootClass/_className/"Grid") select _j;

				if (isClass _zoomClass) then
				{
					private _zoomClassName = configName _zoomClass;

					TEST_TextCurrentRow = TEST_TextCurrentRow + _zoomClassName + "	";

					{
						private _parameter = _x;
						[_parameter,_zoomClass] call _logParameterValue;
					} forEach _baseClassParametersToExport;
				};
			};

			TEST_TextCurrentRow = _className + "	" + TEST_TextCurrentRow;
			TEST_RowsText pushBack TEST_TextCurrentRow;
		};
	};
};
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

_return = TEST_HeaderText + newline;

{
	_return = _return + _x + newline;
} forEach TEST_RowsText;

copyToClipboard _return;