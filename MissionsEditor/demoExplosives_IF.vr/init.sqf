TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

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
