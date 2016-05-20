private["_weapons","_magazines"];

clearMagazineCargo _this;
clearWeaponCargo _this;

_this addWeaponCargo ["ToolKit",1];
_this addWeaponCargo ["MineDetector",1];

_magazines = call compile preprocessFileLineNumbers "createMagazineList.sqf";
{
	diag_log _x;
	_this addMagazineCargo [_x,2];
} forEach _magazines;
