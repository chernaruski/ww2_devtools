_victim = _this select 0;
_killer = _this select 1;
_target = target;//vehicle player;

if (_killer == _victim || _victim != player) exitWith {};

//Camera position
_z = (_victim selectionPosition "launcher" select 2) + 0.4;
if (_target != _victim) then
{
	_z = ((boundingBox _target select 1) select 2) + 0.2;
};
_pos = [(getPosATL _target) select 0,(getPosATL _target) select 1,((getPosATL _target) select 2) + _z];

//Target
_target = if (vehicle _killer == _killer) then
{
	if ((getPosATL _killer select 2) < (getPosASL _killer select 2)) then
	{
		[getPosATL _killer select 0,getPosATL _killer select 1,(getPosATL _killer select 2) + (_killer selectionPosition "launcher" select 2)];
	}
	else
	{
		[getPosASL _killer select 0,getPosASL _killer select 1,(getPosASL _killer select 2) + (_killer selectionPosition "launcher" select 2)]
	};
}
else
{
	vehicle _killer;
};

titleCut ["","BLACK IN",1];

_camera = "Camera" camCreate [0,0,0];
_camera cameraEffect ["INTERNAL","BACK"];
showCinemaBorder false;

_camera camPrepareTarget _target;
_camera camPreparePos _pos;
_camera camPrepareFov 0.7;
_camera camCommitPrepared 0;