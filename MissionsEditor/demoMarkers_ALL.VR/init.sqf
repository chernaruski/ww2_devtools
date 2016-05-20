_rootClass = "CfgMarkers";

_markerCount = count(configFile/_rootClass);

_xPos = 0;
_yPos = 0;

for "_i" from (0) to (_markerCount - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className","_add"];
		_className = configName _class;

		_position = [100 + _xPos * 10,100 + _yPos * 10,0];
		_marker = createMarker [_className,_position];
		_marker setMarkerType _className;
	};

	_xPos = _xPos + 1;

	if ((_xPos % (floor (sqrt _markerCount))) == 0) then
	{
		_yPos = _yPos + 1;
		_xPos = 0;
	};
};
