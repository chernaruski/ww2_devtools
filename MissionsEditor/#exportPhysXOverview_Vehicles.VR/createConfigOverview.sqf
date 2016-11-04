/* ----------------------------------------------------------------------------
Description:
	TODO

Author:
	(c) kju 2011

	Functions by Denis Usenko, DenVdmj@gmail.com

---------------------------------------------------------------------------- */

_filterBaseClasses = ["Wheeled_APC_F","Truck_F","Car_F","APC_Tracked_01_base_F","Tank_F"];
_backlistedClasses = ["lib_armored_target_dummy"];

_baseClassParametersToExport = ["differentialType","frontRearSplit","frontBias","rearBias","centreBias","gearBox","longStiff","latStiffX","latStiffY","wheelMask","clutchStrength","enginePower","maxOmega","peakTorque","torqueCurve","changeGearMinEffectivity","idleRPM","redRPM","thrustDelay","switchTime","latency","engineLosses","transmissionLosses","damperSize","damperForce","damperDamping","dampersBumpCoef","dampingRateFullThrottle","dampingRateZeroThrottleClutchEngaged","dampingRateZeroThrottleClutchDisengaged","normalSpeedForwardCoef","maxSpeed","tracksSpeed","limitedSpeedCoef","overSpeedBrakeCoef","slowSpeedForwardCoef","engineShiftY","brakeDistance","brakeTorque","engineBrakeCoef","brakeIdleSpeed","numberPhysicalWheels","wheelCircumference","terrainCoef","turnCoef","fuelCapacity","fuelConsumptionRate","tankTurnForce","antiRollbarForceCoef","antiRollbarForceLimit","antiRollbarSpeedMin","antiRollbarSpeedMax","steerAheadSimul","steerAheadPlan","predictTurnPlan","predictTurnSimul","precision","epeImpulseDamageCoef","maxFordingDepth","waterResistance","waterDamageEngine","waterLeakiness","waterPPInVehicle","waterSpeedFactor","waterResistanceCoef","waterLinearDampingCoef","waterAngularDampingCoef","canFloat"];
_complexGearboxParametersToExport = ["GearboxRatios","TransmissionRatios","gearBoxMode","moveOffGear","driveString","neutralString","reverseString","transmissionDelay","gearUpMaxCoef","gearDownMaxCoef","gearUpMinCoef","gearDownMinCoef"];
_playerSteeringCoefficientsParametersToExport = ["turnIncreaseConst","turnIncreaseLinear","turnIncreaseTime","turnDecreaseConst","turnDecreaseLinear","turnDecreaseTime","maxTurnHundred"];
_wheelsParametersToExport = ["boneName","center","boundary","damping","steering","side","width","weight","mass","MOI","latStiffX","latStiffY","longitudinalStiffnessPerUnitGravity","maxBrakeTorque","sprungMass","springStrength","springDamperRate","dampingRate","dampingRateInAir","dampingRateDamaged","dampingRateDestroyed","maxDroop","mMaxDroop","maxCompression","frictionVsSlipGraph","maxHandBrakeTorque","suspTravelDirection","suspForceAppPointOffset","tireForceAppPointOffset"];

///////////////////////////////////////////////////////////////////////////////

#define push(a,v)		(a) pushBack (v)
#define arg(x)			(_this select (x))
#define log2(number)		((log number)/.3010299956639812)

private["_rootClass","_return","_result"];

_return = "";

#define newline (toString [13,10])

// functions
private["_traverseArray","_joinString","_escapeString"];

_traverseArray =
{
	if ((typeName _this) == "array") exitWith
	{
		private "_array";
		_array = [];

		for "_i" from (0) to ((count _this) - 1) do
		{
			push(_array,(_this select _i) call _traverseArray);
		};

		"{" + ([_array,","] call _joinString) + "}";
	};

	if ((typeName _this) == "string") exitWith
	{
		_this call _escapeString;
	};
	str _this;
};

_joinString =
{
	// Fast string concatenation
	private ["_list","_char","_size","_subsize","_oversize","_j"];
	_list = arg(0);
	_char = arg(1);

	if (count _list < 1) exitWith {""};

	for "_z" from 1 to ceil (log2 (count _list)) do
	{
		_size = (count _list) / 2;
		_subsize = floor _size;
		_oversize = ceil _size;
		_j = 0;

		for "_i" from (0) to (_subsize - 1) do
		{
			_list set [_i,(_list select _j) + _char + (_list select (_j + 1))];
			_j = _j + 2;
		};

		if (_subsize != _oversize) then// to add a tail
		{
			_list set [_j / 2,_list select _j];
		};
		_list resize _oversize;
	};
	_list select 0;
};

_escapeString =
{
	private ["_source","_target","_start","_charCode"];
	_source = toArray _this;
	_start = _source find 34;

	if (_start > -1) then
	{
		_target = +_source;
		_target resize _start;

		for "_i" from (_start) to ((count _source) - 1) do
		{
			_charCode = _source select _i;
			push(_target,_charCode);
			if (_charCode == 34) then
			{
				push(_target,_charCode);
			};
		};

		str toString _target;
	}
	else
	{
		str _this;
	};
};


_logParameterValue =
{
	private _parameter = _this select 0;
	private _class = _this select 1;
//diag_log["_parameter",_parameter,_class];

	if ((typeName _parameter) != "STRING") exitWith {};

	private _paramterConfig = (_class/_parameter);

	private _dataType = switch (true) do
	{
		case (isText _paramterConfig): {"text"};
		case (isNumber _paramterConfig): {"number"};
		case (isArray _paramterConfig): {"array"};
		default {"null"};
	};

	private _configValue = switch (_dataType) do
	{
		case "text":
		{
			getText _paramterConfig
		};
		case "number":
		{
			str (getNumber _paramterConfig)
		};
		case "array":
		{
			(getArray _paramterConfig) call _traverseArray
		};
		default {"?"};
	};
	TEST_TextCurrentRow = TEST_TextCurrentRow + str _configValue + "	";
	private _className = configName _class;
//	diag_log[_className,_parameter,_dataType,_configValue];
//	_result pushBack (_className + "	" + _configValue));
};

// start checking config
_result = [];

TEST_HeaderText = "XXX	";
TEST_RowsText = [];

TEST_MaxWheelClasses = 0;
TEST_RowsParameters = [];
TEST_StoredModels = [];

private _allVehicles = '(configName _x) isKindOf "AllVehicles"' configClasses (configFile/"cfgVehicles");
private _vehicles = [];

{
	private _filter = _x;
	{
		private _vehicle = configName _x;
		if (_vehicle isKindOf _filter) then
		{
			if (!(_vehicle in _vehicles)) then
			{
				_vehicles pushBackUnique _vehicle;
			};
		};
	} forEach _allVehicles;
} forEach _filterBaseClasses;

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _baseClassParametersToExport;

TEST_HeaderText = TEST_HeaderText + "complexGearbox" + "	";

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _complexGearboxParametersToExport;

TEST_HeaderText = TEST_HeaderText + "PlayerSteeringCoefficients" + "	";

{
	private _parameter = _x;
	TEST_HeaderText = TEST_HeaderText + _parameter + "	";
} forEach _playerSteeringCoefficientsParametersToExport;

TEST_HeaderText = TEST_HeaderText + "Wheels" + "	";

_rootClass = "cfgVehicles";

{
	private _class = (configFile/_rootClass/_x);
//	private _class = _x;

	if (isClass _class) then
	{
		private _className = configName _class;

		if (!((toLower _className) in _backlistedClasses)) then
		{
			//base
			TEST_TextCurrentRow = "";
			{
				private _parameter = _x;
				[_parameter,_class] call _logParameterValue;
			} forEach _baseClassParametersToExport;

			//complexGearbox
			TEST_TextCurrentRow = TEST_TextCurrentRow + "	";
			private _complexGearboxClass = _class/"complexGearbox";
			if (isClass _complexGearboxClass) then
			{
				{
					private _parameter = _x;
					[_parameter,_complexGearboxClass] call _logParameterValue;
				} forEach _complexGearboxParametersToExport;
			}
			else
			{
				{
					TEST_TextCurrentRow = TEST_TextCurrentRow + " - " + "	";
				} forEach _complexGearboxParametersToExport;
			};

			//PlayerSteeringCoefficients
			TEST_TextCurrentRow = TEST_TextCurrentRow + "	";
			private _playerSteeringCoefficientsClass = _class/"PlayerSteeringCoefficients";
			if (isClass _playerSteeringCoefficientsClass) then
			{
				{
					private _parameter = _x;
					[_parameter,_playerSteeringCoefficientsClass] call _logParameterValue;
				} forEach _playerSteeringCoefficientsParametersToExport;
			}
			else
			{
				{
					TEST_TextCurrentRow = TEST_TextCurrentRow + " - " + "	";
				} forEach _playerSteeringCoefficientsParametersToExport;
			};

			//PlayerSteeringCoefficients
			TEST_TextCurrentRow = TEST_TextCurrentRow + "#" + "	";
			private _wheelsClass = _class/"Wheels";
			if (isClass _wheelsClass) then
			{
				_numberOfWheelsClass = count _wheelsClass;
				for "_i" from (0) to (_numberOfWheelsClass - 1) do
				{
					private _wheelsSubClass = _wheelsClass select _i;
					TEST_TextCurrentRow = TEST_TextCurrentRow + (configName _wheelsSubClass) + "	";

					{
						private _parameter = _x;
						[_parameter,_wheelsSubClass] call _logParameterValue;
					} forEach _wheelsParametersToExport;
				};
				if (_numberOfWheelsClass > TEST_MaxWheelClasses) then {TEST_MaxWheelClasses = _numberOfWheelsClass;};
			};

			private _add = true;
			private _vehicleModel = getText (configFile/"CfgVehicles"/_className/"model");
//diag_log["_className",_className,_vehicleModel];
//diag_log["_vehicleModel",_vehicleModel in TEST_StoredModels];
			if (_vehicleModel in TEST_StoredModels) then
			{
				private _index = TEST_StoredModels find _vehicleModel;
				private _row = TEST_RowsParameters select _index;
//diag_log["_index",_index];
//diag_log["_row",_row];
//diag_log["TEST_TextCurrentRow",TEST_TextCurrentRow];
//diag_log["isEqualTo",_row isEqualTo TEST_TextCurrentRow];
				if (_row isEqualTo TEST_TextCurrentRow) then
				{
					_add = false;
				};
			};

			if (_add) then
			{
				TEST_RowsParameters pushBack TEST_TextCurrentRow;
				TEST_TextCurrentRow = _className + "	" + TEST_TextCurrentRow;
				TEST_RowsText pushBack TEST_TextCurrentRow;
				TEST_StoredModels pushBack _vehicleModel;
			};
		};
	};
} forEach _vehicles;
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

for "_i" from 1 to TEST_MaxWheelClasses do
{
	TEST_HeaderText = TEST_HeaderText + "#" + "	";

	{
		private _parameter = _x;
		TEST_HeaderText = TEST_HeaderText + _parameter + "	";
	} forEach _wheelsParametersToExport;
};

_return = TEST_HeaderText + newline;

{
	_return = _return + _x + newline;
} forEach TEST_RowsText;

copyToClipboard _return;