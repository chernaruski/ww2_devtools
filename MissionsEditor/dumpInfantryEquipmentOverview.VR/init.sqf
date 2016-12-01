startLoadingScreen ["WAIT",""];
MyVehicles = ["inf"] call compile preprocessFileLineNumbers "createVehicleList.sqf";

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = (getMarkerPos "target") select 0;
	_yCoord = (getMarkerPos "target") select 1;

	{
//		_debug = true;
		diag_log["###"];
		diag_log["###"];
		diag_log["###"];

		private["_assignedItemsUnit","_backpack","_backpackUnit","_itemsClass","_itemsUnit","_linkedItemsClass","_magazinesClass","_magazinesClassAllLower","_configTransportMagazines","_magazinesUnit","_magazinesAmmoFull","_magazinesUnitAllLower","_missingItems","_missingMagazines","_missingWeapons","_uniformClass","_uniformUnit","_unit","_unitClass","_weaponsClass","_weaponsClassAllLower","_weaponsUnit","_weaponsUnitAllLower"];
		_unitClass = _x;

		_weaponsClass = getArray (configFile/"CfgVehicles"/_unitClass/"weapons");
		_magazinesClass = getArray (configFile/"CfgVehicles"/_unitClass/"magazines");
		_itemsClass = getArray (configFile/"CfgVehicles"/_unitClass/"items");
		_linkedItemsClass = getArray (configFile/"CfgVehicles"/_unitClass/"linkedItems");
		_backpack = getText (configFile/"CfgVehicles"/_unitClass/"backpack");
		_uniformClass = getText (configFile/"CfgVehicles"/_unitClass/"uniformClass");

		_unit = (group player) createUnit [_unitClass,[_xCoord,_yCoord,0],[],0,"FORM"];
//		_unit = createVehicle [_unitClass,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];
		_unit setVariable ["BIS_enableRandomization",false];
//		sleep 0.1;


		_weaponsUnit = weapons _unit;

//		_magazinesUnit = magazines _unit + [currentMagazine _unit];
//		diag_log ["1",count _magazinesUnit,_magazinesUnit];

		_magazinesAmmoFull = magazinesAmmoFull _unit;
		_magazinesUnit = [];
		{
			_magazinesUnit pushBack (_x select 0);
		} forEach _magazinesAmmoFull;

//		diag_log ["2",count _magazinesAmmoFullUnit,_magazinesAmmoFullUnit];

		_itemsUnit = items _unit;

		_assignedItemsUnit = assignedItems _unit;
		_vestUnit = vest _unit;
		if (_vestUnit != "") then {_assignedItemsUnit pushBack _vestUnit;};
		_headgearUnit = headgear _unit;
		if (_headgearUnit != "") then {_assignedItemsUnit pushBack _headgearUnit;};
		if (isNil "_assignedItemsUnit") then {_assignedItemsUnit = [];};

		_backpackUnit = backpack _unit;//unitBackpack
		_uniformUnit = uniform _unit;


		_weaponsClassAllLower = [];
		{
			_weaponsClassAllLower pushBack (toLower _x);
		} forEach _weaponsClass;

		_weaponsClassAllLower = _weaponsClassAllLower - ["throw"] - ["put"];

		_weaponsUnitAllLower = [];
		{
			_weaponsUnitAllLower pushBack (toLower _x);

		} forEach _weaponsUnit;

		_itemsInBackpack = getItemCargo backpackContainer _unit;
		if ((count _itemsInBackpack) > 0) then
		{
			_j = 0;
			{
				for "_i" from 0 to (((_itemsInBackpack select 1) select _j) - 1) do
				{
					_weaponsUnitAllLower pushBack (toLower _x);
				};
				_j = _j + 1;
			} forEach (_itemsInBackpack select 0);
		};


		_magazinesClassAllLower = [];
		{
			_magazinesClassAllLower pushBack (toLower _x);
		} forEach _magazinesClass;


		_configTransportMagazines = configFile/"CfgVehicles"/_backpack/"TransportMagazines";
		_transportMagazines = [];
		for "_i" from 0 to ((count _configTransportMagazines) - 1) do
		{
			private["_transportMagazinesClass"];
			_transportMagazinesClass = _configTransportMagazines select _i;
			if (isClass _transportMagazinesClass) then
			{
				private["_magazineClassInBackpack","_countCurrentMagazineInBackpack"];
				_magazineClassInBackpack = getText (_transportMagazinesClass/"magazine");
				_countCurrentMagazineInBackpack = getNumber (_transportMagazinesClass/"count");
				for "_i" from 0 to (_countCurrentMagazineInBackpack - 1) do
				{
					_magazinesClassAllLower pushBack (toLower _magazineClassInBackpack);
					_transportMagazines pushBack (toLower _magazineClassInBackpack);
				};
			};
		};

		// handle LD
		if ("laserbatteries" in _magazinesClassAllLower) then
		{
			_magazinesTypeAvailableInWeaponsAllLower = [];
			{
				_magazines = getArray (configFile/"CfgWeapons"/_x/"magazines");
				{
					_magazinesTypeAvailableInWeaponsAllLower pushBack (toLower _x);
				} forEach _magazines;
			} forEach _weaponsClassAllLower;

			if ("laserbatteries" in _magazinesTypeAvailableInWeaponsAllLower) then
			{
				_index = _weaponsClassAllLower find "laserbatteries";
				if (_index != -1) then
				{
					_weaponsClassAllLower set [_index,"found"];
					_weaponsClassAllLower = _weaponsClassAllLower - ["found"];
				};
			};
		};

		_configTransportItems = configFile/"CfgVehicles"/_backpack/"TransportItems";
		_transportItems = [];
		for "_i" from 0 to ((count _configTransportItems) - 1) do
		{
			private["_transportItemsClass"];
			_transportItemsClass = _configTransportItems select _i;
			if (isClass _transportItemsClass) then
			{
				private["_itemClassInBackpack","_countCurrentItemInBackpack"];
				_itemClassInBackpack = getText (_transportItemsClass/"name");
				_countCurrentItemInBackpack = getNumber (_transportItemsClass/"count");
				for "_i" from 0 to (_countCurrentItemInBackpack - 1) do
				{
					_weaponsClassAllLower pushBack (toLower _itemClassInBackpack);
					_transportItems pushBack (toLower _itemClassInBackpack);
				};
			};
		};

		_magazinesUnitAllLower = [];
		{
			_magazinesUnitAllLower pushBack (toLower _x);
		} forEach _magazinesUnit;

		_weaponsUnitAllLower = _weaponsUnitAllLower call BIS_fnc_sortAlphabetically;
		_weaponsClassAllLower = _weaponsClassAllLower call BIS_fnc_sortAlphabetically;

		_magazinesUnitAllLower = _magazinesUnitAllLower call BIS_fnc_sortAlphabetically;
		_magazinesClassAllLower = _magazinesClassAllLower call BIS_fnc_sortAlphabetically;

		_linkedItemsClass = _linkedItemsClass call BIS_fnc_sortAlphabetically;
		_assignedItemsUnit = _assignedItemsUnit call BIS_fnc_sortAlphabetically;


		// faulty count
		_weaponsCompareArray =+ _weaponsClassAllLower;
		{
			_weapon = _x;
			_index = _weaponsCompareArray find _weapon;
			if (_index != -1) then
			{
				_weaponsCompareArray set [_index,"found"];
			};
		} forEach _weaponsUnitAllLower;

		_magazinesCompareArray =+ _magazinesClassAllLower;
		{
			_magazines = _x;
			_index = _magazinesCompareArray find _magazines;
			if (_index != -1) then
			{
				_magazinesCompareArray set [_index,"found"];
			};
		} forEach _magazinesUnitAllLower;

		_missingWeapons = _weaponsCompareArray - ["found"] - ["throw"] - ["put"];
		_missingMagazines = _magazinesCompareArray - ["found"];
		_missingItems = _itemsClass + _linkedItemsClass - _itemsUnit - _assignedItemsUnit;


		_actualMass = 0;
		_magazinesAmmo = magazinesAmmo _unit;
		{
			_magazinesMass = getNumber (configFile/"CfgMagazines"/(_x select 0)/"mass");
			_actualMass = _actualMass + _magazinesMass;
		} forEach _magazinesAmmo;

		{
			_itemInfoMass = getNumber (configFile/"CfgWeapons"/_x/"ItemInfo"/"mass");
			if (!(isNil "_itemInfoMass")) then {_actualMass = _actualMass + _itemInfoMass;};
			_weaponSlotsInfoMass = getNumber (configFile/"CfgWeapons"/_x/"WeaponSlotsInfo"/"mass");
			if (!(isNil "_weaponSlotsInfoMass")) then {_actualMass = _actualMass + _weaponSlotsInfoMass;};
		} forEach _itemsUnit;
//diag_log["_itemsUnit",_itemsUnit];
//		{
//			_itemInfoMass = getNumber (configFile/"CfgWeapons"/_x/"ItemInfo"/"mass");
//			if (!(isNil "_itemInfoMass")) then {_actualMass = _actualMass + _itemInfoMass;};
//			_weaponSlotsInfoMass = getNumber (configFile/"CfgWeapons"/_x/"WeaponSlotsInfo"/"mass");
//			if (!(isNil "_weaponSlotsInfoMass")) then {_actualMass = _actualMass + _weaponSlotsInfoMass;};
//		} forEach _assignedItemsUnit;


		_desiredMass = 0;
		{
if (!(isNil "_debug")) then {diag_log["_desiredMass1",_x,_desiredMass];};
			_magazinesMass = getNumber (configFile/"CfgMagazines"/_x/"mass");
if (!(isNil "_debug")) then {diag_log["_magazinesMass1",_x,_magazinesMass];};
			_desiredMass = _desiredMass + _magazinesMass;
		} forEach _magazinesClassAllLower;
if (!(isNil "_debug")) then {diag_log["_desiredMass2",_x,_desiredMass];};

		{
			_itemInfoMass = getNumber (configFile/"CfgWeapons"/_x/"ItemInfo"/"mass");
			if (!(isNil "_itemInfoMass")) then {_desiredMass = _desiredMass + _itemInfoMass;};
			_weaponSlotsInfoMass = getNumber (configFile/"CfgWeapons"/_x/"WeaponSlotsInfo"/"mass");
			if (!(isNil "_weaponSlotsInfoMass")) then {_desiredMass = _desiredMass + _weaponSlotsInfoMass;};
if (!(isNil "_debug")) then {diag_log["_desiredMass3",_x,_desiredMass];};
		} forEach _itemsClass;


		// backpack contents
//		{
//			_magazinesMass = getNumber (configFile/"CfgMagazines"/_x/"mass");
//if (!(isNil "_debug")) then {diag_log["_magazinesMass2",_x,_magazinesMass];};
//			_desiredMass = _desiredMass + _magazinesMass;
//		} forEach _transportMagazines;

		{
			_itemInfoMass = getNumber (configFile/"CfgWeapons"/_x/"ItemInfo"/"mass");
			if (!(isNil "_itemInfoMass")) then {_desiredMass = _desiredMass + _itemInfoMass;};
			_weaponSlotsInfoMass = getNumber (configFile/"CfgWeapons"/_x/"WeaponSlotsInfo"/"mass");
			if (!(isNil "_weaponSlotsInfoMass")) then {_desiredMass = _desiredMass + _weaponSlotsInfoMass;};
if (!(isNil "_debug")) then {diag_log["_desiredMass4",_x,_desiredMass];};
		} forEach _transportItems;

		_primaryWeaponMagazines = primaryWeaponMagazine _unit;
		if ((count _primaryWeaponMagazines) > 0) then
		{
			{
				_magazinesMass = getNumber (configFile/"CfgMagazines"/_x/"mass");
if (!(isNil "_debug")) then {diag_log["remove primary mags",_x,_magazinesMass];};
				_desiredMass = _desiredMass - _magazinesMass;
			} forEach _primaryWeaponMagazines;
		};
		_secondaryWeaponMagazines = secondaryWeaponMagazine _unit;
		if ((count _secondaryWeaponMagazines) > 0) then
		{
			{
				_magazinesMass = getNumber (configFile/"CfgMagazines"/_x/"mass");
if (!(isNil "_debug")) then {diag_log["remove secondary mags",_x,_magazinesMass];};
				_desiredMass = _desiredMass - _magazinesMass;
			} forEach _secondaryWeaponMagazines;
		};
		_handgunMagazines = handgunMagazine _unit;
		if ((count _handgunMagazines) > 0) then
		{
			{
				_magazinesMass = getNumber (configFile/"CfgMagazines"/_x/"mass");
if (!(isNil "_debug")) then {diag_log["remove handgun mags",_x,_magazinesMass];};
				_desiredMass = _desiredMass - _magazinesMass;
			} forEach _handgunMagazines;
		};


		_capacityMass = 0;
		_containers = [];
		if (!(isNil "_uniformUnit")) then
		{
			_containerClass = getText (configFile/"CfgWeapons"/_uniformUnit/"ItemInfo"/"containerClass");
			_maximumLoad = getNumber (configFile/"CfgVehicles"/_containerClass/"maximumLoad");
			_capacityMass = _capacityMass + _maximumLoad;
			_containers pushBack [_uniformUnit,_maximumLoad];
		};
		if (!(isNil "_vestUnit")) then
		{
			_containerClass = getText (configFile/"CfgWeapons"/_vestUnit/"ItemInfo"/"containerClass");
			_maximumLoad = getNumber (configFile/"CfgVehicles"/_containerClass/"maximumLoad");
			_capacityMass = _capacityMass + _maximumLoad;
			_containers pushBack [_vestUnit,_maximumLoad];
		};
		if (!(isNil "_backpackUnit")) then
		{
			_maximumLoad = getNumber (configFile/"CfgVehicles"/_backpackUnit/"maximumLoad");
			_capacityMass = _capacityMass + _maximumLoad;
			_containers pushBack [_backpackUnit,_maximumLoad];
		};


		diag_log["###"];
		diag_log["_unitClass: " + _unitClass];

		if ((!(isNil "_debug")) || ((count _missingWeapons > 0) || (count _missingMagazines > 0) || (count _missingItems > 0) || (str _actualMass != str _desiredMass) || (_desiredMass > _capacityMass))) then
		{
			diag_log["----"];
		//	diag_log["backpack",_backpack];
		//	diag_log["backpackUnit",_backpackUnit];
		//	diag_log["uniformClass",_uniformClass];
		//	diag_log["uniformUnit",_uniformUnit];
		//	diag_log["---"];
			diag_log ["BIS_fnc_areEqual weapons",[_weaponsUnitAllLower,_weaponsClassAllLower] call BIS_fnc_areEqual];
			diag_log ["BIS_fnc_areEqual magazines",[_magazinesUnitAllLower,_magazinesClassAllLower] call BIS_fnc_areEqual];
			diag_log["----"];
			diag_log["Actual mass:   ",_actualMass];
			diag_log["Desired mass:  ",_desiredMass];
			diag_log["Capacity mass: ",_capacityMass];
			diag_log["Containers:    ",_containers];
			diag_log["Capacity uniform:  ",loadUniform _unit];
			diag_log["Capacity vest:     ",loadVest _unit];
			diag_log["Capacity backpack: ",loadBackpack _unit];
			diag_log["Capacity total:    ",load _unit];
			diag_log["----"];
		};

		if ((!(isNil "_debug")) || (count _missingWeapons > 0)) then
		{
			diag_log["Missing weapons",count _missingWeapons,_missingWeapons];
			diag_log["weaponsClass",count _weaponsClassAllLower,_weaponsClassAllLower];
			diag_log["weaponsUnit",count _weaponsUnitAllLower,_weaponsUnitAllLower];
			diag_log["----"];
		};

		if ((!(isNil "_debug")) || (count _missingMagazines > 0)) then
		{
//			diag_log["_magazinesCompareArray ",count _magazinesCompareArray,_magazinesCompareArray];
			diag_log["Missing magazines",count _missingMagazines,_missingMagazines];
			diag_log["magazinesClass",count _magazinesClassAllLower,_magazinesClassAllLower];
			diag_log["magazinesUnit",count _magazinesUnitAllLower,_magazinesUnitAllLower];
			diag_log["----"];
		};

		if ((!(isNil "_debug")) || (count _missingItems > 0)) then
		{
			diag_log["Missing items",count _missingItems,_missingItems];
			diag_log["itemsClass",count _itemsClass,_itemsClass];
			diag_log["itemsUnit",count _itemsUnit,_itemsUnit];
			diag_log["linkedItemsClass",count _linkedItemsClass,_linkedItemsClass];
			diag_log["assignedItemsUnit",count _assignedItemsUnit,_assignedItemsUnit];
			diag_log["----"];
		};

		deleteVehicle _unit;
	} forEach MyVehicles;
};
endLoadingScreen;

endMission "END1";