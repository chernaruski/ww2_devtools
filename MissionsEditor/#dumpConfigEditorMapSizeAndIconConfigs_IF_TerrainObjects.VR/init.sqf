TEST_IncludedAuthors = ["","awar & lennard","awar","el tyranos","lennard","lib","lodu & el tyranos","lodu & tierprot","lodu","lodu, tierprot & shemich","stagler","tierprot"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen [""];

call compile preprocessFileLineNumbers "getMapSizeAndIcon.sqf";

"ConfigDumpFileIO" callExtension ("open:" + "A3_EditorMapSizeAndIconConfigs_IF_TerrainObjects.cpp");

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
					private["_vehicle","_return","_baseClass","_myString"];
					_vehicle = createVehicle [_className,[10,10,0],[],0,"CAN_COLLIDE"];
					sleep 0.01;
					_return = [_vehicle] call getMapSizeAndIcon;
				
					_baseClass = configName (inheritsFrom _class);

					_myString = format ["	class %1: %2",_className, _baseClass];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = "	{";
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = format ["%1",_return select 0];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = format ["%1",_return select 1];
					"ConfigDumpFileIO" callExtension ("write:" + _myString);

					_myString = "	};";
					"ConfigDumpFileIO" callExtension ("write:" + _myString);;
			
					deleteVehicle _vehicle;
				};
			};
		};
	};
};

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";