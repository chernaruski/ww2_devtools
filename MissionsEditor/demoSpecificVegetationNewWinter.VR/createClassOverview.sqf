startLoadingScreen ["Wait",""];

execVM "KRON_Strings.sqf";

_fnc_getModeValuePair =
{
	_model = _this select 0;

	//find last backslash
	_index = 0;
	_i = 0;
	_backslash = 92;
	_modelArray = toArray _model;
	{
		_character = _x;
		if (_character == _backslash) then {_index = _i;};
		_i = _i + 1;
	} forEach _modelArray;

	_length = count _modelArray;
	_path = [];
	for "_i" from (1) to (_index) do
	{
		_path set [count _path,_modelArray select _i];
	};

	_name = [];
	for "_i" from (_index + 1) to (_length - 1) do
	{
		_name set [count _name,_modelArray select _i];
	};
	
	_modelPath = toString _path;
	_modelName = toString _name;
	_return = [_modelPath,_modelName];
	_return;
};

_fnc_isMapObject =
{
	_mapObject = _this select 0;
	_return = [_mapObject,"Land_"] call KRON_StrInStr;
	_return;
};

_faultyClassNames = 0;

{
	_class = _x;
	_configOfClass = configFile/"cfgVehicles"/_class;

	if (isClass _configOfClass) then
	{
		_vehicleClass = getText (_configOfClass/"vehicleClass");
		_vehicleClassName = getText (configFile/"CfgVehicleClasses"/_vehicleClass/"displayName");
		_displayName = getText (_configOfClass/"displayName");
		_model = getText (_configOfClass/"model");
		_modelValuePair = [_model] call _fnc_getModeValuePair;
		_modelPath = toLower (_modelValuePair select 0);
		_modelName = (_modelValuePair select 1) + ".p3d";
		_mapObject = configName _configOfClass;
//		_isMapObject = str ([_mapObject] call _fnc_isMapObject);
		diag_log (_vehicleClassName + "	" + _displayName + "	" + _mapObject + "	" + _modelPath + "	" + _modelName);// + "	" + _isMapObject);
	}
	else
	{
		_faultyClassNames = _faultyClassNames + 1;
		diag_log ("=== ERROR ===" + "	" + _class + "	" + "NOT FOUND");
	};
} forEach BIS_EditorObjectsFromSheet;

diag_log ("Total number of objects: " + (str (count BIS_EditorObjectsFromSheet)));
diag_log ("Faulty class names: " + (str _faultyClassNames));

endLoadingScreen;

hint "done";