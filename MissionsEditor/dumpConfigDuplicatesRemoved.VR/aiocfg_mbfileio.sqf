//
// dumpConfig.sqf
// Copyright (c) 2010 Denis Usenko, DenVdmj@gmail.com
// MIT-style license
//
// Modified to write to file using MapBuilder MBFile_IO extension.

/*
======================================================================================

Dump config to the clipboard:

	[config HNDL, bool IncludeInheritedPropertiesFlag] call compile preprocessFileLineNumbers "dumpConfig.sqf"

This example put section CfgVehicles on the clipboard:

	[configFile >> "CfgVehicles"] call compile preprocessFileLineNumbers "dumpConfig.sqf"

This example will put on the clipboard class "RscDisplayArcadeUnit", all classes will contain all heritable properties, so you get a full and self-sufficient class, independent from the other classes.

	[configFile >> "RscDisplayArcadeUnit", true] call compile preprocessFileLineNumbers "dumpConfig.sqf"

More examples:

	[configFile >> "RscTitle", true] call compile preprocessFileLineNumbers "dumpConfig.sqf"
	[configFile >> "RscEdit", true] call compile preprocessFileLineNumbers "dumpConfig.sqf"
	[configFile >> "RscToolbox", true] call compile preprocessFileLineNumbers "dumpConfig.sqf"

Warning: don't attempt to get a large classes with switched on parameter "IncludeInheritedPropertiesFlag", eg don't do so:

	[configFile, true] call compile preprocessFileLineNumbers "dumpConfig.sqf"

Dump the entire config, it can take over ten seconds:

	[configFile] call compile preprocessFileLineNumbers "dumpConfig.sqf"

======================================================================================
*/

#define arg(x)		(_this select (x))
#define argIf(x)	if(count _this > (x))
#define argSafe(x)	argIf(x)then{arg(x)}
#define argOr(x,v)	(argSafe(x)else{v})
#define push(a,v)	(a)pushBack(v)

_myInitString = format ["AIO_A3_DR_1.%1.%2.cpp", (productVersion select 2) % 100, productVersion select 3];
"ConfigDumpFileIO" callExtension ("open:" + _myInitString);
_myString = format ["/* Version: %1 1.%2.%3 */", productVersion select 0, (productVersion select 2) % 100, productVersion select 3];
"ConfigDumpFileIO" callExtension ("write:" + _myString);

private _escapeString = {
//	private _source = toArray _this;
//	private _start = _source find 34;
//
//	if(_start > 0) then {
//		private _target = +_source;
//		_target resize _start;
//		for "_i" from _start to count _source - 1 do {
//			private _charCode = _source select _i;
//			push(_target, _charCode);
//			if(_charCode isEqualTo 34) then {
//				push(_target, _charCode);
//			};
//		};
//		str toString _target;
//	} else {
		str _this;
//	};
};

private _collectInheritedProperties = {
	private _config = _this;
	private _propertyNameList = [];
	private _propertyNameLCList = [];

	while {
		private _className = configName _config;
		for "_i" from 0 to count _config - 1 do {
			private _propertyName = _config select _i;
			private _propertyNameLC = toLower configName _propertyName;
			if!(_propertyNameLC in _propertyNameLCList) then {
				push(_propertyNameList, _propertyName);
				push(_propertyNameLCList, _propertyNameLC);
			};
		};
		_className != "";
	} do {
		_config = inheritsFrom _config;
	};
	_propertyNameList;
};

private _createParentClassParameter = {
	private _parentConfig = _this select 0;
	private _parentClass = _this select 1;
	private _confName = _this select 2;

	_configPathArray = [_parentConfig] call BIS_fnc_configPath;//["configFile","CfgVehicles","CAManBase","HitPoints"];

	_newConfgPath = configFile;

	for "_i" from 1 to ((count _configPathArray) - 2) do
	{
		_newConfgPath = _newConfgPath >> (_configPathArray select _i);
	};

	_newConfgPath >> _parentClass >> _confName
};

private _dumpConfigTree = {
	private _includeInheritedProperties = argOr(1, false);
	private _specifyParentClass = argOr(2, !_includeInheritedProperties);

	private _result = [];
	private _indents = [""];
	private _depth = -1;

	private _pushLine = {
		if(_depth >= count _indents) then {
			_indents set [_depth, (_indents select _depth-1) + toString[9]];
		};
		if (_depth >= 0) then
		{
			_myString = (_indents select _depth) + (_this);
			"ConfigDumpFileIO" callExtension ("write:" + _myString);
		};
	};

	private _traverse = {
		private _configParameter = _this select 0;
		private _parentConfig = _this select 1;

		private _confName = configName _configParameter;

		//determine inheritance level and parent class
		private _inheritsFromConfig = inheritsFrom _parentConfig;
//		private _parents = [];
//
//		while {!isNull _parentConfig} do
//		{
//			_parents pushBack (configName _parentConfig);
//			_this = inheritsFrom _parentConfig;
//		};

		private _parentClass = "ROOT";
		private _parentClassParameter = configFile/"ROOT";

		if (!(isNull _inheritsFromConfig)) then
		{
			_parentClass = configName _inheritsFromConfig;

			//rebuilt config sub classes structure for parent class and add class parameter
//			_parentClassParameter = [_parentConfig,_parentClass,_confName] call _createParentClassParameter;
			_parentClassParameter = _inheritsFromConfig >> _confName;
		};

TEST_logging = false;
//TEST_logging = true;

if (TEST_logging) then
{
if (!(_parentConfig isEqualTo configFile/"ROOT")) then
{
diag_log ["_configParameter",_configParameter];
diag_log ["_confName - configName _configParameter",_confName];
diag_log ["_parentConfig",_parentConfig];
diag_log ["_inheritsFromConfig - inheritsFrom _parentConfig",_inheritsFromConfig,isNull _inheritsFromConfig];
if (!(isNull _inheritsFromConfig)) then
{
diag_log ["_parentClass - configName _inheritsFromConfig",_parentClass];
diag_log ["_parentClassParameter",_parentClassParameter];
};
};
};

		if( isText _configParameter ) exitWith {
			_preTag = "";
			_value = getText _configParameter;
			if ((!(_parentConfig isEqualTo configFile/"ROOT")) && {(!(isNull _inheritsFromConfig))} && {((getText _parentClassParameter) isEqualTo _value)}) then
			{
				if (!((toLower _confName) in ["author"])) then
				{
					_preTag = "//";
				};
			};
if ((TEST_logging) && {(!(isNull _inheritsFromConfig))}) then
{
diag_log "isText";
diag_log ["getText _parentClassParameter",getText _parentClassParameter,_parentConfig];
diag_log ["getText _configParameter - _value",_value,_confName];
diag_log ["((getText _parentClassParameter)) isEqualTo _value)",((getText _parentClassParameter) isEqualTo _value)];
};

			(_preTag + _confName + " = " + (_value call _escapeString) + ";") call _pushLine;
		};
		if( isNumber _configParameter ) exitWith {
			_preTag = "";
			_value = getNumber _configParameter;
			if ((!(_parentConfig isEqualTo configFile/"ROOT")) && {(!(isNull _inheritsFromConfig))} && {((getNumber _parentClassParameter) isEqualTo _value)}) then
			{
				_preTag = "//";
			};
if ((TEST_logging) && {(!(isNull _inheritsFromConfig))}) then
{
diag_log "isNumber";
diag_log ["getNumber _parentClassParameter",getNumber _parentClassParameter,_parentConfig];
diag_log ["getText _configParameter - _value",_value,_confName];
diag_log ["((getNumber _parentClassParameter)) isEqualTo _value)",((getNumber _parentClassParameter) isEqualTo _value)];
};

			(_preTag + _confName + " = " + str _value + ";") call _pushLine;
		};
		if( isArray _configParameter ) exitWith {
			_preTag = "";
			_value = getArray _configParameter;
			if ((!(_parentConfig isEqualTo configFile/"ROOT")) && {(!(isNull _inheritsFromConfig))} && {((getArray _parentClassParameter) isEqualTo _value)}) then
			{
				_preTag = "//";
			};
if ((TEST_logging) && {(!(isNull _inheritsFromConfig))}) then
{
diag_log "isArray";
diag_log ["getArray _parentClassParameter",getArray _parentClassParameter,_parentConfig];
diag_log ["getText _configParameter - _value",_value,_confName];
diag_log ["((getArray _parentClassParameter)) isEqualTo _value)",((getArray _parentClassParameter) isEqualTo _value)];
};

			(_preTag + _confName + "[] = " + (_value call _traverseArray) + ";") call _pushLine;
		};
		if( isClass _configParameter ) exitWith {
			"class " + _confName + (
				configName inheritsFrom _configParameter call {
					if( _this isEqualTo "" || !_specifyParentClass ) then { "" } else { ": " + _this }
				}
			) call _pushLine;
			"{" call _pushLine;
			if( _includeInheritedProperties ) then {
				_configParameter = _configParameter call _collectInheritedProperties;
			};
			_depth = _depth + 1;
			for "_i" from 0 to count _configParameter - 1 do {
				[_configParameter select _i,_configParameter] call _traverse
			};
			_depth = _depth - 1;
			"};" call _pushLine;
		};
	};

	private _traverseArray = {
		if(_this isEqualType []) exitWith {
			private _array = [];
			for "_i" from 0 to count _this - 1 do {
				push(_array, _this select _i call _traverseArray);
			};
			"{" + (_array joinString ",") + "}";
		};
		if(_this isEqualType "") exitWith {
			_this call _escapeString;
		};
		str _this;
	};

	[arg(0),configFile/"ROOT"] call _traverse;

	"ConfigDumpFileIO" callExtension "close:yes";
	true
};

_this call _dumpConfigTree;