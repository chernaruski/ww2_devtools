startLoadingScreen ["Wait",""];

{
	_class = _x;
	_configOfClass = configFile/"cfgVehicles"/_class;

	if (isClass _configOfClass) then
	{
		_displayName = getText (_configOfClass/"displayName");
		_accuracy = str (getNumber (_configOfClass/"accuracy"));
		diag_log (_accuracy + "	"+ _class + "	" + _displayName);
	}
	else
	{
		diag_log ("=== ERROR ===" + "	" + _class + "	" + "NOT FOUND");
	};
} forEach BIS_EditorObjectsFromSheet;

endLoadingScreen;

hint "done";