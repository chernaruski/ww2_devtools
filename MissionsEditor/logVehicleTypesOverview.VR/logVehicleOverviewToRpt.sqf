//private["_xxx"];

_vehicles = _this select 0;
_faction = _this select 1;

_infantry = [];
_motorcycles = [];
_unarmedCars = [];
_armedCars = [];
_tanks = [];
_unarmedWheeledAPCs = [];
_armedWheeledAPCs = [];
_unarmedHelicopters = [];
_armedHelicopters = [];
_planes = [];
_supportVehicles = [];


{
	_vehicleClass = _x;
	_type = [_vehicleClass] call TAG_fnc_determineVehicleType;
	switch (_type) do
	{
		case "INFANTRY":		{_infantry pushBackUnique (_vehicleClass);};
		case "SUPPORTVEHICLE":		{_supportVehicles pushBackUnique (_vehicleClass);};
		case "ARMEDCARS":		{_armedcars pushBackUnique (_vehicleClass);};
		case "ARMEDHELICOPTERS":	{_armedhelicopters pushBackUnique (_vehicleClass);};
		case "ARMEDWHEELEDAPCS":	{_armedwheeledapcs pushBackUnique (_vehicleClass);};
		case "UNARMEDCARS":		{_unarmedcars pushBackUnique (_vehicleClass);};
		case "UNARMEDHELICOPTERS":	{_unarmedhelicopters pushBackUnique (_vehicleClass);};
		case "UNARMEDWHEELEDAPCS":	{_unarmedwheeledapcs pushBackUnique (_vehicleClass);};
		case "MOTORCYCLE":		{_motorcycles pushBackUnique (_vehicleClass);};
		case "PLANE":			{_planes pushBackUnique (_vehicleClass);};
		case "TANK":			{_tanks pushBackUnique (_vehicleClass);};
		default
		{
//			diag_log ["NotIn",_vehicleClass];
		};
	};
} forEach _vehicles;

TAG_Grenadier = [];
TAG_Assault = [];
TAG_MachineGunner = [];
TAG_HeavyGunner = [];
TAG_AT_Gunner = [];
TAG_AT_Specialist = [];
TAG_Engineer = [];
TAG_AmmoBearer = [];
TAG_HeavySniper = [];
TAG_Saboteur = [];
TAG_Officer = [];
TAG_TankCrew = [];
TAG_Pilot = [];

TAG_export = TAG_export + "infantry[] =" + endl;
TAG_export = TAG_export + "{" + endl;
{
	_infantryClass = _x;

	_displayName = getText(configFile/"cfgVehicles"/_infantryClass/"displayName");
	_weapons = getArray(configFile/"cfgVehicles"/_infantryClass/"weapons");
	_magazines = getArray(configFile/"cfgVehicles"/_infantryClass/"magazines");

	_weapons = _weapons - ["Throw"] - ["Put"] - ["csa38_Put"];

	_displayNameLowercase = toLower _displayName;
	_infantryClassLowercase = toLower _infantryClass;

	switch (true) do
	{
		case ((_displayNameLowercase find "grenadier") != -1): {TAG_Grenadier pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "assault") != -1): {TAG_Assault pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "smgunner") != -1): {TAG_MachineGunner pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "submachine") != -1): {TAG_MachineGunner pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "_mgunner") != -1): {TAG_HeavyGunner pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "machinegunner") != -1): {TAG_HeavyGunner pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "machine-gunner") != -1): {TAG_HeavyGunner pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "machine gunner") != -1): {TAG_HeavyGunner pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "heavy rifleman") != -1): {TAG_HeavyGunner pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "at_asst") != -1): {TAG_AT_Gunner pushBackUnique _infantryClass;};

		case ((_infantryClassLowercase find "_at ") != -1): {TAG_AT_Specialist pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "at ") != -1): {TAG_AT_Specialist pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "eng") != -1): {TAG_Engineer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "sapper") != -1): {TAG_Engineer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "pioneer") != -1): {TAG_Engineer pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "radio") != -1): {TAG_AmmoBearer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "medic") != -1): {TAG_AmmoBearer pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "sniper") != -1): {TAG_HeavySniper pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "sab") != -1): {TAG_Saboteur pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "off") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "team") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "leader") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "general") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "colonel") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "corporal") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "sergeant") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "lieutenant") != -1): {TAG_Officer pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "captain") != -1): {TAG_Officer pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "crew") != -1): {TAG_TankCrew pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "driver") != -1): {TAG_TankCrew pushBackUnique _infantryClass;};
		case ((_displayNameLowercase find "tank") != -1): {TAG_TankCrew pushBackUnique _infantryClass;};

		case ((_displayNameLowercase find "pilot") != -1): {TAG_Pilot pushBackUnique _infantryClass;};
	};

	TAG_export = TAG_export + format ['	%1	"%2"	%3	%4',_infantryClass,_displayName,_weapons,_magazines] + endl;
} forEach _infantry;
TAG_export = TAG_export + "};" + endl;

TAG_export = TAG_export + endl;

TAG_export = TAG_export + format ["		Grenadier = %1;",TAG_Grenadier] + endl;
TAG_export = TAG_export + format ["		Assault = %1;",TAG_Assault] + endl;
TAG_export = TAG_export + format ["		MachineGunner = %1;",TAG_MachineGunner] + endl;
TAG_export = TAG_export + format ["		HeavyGunner = %1;",TAG_HeavyGunner] + endl;
TAG_export = TAG_export + format ["		AT_Gunner = %1;",TAG_AT_Gunner] + endl;
TAG_export = TAG_export + format ["		AT_Specialist = %1;",TAG_AT_Specialist] + endl;
TAG_export = TAG_export + format ["		Engineer = %1;",TAG_Engineer] + endl;
TAG_export = TAG_export + format ["		AmmoBearer = %1;",TAG_AmmoBearer] + endl;
TAG_export = TAG_export + format ["		HeavySniper = %1;",TAG_HeavySniper] + endl;
TAG_export = TAG_export + format ["		Saboteur = %1;",TAG_Saboteur] + endl;
TAG_export = TAG_export + format ["		Officer = %1;",TAG_Officer] + endl;
TAG_export = TAG_export + format ["		TankCrew = %1;",TAG_TankCrew] + endl;
TAG_export = TAG_export + format ["		Pilot = %1;",TAG_Pilot] + endl;

TAG_export = TAG_export + endl;

TAG_export = TAG_export + format ["		motorcycles[] = {%1};",[_motorcycles] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		unarmedCars[] = {%1};",[_unarmedcars] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		armedCars[] = {%1};",[_armedcars] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		mediumTanks[] = {%1};",[_tanks] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		heavyTanks[] = {%1};",""] + endl;
TAG_export = TAG_export + format ["		selfPropelledGuns[] = {%1};",""] + endl;
TAG_export = TAG_export + format ["		unarmedWheeledAPCs[] = {%1};",[_unarmedwheeledapcs] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		armedWheeledAPCs[] = {%1};",[_armedwheeledapcs] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		unarmedHelicopters[] = {%1};",[_unarmedhelicopters] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		armedHelicopters[] = {%1};",[_armedhelicopters] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		fighterPlanes[] = {%1};",[_planes] call TAG_fnc_concatArrayAsString] + endl;
TAG_export = TAG_export + format ["		bomberPlanes[] = {%1};",""] + endl;
TAG_export = TAG_export + format ["		antiTankGuns[] = {%1};",""] + endl;
TAG_export = TAG_export + format ["		supportVehicles[] = {%1};",[_supportVehicles] call TAG_fnc_concatArrayAsString] + endl;

TAG_export = TAG_export + endl;
TAG_export = TAG_export + endl;
TAG_export = TAG_export + endl;
