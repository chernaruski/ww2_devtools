private["_log","_delete","_allowDamage","_enableSimulation"];

_log = true;
//_delete = true;
_allowDamage = true;
_enableSimulation = true;

if (isNil "_log") then {_log = false;};
if (isNil "_delete") then {_delete = false;};
if (isNil "_allowDamage") then {_allowDamage = false;};
if (isNil "_enableSimulation") then {_enableSimulation = false;};

//"inf"
//"vehicles"
//"other"

TEST_IncludedVehicles = [];

startLoadingScreen ["WAIT",""];
MyVehicles = ["vehicles"] call compile preprocessFileLineNumbers "createVehicleList.sqf";
endLoadingScreen;

waitUntil {sleep 0.01; (!(isNull (findDisplay 46)))};
sleep 1;

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = (getMarkerPos "target") select 0;
	_yCoord = (getMarkerPos "target") select 1;
	{
		if (_log) then
		{
			diag_log "";
			diag_log _x;
		};

		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		if (_delete) then
		{
			deleteVehicle _vehicle;
		}
		else
		{
			_xCoord = _xCoord + 10;
			if (_xCoord > 1000) then
			{
				_yCoord = _yCoord + 10;
				_xCoord = 0;
			};
		};

		if (!(_allowDamage)) then
		{
			_vehicle allowDamage false;
		};

		if (!(_enableSimulation)) then
		{
			_vehicle enableSimulation false;
		};
	} forEach MyVehicles;
};

hint "done";