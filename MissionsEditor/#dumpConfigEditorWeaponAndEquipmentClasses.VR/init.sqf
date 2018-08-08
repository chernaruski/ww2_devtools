TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen [""];

"ConfigDumpFileIO" callExtension ("open:" + "A3_Editor_WeaponAndEquipmentClasses.cpp");

_fnc =
{
	_filter = _this;

	_rootClass = "CfgWeapons";

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

				if (_className isKindOf [_filter,configFile/"CfgWeapons"]) then
				{
					private["_author"];
					_author = toLower (getText (_class/"author"));

					if (_author in TEST_IncludedAuthors) then
					{
						_skip = false;
						_baseClass = configName (inheritsFrom _class);

						_isWeapon = false;
						_model = "";
						_base = "";
						_tag = "";
						_name = "";
						_editorSubcategory = "";
						_type = "";
						_typeName = "";

						switch (true) do
						{
							case (_className isKindOf ["H_LIB_HelmetB",configFile/"CfgWeapons"]):
							{
								_base = "Headgear_H_LIB_Headgear_Base";
								_tag = "Headgear";
								_name = "$STR_CTH_" + _className;
								if (["cap",_className] call BIS_fnc_inString) then
								{
									_model = "\A3\Weapons_F\DummyCap.p3d";
								};
								_type = "TransportItems";
								_typeName = "name";
							};
							case (_className isKindOf ["U_LIB_BasicBody",configFile/"CfgWeapons"]):
							{
								_base = "Uniform_U_LIB_BasicBody";
								_tag = "Uniform";
								_name = "$STR_CTH_" + _className;
								_type = "TransportItems";
								_typeName = "name";
							};
							case (_className isKindOf ["V_LIB_Vest_Camo_Base",configFile/"CfgWeapons"]):
							{
								_base = "Vest_V_LIB_Vest_Base";
								_tag = "Vest";
								_name = "$STR_CTH_" + _className;
								_type = "TransportItems";
								_typeName = "name";
							};
							case (_className isKindOf ["LIB_PISTOL",configFile/"CfgWeapons"]):
							{
								_base = "LIB_Pistol_Base_F";
								_tag = "Weapon";
								_name = "$STR_DN_" + _className;
								_type = "TransportWeapons";
								_typeName = "weapon";
								_isWeapon = true;
							};
							case (_className isKindOf ["LIB_SMG",configFile/"CfgWeapons"]):
							{
								_base = "LIB_Weapon_Base_F";
								_tag = "Weapon";
								_name = "$STR_DN_" + _className;
								_editorSubcategory = "EdSubcat_SubMachineGuns";
								_type = "TransportWeapons";
								_typeName = "weapon";
								_isWeapon = true;
							};
							case (_className isKindOf ["LIB_RIFLE",configFile/"CfgWeapons"]):
							{
								_base = "LIB_Weapon_Base_F";
								_tag = "Weapon";
								_name = "$STR_DN_" + _className;
								_editorSubcategory = "EdSubcat_AssaultRifles";
								_type = "TransportWeapons";
								_typeName = "weapon";
								_isWeapon = true;
							};
							case (_className isKindOf ["LIB_LMG",configFile/"CfgWeapons"]):
							{
								_base = "LIB_Weapon_Base_F";
								_tag = "Weapon";
								_name = "$STR_DN_" + _className;
								_editorSubcategory = "EdSubcat_MachineGuns";
								_type = "TransportWeapons";
								_typeName = "weapon";
								_isWeapon = true;
							};
							case (_className isKindOf ["LIB_SRIFLE",configFile/"CfgWeapons"]):
							{
								_base = "LIB_Weapon_Base_F";
								_tag = "Weapon";
								_name = "$STR_DN_" + _className;
								_editorSubcategory = "EdSubcat_SniperRifles";
								_type = "TransportWeapons";
								_typeName = "weapon";
								_isWeapon = true;
							};
							case (_className isKindOf ["LIB_LAUNCHER",configFile/"CfgWeapons"]):
							{
								_base = "LIB_Launcher_Base_F";
								_tag = "Weapon";
								_name = "$STR_DN_" + _className;
								_type = "TransportWeapons";
								_typeName = "weapon";
								_isWeapon = true;
							};
							case (_className isKindOf ["LIB_Binocular_base",configFile/"CfgWeapons"]):
							{
								_base = "Item_Binocular";
								_tag = "Item";
								_name = "$STR_DN_" + _className;
								_type = "TransportItems";
								_typeName = "name";
							};
							case (_className isKindOf ["LIB_Binocular_base",configFile/"CfgWeapons"]):
							{
								_base = "Item_Binocular";
								_tag = "Item";
								_name = "$STR_DN_" + _className;
								_type = "TransportItems";
								_typeName = "name";
							};
	//						case (_className isKindOf ["XXX",configFile/"CfgWeapons"]):
	//						{
	//							_base = "Item_Base_F";
	//							_tag = "Item";
	//							_name = "$STR_DN_" + _className;
	//							_type = "TransportItems";
	//							_typeName = "name";
	//						};
							case (_className isKindOf ["LIB_Head_base",configFile/"CfgWeapons"]):
							{
								_base = "Item_LIB_Head_base";
								_tag = "Item";
								_name = "$STR_DN_" + _className;
								_type = "TransportItems";
								_typeName = "name";
							};
							case (_className isKindOf ["LIB_ACC_base",configFile/"CfgWeapons"]):
							{
								_base = "Item_muzzle_snds_H";
								_tag = "Item";
								_name = "$STR_CTH_Item_" + _className;
								_type = "TransportItems";
								_typeName = "name";
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

						_myString = format ['			class %1',_className];
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

						if (_isWeapon) then
						{
							_type = "TransportMagazines";
							_typeName = "magazine";
							_magazineClassName = "XXX";

							_magazines = getArray (configFile/"cfgWeapons"/_className/"magazines");
							if ((count _magazines) > 0) then
							{
								_magazineClassName = _magazines select 0;
							};

							_myString = format ['		class %1',"TransportMagazines"];
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = "		{";
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = format ['			class %1',_magazineClassName];
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = "			{";
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = format ['				%1 = "%2";',_typeName,_magazineClassName];
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = "				count = 1;";
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = "			};";
							"ConfigDumpFileIO" callExtension ("write:" + _myString);

							_myString = "		};";
							"ConfigDumpFileIO" callExtension ("write:" + _myString);
						};

						_myString = "	};";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);
					};
				};
			};
		};
	};
};

{_x call _fnc} forEach ["H_LIB_HelmetB","U_LIB_BasicBody","V_LIB_Vest_Camo_Base","LIB_PISTOL","LIB_SMG","LIB_RIFLE","LIB_LMG","LIB_SRIFLE","LIB_LAUNCHER","LIB_Binocular_base","LIB_Binocular_base","LIB_GER_Gloves_base","LIB_ACC_base"];

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";