
//	private _list = (nearestTerrainObjects [getPosWorld player, ["HIDE"], 1000, false]) apply {hideObjectGlobal _x};
//	hint str (count _list);

//	nearestObjects [[worldSize / 2, worldSize / 2], ["Land_Wreck_Skodovka_F"], sqrt(2 * worldSize ^ 2) / 2];


startLoadingScreen [""];

_handle = 0 spawn
{
	_allTerrainObjects = nearestTerrainObjects
	[
		[worldSize / 2, worldSize / 2],
		[],
		2 * worldSize,
		false
	];
	diag_log ["count allTerrainObjects",worldName,count _allTerrainObjects];

	_terrainObjects = [];

	{
		_terrainObject = _x;
		_array = (str _terrainObject) splitString ": ";
		_modelName = _array select ((count _array - 1));

		_terrainObjects pushBack _modelName;
	}
	forEach _allTerrainObjects;

	_consolidateArray = _terrainObjects call BIS_fnc_consolidateArray;

	_tempArray = [];

	{
		_modelName = _x select 0;
		_count = _x select 1;

		_tempArray pushBack [_count,_modelName];
	} forEach _consolidateArray;

	_tempArray sort false;

	{
		diag_log format ["%1x %2",_x select 0,_x select 1];
	} forEach _tempArray;

	endLoadingScreen;

	endMission "end1";
};

waitUntil {scriptDone _handle};

endLoadingScreen;

endMission "end1";