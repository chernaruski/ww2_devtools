startLoadingScreen ["Wait",""];

_objects = BIS_ItemsToCreate;
if ((count BIS_SimpleObjets) > 0) then {_objects = BIS_SimpleObjets;};

_numberOfItems = count _objects;
_length = ceil (sqrt _numberOfItems);

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

	diag_log["createVehicle",_item];

	_editorObject = objNull;
	
	_position = [_xPos,_yPos,0];

	if ((count BIS_SimpleObjets) > 0) then
	{
		_position set [2,5.5];
		_editorObject = createSimpleObject [_item,_position];
	}
	else
	{
		_editorObject = createVehicle [_item,_position,[],0,"NONE"];
	};
	
	BIS_EditorItems set [count BIS_EditorItems,_editorObject];

	_xPos = _xPos + BIS_ObjectDistance;

} forEach _objects;

endLoadingScreen;

hint "done";