private["_return","_rootClass"];

_rootClass = "CfgVehicles";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_scope","_model"];
		_scope = getNumber(_class/"scope");
		_model = getText(_class/"model");

		if ((_scope > 0) && (_model != "")) then
		{
			private["_className"];
			_className = configName _class;

			if (!(_className isKindOf "AllVehicles")) then
			{
				if (!(_className isKindOf "Logic")) then
				{
					if (!(_className isKindOf "Sound")) then
					{
						if (!(_className isKindOf "MineGeneric")) then
						{
							_return pushBack _className;
						};
					};
				};
			};
		};
	};
};
_return;