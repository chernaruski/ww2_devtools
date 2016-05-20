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

_rootClass = "CfgVehicles";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class","_armory"];
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		private["_className","_add"];
		_className = configName _class;
		_add = false;

		if (getNumber(_class/"scope") == 2) then
		{
			if (_className isKindOf "AllVehicles") then
			{
				switch (true) do
				{
					case (_className isKindOf "Man"):
					{
						if (_type == "inf") then
						{
							_add = true;
						};
					};
					case (_className isKindOf "ParachuteBase"):
					{
					};
					case ((getText (_class/"displayName")) == ""):
					{
						diag_log["",_class];
					};
					default
					{
						if (_type == "vehicles") then
						{
							_faction = toLower (getText (configFile >> "CfgVehicles" >> _className >> "faction"));
//diag_log[_className,_faction];
							if (_faction in ["lib_luftwaffe","lib_panzerwaffe","lib_rkka","lib_us_airforce","lib_us_army","lib_us_tank_troops","lib_ussr_airforce","lib_ussr_tank_troops","lib_wehrmacht","sg_sturm"]) then
							{
								_add = true;
							};
						};
					};
				};
			};
		};
		if (_add) then
		{
			_return set [count _return,_className];
		};
	};
};
_return;