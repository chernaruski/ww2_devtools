private["_return","_rootClass"];

_rootClass = "CfgVehicles";
_return = [];

TEST_ExcludedAuthors = TEST_ExcludedAuthors apply {toLower _x};

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

			if (_className isKindOf "Static") then
			{
				private["_displayNameEmpty","_isBuilding","_excludeAuthor"];
				_displayNameEmpty = ((getText (_class/"displayName")) == "");
				_isBuilding = true;

				_excludeAuthor = false;

				if ((count TEST_ExcludedAuthors) > 0) then
				{
					{
						if (toLower (getText (_class/"author")) == _x) then
						{
							_excludeAuthor = true;
						};
					} forEach TEST_ExcludedAuthors;
				};

				{
					if (_className isKindOf _x) exitWith {_isBuilding = false;};
				} forEach ["MineGeneric","TargetSoldierBase","TargetBase","HeliH","FlagCarrierCore","Land_VASICore","StaticShip","Wreck_Base","ReammoBox","Library_WeaponHolder","CraterLong","Helper_Base_F","UserTexture1m_F","Land_Loudspeakers_F","Bomb","Lightning_F","Lightning1_F","UserTexture_1x2_F","VR_Helper_base_F","Windsock_01_F","Sphere_3DEN","Land_Boat_03_abandoned_cover_F"];

				if (_isBuilding && !(_excludeAuthor) && !(_displayNameEmpty)) then
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
_return;