private["_vehicleClass","_vehicleType"];

_vehicleClass = _this select 0;

_vehicleType = switch (true) do
{
	case (_vehicleClass isKindOf "Plane"):
	{
		"PLANE"
	};
	case (_vehicleClass isKindOf "Helicopter"):
	{
		private["_numberOfPilotWeapons","_numberOfGunnerWeapons"];
		_numberOfPilotWeapons = count (getArray (configFile/"CfgVehicles"/_vehicleClass/"weapons"));
		_numberOfGunnerWeapons = count (getArray (configFile/"CfgVehicles"/_vehicleClass/"Turrets"/"MainTurret"/"weapons"));
		if ((_numberOfPilotWeapons > 1) || (_numberOfGunnerWeapons > 1)) then
		{
			"ARMEDHELICOPTERS"
		}
		else
		{
			"UNARMEDHELICOPTERS"
		};
	};
	case (_vehicleClass isKindOf "Wheeled_APC"):
	{
		private["_numberOfGunnerWeapons"];
		_numberOfGunnerWeapons = count (getArray (configFile/"CfgVehicles"/_vehicleClass/"Turrets"/"MainTurret"/"weapons"));
		if (_numberOfGunnerWeapons > 0) then
		{
			"ARMEDWHEELEDAPCS"
		}
		else
		{
			"UNARMEDWHEELEDAPCS"
		};
	};
	case (_vehicleClass isKindOf "Tank"):
	{
		"TANK"
	};
	case (_vehicleClass isKindOf "Car"):
	{
		private["_vehicleClassType"];
		_vehicleClassType = toLower (getText (configFile/"CfgVehicles"/_vehicleClass/"vehicleClass"));

		if (_vehicleClassType == "support") then
		{
			"SUPPORTVEHICLE"
		}
		else
		{
			private["_numberOfGunnerWeapons"];
			_numberOfGunnerWeapons = count (getArray (configFile/"CfgVehicles"/_vehicleClass/"Turrets"/"MainTurret"/"weapons"));

			if (_numberOfGunnerWeapons > 0) then
			{
				"ARMEDCARS"
			}
			else
			{
				"UNARMEDCARS"
			};
		};
	};
	case (_vehicleClass isKindOf "Motorcycle"):
	{
		"MOTORCYCLE"
	};
	case (_vehicleClass isKindOf "CAManBase"):
	{
		"INFANTRY"
	};
	default
	{
		"OTHER"
	};
};

_vehicleType