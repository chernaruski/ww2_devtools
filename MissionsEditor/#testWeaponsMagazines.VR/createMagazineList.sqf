/* ----------------------------------------------------------------------------
Description:
	Enumurates the available Magazines for specified Weapon

Parameters:
	_weapon - Weapon to enumurate magazines for [Object]

Returns:
	List of Magazines [Array]

Examples:
	(begin example)
		_magazines = [_weapons] execVM "createWeaponList.sqf";
	(end)

Author:
	(c) Sickboy 2010
---------------------------------------------------------------------------- */

private ["_return","_weapons"];

_weapons = _this;
_return = [];

for "_i" from 0 to ((count _weapons) - 1) do
{
	private ["_entry","_class","_muzzles","_magazines","_ar","_objDisplayName"];
	_entry = _weapons select (((count _weapons) - 1) - _i);//run backwards
	_class = (configFile/"CfgWeapons"/_entry);

	if (isArray(_class/"muzzles")) then
	{
		_muzzles = getArray(_class/"muzzles");
		if ((count _muzzles) > 0) then
		{
			_magazines = [];
			{
				private ["_muzzle"];
				_muzzle = _x;
				if (_muzzle == "this") then
				{
					_magazines = getArray (_class/"magazines");
				}
				else
				{
					_magazines = _magazines + (getArray (_class/_muzzle/"magazines"));
				};
			} forEach _muzzles;
		}
		else
		{
			_magazines = getArray (_class/"magazines");
		};
	}
	else
	{
		_magazines = getArray (_class/"magazines");
	};
	// make menu of _magazines for this Weapon
	_ar = [];
	{
		_class = (configFile/"CfgMagazines"/_x);
		if (true) then
		{
			if ((getNumber(_class/"scope")) != 2) exitWith {};
			if (_x in _return) exitWith {};

			_objDisplayName = getText (_class/"displayName");
			if (_objDisplayName != "") then
			{
				_return set [count _return,_x];
			};
		};
	} forEach _magazines;
};
_return;