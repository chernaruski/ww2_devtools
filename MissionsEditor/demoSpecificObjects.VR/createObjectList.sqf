startLoadingScreen ["Wait",""];

_types = _this;

_return = [];

_rootClass = "cfgVehicles";

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

			_typeMatched = false;
	
			{
				if (_className isKindOf _x) exitWith {_typeMatched = true;};
			} forEach _types;
	
			if (_typeMatched) then
			{
				_displayName = getText (_class/"displayName");
//diag_log["displayName",displayName,_className];
	
				if (_displayName != "") then
				{
					_isWinter = (getNumber (_class/"LIB_isWinter")) == 1;
					if ((Test_IsWinter && _isWinter) || (!Test_IsWinter && !_isWinter)) then
					{
						_return pushBack _className;
					};
				};
			};
		};
	};
};

endLoadingScreen;

hint "done";

_return;