private["_return","_rootClass"];

_rootClass = "CfgVehicles";
_return = [];

TEST_IncludedFactions = TEST_IncludedFactions apply {toLower _x};

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
			private["_className","_parachuteBase","_displayNameEmpty","_isVehicle"];
			_className = configName _class;
			_parachuteBase = _className isKindOf "ParachuteBase";
			_displayNameEmpty = ((getText (_class/"displayName")) == "");
			_isVehicle = false;
			{if (_className isKindOf _x) exitWith {_isVehicle = true;};}forEach ["LandVehicle","Air","Ship"];

			if (_isVehicle && {!(_parachuteBase)} && {!(_displayNameEmpty)}) then
			{
				private["_add"];
				_add = false;
				if ((count TEST_IncludedFactions) > 0) then
				{
					private["_faction"];
					_faction = toLower (getText (configFile/"CfgVehicles"/_className/"faction"));
					if (_faction in TEST_IncludedFactions) then
					{
						_add = true;
					};
				}
				else
				{
					_add = true;
				};
				if (_add) then
				{
					private["_add","_isWinter"];
					_add = false;
					_isWinter = (getNumber (configFile/"CfgVehicles"/_className/"LIB_isWinter")) == 1;

					if (TEST_IncludeWinterType) then
					{
						_add = _isWinter;
					}
					else
					{
						_add = !_isWinter;
					};

					if (_add) then
					{
						if ((count TEST_IncludedVehicleTypes) > 0) then
						{
							{
								if (_className isKindOf _x) exitWith
								{
									_return pushBack _className;
								};
							} forEach TEST_IncludedVehicleTypes;
						}
						else
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