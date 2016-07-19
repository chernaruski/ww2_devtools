
setViewDistance 2500;
setTerrainGrid 25;

_left = (getPos bottomLeft) select 0;
_right = (getPos topRight) select 0;
_top = (getPos topRight) select 1;
_bottom = (getPos bottomLeft) select 1;

_topRight = getPos topRight;

setAccTime 4;

_toggle = false;
_camHeight = 50;

_current = getPos bottomLeft;
_currentX = _current select 0;
_currentY = _current select 1;

_next = [_left,_top,_camHeight];

_cam = "camera" camCreate [_left,_bottom,_camHeight];
_cam cameraEffect ["internal","BACK"];
showCinemaBorder false;

_i = 0;

while {true} do
{
	_commitTime = (_current distance _next) / 2000;
	_cam camSetPos _next;
	_cam camSetTarget _next;
//	_cam camCommit 0;
	_cam camCommit _commitTime;
//	sleep _commitTime;

//	player sideChat format ["Distance: %1",((getPos _cam) distance _next)];
//	diag_log format ["XXX - C: %1, T: %2, N: %3, D: %4",(getPos _cam),_next,((getPos _cam) distance _next),((getPos _cam) distance _topRight)];

	while {(((getPos _cam) distance _next) > 100)} do
	{
//		_logText = format ["C: %1, T: %2, D: %3, E: %4",[floor ((getPos _cam) select 0),floor ((getPos _cam) select 1),floor ((getPos _cam) select 2)],_next,((getPos _cam) distance _next),((getPos _cam) distance _topRight)];
//		player sideChat _logText;
//		diag_log _logText;
		sleep 1;
	};

	if ((_i mod 2) == 0) then
	{
		_currentX = _currentX + 1000;
	}
	else
	{
		if (_toggle) then
		{
			_currentY = _top;
			_toggle = false;
		}
		else
		{
			_currentY = _bottom;
			_toggle = true;
		};
	};

	_i = _i + 1;
	_next = [_currentX,_currentY,_camHeight];
	_current = getPos _cam;

	if ((_current distance _topRight) < 500) exitWith {};
};

endMission "END1";