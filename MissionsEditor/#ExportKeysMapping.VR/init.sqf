private["_rootClass"];

_rootClass = "CfgDefaultKeysMapping";

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_config","_keyName","_values"];
	_config = (configFile/_rootClass) select _i;
	_keyName = configName _config;

	_actionKeysNames = actionKeysNames _keyName;//getArray _config;

	if (_actionKeysNames == "") then
	{
		diag_log ("Unassigned: " + _keyName);
	}
	else
	{
		diag_log (_actionKeysNames + "-" + _keyName);
	};
};