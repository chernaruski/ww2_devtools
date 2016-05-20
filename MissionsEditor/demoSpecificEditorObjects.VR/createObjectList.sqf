startLoadingScreen ["Wait",""];

_rootClass = "cfgVehicles";

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_config","_keyName","_values"];
	_configClass = (configFile/_rootClass) select _i;
	_class = configName _configClass;

	if ((_class isKindOf "Static") || (_class isKindOf "Thing")) then
	{
		_scope = getNumber (_configClass/"scope");
		if (_scope == 2) then
		{
			_displayName = getText (_configClass/"displayName");
			diag_log (_displayName + "	" + _class);
		};
	};
};

endLoadingScreen;

hint "done";