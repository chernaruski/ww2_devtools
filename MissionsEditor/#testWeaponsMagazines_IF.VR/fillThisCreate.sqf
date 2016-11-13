private["_weapons","_magazines"];

clearMagazineCargo _this;
clearWeaponCargo _this;

_weapons = [] call compile preprocessFileLineNumbers "createWeaponList.sqf";
{
	diag_log _x;
	_isItem = (getNumber (configFile/"CfgWeapons"/_x/"type") == 131072);
	_isBinocular = (getNumber (configFile/"CfgWeapons"/_x/"useAsBinocular") == 1);
	if (_isItem || _isBinocular) then
	{
		_this addItemCargo [_x,2];
	}
	else
	{
		_this addWeaponCargo [_x,1];
	};
} forEach _weapons;

_magazines = _weapons call compile preprocessFileLineNumbers "createMagazineList.sqf";
{
	diag_log _x;
	_this addMagazineCargo [_x,5];
} forEach _magazines;
