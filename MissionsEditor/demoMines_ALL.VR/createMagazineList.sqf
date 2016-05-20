private["_return","_rootClass"];

_rootClass = "CfgMagazines";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		if (getNumber(_class/"scope") > 0) then
		{
			private["_useAction","_displayName","_className"];

			_useAction = getNumber(_class/"useAction");
			if (_useAction == 0) exitWith {};

			_displayName = getText (_class/"displayName");
			if (_displayName == "") exitWith {};

			_className = configName _class;
			_return set [count _return,_className];
		};
	};
};
_return;
