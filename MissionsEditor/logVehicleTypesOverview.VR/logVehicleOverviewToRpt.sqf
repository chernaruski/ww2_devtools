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
		case "INFANTRY":		{_infantry set [count _infantry,_vehicleClass];};
		case "SUPPORTVEHICLE":		{_supportVehicles set [count _supportVehicles,_vehicleClass];};
		case "ARMEDCARS":		{_armedcars set [count _armedcars,_vehicleClass];};
		case "ARMEDHELICOPTERS":	{_armedhelicopters set [count _armedhelicopters,_vehicleClass];};
		case "ARMEDWHEELEDAPCS":	{_armedwheeledapcs set [count _armedwheeledapcs,_vehicleClass];};
		case "UNARMEDCARS":		{_unarmedcars set [count _unarmedcars,_vehicleClass];};
		case "UNARMEDHELICOPTERS":	{_unarmedhelicopters set [count _unarmedhelicopters,_vehicleClass];};
		case "UNARMEDWHEELEDAPCS":	{_unarmedwheeledapcs set [count _unarmedwheeledapcs,_vehicleClass];};
		case "MOTORCYCLE":		{_motorcycles set [count _motorcycles,_vehicleClass];};
		case "PLANE":			{_planes set [count _planes,_vehicleClass];};
		case "TANK":			{_tanks set [count _tanks,_vehicleClass];};
		default
		{
//			diag_log ["NotIn",_vehicleClass];
		};
	};
} forEach _vehicles;

diag_log format ["		infantry[] = {%1};",[_infantry] call TAG_fnc_concatArrayAsString];
diag_log format ["		motorcycles[] = {%1};",[_motorcycles] call TAG_fnc_concatArrayAsString];
diag_log format ["		unarmedCars[] = {%1};",[_unarmedcars] call TAG_fnc_concatArrayAsString];
diag_log format ["		armedCars[] = {%1};",[_armedcars] call TAG_fnc_concatArrayAsString];
diag_log format ["		mediumTanks[] = {%1};",[_tanks] call TAG_fnc_concatArrayAsString];
diag_log format ["		heavyTanks[] = {%1};",""];
diag_log format ["		selfPropelledGuns[] = {%1};",""];
diag_log format ["		unarmedWheeledAPCs[] = {%1};",[_unarmedwheeledapcs] call TAG_fnc_concatArrayAsString];
diag_log format ["		armedWheeledAPCs[] = {%1};",[_armedwheeledapcs] call TAG_fnc_concatArrayAsString];
diag_log format ["		unarmedHelicopters[] = {%1};",[_unarmedhelicopters] call TAG_fnc_concatArrayAsString];
diag_log format ["		armedHelicopters[] = {%1};",[_armedhelicopters] call TAG_fnc_concatArrayAsString];
diag_log format ["		fighterPlanes[] = {%1};",[_planes] call TAG_fnc_concatArrayAsString];
diag_log format ["		bomberPlanes[] = {%1};",""];
diag_log format ["		antiTankGuns[] = {%1};",""];
diag_log format ["		supportVehicles[] = {%1};",[_supportVehicles] call TAG_fnc_concatArrayAsString];
