TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors + ["","invasion 1944 team"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen [""];

//TEST_fn_diagMacrosMapSize = compile preprocessFileLineNumbers "fn_diagMacrosMapSize.sqf";
call compile preprocessFileLineNumbers "getMapSizeAndIcon.sqf";

"ConfigDumpFileIO" callExtension ("open:" + "A3_EditorVerifyMapSize_IF_Assets.cpp");

_rootClass = "CfgVehicles";
_configClasses = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_scope","_model"];
		_scope = getNumber(_class/"scope");
		_model = getText(_class/"model");

		if ((_scope == 2) && (_model != "")) then
		{
			private["_className"];
			_className = configName _class;

			if (_className isKindOf "AllVehicles") then
			{
				private["_author"];
				_author = toLower (getText (_class/"author"));
				if (_author in TEST_IncludedAuthors) then
				{
					_configClasses pushBack [_class];

					_vehicle = createVehicle [_className,[10,10,0],[],0,"CAN_COLLIDE"];
					sleep 0.01;
					_return = [_vehicle] call getMapSize;
				
					_baseClass = configName (inheritsFrom _class);

					_myString = format ["	class %1: %2",_className, _baseClass];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

//					_myString = "	{";
//					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = format ["%1",_return select 0];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = format ["%1",_return select 1];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

//					_myString = "	};";
//					"ConfigDumpFileIO" callExtension ("write:" + _myString);;
			
					deleteVehicle _vehicle;
				};
			};
		};
	};
};

endLoadingScreen;

hint format ["%1",count _configClasses];

//[_configClasses,"wiki"] spawn TEST_fn_diagMacrosMapSize;

"ConfigDumpFileIO" callExtension "close:yes";

endMission "END1";
