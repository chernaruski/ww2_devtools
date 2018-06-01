TEST_IncludedAuthors = ["","[TF]Nkey","TurkishSoap","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44","IFA3 team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","Snippers","Stadl0r","Stagler","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","ZVER, El Tyranos"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

_path = "\WW2\Objects_t\Misc\IF_EditorPreviews_t\";

startLoadingScreen [""];

"ConfigDumpFileIO" callExtension ("open:" + "A3_EditorPreviewConfigs_IF_TerrainObjects.cpp");

_rootClass = "CfgVehicles";

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

			if ((_className isKindOf "Static") || (_className isKindOf "Thing")) then
			{
				private["_author"];
				_author = toLower (getText (_class/"author"));
				if (_author in TEST_IncludedAuthors) then
				{
					_baseClass = configName (inheritsFrom _class);

					_myString = format ["	class %1: %2",_className, _baseClass];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = "	{";
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = format ['		editorPreview = "%1%2.jpg";',_path,_className];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = "	};";
					"ConfigDumpFileIO" callExtension ("write:" + _myString);
				};
			};
		};
	};
};

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";