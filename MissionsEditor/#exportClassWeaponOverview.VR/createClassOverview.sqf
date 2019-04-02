
_export = "";

TEST_allWeapons = [];
TEST_addedWeapons = [];

for "_i" from (0) to ((count(configFile/"CfgWeapons")) - 1) do
{
	_class = (configFile/"CfgWeapons") select _i;

	if (isClass _class) then
	{
		if (getNumber(_class/"scope") == 2) then
		{
			_classType = getNumber(_class/"type");
			if (_classType >= 65536 && _classType < 131072) exitWith {};//"High (VEH) Type"

			_displayName = getText (_class/"displayName");
			if (_displayName == "") exitWith {};

			_className = configName _class;

			_specialCase = true;
			switch (true) do
			{
				case (_className isKindOf ["FirstAidKit",configFile >> "CfgWeapons"]): {};
				case (_className isKindOf ["ToolKit",configFile >> "CfgWeapons"]): {};

				case (_className isKindOf ["ItemMap",configFile >> "CfgWeapons"]): {};
				case (_className isKindOf ["ItemCompass",configFile >> "CfgWeapons"]): {};
				case (_className isKindOf ["ItemWatch",configFile >> "CfgWeapons"]): {};
				default {_specialCase = false;};
			};

			_author = toLower (getText (_class/"author"));
			if (_specialCase || (_author in TEST_IncludedAuthors)) then
			{
				TEST_allWeapons set [count TEST_allWeapons,_className];
			};
		};
	};
};

TEST_allGrenades = [];
TEST_allSmokeGrenades = [];
TEST_allRifleGrenades = [];
//TEST_allExplosives = [];
TEST_allMineMagazines = [];

for "_i" from (0) to ((count(configFile/"CfgMagazines")) - 1) do
{
	_class = (configFile/"CfgMagazines") select _i;

	if (isClass _class) then
	{
		if (getNumber(_class/"scope") > 0) then
		{

			_displayName = getText (_class/"displayName");
			if (_displayName == "") exitWith {};

			_className = configName _class;

			switch (true) do
			{
				case (_className isKindOf ["LIB_HandGrenade_base",configFile >> "CfgMagazines"]):
				{
					TEST_allGrenades pushBackUnique _className;
				};
				case (_className isKindOf ["LIB_SmokeShell_base",configFile >> "CfgMagazines"]):
				{
					TEST_allSmokeGrenades pushBackUnique _className;
				};
				case (_className isKindOf ["LIB_BaseRifleGrenade",configFile >> "CfgMagazines"]):
				{
					TEST_allRifleGrenades pushBackUnique _className;
				};
//				case (_className isKindOf "B_LIB_AssaultPack_Base"):
//				{
//					TEST_allExplosives pushBackUnique _className;
//				};
				case (_className isKindOf ["LIB_Mine_Magazine",configFile >> "CfgMagazines"]):
				{
					TEST_allMineMagazines pushBackUnique _className;
				};
			};
		};
	};
};


TEST_allBackpacks = [];
TEST_allMineObjects = [];
TEST_allAmmoBoxes = [];
TEST_allLogics = [];

for "_i" from (0) to ((count(configFile/"CfgVehicles")) - 1) do
{
	_class = (configFile/"CfgVehicles") select _i;

	if (isClass _class) then
	{
		_scope = getNumber(_class/"scope");

		if (_scope > 0) then
		{
			_classType = getNumber(_class/"type");
			if (_classType >= 65536 && _classType < 131072) exitWith {};//"High (VEH) Type"

			_displayName = getText (_class/"displayName");
			if (_displayName == "") exitWith {};

			_author = toLower (getText (_class/"author"));
			if (!(_author in TEST_IncludedAuthors)) exitWith {};

			_className = configName _class;

			switch (true) do
			{
				case (_className isKindOf "B_LIB_AssaultPack_Base"):
				{
					TEST_allBackpacks pushBackUnique _className;
				};
				case (_className isKindOf "LIB_Mine_base"):
				{
					TEST_allMineObjects pushBackUnique _className;
				};
				case (_className isKindOf "LIB_Minefield_base"):
				{
					TEST_allMineObjects pushBackUnique _className;
				};
				case (_className isKindOf "LIB_MineObject_base"):
				{
					if (_scope > 1) then
					{
						TEST_allMineObjects pushBackUnique _className;
					};
				};
				case (_className isKindOf "LIB_ReammoBox_base"):
				{
					TEST_allAmmoBoxes pushBackUnique _className;
				};
				case (_className isKindOf "LIB_Logic"):
				{
					if (_scope > 1) then
					{
						TEST_allLogics pushBackUnique _className;
					};
				};
			};
		};
	};
};



//# infantry weapons

_export = _export + "Weapons	DisplayName	Mass	Magazines	Muzzles	Author" + endl + endl;

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
			_muzzles = getArray(configFile/"CfgWeapons"/_weapon/"muzzles");
//			_muzzles = _muzzles - ["this"];
//			if (_muzzles isEqualTo []) then {_muzzles = "-";};
			_author = getText(configFile/"CfgWeapons"/_weapon/"author");

			_text = _text + format ["%1	%2	%3	%4	%5	%6",_weapon,_displayName,_mass,_magazines,_muzzles,_author] + endl;
		};
	} forEach _weapons;

	_return = _text + endl + endl;
	_return
};

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
			TEST_addedWeapons pushBackUnique (toLower _weapon);
		};
	} forEach TEST_allWeapons;

	_text = [_type,_weapons] call _fnc_WeaponsOverview;

	_export = _export + _text;
} forEach
[
	["Pistols","LIB_PISTOL"],
	["Sub machineguns","LIB_SMG"],
	["Rifles","LIB_RIFLE"],
	["Light machineguns","LIB_LMG"],
	["Sniper rifles","LIB_SRIFLE"],
	["Launchers","LIB_LAUNCHER"]
];

_export = _export + endl;


//# infantry magazines

_export = _export + "Magazines	DisplayName	Mass	Count	Ammo" + endl + endl;

//class - displayName - magazines[] # image - author #

_fnc_MagazinesOverview =
{
	params ["_type","_magazines"];

	_text = _type + endl;

	{
		_magazine = _x;

		if (_magazine != "-") then
		{
			_displayName = getText(configFile/"CfgMagazines"/_magazine/"displayName");
			_mass = getNumber(configFile/"CfgMagazines"/_magazine/"mass");
			_count = getNumber(configFile/"CfgMagazines"/_magazine/"count");
			_ammo = getText(configFile/"CfgMagazines"/_magazine/"ammo");

			_text = _text + format ["%1	%2	%3	%4	%5",_magazine,_displayName,_mass,_count,_ammo] + endl;
		};
	} forEach _magazines;

	_return = _text + endl + endl;
	_return
};

_magazinesText = "";
{
	_magazineSet = _x;

	_type = _magazineSet select 0;
	_magazines = _magazineSet select 1;

	_magazineText = [_type,_magazines] call _fnc_MagazinesOverview;
	_magazinesText = _magazinesText + _magazineText;

} forEach
[
	["Grenades",TEST_allGrenades],
	["Smoke Grenades",TEST_allSmokeGrenades],
	["Rifle Grenades",TEST_allRifleGrenades],
//	["Explosives",TEST_allExplosives],
	["Mines",TEST_allMineMagazines]
];

_export = _export + _magazinesText;

_export = _export + endl + endl;



//# clothing

_export = _export + "Clothing	DisplayName	Mass	Author" + endl + endl;

//class - displayName - (ItemInfo) mass - (HitpointsProtectionInfo) class (hitpointName) - armor - passThrough # image - author #
_fnc_ClothingOverview =
{
	params ["_type","_clothings","_isWeapon"];

	TEST_Winter_newLineSet = false;

	_text = _type + endl;
	{
		_clothing = _x;

		if (_clothing != "-") then
		{
			_displayName = getText(configFile/"CfgWeapons"/_clothing/"displayName");
			_infoType = "ItemInfo";
			if (_isWeapon) then {_infoType = "WeaponSlotsInfo";};
			_mass = getNumber(configFile/"CfgWeapons"/_clothing/_infoType/"mass");
			_author = getText(configFile/"CfgWeapons"/_clothing/"author");

			_isWinter = getNumber(configFile/"CfgWeapons"/_clothing/"LIB_isWinter");
			if (_isWinter > 0) then
			{
				if (!(TEST_Winter_newLineSet)) then
				{
					_text = _text + endl;
					TEST_Winter_newLineSet = true;
				};
			};

			_text = _text + format ["%1	%2	%3	%4",_clothing,_displayName,_mass,_author] + endl;
		};
	} forEach _clothings;

	_return = _text + endl + endl;
	_return
};

_clothingsText = "";
{
	_clothingSet = _x;

	_type = _clothingSet select 0;
	_filter = _clothingSet select 1;
	_isWeapon = _clothingSet select 2;

	_clothings = [];

	{
		_clothing = _x;

		if (_clothing isKindOf [_filter,configFile >> "CfgWeapons"]) then
		{
			_clothings pushBackUnique _clothing;
			TEST_addedWeapons pushBackUnique (toLower _clothing);
		};
	} forEach TEST_allWeapons;

	_clothingText = [_type,_clothings,_isWeapon] call _fnc_ClothingOverview;
	_clothingsText = _clothingsText + _clothingText;

} forEach
[
	["Uniforms","U_LIB_BasicBody",false],
	["Headgear","H_LIB_HelmetB",false],
	["Vests","V_LIB_Vest_Camo_Base",false],
	["Binoculars","LIB_Binocular_base",true],
	["Accessories","LIB_ACC_base",false],
	["Static Weapon Tripods","LIB_Slung_Static_Weapon_Base",true],
	["Headwear","LIB_Head_base",false]
];

_remainingItems = [];
{
	if (!((toLower _x) in TEST_addedWeapons)) then
	{
		_remainingItems pushBackUnique _x;
	};
} forEach TEST_allWeapons;

_clothingText = ["Misc Items",_remainingItems,false] call _fnc_ClothingOverview;
_clothingsText = _clothingsText + _clothingText;


_export = _export + _clothingsText;

_export = _export + endl;


//# backpack

_export = _export + "Backpacks	DisplayName	Mass	MaximumLoad	Transportmagazines	Author" + endl;

//class - displayName - mass - maximumLoad - Transportmagazines[] - magazines[] (count)
_fnc_BackpackOverview =
{
	_text = "";
	{
		_backpack = _x;

		if (_backpack != "") then
		{

			_displayName = getText(configFile/"CfgVehicles"/_backpack/"displayName");
			_mass = getNumber(configFile/"CfgVehicles"/_backpack/"mass");
			_maximumLoad = getNumber(configFile/"CfgVehicles"/_backpack/"maximumLoad");

			_backpackClass = configFile/"CfgVehicles"/_backpack/"TransportMagazines";
			_author = getText(configFile/"CfgVehicles"/_backpack/"author");

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

				_text = _text + format ["%1	%2	%3	%4	%5	%6",_backpack,_displayName,_mass,_maximumLoad,_backpackContentsText,_author] + endl;
			};
		};
	} forEach TEST_allBackpacks;

	_return = _text + endl + endl;
	_return
};

_backpackText = [] call _fnc_BackpackOverview;
_export = _export + _backpackText;










copyToClipboard _export;
