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
		
		if (getNumber(_class/"scope") > 0) then
		{
			if ((_className isKindOf "CAManBase") && (!(_className isKindOf "VirtualMan_F"))) then
			{
//				if ((_className isKindOf "LIB_GER_soldier_base") || (_className isKindOf "LIB_SOV_rifleman") || (_className isKindOf "LIB_US_Soldier_Base")) then
				_return set [count _return,_className];
			};
		};
	};
};
_return;