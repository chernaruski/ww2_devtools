startLoadingScreen ["Wait",""];

diag_log ("class" + "	" + "mapSize" + "	" + "dimensionX" + "	" + "boundingBox");

{
	_class = _x;
	_configOfClass = configFile/"cfgVehicles"/_class;

	if (isClass _configOfClass) then
	{
		_mapSize = str (getNumber (_configOfClass/"mapSize"));
		_object = createVehicle [_class,[1000,1000,0],[],0,"NONE"];
		_dimensionX = str (sizeOf _class);//_object);
		_boundingBox = str (boundingBox _object);
		deleteVehicle _object;
		diag_log (_class + "	" + _mapSize + "	" + _dimensionX + "	" + _boundingBox);
	}
	else
	{
		diag_log ("=== ERROR ===" + "	" + _class + "	" + "NOT FOUND");
	};
} forEach BIS_EditorObjectsFromSheet;

endLoadingScreen;

hint "done";