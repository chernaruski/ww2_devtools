TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen [""];

"ConfigDumpFileIO" callExtension ("open:" + "A3_Editor_BackpackClasses.cpp");

_fnc_exportBackpackClasses =
{
	_filter = _this;

	_rootClass = "cfgVehicles";

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

				if (_className isKindOf [_filter,configFile/"cfgVehicles"]) then
				{
					private["_author"];
					_author = toLower (getText (_class/"author"));

					if (_author in TEST_IncludedAuthors) then
					{
						_skip = false;
						_baseClass = configName (inheritsFrom _class);

//						_model = "";
						_base = "";
						_tag = "";
						_name = "";
						_editorSubcategory = "";
						_type = "";
						_typeName = "";

						switch (true) do
						{
							case (_className isKindOf ["B_LIB_AssaultPack_Base",configFile/"cfgVehicles"]):
							{
								_base = "Item_LIB_BackPack_base";
								_tag = "BackPack";
								_name = "$STR_CTH_" + _className;
								_type = "TransportBackpacks";
								_typeName = "backpack";
							};
							case (_className isKindOf ["LIB_Weapon_Bag_Base",configFile/"cfgVehicles"]):
							{
								_base = "Item_LIB_Bag_base";
								_tag = "Bag";
								_name = "$STR_CTH_" + _className;
								_type = "TransportBackpacks";
								_typeName = "backpack";
							};
							default
							{
								_skip = true;
							};
						};

						if (_skip) exitWith {};

						_author = getText (_class/"author");
						_displayName = getText (_class/"displayName");

						_myString = format ["	class %1_%2: %3",_tag,_className,_base];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "	{";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['		author = "%1";',_author];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['		scope = %1;',_scope];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['		scopeCurator = %1;',_scope];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['		displayName = "%1";',_name];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						if (_model != "") then
						{
							_myString = format ['		model = "%1";',_model];
							"ConfigDumpFileIO" callExtension ("write:" + _myString);
						};

						if (_editorSubcategory != "") then
						{
							_myString = format ['		editorSubcategory = "%1";',_editorSubcategory];
							"ConfigDumpFileIO" callExtension ("write:" + _myString);
						};

						_myString = format ['		class %1',_type];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "		{";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['			class _xx_%1',_className];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "			{";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['				%1 = "%2";',_typeName,_className];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "				count = 1;";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "			};";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "		};";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "	};";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);
					};
				};
			};
		};
	};
};

{_x call _fnc_exportBackpackClasses} forEach ["B_LIB_AssaultPack_Base","LIB_Weapon_Bag_Base"];

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";