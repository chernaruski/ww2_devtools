private["_arrayOfStrings","_return","_firstElement"];

_arrayOfStrings = _this select 0;
_return = "";
_firstElement = true;

{
	private["_string"];
	_string = _x;

	if (_firstElement) then
	{
		_firstElement = false;
		_return = '"' + _string + '"';
	}
	else
	{
		_return = _return + ',' + '"' + _string + '"';
	};
} forEach _arrayOfStrings;

_return;