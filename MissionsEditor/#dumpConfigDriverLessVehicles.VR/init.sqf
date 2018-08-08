startLoadingScreen [""];

"ConfigDumpFileIO" callExtension ("open:" + "A3_DriverLessVehicles.cpp");

_rootClass = "CfgVehicles";
_vehicleClasses = [];

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

			if ((_className isKindOf "LandVehicle") && (!(_className isKindOf "StaticWeapon"))) then
			{
				_hasDriver = getNumber(_class/"hasDriver");
				_hasTurret = isClass (_class/"Turrets");
				_numberOfTurrets = count(_class/"Turrets");
				_vehicleClass = getText(_class/"vehicleClass");
				_editorSubCategory = getText(_class/"editorSubCategory");
//diag_log [_className,_hasDriver,_hasTurret,_numberOfTurrets];

				if ((_hasDriver > 0) && (_hasTurret) && (_numberOfTurrets > 0) && (_vehicleClass != "Autonomous")) then
				{
					_primaryGunner = 0;
//diag_log [_className,_numberOfTurrets];

					for "_i" from (0) to ((count(_class/"Turrets")) - 1) do
					{
						private["_turret"];
						_turret = (_class/"Turrets") select _i;
//diag_log [_turret];
						_primaryGunner = getNumber(_turret/"primaryGunner");
						if (_primaryGunner == 1) exitWith {};
					};
//diag_log [_primaryGunner];

					if (_primaryGunner == 1) then
					{
//						_displayName = getText(_class/"displayName");
						_vehicleClasses pushBackUnique _vehicleClass;

						_myString = format ["	class %1;",_className];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ["	class %1_DLV: %1",_className];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "	{";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

//						_myString = "	scopeCurator = 1;";
//						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "		scopeArsenal = 1;";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['		vehicleClass = "%1_DLV";',_vehicleClass];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = format ['		editorSubCategory = "%1_DLV";',_editorSubcategory];
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

//						_myString = format ['		displayName = "%1 (DriverLess)";',_displayName];
//						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "		hasDriver = -1;";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);

						_myString = "	};";
						"ConfigDumpFileIO" callExtension ("write:" + _myString);
					};
				};
			};
		};
	};
};

_myString = "};";
"ConfigDumpFileIO" callExtension ("write:" + _myString);



_myString = "class CfgVehicleClasses";
"ConfigDumpFileIO" callExtension ("write:" + _myString);

_myString = "{";
"ConfigDumpFileIO" callExtension ("write:" + _myString);

{
	_vehicleClass = _x;

	_myString = format ["	class %1_DLV",_vehicleClass];
	"ConfigDumpFileIO" callExtension ("write:" + _myString);

	_myString = "	{";
	"ConfigDumpFileIO" callExtension ("write:" + _myString);

	_displayName = getText(configFile/"CfgVehicleClasses"/_vehicleClass/"displayName");

	_myString = format ['		displayName = "%1 (DriverLess)";',_displayName];
	"ConfigDumpFileIO" callExtension ("write:" + _myString);

	_myString = "	};";
	"ConfigDumpFileIO" callExtension ("write:" + _myString);

} forEach _vehicleClasses;

_myString = "};";
"ConfigDumpFileIO" callExtension ("write:" + _myString);

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";