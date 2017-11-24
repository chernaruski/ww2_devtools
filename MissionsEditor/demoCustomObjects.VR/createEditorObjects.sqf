startLoadingScreen ["Wait",""];

_distance = Test_ObjectDistance;

_numberOfObjects = count Test_ObjectsToCreate;
_length = ceil (sqrt _numberOfObjects);
//_length = 10000;

_i = 0;
_xPos = Test_PositionSourceX;
_yPos = Test_PositionSourceY;

{
	_object = _x;

	if (_i > _length) then
	{
		_i = 1;
		_xPos = Test_PositionSourceX;
		_yPos = _yPos + _distance;
	}
	else
	{
		_i = _i + 1;
	};

//	diag_log["createVehicle",_object];

	_editorObject = createVehicle [_object,[_xPos,_yPos,0],[],0,"NONE"];

	_xPos = _xPos + _distance;

} forEach Test_ObjectsToCreate;

endLoadingScreen;

hint "done";