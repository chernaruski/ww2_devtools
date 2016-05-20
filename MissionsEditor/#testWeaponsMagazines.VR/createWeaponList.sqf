/* ----------------------------------------------------------------------------
Description:
	Enumurates the available weapons

Returns:
	List of weapons [Array]

Examples:
	(begin example)
		_weaponsArray = [] execVM "createWeaponList.sqf";
	(end)

Author:
	(c) Sickboy 2010
---------------------------------------------------------------------------- */
private["_return","_rootClass"];

_rootClass = "CfgWeapons";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class","_armory"];
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		if (getNumber(_class/"scope") == 2) then
		{
			private["_displayName","_className","_classType"];

			_classType = getNumber(_class/"type");
			if (_classType >= 65536 && _classType < 131072) exitWith {};//"High (VEH) Type"

//			_armory = if (isNumber(_class/"Armory"/"disabled")) then {getNumber(_class/"Armory"/"disabled")} else {0};
//			if (_armory == 1) exitWith {};//"Abort. Armory"

			_displayName = getText (_class/"displayName");
			if (_displayName == "") exitWith {};

			_className = configName _class;
			_return set [count _return,_className];
		};
	};
};
_return;