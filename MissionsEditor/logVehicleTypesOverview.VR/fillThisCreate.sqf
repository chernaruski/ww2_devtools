private["_weapons","_magazines"];

clearMagazineCargo _this;
clearWeaponCargo _this;

_weapons = [] call compile preprocessFileLineNumbers "createWeaponList.sqf";
{
	_this addWeaponCargo [_x,2];
} forEach _weapons;

_magazines = _weapons call compile preprocessFileLineNumbers "createMagazineList.sqf";
{
	_this addMagazineCargo [_x,12];
} forEach _magazines;
