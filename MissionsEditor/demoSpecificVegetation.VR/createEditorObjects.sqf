startLoadingScreen ["Wait",""];

_numberOfItems = count BIS_ItemsToCreate;
_length = 1000;//ceil (sqrt _numberOfItems);

_i = 0;
_xPos = BIS_PositionSourceX;
_yPos = BIS_PositionSourceY;

{
	_item = _x;

	if (_i > _length) then
	{
		_i = 1;
		_xPos = BIS_PositionSourceX;
		_yPos = _yPos + BIS_ObjectDistance;
	}
	else
	{
		_i = _i + 1;
	};

	if (_item == "") then
	{
		_xPos = BIS_PositionSourceX;
		_yPos = _yPos + BIS_ObjectDistance;
	}
	else
	{
		diag_log["createVehicle",_item];

		_editorObject = createVehicle [_item,[_xPos,_yPos,0],[],0,"NONE"];
		BIS_EditorItems set [count BIS_EditorItems,_editorObject];

		_xPos = _xPos + BIS_ObjectDistance;
	};

} forEach BIS_ItemsToCreate;

endLoadingScreen;

hint "done";