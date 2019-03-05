_victim = _this select 0;
_killer = _this select 1;
_target = target;//vehicle player;

if (_victim != player) exitWith {};

//Camera position
_pos = [((getPosATL _target) select 0) - ((vectorDir _target) select 0) * 10,((getPosATL _target) select 1) - ((vectorDir _target) select 1) * 10,((getPosATL _target) select 2) + 5];

titleCut ["","BLACK IN",1];

_camera = "Camera" camCreate [0,0,0];
_camera cameraEffect ["INTERNAL","BACK"];
showCinemaBorder false;

_camera camPrepareTarget _target;
_camera camPreparePos _pos;
_camera camPrepareFov 1;
_camera camCommitPrepared 0;

sleep 0.5;

if (_killer != _victim) then
{
	_camera camCommand "inertia on";

	_camera camPrepareTarget vehicle _killer;
	_camera camPreparePos _pos;
	_camera camPrepareFov 1;
	_camera camCommitPrepared 2;
};