
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

//diag_log [count _factions];

{
	_factionClass = _x;

	_vehiclesRootClass = "CfgVehicles";
	_infantryClasses = [];
	_vehicleClasses = [];

	_factionPrimaryWeapons = [];
	_factionPrimaryMagazines = [];
	_factionSecondaryWeapons = [];
	_factionSecondaryMagazines = [];
	_factionPistolWeapons = [];
	_factionPistolMagazines = [];
	_factionBinoculars = [];
	_factionGrenades = [];
	_factionMiscMagazines = [];

	_factionUniforms = [];
	_factionHelmets = [];
	_factionVests = [];
	_factionBackpacks = [];

	_factionFirstAidKits = [];
	_factionToolKits = [];
	_factionAccessories = [];
	_factionItems = [];

	_factionMaps = [];
	_factionCompassItem = [];
	_factionWatchItem = [];


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
				{if (_className isKindOf _x) exitWith {_isVehicle = true;};}forEach ["LandVehicle","Air","Ship","CAManBase"];

				if (_isVehicle && {!(_parachuteBase)} && {!(_displayNameEmpty)}) then
				{
					_faction = toUpper (getText (configFile/"CfgVehicles"/_className/"faction"));
					if (_faction == _factionClass) then
					{
						if (_className isKindOf "CAManBase") then
						{
							_infantryClasses pushBack _className;
						}
						else
						{
							_vehicleClasses pushBack _className;
						};
					};
				};
			};
		};
	};

	_export = _export + "Infantry	DisplayName	PrimaryWeapon	PrimaryMagazines	SecondaryWeapon	SecondaryMagazines	PistolWeapon	PistolMagazines	HandGrenades	Misc magazines	Binocular	FirstAidKits	ToolKits	Accessory	Items	Uniform	Helmet	Vest	Map	Compass	Watch	Backpack	Backpack magazines	Attendant	Engineer	Can deactivate mines	Author" + endl;

	{
		_infantryClass = _x;

		//class - displayName - weapons[] - magazines[] - items[] - uniformClass - linkedItems[] (helmet, vest, map compass, watch) - backpack - attendant - engineer - canDeactivateMines # image - author #

		_displayName = getText(configFile/"CfgVehicles"/_infantryClass/"displayName");



		_weapons = getArray(configFile/"CfgVehicles"/_infantryClass/"weapons");
//		_weapons = _weapons - ["Throw"] - ["Put"];

		_primaryWeapon = "-";
		_secondaryWeapon = "-";
		_pistolWeapon = "-";
		_binocular = "-";

		{
			_weapon = toUpper _x;

			switch (true) do
			{
				case (_weapon isKindOf ["Rifle",configFile >> "CfgWeapons"]):		{_primaryWeapon = _weapon;};
				case (_weapon isKindOf ["Launcher",configFile >> "CfgWeapons"]):	{_secondaryWeapon = _weapon;};
				case (_weapon isKindOf ["Pistol",configFile >> "CfgWeapons"]):		{_pistolWeapon = _weapon;};
				case (_weapon isKindOf ["Binocular",configFile >> "CfgWeapons"]):	{_binocular = _weapon;};
			};
		} forEach _weapons;

		_factionPrimaryWeapons pushBackUnique (toUpper _primaryWeapon);
		_factionSecondaryWeapons pushBackUnique (toUpper _secondaryWeapon);
		_factionPistolWeapons pushBackUnique (toUpper _pistolWeapon);
		_factionBinoculars pushBackUnique (toUpper _binocular);



		_magazines = getArray(configFile/"CfgVehicles"/_infantryClass/"magazines");
		_magazinesPrimary = getArray(configFile/"CfgWeapons"/_primaryWeapon/"magazines");
		_magazinesSecondary = getArray(configFile/"CfgWeapons"/_secondaryWeapon/"magazines");
		_magazinesPistol = getArray(configFile/"CfgWeapons"/_pistolWeapon/"magazines");

		_magazinesPrimary = _magazinesPrimary apply {toUpper _x};
		_magazinesSecondary = _magazinesSecondary apply {toUpper _x};
		_magazinesPistol = _magazinesPistol apply {toUpper _x};

		_primaryMagazinesTypes = [];
		_secondaryMagazinesTypes = [];
		_pistolMagazinesTypes = [];
		_handgrenadeMagazinesTypes = [];
		_miscMagazinesTypes = [];

		_primaryMagazinesCount = [];
		_secondaryMagazinesCount = [];
		_pistolMagazinesCount = [];
		_handgrenadeMagazinesCount = [];
		_miscMagazinesCount = [];

		{
			_magazine = toUpper _x;

			switch (true) do
			{
				case (_magazine in _magazinesPrimary):
				{
					_index = _primaryMagazinesTypes find _magazine;

					if (_index == -1) then
					{
						_primaryMagazinesTypes pushBack _magazine;
						_primaryMagazinesCount pushBack 1;
					}
					else
					{
						_primaryMagazinesCount set [_index,(_primaryMagazinesCount select _index) + 1];
					};
				};
				case (_magazine in _magazinesSecondary):
				{
					_index = _secondaryMagazinesTypes find _magazine;

					if (_index == -1) then
					{
						_secondaryMagazinesTypes pushBack _magazine;
						_secondaryMagazinesCount pushBack 1;
					}
					else
					{
						_secondaryMagazinesCount set [_index,(_secondaryMagazinesCount select _index) + 1];
					};
				};
				case (_magazine in _magazinesPistol):
				{
					_index = _pistolMagazinesTypes find _magazine;

					if (_index == -1) then
					{
						_pistolMagazinesTypes pushBack _magazine;
						_pistolMagazinesCount pushBack 1;
					}
					else
					{
						_pistolMagazinesCount set [_index,(_pistolMagazinesCount select _index) + 1];
					};
				};
				case (_magazine isKindOf ["HandGrenade",configFile >> "CfgMagazines"]):
				{
					_index = _handgrenadeMagazinesTypes find _magazine;

					if (_index == -1) then
					{
						_handgrenadeMagazinesTypes pushBack _magazine;
						_handgrenadeMagazinesCount pushBack 1;
					}
					else
					{
						_handgrenadeMagazinesCount set [_index,(_handgrenadeMagazinesCount select _index) + 1];
					};
				};
				default
				{
					_index = _miscMagazinesTypes find _magazine;

					if (_index == -1) then
					{
						_miscMagazinesTypes pushBack _magazine;
						_miscMagazinesCount pushBack 1;
					}
					else
					{
						_miscMagazinesCount set [_index,(_miscMagazinesCount select _index) + 1];
					};
				};
			};
		} forEach _magazines;

		_primaryMagazinesText = "";
		{
			if (_forEachIndex > 0) then {_primaryMagazinesText = _primaryMagazinesText + ", ";};
			_primaryMagazinesText = _primaryMagazinesText + format ["%2x %1",_x,_primaryMagazinesCount select _forEachIndex];
		} forEach _primaryMagazinesTypes;

		_secondaryMagazinesText = "";
		{
			if (_forEachIndex > 0) then {_secondaryMagazinesText = _secondaryMagazinesText + ", ";};
			_secondaryMagazinesText = _secondaryMagazinesText + format ["%2x %1",_x,_secondaryMagazinesCount select _forEachIndex];
		} forEach _secondaryMagazinesTypes;

		_pistolMagazinesText = "";
		{
			if (_forEachIndex > 0) then {_pistolMagazinesText = _pistolMagazinesText + ", ";};
			_pistolMagazinesText = _pistolMagazinesText + format ["%2x %1",_x,_pistolMagazinesCount select _forEachIndex];
		} forEach _pistolMagazinesTypes;

		_handgrenadeMagazinesText = "";
		{
			if (_forEachIndex > 0) then {_handgrenadeMagazinesText = _handgrenadeMagazinesText + ", ";};
			_handgrenadeMagazinesText = _handgrenadeMagazinesText + format ["%2x %1",_x,_handgrenadeMagazinesCount select _forEachIndex];
		} forEach _handgrenadeMagazinesTypes;

		_miscMagazinesText = "";
		{
			if (_forEachIndex > 0) then {_miscMagazinesText = _miscMagazinesText + ", ";};
			_miscMagazinesText = _miscMagazinesText + format ["%2x %1",_x,_miscMagazinesCount select _forEachIndex];
		} forEach _miscMagazinesTypes;

		_weaponsText = format ["%1	%2	%3	%4	%5	%6	%7	%8	%9",_primaryWeapon,_primaryMagazinesText,_secondaryWeapon,_secondaryMagazinesText,_pistolWeapon,_pistolMagazinesText,_handgrenadeMagazinesText,_miscMagazinesText,_binocular];

		{_factionPrimaryMagazines pushBackUnique (toUpper _x);} forEach _primaryMagazinesTypes;
		{_factionPrimaryMagazines pushBackUnique (toUpper _x);} forEach _magazinesPrimary;
		{_factionSecondaryMagazines pushBackUnique (toUpper _x);} forEach _secondaryMagazinesTypes;
		{_factionSecondaryMagazines pushBackUnique (toUpper _x);} forEach _magazinesSecondary;
		{_factionPistolMagazines pushBackUnique (toUpper _x);} forEach _pistolMagazinesTypes;
		{_factionPistolMagazines pushBackUnique (toUpper _x);} forEach _magazinesPistol;
		{_factionGrenades pushBackUnique (toUpper _x);} forEach _handgrenadeMagazinesTypes;
		{_factionMiscMagazines pushBackUnique (toUpper _x);} forEach _miscMagazinesTypes;



		_items = getArray(configFile/"CfgVehicles"/_infantryClass/"items");

		_firstAidKitTypes = [];
		_toolKitTypes = [];
		_accessoryTypes = [];
		_itemTypes = [];

		_firstAidKitCount = [];
		_toolKitCount = [];
		_accessoryCount = [];
		_itemCount = [];

		{
			_item = toUpper _x;

			switch (true) do
			{
				case (_item isKindOf ["FirstAidKit",configFile >> "CfgWeapons"]):
				{
					_index = _firstAidKitTypes find _item;

					if (_index == -1) then
					{
						_firstAidKitTypes pushBack _item;
						_firstAidKitCount pushBack 1;
					}
					else
					{
						_firstAidKitCount set [_index,(_firstAidKitCount select _index) + 1];
					};
				};
				case (_item isKindOf ["ToolKit",configFile >> "CfgWeapons"]):
				{
					_index = _toolKitTypes find _item;

					if (_index == -1) then
					{
						_toolKitTypes pushBack _item;
						_toolKitCount pushBack 1;
					}
					else
					{
						_toolKitCount set [_index,(_toolKitCount select _index) + 1];
					};
				};
				case (_item isKindOf ["LIB_ACC_base",configFile >> "CfgWeapons"]):
				{
					_index = _accessoryTypes find _item;

					if (_index == -1) then
					{
						_accessoryTypes pushBack _item;
						_accessoryCount pushBack 1;
					}
					else
					{
						_accessoryCount set [_index,(_accessoryCount select _index) + 1];
					};
				};
				default
				{
					_index = _itemTypes find _item;

					if (_index == -1) then
					{
						_itemTypes pushBack _item;
						_itemCount pushBack 1;
					}
					else
					{
						_itemCount set [_index,(_itemCount select _index) + 1];
					};
				};
			};
		} forEach _items;

		_firstAidKitText = "";
		{
			if (_forEachIndex > 0) then {_firstAidKitText = _firstAidKitText + ", ";};
			_firstAidKitText = _firstAidKitText + format ["%2x %1",_x,_firstAidKitCount select _forEachIndex];
		} forEach _firstAidKitTypes;

		_toolKitText = "";
		{
			if (_forEachIndex > 0) then {_toolKitText = _toolKitText + ", ";};
			_toolKitText = _toolKitText + format ["%2x %1",_x,_toolKitCount select _forEachIndex];
		} forEach _toolKitTypes;

		_accessoryText = "";
		{
			if (_forEachIndex > 0) then {_accessoryText = _accessoryText + ", ";};
			_accessoryText = _accessoryText + format ["%2x %1",_x,_accessoryCount select _forEachIndex];
		} forEach _accessoryTypes;

		_itemText = "";
		{
			if (_forEachIndex > 0) then {_itemText = _itemText + ", ";};
			_itemText = _itemText + format ["%2x %1",_x,_itemCount select _forEachIndex];
		} forEach _itemTypes;

		_itemsText = format ["%1	%2	%3	%4",_firstAidKitText,_toolKitText,_accessoryText,_itemText];

		{_factionFirstAidKits pushBackUnique (toUpper _x);} forEach _firstAidKitTypes;
		{_factionToolKits pushBackUnique (toUpper _x);} forEach _toolKitTypes;
		{_factionAccessories pushBackUnique (toUpper _x);} forEach _accessoryTypes;
		{_factionItems pushBackUnique (toUpper _x);} forEach _itemTypes;



		_uniformClass = getText(configFile/"CfgVehicles"/_infantryClass/"uniformClass");

		_factionUniforms pushBackUnique (toUpper _uniformClass);



		_linkedItems = getArray(configFile/"CfgVehicles"/_infantryClass/"linkedItems");//(helmet, vest, map compass, watch)

		_helmet = "-";
		_vest = "-";
		_mapItem = "-";
		_compassItem = "-";
		_watchItem = "-";

		{
			_item = _x;

			switch (true) do
			{
				case (_item isKindOf ["H_LIB_HelmetB",configFile >> "CfgWeapons"]):		{_helmet = _item;};
				case (_item isKindOf ["V_LIB_Vest_Camo_Base",configFile >> "CfgWeapons"]):	{_vest = _item;};
				case (_item isKindOf ["ItemMap",configFile >> "CfgWeapons"]):			{_mapItem = _item;};
				case (_item isKindOf ["ItemCompass",configFile >> "CfgWeapons"]):		{_compassItem = _item;};
				case (_item isKindOf ["ItemWatch",configFile >> "CfgWeapons"]):			{_watchItem = _item;};
			};
		} forEach _linkedItems;

		_linkedItemsText = format ["%1	%2	%3	%4	%5",_helmet,_vest,_mapItem,_compassItem,_watchItem];

		_factionHelmets pushBackUnique (toUpper _helmet);
		_factionVests pushBackUnique (toUpper _vest);
		_factionMaps pushBackUnique (toUpper _mapItem);
		_factionCompassItem pushBackUnique (toUpper _compassItem);
		_factionWatchItem pushBackUnique (toUpper _watchItem);



		_backpack = getText(configFile/"CfgVehicles"/_infantryClass/"backpack");
		_backpackClass = (configFile/"CfgVehicles"/_backpack/"TransportMagazines");

		_backpackContentTypes = [];
		_backpackContentCount = [];

		for "_i" from (0) to ((count _backpackClass) - 1) do
		{
			_class = _backpackClass select _i;

			if (isClass _class) then
			{
				_backpackContentTypes pushBack (toUpper (getText (_class/"magazine")));
				_backpackContentCount pushBack (getNumber(_class/"count"));
			};
		};

		_backpackContentsText = "";
		{
			if (_forEachIndex > 0) then {_backpackContentsText = _backpackContentsText + ", ";};
			_backpackContentsText = _backpackContentsText + format ["%2x %1",_x,_backpackContentCount select _forEachIndex];
		} forEach _backpackContentTypes;

		_factionBackpacks pushBackUnique (toUpper _backpack);
		{
			_magazine = toUpper _x;

			switch (true) do
			{
				case (_magazine in _factionPrimaryMagazines): {};
				case (_magazine in _factionSecondaryMagazines): {};
				case (_magazine in _factionPistolMagazines): {};
				case (_magazine isKindOf ["HandGrenade",configFile >> "CfgMagazines"]): {_factionGrenades pushBackUnique _magazine;};
				default {_factionMiscMagazines pushBackUnique _magazine;};
			};
		} forEach _backpackContentTypes;



		_attendantText = "-";
		_engineerText = "-";
		_canDeactivateMinesText = "-";

		_attendantValue = getNumber(configFile/"CfgVehicles"/_infantryClass/"attendant");
		if (_attendantValue == 1) then {_attendantText = "X";};
		_engineerValue = getNumber(configFile/"CfgVehicles"/_infantryClass/"engineer");
		if (_engineerValue == 1) then {_engineerText = "X";};
		_canDeactivateMinesValue = getNumber(configFile/"CfgVehicles"/_infantryClass/"canDeactivateMines");
		if (_canDeactivateMinesValue == 1) then {_canDeactivateMinesText = "X";};

//		# image #


		_author = getText(configFile/"CfgVehicles"/_infantryClass/"author");

		_newString = format ["%1	%2	%3	%4	%5	%6	%7	%8	%9	%10	%11	%12",_infantryClass,_displayName,_weaponsText,_itemsText,_uniformClass,_linkedItemsText,_backpack,_backpackContentsText,_attendantText,_engineerText,_canDeactivateMinesText,_author];

		_export = _export + _newString + endl;
	} forEach _infantryClasses;

	_export = _export + endl + endl + endl;



//diag_log ["_factionPrimaryWeapons",_factionPrimaryWeapons];
//diag_log ["_factionPrimaryMagazines",_factionPrimaryMagazines];
//diag_log ["_factionSecondaryWeapons",_factionSecondaryWeapons];
//diag_log ["_factionSecondaryMagazines",_factionSecondaryMagazines];
//diag_log ["_factionPistolWeapons",_factionPistolWeapons];
//diag_log ["_factionPistolMagazines",_factionPistolMagazines];
//diag_log ["_factionBinoculars",_factionBinoculars];
//diag_log ["_factionGrenades",_factionGrenades];
//diag_log ["_factionMiscMagazines",_factionMiscMagazines];
//
//diag_log ["_factionUniforms",_factionUniforms];
//diag_log ["_factionHelmets",_factionHelmets];
//diag_log ["_factionVests",_factionVests];
//diag_log ["_factionBackpacks",_factionBackpacks];
//
//diag_log ["_factionFirstAidKits",_factionFirstAidKits];
//diag_log ["_factionToolKits",_factionToolKits];
//diag_log ["_factionAccessories",_factionAccessories];
//diag_log ["_factionItems",_factionItems];
//
//diag_log ["_factionMaps",_factionMaps];
//diag_log ["_factionCompassItem",_factionCompassItem];
//diag_log ["_factionWatchItem",_factionWatchItem];

//# infantry weapons

	_export = _export + "Weapons	DisplayName	Mass	Magazines" + endl + endl;

//class - displayName - magazines[] # image - author #
	_fnc_WeaponsOverview =
	{
		params ["_type","_weapons"];

		_text = _type + endl;

		{
			_weapon = _x;

			if (_weapon != "-") then
			{
				_displayName = getText(configFile/"CfgWeapons"/_weapon/"displayName");
				_mass = getNumber(configFile/"CfgWeapons"/_weapon/"WeaponSlotsInfo"/"mass");
				_magazines = getArray(configFile/"CfgWeapons"/_weapon/"magazines");

				_text = _text + format ["%1	%2	%3	%4",_weapon,_displayName,_mass,_magazines] + endl;
			};
		} forEach _weapons;

		_return = _text + endl + endl;
		_return
	};

	_pistolsText = ["Pistols",_factionPistolWeapons] call _fnc_WeaponsOverview;
	_export = _export + _pistolsText;

	_weaponsText = "";
	{
		_weaponSet = _x;

		_type = _weaponSet select 0;
		_filter = _weaponSet select 1;

		_weapons = [];

		{
			_weapon = _x;

			if (_weapon isKindOf [_filter,configFile >> "CfgWeapons"]) then
			{
				_weapons pushBackUnique _weapon;
			};
		} forEach _factionPrimaryWeapons;

		_weaponText = [_type,_weapons] call _fnc_WeaponsOverview;
		_weaponsText = _weaponsText + _weaponText;

	} forEach
	[
		["Sub machineguns","LIB_SMG"],
		["Rifles","LIB_RIFLE"],
		["Light machineguns","LIB_LMG"],
		["Sniper rifles","LIB_SRIFLE"]
	];

	_export = _export + _weaponsText;

	_launcherText = ["Launchers",_factionSecondaryWeapons] call _fnc_WeaponsOverview;
	_export = _export + _launcherText;

	_export = _export + endl;



//# clothing

	_export = _export + "Clothing	DisplayName	Mass" + endl + endl;

//class - displayName - (ItemInfo) mass - (HitpointsProtectionInfo) class (hitpointName) - armor - passThrough # image - author #
	_fnc_ClothingOverview =
	{
		params ["_type","_clothings"];

		_text = _type + endl;
		{
			_clothing = _x;

			if (_clothing != "-") then
			{
				_displayName = getText(configFile/"CfgWeapons"/_clothing/"displayName");
				_mass = getNumber(configFile/"CfgWeapons"/_clothing/"ItemInfo"/"mass");

				_text = _text + format ["%1	%2	%3",_clothing,_displayName,_mass] + endl;
			};
		} forEach _clothings;

		_return = _text + endl + endl;
		_return
	};

	_uniformText = ["Uniforms",_factionUniforms] call _fnc_ClothingOverview;
	_export = _export + _uniformText;

	_headgearText = ["Headgear",_factionHelmets] call _fnc_ClothingOverview;
	_export = _export + _headgearText;

	_vestText = ["Vests",_factionVests] call _fnc_ClothingOverview;
	_export = _export + _vestText;

//U_LIB_BasicBody
//H_LIB_HelmetB
//V_LIB_Vest_Camo_Base

	_export = _export + endl;


//# backpack

	_export = _export + "Backpacks	DisplayName	Mass	MaximumLoad	Transportmagazines" + endl;

//class - displayName - mass - maximumLoad - Transportmagazines[] - magazines[] (count)
	_fnc_BackpackOverview =
	{
		params ["_backpacks"];

		_text = "";
		{
			_backpack = _x;

			if (_backpack != "") then
			{

				_displayName = getText(configFile/"CfgVehicles"/_backpack/"displayName");
				_mass = getNumber(configFile/"CfgVehicles"/_backpack/"mass");
				_maximumLoad = getNumber(configFile/"CfgVehicles"/_backpack/"maximumLoad");

				_backpackClass = configFile/"CfgVehicles"/_backpack/"TransportMagazines";

	//			if (!(isClass _backpackClass)) then
				if ((count _backpackClass) == 0) then
				{
					_text = _text + format ["%1	%2	%3	%4",_backpack,_displayName,_mass,_maximumLoad] + endl;
				}
				else
				{
					_backpackContentTypes = [];
					_backpackContentCount = [];

					for "_i" from (0) to ((count _backpackClass) - 1) do
					{
						_class = _backpackClass select _i;

						if (isClass _class) then
						{
							_backpackContentTypes pushBack (getText (_class/"magazine"));
							_backpackContentCount pushBack (getNumber(_class/"count"));
						};
					};

					_backpackContentsText = "";
					{
						if (_forEachIndex > 0) then {_backpackContentsText = _backpackContentsText + "	";};
						_backpackContentsText = _backpackContentsText + format ["%2x %1",_x,_backpackContentCount select _forEachIndex];
					} forEach _backpackContentTypes;

					_text = _text + format ["%1	%2	%3	%4	%5",_backpack,_displayName,_mass,_maximumLoad,_backpackContentsText] + endl;
				};
			};
		} forEach _backpacks;

		_return = _text + endl + endl;
		_return
	};

	_backpackText = [_factionBackpacks] call _fnc_BackpackOverview;
	_export = _export + _backpackText;


	_export = _export + endl + endl + endl;



//	# vehicles

	_export = _export + "Vehicle	DisplayName	Driver	WeaponsDriver	MagazinesDriver	Gunner	WeaponsGunner	MagazinesGunner	Commander	WeaponsCommander	MagazinesCommander	SecondaryTurrets	CargoTurrets	LoaderTurret	TransportSoldier	TotalCapacity" + endl + endl;

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
//					_turretClassName = configName _turretClass;
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

//		_mainTurretClass = configFile/"CfgVehicles"/_vehicle/"Turrets"/"MainTurret";
//
//		if ((count _mainTurretClass) != 0) then
//		{
//			_gunnerType = getText(_mainTurretClass/"gunnerType");
//			if (_gunnerType != "") then {_gunnerType = _gunnerType;};
//			_weaponsGunner = getArray(_mainTurretClass/"weapons");
//			_magazinesGunner = getArray(_mainTurretClass/"magazines");
//
//			_commanderTurretClass = configFile/"CfgVehicles"/_vehicle/"Turrets"/"MainTurret"/"Turrets"/"CommanderOptics";
//			if ((count _commanderTurretClass) != 0) then
//			{
//				_gunnerType = getText(_commanderTurretClass/"gunnerType");
//				if (_gunnerType != "") then {_commanderType = _gunnerType;};
//				_weaponsCommander = getArray(_commanderTurretClass/"weapons");
//				_magazinesCommander = getArray(_commanderTurretClass/"magazines");
//			};
//		};


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
		{_totalCrew = _totalCrew + 1;} forEach TEST_commanderTurrets;
		{_totalCrew = _totalCrew + 1;} forEach TEST_mainTurrets;
		{_totalCrew = _totalCrew + 1;} forEach TEST_secondaryTurrets;
		{_totalCrew = _totalCrew + 1;} forEach TEST_cargoTurrets;
		{_totalCrew = _totalCrew + 1;} forEach TEST_loaderTurrets;
		_totalCrew = _totalCrew + _transportSoldier;

		_author = getText(configFile/"CfgVehicles"/_vehicle/"author");

//		_return = format ["%1	%2	%3	%4	%5	%6	%7	%8	%9	%10",_vehicle,_displayName,_driverType,_gunnerType,_weaponsGunner,_magazinesGunner,_commanderType,_weaponsCommander,_magazinesCommander,_transportSoldier] + endl;
		_return = format ["%1	%2	%3	%4	%5	%6	%7	%8	%9	%10	%11	%12	%13	%14	%15	%16",_vehicle,_displayName,_driverType,_weaponsDriver,_magazinesDriver,_mainTurretType,_weaponsMainTurret,_magazinesMainTurret,_commanderType,_weaponsCommander,_magazinesCommander,_secondaryTurretTypes,_cargoTurretTypes,_loaderTurretType,_transportSoldier,_totalCrew] + endl;

		_return
	};

	_vehiclesFound = [];

	{
		_vehicleSets = _x;

		_type = _vehicleSets select 0;
		_filter = _vehicleSets select 1;

		_text = _type + endl;
			
		TEST_DLV_found = false;

		{
			_vehicle = _x;

			if ((_vehicle isKindOf _filter) && (!(_vehicle in _vehiclesFound))) then
			{
				if (_vehicle != "-") then
				{
					_vehicleText = [_vehicle] call _fnc_VehiclesOverview;
					_text = _text + _vehicleText;

					if (TEST_DLV_found) then {_text = _text + endl};

					_vehiclesFound pushBack _vehicle;
				};
			};

		} forEach _vehicleClasses;

		_export = _export + _text + endl;
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

	_export = _export + "Weapons	DisplayName	Magazines" + endl + endl;

//class - displayName - magazines[] # image - author #
	_fnc_VehiclesWeaponsOverview =
	{
		params ["_type","_vehicleWeapons"];

		_text = _type + endl;

		{
			_vehicleWeapon = _x;

			if (_vehicleWeapon != "-") then
			{
				_displayName = getText(configFile/"CfgWeapons"/_vehicleWeapon/"displayName");
				_magazines = getArray(configFile/"CfgWeapons"/_vehicleWeapon/"magazines");

				_text = _text + format ["%1	%2	%3",_vehicleWeapon,_displayName,_magazines] + endl;
			};
		} forEach _vehicleWeapons;

		_return = _text + endl + endl;
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

//# groups

	_export = _export + "Groups	Units	DisplayName" + endl + endl;

//infantry vs vehicles
//
//side (class+nr) - faction (class+name)
//author = "El Tyranos";
//name = "$STR_LIB_UK_ARMY";
//type
//name = "$STR_LIB_Infantry";
//group
//name = "Machine Gun Team";
//units
//	class (vehicle)
//	??? rank
//	??? position[]

//class CfgGroups
//	class West
//		class BLU_F
//			class Infantry
//				name = "Infantry";
//				class BUS_InfSquad
//					name = "Rifle Squad";
//					side = 1;
//					faction = "BLU_F";
//					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
//					class Unit0
//						side = 1;
//						vehicle = "B_soldier_SL_F";
//						rank = "SERGEANT";
//						position[] = {0,0,0};

	_fnc_GroupsOverview =
	{
		params ["_factionConfig","_factionClassGroup"];

		_text = "";

		for "_i" from (0) to ((count _factionConfig) - 1) do
		{
			_typeConfig = _factionConfig select _i;

			if (isClass _typeConfig) then
			{
//				_typeClass = configName _typeConfig;
				_typeName = getText (_typeConfig/"name");
				_text = _text + _typeName + endl;

				for "_j" from (0) to ((count _typeConfig) - 1) do
				{
					_groupConfig = _typeConfig select _j;

					if (isClass _groupConfig) then
					{
						_groupClass = configName _groupConfig;
						_groupFaction = getText (_groupConfig/"faction");
						if (_groupFaction != _factionClassGroup) exitWith {diag_log ["Group is faulty: " + _groupConfig];};

						_groupName = getText (_groupConfig/"name");
						_text = _text + format ["%1	%2",_groupClass,_groupName] + endl;

						_units = "";

						for "_k" from (0) to ((count _groupConfig) - 1) do
						{
							_unitConfig = _groupConfig select _k;

							if (isClass _unitConfig) then
							{
//								_unitClass = configName _unitConfig;
								_vehicleName = getText (_unitConfig/"vehicle");
								_displayName = getText(configFile/"CfgVehicles"/_vehicleName/"displayName");
								_units = _units + format ["	%1	%2",_vehicleName,_displayName] + endl;
							};
						};

						_text = _text + _units + endl;
					};
				};

				_text = _text + endl;
			};
		};

		_text
	};

	_groupText = "";

	for "_i" from (0) to ((count(configFile/"CfgGroups")) - 1) do
	{
		_sideConfig = (configFile/"CfgGroups") select _i;

		if (isClass _sideConfig) then
		{
			for "_j" from (0) to ((count _sideConfig) - 1) do
			{
				_factionConfig = _sideConfig select _j;

				if (isClass _factionConfig) then
				{
					_factionClassGroup = configName _factionConfig;

					if (_factionClass == _factionClassGroup) then
					{
						_groupText = [_factionConfig,_factionClassGroup] call _fnc_GroupsOverview;
					};
				};
			};
		};
	};

	_export = _export + _groupText;

	_export = _export + endl + endl + endl;

} forEach _factions;



copyToClipboard _export;
