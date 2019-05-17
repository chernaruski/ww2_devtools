TEST_IncludedAuthors = ["Bohemia Interactive"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

///////////////////////////////////////////////////////////////////////////////

_spaceBetweenItems = 5;

///////////////////////////////////////////////////////////////////////////////

startLoadingScreen [""];

_rootClass = "CfgVehicles";
_mineClasses = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		_className = configName _class;

		if (_className isKindOf "MineBase") then
		{
			if (getNumber (_class/"scope") > 0) then
			{
				_author = getText (_class >> "author");

				if (toLower _author in TEST_IncludedAuthors) then
				{
					_mineClasses pushBack _className;
				};
			};
		};
	};
};

_numberOfMines = count _mineClasses;
_xMax = 999999;//round (sqrt _numberOfMines);

_positionX = 0;
_positionY = 0;

_x = 5;
_y = 0;

for "_i" from 0 to (_numberOfMines - 1) do
{
	_mineClass = _mineClasses select _i;

	_mine = createMine [_mineClass,[_positionX + _x * _spaceBetweenItems,_positionY + _y * _spaceBetweenItems,0],[],0];
//	_weapon = createVehicle [_mineClass,[_positionX + _x * _spaceBetweenItems,_positionY + _y * _spaceBetweenItems,0],[],0,"CAN_COLLIDE"];

	_x = _x + 1;

	if (_x >= _xMax) then
	{
		_x = 0;
		_y = _y + 1;
	};
};
endLoadingScreen;
