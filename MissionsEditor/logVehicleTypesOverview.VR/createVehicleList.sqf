private["_return","_rootClass"];

_rootClass = "CfgVehicles";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className"];
		_className = configName _class;

		if ((_className isKindOf "CAManBase") || (_className isKindOf "LandVehicle") || (_className isKindOf "Air") || (_className isKindOf "Ship")) then
		{
			if (getNumber(_class/"scope") > 0) then
			{
				switch (true) do
				{
					case (_className isKindOf "ParachuteBase"): {};
					case ((getText (_class/"displayName")) == ""):
					{
						diag_log["displayName empty",_class];
					};
					default
					{
						_return pushBack _className;
					};
				};
			};
		};
	};
};
_return;