TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen [""];

"ConfigDumpFileIO" callExtension ("open:" + "A3_CamoVariants_IF.cpp");

_rootClass = "CfgVehicles";

_existingHiddenSelectionsTexturesDefinitions = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_scope","_model"];
		_scope = getNumber(_class/"scope");
		_model = getText(_class/"model");

		if ((_scope > 0) && (_model != "")) then
		{
			private["_className"];
			_className = configName _class;

			if (_className isKindOf "AllVehicles") then
			{
				private["_author"];
				_author = toLower (getText (_class/"author"));

				if (_author in TEST_IncludedAuthors) then
				{
					private["_hiddenSelectionsTextures"];
					_hiddenSelectionsTextures = getArray(_class/"hiddenSelectionsTextures");

					_existingHiddenSelectionsTexturesDefinitions pushBackUnique _hiddenSelectionsTextures;
//diag_log["_hiddenSelectionsTextures",_hiddenSelectionsTextures];
				};
			};
		};
	};
};

_baseClasses = [];

_myString = "class cfgVehicles";
"ConfigDumpFileIO" callExtension ("write:" + _myString);

_myString = "{";
"ConfigDumpFileIO" callExtension ("write:" + _myString);

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_scope","_model"];
		_scope = getNumber(_class/"scope");
		_model = getText(_class/"model");

		if ((_scope > 0) && (_model != "")) then
		{
			private["_className"];
			_className = configName _class;

			if (_className isKindOf "AllVehicles") then
			{
				private["_author"];
				_author = toLower (getText (_class/"author"));

				if (_author in TEST_IncludedAuthors) then
				{
					_hasTextureSources = isClass (_class/"textureSources");
					_numberOfTextureSources = count(_class/"textureSources");
//diag_log [_className,_hasTextureSources,_numberOfTextureSources];

					if ((_hasTextureSources) && (_numberOfTextureSources > 0)) then
					{
						_baseClass = configName (inheritsFrom _class);
						_displayName = getText(_class/"displayName");
						_faction = getText(_class/"faction");

						_baseClasses pushBackUnique _baseClass;

						for "_i" from (0) to ((count(_class/"textureSources")) - 1) do
						{
							private["_textureSourcesVariant"];
							_textureSourcesVariant = (_class/"textureSources") select _i;
							_textureSourcesVariantName = configName _textureSourcesVariant;

							_displayNameVariant = getText(_textureSourcesVariant/"displayName");
							_authorVariant = getText(_textureSourcesVariant/"author");
							_texturesVariant = getArray(_textureSourcesVariant/"textures");
							_factionsVariant = getArray(_textureSourcesVariant/"factions");
							if ((count _factionsVariant) > 0) then {_faction = _factionsVariant select 0;};

//diag_log [_texturesVariant,_texturesVariant in _existingHiddenSelectionsTexturesDefinitions];

							if (_texturesVariant in _existingHiddenSelectionsTexturesDefinitions) then
							{
								diag_log [_className,_texturesVariant];
							}
							else
							{
//								_myString = format ["	class %1;",_baseClass];
//								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = format ["	class %1_%2: %3",_className,_textureSourcesVariantName,_baseClass];
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = "	{";
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = "		scope = 2;";
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

	//							_myString = "	scopeCurator = 1;";
	//							"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = "		scopeArsenal = 1;";
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = format ['		author = "%1";',_authorVariant];
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = format ['		displayName = "%1 (%2)";',_displayName,_displayNameVariant];
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = format ['		faction = "%1";',_faction];
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_hiddenSelectionsTextures = _texturesVariant joinString '","';

								_myString = format ['		hiddenSelectionsTextures[] = {"%1"};',_hiddenSelectionsTextures];
								"ConfigDumpFileIO" callExtension ("write:" + _myString);

								_myString = "	};";
								"ConfigDumpFileIO" callExtension ("write:" + _myString);
							};
						};
					};
				};
			};
		};
	};
};

_myString = "};";
"ConfigDumpFileIO" callExtension ("write:" + _myString);

_baseClasses sort true;

{
	_myString = format ["	class %1;",_x];
	"ConfigDumpFileIO" callExtension ("write:" + _myString);
} forEach _baseClasses;

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";