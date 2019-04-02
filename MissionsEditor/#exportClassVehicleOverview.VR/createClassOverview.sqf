TEST_exportToWiki = false;
TEST_exportToWiki = true;

_factions = [];

_export = "";

for "_i" from (0) to ((count(configFile/"CfgFactionClasses")) - 1) do
{
	_class = (configFile/"CfgFactionClasses") select _i;

	if (isClass _class) then
	{
		_className = configName _class;

		if (((_className find "LIB_") != -1) || ((_className find "SG_") != -1)) then //TODO: replace with author/mod check
		{
			_factions pushBack (toUpper _className);
		};
	};
};

_vehiclesRootClass = "CfgVehicles";
_vehicleClasses = [];

_factionVehicleWeapons = [];
_factionVehicleMagazines = [];



for "_i" from (0) to ((count(configFile/_vehiclesRootClass)) - 1) do
{
	_class = (configFile/_vehiclesRootClass) select _i;

	if (isClass _class) then
	{
		_scope = getNumber(_class/"scope");
		_model = getText(_class/"model");

		if ((_scope >= 1) && (_model != "")) then
		{
			_className = configName _class;
			_parachuteBase = _className isKindOf "ParachuteBase";
			_displayNameEmpty = ((getText (_class/"displayName")) == "");
			_isVehicle = false;
			{if (_className isKindOf _x) exitWith {_isVehicle = true;};}forEach ["LandVehicle","Air","Ship"];

			if (_isVehicle && {!(_parachuteBase)} && {!(_displayNameEmpty)}) then
			{
				_faction = toUpper (getText (configFile/"CfgVehicles"/_className/"faction"));
				if (_faction in _factions) then
				{
					_vehicleClasses pushBack _className;
				};
			};
		};
	};
};

//# vehicles

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Vehicles ==" + endl + endl;
}
else
{
	_tempText = "// Vehicles" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Vehicle !! DisplayName !! Driver !! WeaponsDriver !! MagazinesDriver !! Gunner !! WeaponsGunner !! MagazinesGunner !! Commander !! WeaponsCommander !! MagazinesCommander !! SecondaryTurrets !! CargoTurrets !! LoaderTurret !! TransportSoldier !! TotalCapacity" + endl;
}
else
{
	_tempText = _tempText + "Vehicle	DisplayName	Driver	WeaponsDriver	MagazinesDriver	Gunner	WeaponsGunner	MagazinesGunner	Commander	WeaponsCommander	MagazinesCommander	SecondaryTurrets	CargoTurrets	LoaderTurret	TransportSoldier	TotalCapacity" + endl + endl;
};
_export = _export + _tempText;

//class - displayName - driver - weapons - magazines[] - main gunner - weapons - magazines[] - commander (weapons - magazines) - secondary gunners (weapons - magazines) - loader - cargo seats (transportSoldier+FFV) - total capacity # image - author # - armor
//crew
//gunnerType
//typicalCargo
_fnc_getCommanderTurrets =
{
	params ["_turretConfig"];
	_primaryObserver = getNumber (_turretConfig/"primaryObserver");

	(_primaryObserver == 1)
};
_fnc_getMainTurrets =
{
	params ["_turretConfig"];
	_primaryGunner = getNumber (_turretConfig/"primaryGunner");

	(_primaryGunner == 1)
};
_fnc_getSecondaryTurrets =
{
	params ["_turretConfig"];
	_primaryObserver = getNumber (_turretConfig/"primaryObserver");
	_primaryGunner = getNumber (_turretConfig/"primaryGunner");
	_weapons = getArray (_turretConfig/"weapons");

	(((count _weapons) > 0) && {(_primaryObserver == 0) && {(_primaryGunner == 0)}})
};
_fnc_getCargoTurrets =
{
	params ["_turretConfig"];
	_isPersonTurret = getNumber (_turretConfig/"isPersonTurret");

	(_isPersonTurret == 1)
};
_fnc_getLoaderTurrets =
{
	params ["_turretConfig"];
	_primaryObserver = getNumber (_turretConfig/"primaryObserver");
	_primaryGunner = getNumber (_turretConfig/"primaryGunner");
	_weapons = getArray (_turretConfig/"weapons");

//		Loader_place
	(((count _weapons) == 0) && {(_primaryObserver == 0) && {(_primaryGunner == 0)}})
};
_fnc_checkTurretType =
{
	params ["_turretConfig"];

	switch (true) do
	{
		case ([_turretConfig] call _fnc_getMainTurrets):	{TEST_mainTurrets pushBack _turretConfig};
		case ([_turretConfig] call _fnc_getCommanderTurrets):	{TEST_commanderTurrets pushBack _turretConfig};
		case ([_turretConfig] call _fnc_getSecondaryTurrets):	{TEST_secondaryTurrets pushBack _turretConfig};
		case ([_turretConfig] call _fnc_getCargoTurrets):	{TEST_cargoTurrets pushBack _turretConfig};
		case ([_turretConfig] call _fnc_getLoaderTurrets):	{TEST_loaderTurrets pushBack _turretConfig};
		default {};
	};
};

_fnc_VehiclesOverview =
{
	params ["_vehicle"];


	_displayName = getText(configFile/"CfgVehicles"/_vehicle/"displayName");

	_driverType = getText(configFile/"CfgVehicles"/_vehicle/"crew");
	_mainTurretType = "-";
	_weaponsDriver = "-";
	_magazinesDriver = "-";
	_weaponsMainTurret = "-";
	_magazinesMainTurret = "-";
	_commanderType = "-";
	_weaponsCommander = "-";
	_magazinesCommander = "-";
	_secondaryTurretTypes = "-";
	_cargoTurretTypes = "-";
	_loaderTurretType = "-";

	_transportSoldier = getNumber(configFile/"CfgVehicles"/_vehicle/"transportSoldier");

	_weaponsDriver = getArray(configFile/"CfgVehicles"/_vehicle/"weapons");
	_magazines = getArray(configFile/"CfgVehicles"/_vehicle/"magazines");

	{_factionVehicleWeapons pushBackUnique (toUpper _x)} forEach _weaponsDriver;
	{_factionVehicleMagazines pushBackUnique (toUpper _x)} forEach _magazines;

	if ((count _weaponsDriver) == 0) then {_weaponsDriver = "-";};

	_driverMagazinesTypes = [];
	_driverMagazinesCount = [];

	{
		_magazine = _x;
		_index = _driverMagazinesTypes find _magazine;

		if (_index == -1) then
		{
			_driverMagazinesTypes pushBack _magazine;
			_driverMagazinesCount pushBack 1;
		}
		else
		{
			_driverMagazinesCount set [_index,(_driverMagazinesCount select _index) + 1];
		};
	} forEach _magazines;

	if ((count _driverMagazinesTypes) > 0) then {_magazinesDriver = "";};
	{
		if (_forEachIndex > 0) then {_magazinesDriver = _magazinesDriver + ", ";};
		_magazinesDriver = _magazinesDriver + format ["%2x %1",_x,_driverMagazinesCount select _forEachIndex];
	} forEach _driverMagazinesTypes;

	_vehicleTurretClass = configFile/"CfgVehicles"/_vehicle/"Turrets";

	TEST_commanderTurrets = [];
	TEST_mainTurrets = [];
	TEST_secondaryTurrets = [];
	TEST_cargoTurrets = [];
	TEST_loaderTurrets = [];

	if (isClass _vehicleTurretClass) then
	{
		for "_i" from (0) to ((count _vehicleTurretClass) - 1) do
		{
			_turretClass = _vehicleTurretClass select _i;

			[_turretClass] call _fnc_checkTurretType;

			if (isClass _turretClass) then
			{
				_vehicleSubTurretClass = _turretClass/"Turrets";

				if (isClass _vehicleSubTurretClass) then
				{
					for "_j" from (0) to ((count _vehicleSubTurretClass) - 1) do
					{
						_subTurretClass = _vehicleSubTurretClass select _j;

						[_subTurretClass] call _fnc_checkTurretType;
					};
				};
			};
		};
	};

	if ((count TEST_commanderTurrets) > 0) then
	{
		_commanderTurret = TEST_commanderTurrets select 0;

		_commanderType = _driverType;

		_gunnerTypeCommander = getText(_commanderTurret/"gunnerType");
		if (_gunnerTypeCommander != "") then {_commanderType = _gunnerTypeCommander;};

		_weaponsCommander = getArray(_commanderTurret/"weapons");
		_magazines = getArray(_commanderTurret/"magazines");

		{_factionVehicleWeapons pushBackUnique (toUpper _x)} forEach _weaponsCommander;
		{_factionVehicleMagazines pushBackUnique (toUpper _x)} forEach _magazines;

		_commanderMagazinesTypes = [];
		_commanderMagazinesCount = [];

		{
			_magazine = _x;
			_index = _commanderMagazinesTypes find _magazine;

			if (_index == -1) then
			{
				_commanderMagazinesTypes pushBack _magazine;
				_commanderMagazinesCount pushBack 1;
			}
			else
			{
				_commanderMagazinesCount set [_index,(_commanderMagazinesCount select _index) + 1];
			};
		} forEach _magazines;

		_magazinesCommander = "";
		{
			if (_forEachIndex > 0) then {_magazinesCommander = _magazinesCommander + ", ";};
			_magazinesCommander = _magazinesCommander + format ["%2x %1",_x,_commanderMagazinesCount select _forEachIndex];
		} forEach _commanderMagazinesTypes;
	};

	if ((count TEST_mainTurrets) > 0) then
	{
		_mainTurret = TEST_mainTurrets select 0;

		_mainTurretType = _driverType;

		_gunnerTypeMainTurret = getText(_mainTurret/"gunnerType");
		if (_gunnerTypeMainTurret != "") then {_mainTurretType = _gunnerTypeMainTurret;};

		_weaponsMainTurret = getArray(_mainTurret/"weapons");
		_magazines = getArray(_mainTurret/"magazines");

		{_factionVehicleWeapons pushBackUnique (toUpper _x)} forEach _weaponsMainTurret;
		{_factionVehicleMagazines pushBackUnique (toUpper _x)} forEach _magazines;

		_mainTurretMagazinesTypes = [];
		_mainTurretMagazinesCount = [];

		{
			_magazine = _x;
			_index = _mainTurretMagazinesTypes find _magazine;

			if (_index == -1) then
			{
				_mainTurretMagazinesTypes pushBack _magazine;
				_mainTurretMagazinesCount pushBack 1;
			}
			else
			{
				_mainTurretMagazinesCount set [_index,(_mainTurretMagazinesCount select _index) + 1];
			};
		} forEach _magazines;

		_magazinesMainTurret = "";
		{
			if (_forEachIndex > 0) then {_magazinesMainTurret = _magazinesMainTurret + ", ";};
			_magazinesMainTurret = _magazinesMainTurret + format ["%2x %1",_x,_mainTurretMagazinesCount select _forEachIndex];
		} forEach _mainTurretMagazinesTypes;
	};

	if ((count TEST_secondaryTurrets) > 0) then
	{
		_secondaryTurretTypes = [];

		{
			_secondaryTurret = _x;

			_secondaryTurretType = _driverType;

			_gunnerTypeSecondaryTurret = getText(_secondaryTurret/"gunnerType");
			if (_gunnerTypeSecondaryTurret != "") then {_secondaryTurretType = _gunnerTypeSecondaryTurret;};

			_weaponsSecondaryTurret = getArray(_secondaryTurret/"weapons");
			_magazines = getArray(_secondaryTurret/"magazines");

			{_factionVehicleWeapons pushBackUnique (toUpper _x)} forEach _weaponsSecondaryTurret;
			{_factionVehicleMagazines pushBackUnique (toUpper _x)} forEach _magazines;

			_secondaryTurretMagazinesTypes = [];
			_secondaryTurretMagazinesCount = [];

			{
				_magazine = _x;
				_index = _secondaryTurretMagazinesTypes find _magazine;

				if (_index == -1) then
				{
					_secondaryTurretMagazinesTypes pushBack _magazine;
					_secondaryTurretMagazinesCount pushBack 1;
				}
				else
				{
					_secondaryTurretMagazinesCount set [_index,(_secondaryTurretMagazinesCount select _index) + 1];
				};
			} forEach _magazines;

			_magazinesSecondaryTurret = "";
			{
				if (_forEachIndex > 0) then {_magazinesSecondaryTurret = _magazinesSecondaryTurret + ", ";};
				_magazinesSecondaryTurret = _magazinesSecondaryTurret + format ["%2x %1",_x,_secondaryTurretMagazinesCount select _forEachIndex];
			} forEach _secondaryTurretMagazinesTypes;

			_secondaryTurretTypes pushBack [_secondaryTurretType,_weaponsSecondaryTurret,_magazinesSecondaryTurret];
		} forEach TEST_secondaryTurrets;
	};

	if ((count TEST_cargoTurrets) > 0) then
	{
		_cargoTurretTypes = [];

		{
			_cargoTurret = _x;

			_cargoTurretType = _driverType;

			_gunnerTypeCargoTurret = getText(_cargoTurret/"gunnerType");
			if (_gunnerTypeCargoTurret != "") then {_cargoTurretType = _gunnerTypeCargoTurret;};

			_cargoTurretTypes pushBack _cargoTurretType;
		} forEach TEST_cargoTurrets;
	};

	if ((count TEST_loaderTurrets) > 0) then
	{
		_loaderTurret = TEST_loaderTurrets select 0;

		_gunnerTypeLoaderTurret = getText(_loaderTurret/"gunnerType");
		if (_gunnerTypeLoaderTurret != "") then {_loaderTurretType = _gunnerTypeLoaderTurret;};
	};

//diag_log ["_vehicle",_vehicle];
//diag_log ["TEST_commanderTurrets",count TEST_commanderTurrets,TEST_commanderTurrets];
//diag_log ["TEST_mainTurrets",count TEST_mainTurrets,TEST_mainTurrets];
//diag_log ["TEST_secondaryTurrets",count TEST_secondaryTurrets,TEST_secondaryTurrets];
//diag_log ["TEST_cargoTurrets",count TEST_cargoTurrets,TEST_cargoTurrets];
//diag_log ["TEST_loaderTurrets",count TEST_loaderTurrets,TEST_loaderTurrets];


	_totalCrew = 0;
	_hasDriver = getNumber(configFile/"CfgVehicles"/_vehicle/"hasDriver");
	if (_hasDriver > 0) then
	{
		_totalCrew = _totalCrew + 1;
	}
	else
	{
		if (_hasDriver == -1) then
		{
			TEST_DLV_found = true;
		};
	};
	_isWinter = getNumber(configFile/"CfgVehicles"/_vehicle/"LIB_isWinter");
	if (_isWinter > 0) then
	{
		TEST_Winter_found = true;
	};
	if (TEST_Winter_found && TEST_DLV_found) then {TEST_Winter_DLV_found = true;};
	{_totalCrew = _totalCrew + 1;} forEach TEST_commanderTurrets;
	{_totalCrew = _totalCrew + 1;} forEach TEST_mainTurrets;
	{_totalCrew = _totalCrew + 1;} forEach TEST_secondaryTurrets;
	{_totalCrew = _totalCrew + 1;} forEach TEST_cargoTurrets;
	{_totalCrew = _totalCrew + 1;} forEach TEST_loaderTurrets;
	_totalCrew = _totalCrew + _transportSoldier;

	_author = getText(configFile/"CfgVehicles"/_vehicle/"author");

//	_return = format ["%1	%2	%3	%4	%5	%6	%7	%8	%9	%10",_vehicle,_displayName,_driverType,_gunnerType,_weaponsGunner,_magazinesGunner,_commanderType,_weaponsCommander,_magazinesCommander,_transportSoldier] + endl;

	_tempText = "";
	if (TEST_exportToWiki) then
	{
		_tempText = _tempText + "|-" + endl;
		_tempText = _tempText + format ["| %1 || %2 || %3 || %4 || %5 || %6 || %7 || %8 || %9 || %10 || %11 || %12 || %13 || %14 || %15 || %16",_vehicle,_displayName,_driverType,_weaponsDriver,_magazinesDriver,_mainTurretType,_weaponsMainTurret,_magazinesMainTurret,_commanderType,_weaponsCommander,_magazinesCommander,_secondaryTurretTypes,_cargoTurretTypes,_loaderTurretType,_transportSoldier,_totalCrew] + endl;
	}
	else
	{
		_tempText =  format ["%1	%2	%3	%4	%5	%6	%7	%8	%9	%10	%11	%12	%13	%14	%15	%16",_vehicle,_displayName,_driverType,_weaponsDriver,_magazinesDriver,_mainTurretType,_weaponsMainTurret,_magazinesMainTurret,_commanderType,_weaponsCommander,_magazinesCommander,_secondaryTurretTypes,_cargoTurretTypes,_loaderTurretType,_transportSoldier,_totalCrew] + endl;
	};
	_return =_tempText;

	_return
};

_vehiclesFound = [];

{
	_vehicleSets = _x;

	_type = _vehicleSets select 0;
	_filter = _vehicleSets select 1;


	_text = "";
	if (TEST_exportToWiki) then
	{
		_text = _text + endl;
		_text = _text + format ["=== %1 ===",_type] + endl + endl;
		_text = _text + '{| class="wikitable"' + endl;
		_text = _text + _header;
	}
	else
	{
		_text = _type + endl;
	};

	TEST_Winter_newLineSet = false;
	TEST_DLV_newLineSet = false;
	TEST_Winter_DLV_newLineSet = false;

	{
		_vehicle = _x;

		if ((_vehicle isKindOf _filter) && (!(_vehicle in _vehiclesFound))) then
		{
			if (_vehicle != "-") then
			{
				TEST_Winter_found = false;
				TEST_DLV_found = false;
				TEST_Winter_DLV_found = false;

				_vehicleText = [_vehicle] call _fnc_VehiclesOverview;

				switch (true) do
				{
					case (TEST_Winter_DLV_found && (!(TEST_Winter_DLV_newLineSet))):
					{
						if (TEST_exportToWiki) then
						{
							_text = _text + "|-" + endl;
						}
						else
						{
							_text = _text + endl;
						};
						TEST_Winter_DLV_newLineSet = true;
					};

					case (TEST_DLV_found && (!(TEST_DLV_newLineSet))):
					{
						if (TEST_exportToWiki) then
						{
							_text = _text + "|-" + endl;
						}
						else
						{
							_text = _text + endl;
						};
						TEST_DLV_newLineSet = true;
					};

					case (TEST_Winter_found && (!(TEST_Winter_newLineSet))):
					{
						if (TEST_exportToWiki) then
						{
							_text = _text + "|-" + endl;
						}
						else
						{
							_text = _text + endl;
						};
						TEST_Winter_newLineSet = true;
					};
				};

				_text = _text + _vehicleText;

				_vehiclesFound pushBack _vehicle;
			};
		};

	} forEach _vehicleClasses;

	if (TEST_exportToWiki) then
	{
		_text = _text + "|}" + endl;
	}
	else
	{
		_text = _text + endl + endl + endl;
	};

	_export = _export + _text;
} forEach
[
	["Cars","LIB_Car_base"],
	["Trucks","LIB_Truck_base"],
	["APCs","LIB_WheeledTracked_APC_base"],
	["Tanks","LIB_Tank_base"],
	["Planes","LIB_Plane_base"],
	["Ships","LIB_Boat_base"],
	["Machineguns","LIB_StaticMGWeapon_base"],
	["Antitank guns","LIB_StaticCannon_base"],
	["AntiAir guns","LIB_StaticCanon_base"],
	["Mortars","LIB_StaticMortar_base"]
];

_export = _export + endl + endl;

//# vehicle weapons

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Vehicles weapons ==" + endl + endl;
}
else
{
	_tempText = "// Vehicles weapons" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Weapons !! DisplayName !! Magazines" + endl;
}
else
{
	_tempText = _tempText + "Weapons	DisplayName	Magazines" + endl + endl;
};
_export = _export + _tempText;

//class - displayName - magazines[] # image - author #
_fnc_VehiclesWeaponsOverview =
{
	params ["_type","_vehicleWeapons"];

	_text = "";
	if (TEST_exportToWiki) then
	{
		_text = _text + endl;
		_text = _text + format ["=== %1 ===",_type] + endl + endl;
		_text = _text + '{| class="wikitable"' + endl;
		_text = _text + _header;
	}
	else
	{
		_text = _type + endl;
	};

	{
		_vehicleWeapon = _x;

		if (_vehicleWeapon != "-") then
		{
			_displayName = getText(configFile/"CfgWeapons"/_vehicleWeapon/"displayName");
			_magazines = getArray(configFile/"CfgWeapons"/_vehicleWeapon/"magazines");

			_tempText = "";
			if (TEST_exportToWiki) then
			{
				_tempText = _tempText + "|-" + endl;
				_tempText = _tempText + format ["| %1 || %2 || %3",_vehicleWeapon,_displayName,_magazines] + endl;
			}
			else
			{
				_tempText = format ["%1	%2	%3",_vehicleWeapon,_displayName,_magazines] + endl;
			};
			_text = _text + _tempText;
		};
	} forEach _vehicleWeapons;

	_return = "";
	if (TEST_exportToWiki) then
	{
		_return = _return + _text;
		_return = _return + "|}" + endl;
	}
	else
	{
		_return = _text + endl + endl;
	};

	_return
};

_vehicleWeaponsText = "";
{
	_vehicleWeaponSet = _x;

	_type = _vehicleWeaponSet select 0;
	_filter = _vehicleWeaponSet select 1;

	_vehicleWeapons = [];

	{
		_vehicleWeapon = _x;

		if (_vehicleWeapon isKindOf [_filter,configFile >> "CfgWeapons"]) then
		{
			_vehicleWeapons pushBackUnique _vehicleWeapon;
		};
	} forEach _factionVehicleWeapons;

	_vehicleWeaponText = [_type,_vehicleWeapons] call _fnc_VehiclesWeaponsOverview;
	_vehicleWeaponsText = _vehicleWeaponsText + _vehicleWeaponText;

} forEach
[
	["Static machineguns","LIB_MLMG_base"],
	["Tank machineguns","LIB_TankMGun_base"],
	["Plane machineguns","LIB_PlaneMGun_base"],
	["Plane cannons","LIB_PlaneCannon_base"],
	["Plane bombs","LIB_Bomb_Mount_base"],
	["Rockets","RocketPods"],
	["Mortar cannons","LIB_MortarCannon_base"],
	["AntiAir cannons","LIB_AntiAirCannon_base"],
	["Tank cannons","LIB_TankCannon_base"],
	["Static gun cannons","LIB_StaticGunCannon_base"]
];

_export = _export + _vehicleWeaponsText;

copyToClipboard _export;
