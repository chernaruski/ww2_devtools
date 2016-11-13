private["_return","_rootClass"];

_rootClass = "CfgVehicles";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		if (getNumber(_class/"scope") > 0) then
		{
			private["_className"];
			_className = configName _class;

			if ((_className isKindOf "CAManBase") && (!(_className isKindOf "VirtualMan_F"))) then
			{
				_return pushBack _className;
			};
		};
	};
};
_return;