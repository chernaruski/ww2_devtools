startLoadingScreen ["Wait",""];

{
	_class = _x;
	_configOfClass = configFile/"cfgVehicles"/_class;

	if (isClass _configOfClass) then
	{
		_displayName = getText (_configOfClass/"displayName");
		_armor = str (getNumber (_configOfClass/"armor"));
		diag_log (_armor + "	"+ _class + "	" + _displayName);
	}
	else
	{
		diag_log ("=== ERROR ===" + "	" + _class + "	" + "NOT FOUND");
	};
} forEach BIS_EditorObjectsFromSheet;

endLoadingScreen;

hint "done";