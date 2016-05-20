/* ----------------------------------------------------------------------------
Description:
	Enumurates the available vehicles

Returns:
	List of vehicles [Array]

Examples:
	(begin example)
		_weaponsArray = [] execVM "createVehicleList.sqf";
	(end)

Author:
	(c) kju 2011
---------------------------------------------------------------------------- */
private["_return","_rootClass"];

_type = _this select 0;

_rootClass = "CfgGroups";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_sideClass","_sideClassName"];
	_sideClass = (configFile/_rootClass) select _i;
	_sideClassName = configName _sideClass;
	if (isClass _sideClass) then
	{
		for "_j" from (0) to ((count(configFile/_rootClass/_sideClassName)) - 1) do
		{
			private["_factionClass","_factionClassName"];
			_factionClass = (configFile/_rootClass/_sideClassName) select _j;
			_factionClassName = configName _factionClass;
			if (isClass _factionClass) then
			{
				for "_k" from (0) to ((count(configFile/_rootClass/_sideClassName/_factionClassName)) - 1) do
				{
					private["_groupTypeClass","_groupTypeClassName"];
					_groupTypeClass = (configFile/_rootClass/_sideClassName/_factionClassName) select _k;
					_groupTypeClassName = configName _groupTypeClass;
					if (isClass _groupTypeClass) then
					{
						for "_l" from (0) to ((count(configFile/_rootClass/_sideClassName/_factionClassName/_groupTypeClassName)) - 1) do
						{
							private["_unitClass","_unitClassName"];
							_unitClass = (configFile/_rootClass/_sideClassName/_factionClassName/_groupTypeClassName) select _l;
							_unitClassName = configName _unitClass;
							if (isClass _unitClass) then
							{
								for "_m" from (0) to ((count(configFile/_rootClass/_sideClassName/_factionClassName/_groupTypeClassName/_unitClassName)) - 1) do
								{
									private["_unitIdClass"];
									_unitIdClass = (configFile/_rootClass/_sideClassName/_factionClassName/_groupTypeClassName/_unitClassName) select _m;
									if (isClass _unitIdClass) then
									{
										private["_className"];
										_className = toLower (getText(_unitIdClass/"vehicle"));
										if (!(_className in _return)) then
										{
											_return pushBack _className;
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
};
_return;