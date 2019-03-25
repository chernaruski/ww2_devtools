//For use in Eden Editor UI to dump mapSize and icon
//Only needs to be executed once to save the function to variable

//Author: Pennyworth

getMapSizeAndIcon =
{
	params ["_object"];
//diag_log ["_object",_object];
	_bbr = boundingBoxReal _object;
	if (_bbr isEqualTo [[0,0,0],[0,0,0]]) exitWith {["-1","NA"]};
//diag_log ["_bbr",_bbr];
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_mapSize = _maxWidth max _maxLength;
	_mapSize = (round (_mapSize * 100)) / 100;

	_ratio = -1;
	_switch = -1;
	_return = [];

	if(_maxWidth > _maxLength) then
	{
		_ratio = _maxWidth / _maxLength;
		_switch = 0;
	}
	else
	{
		_ratio = _maxLength /_maxWidth;
		_switch = 1;
	};

	_arr =
	[
		[abs(1 - _ratio),["1","1"]],
		[abs(5 - (_ratio*4)),["5","4"]],
		[abs(3 - (_ratio*2)),["3","2"]],
		[abs(2 - (_ratio*1)),["2","1"]],
		[abs(5 - (_ratio*2)),["5","2"]],
		[abs(3 - _ratio),["3","1"]],
		[abs(4 - _ratio),["4","1"]],
		[abs(5 - _ratio),["5","1"]],
		[abs(7 - _ratio),["7","1"]],
		[abs(10 - _ratio),["10","1"]]
	];
	
	_arr sort true;
	_first = (_arr select 0) select 1;
	_val = "";

	if(_switch isEqualTo 0) then
	{
		_val = format ["%1x%2",(_first select 0),(_first select 1)];
	}
	else
	{
		_val = format ["%1x%2",(_first select 1),(_first select 0)];
	};

	_stringMap = format ['		mapSize = %1;',_mapSize];
	_stringIcon = format ['		icon = "iconObject_%1";',_val];

	_return = [_stringMap,_stringIcon];
	_return
};
