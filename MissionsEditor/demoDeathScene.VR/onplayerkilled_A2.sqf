/*
	File: onPlayerKilled.sqf
	Author: Karel Moricky

	Description:
	You were killed!
*/

//--- 1.60 - Visual states interpolation position was not correct
#define FNC_PLAYERPOS(WHO) \
	(if (isClass (configFile >> "CfgPatches" >> "ca_E")) then { \
		call compile ("visiblePosition vehicle " + WHO) \
	} else { \
		call compile ("position vehicle " + WHO) \
	})

_player = _this select 0;
_killer = _this select 1;
if (isNull _killer) then {_killer = _player};

//setAccTime 0.5;

_soundVolume = soundVolume;
_musicVolume = musicVolume;

_teamswitchcheck =
{
	_player = _this select 0;
	_ppeffects = _this select 1;
	_soundVolume = _this select 2;
	_musicVolume = _this select 3;

	//waitUntil {_player != player};
	waitUntil {alive player};
//	setAccTime 1;
	terminate _ppeffects;
	"dynamicBlur" ppEffectEnable false;
	"colorCorrections" ppEffectEnable false;
	0 fadeSound _soundVolume;
	0 fadeMusic _musicVolume;
};

//--- Initial postprocess effects
_ppeffects = _player spawn
{
	_player = _this;

	//--- Light blur
	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [2];
	"dynamicBlur" ppEffectCommit 0.1;

	//--- Full red
	"colorCorrections" ppEffectAdjust [1,1,0,[0.1,0.0,0.0,1],[1.0,0.5,0.5,0.1],[0.199,0.587,0.114,0.0]];
	"colorCorrections" ppEffectCommit 0.1;
	"colorCorrections" ppEffectEnable true;
	sleep 0.1;

	//--- Partly red
	"colorCorrections" ppEffectAdjust [1,1,0,[0.1,0.0,0.0,0.5],[1.0,0.5,0.5,0.1],[0.199,0.587,0.114,0.0]];
	"colorCorrections" ppEffectCommit 0.3;

	//--- Dialog
	sleep 0.3;
/*
	enableEndDialog;
*/
	_soundVolume = soundVolume;
	_musicVolume = musicVolume;
	3 fadeSound 0;
	0 fadeMusic 0.5;
	playMusic TEST_music;
	waitUntil {velocity (vehicle _player) distance [0,0,0] == 0};

	//--- Total blur
	"dynamicBlur" ppEffectAdjust [10];
	"dynamicBlur" ppEffectCommit 5;
	sleep 3;

	//--- Total red
	"colorCorrections" ppEffectAdjust [1,1,0,[0.1,0.0,0.0,1],[1.0,0.5,0.5,0.1],[0.199,0.587,0.114,0.0]];
	"colorCorrections" ppEffectCommit 2;
	sleep 4;
};

//--- Team switch check
_check = [_player,_ppeffects,_soundVolume,_musicVolume] spawn _teamswitchcheck;
waitUntil {scriptDone _ppeffects || _player != player};
if (_player != player) exitWith {};
terminate _check;

//--- Pulsing effects
_ppeffects = _player spawn
{
	while {true} do
	{
		_delay = (2 + random 1) * accTime;
		"colorCorrections" ppEffectAdjust [1,1,0,[0.1,0.0,0.0,0.7],[1.0,0.5,0.5,0.1],[0.199,0.587,0.114,0.0]];
		"colorCorrections" ppEffectCommit _delay;
		"dynamicBlur" ppEffectAdjust [.5];
		"dynamicBlur" ppEffectCommit _delay;
		sleep _delay;

		_delay = (2 + random 1) * accTime;
		"colorCorrections" ppEffectAdjust [1,1,0,[0.1,0.0,0.0,0.3],[1.0,0.5,0.5,0.1],[0.199,0.587,0.114,0.0]];
		"colorCorrections" ppEffectCommit _delay;
		"dynamicBlur" ppEffectAdjust [4];
		"dynamicBlur" ppEffectCommit _delay;
		sleep _delay;
	};
};
//_check = [_player,_ppeffects,_soundVolume,_musicVolume] spawn _teamswitchcheck;

//--- Random constants for player
_pos = FNC_PLAYERPOS("_player");
_flying = if ((_pos select 2) > 50) then {true} else {false};
_size = sizeOf typeOf (vehicle _player);
_dir = random 360;
_dx = sin _dir * _size;
_dy = cos _dir * _size;
_dz = if (_flying) then {_size * 2} else {_size};

//--- Random constants for killer
_ksize = sizeOf typeOf vehicle _killer;
_kdir = random 360;
_kdx = sin _dir * _size;
_kdy = cos _dir * _size;
_kdz = _size;

//--- Create camera
_camera = "camera" camCreate FNC_PLAYERPOS("_player");
_camera cameraEffect ["internal","back"];
showCinemaBorder false;
_camera camPrepareTarget _pos;
_camera camPreparePos [(_pos select 0) + _dx,(_pos select 1) + _dy,(_pos select 2) + _dz];
_camera camPrepareFov 0.7;
_camera camCommitPrepared 0;

//--- Track player
while {velocity (vehicle _player) distance [0,0,0] > 0 || _flying} do
{
	_pos = FNC_PLAYERPOS("_player");

	if (!_flying || (_flying && (FNC_PLAYERPOS("_player") select 2) > 50)) then
	{
		_camera camPreparePos [(_pos select 0) + _dx,(_pos select 1) + _dy,(_pos select 2) + _dz];
	};
	_camera camPrepareTarget _pos;
	_camera camCommitPrepared 0;
	sleep 0.01;
};

//--- Zoom out from player
_delay = 5 + random 5;
_distancecoef = 1.2;
if (_player == _killer) then {_delay = 100 + random 100; _distancecoef = 5 + random 3};
_pos = FNC_PLAYERPOS("_player");
_camera camPreparePos [(_pos select 0) + _dx * _distancecoef,(_pos select 1) + _dy * _distancecoef,(_pos select 2) + _dz * _distancecoef];
_camera camCommitPrepared _delay;
waitUntil {camCommitted _camera};

if (_player == _killer) exitWith {};

//--- Show killer
_pos = FNC_PLAYERPOS("_killer");
_camera camPrepareTarget vehicle _killer;
_camera camPreparePos [(_pos select 0) + _kdx,(_pos select 1) + _kdy,(_pos select 2) + _kdz];
_camera camCommitPrepared (5 + random 5);
waitUntil {camCommitted _camera};

while {true} do
{
	_pos = FNC_PLAYERPOS("_killer");
	_camera camPreparePos [(_pos select 0) + _kdx,(_pos select 1) + _kdy,(_pos select 2) + _kdz];
	_camera camPrepareTarget _pos;
	_camera camCommitPrepared 0;
	sleep 0.01;
};

