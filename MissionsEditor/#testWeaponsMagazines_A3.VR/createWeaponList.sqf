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
	private["_class"];
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		if (getNumber(_class/"scope") == 2) then
		{
			private["_displayName","_className","_classType","_author"];

			_classType = getNumber(_class/"type");
			if (_classType >= 65536 && _classType < 131072) exitWith {};//"High (VEH) Type"

			_displayName = getText (_class/"displayName");
			if (_displayName == "") exitWith {};

			_author = toLower (getText (_class/"author"));
			if (!(_author in TEST_IncludedAuthors)) exitWith {};

			_className = configName _class;
			_return set [count _return,_className];
		};
	};
};
_return;