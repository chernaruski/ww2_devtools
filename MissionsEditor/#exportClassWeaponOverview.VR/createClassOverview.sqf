TEST_exportToWiki = false;
TEST_exportToWiki = true;

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

///////////////////////////////////////////////////////////////////////////////

TEST_fnc_convertToMultiLine =
{
	params ["_elements"];

	_return = "";

	_size = count _elements;

	{
		_element = _x;

		_newline = "";
		if ((_forEachIndex + 1) < _size) then {_newline = " <br /> ";};

		_return = _return + _element + _newline;
	} forEach _elements;

	_return
};

///////////////////////////////////////////////////////////////////////////////

//# infantry weapons

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Infantry weapons ==" + endl;
}
else
{
	_tempText = "// Infantry weapons" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Weapons !! DisplayName !! Mass !! Magazines !! Muzzles !! LinkedItems !! Author" + endl;
}
else
{
	_tempText = _tempText + "Weapons	DisplayName	Mass	Magazines	Muzzles	LinkedItems	Author" + endl + endl;
};
_export = _export + _tempText;

//class - displayName - magazines[] # image - author #
_fnc_WeaponsOverview =
{
	params ["_type","_weapons"];

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
		_weapon = _x;

		if (_weapon != "-") then
		{
			_displayName = getText(configFile/"CfgWeapons"/_weapon/"displayName");
			_mass = getNumber(configFile/"CfgWeapons"/_weapon/"WeaponSlotsInfo"/"mass");
			_magazines = getArray(configFile/"CfgWeapons"/_weapon/"magazines");
			_muzzles = getArray(configFile/"CfgWeapons"/_weapon/"muzzles");

			_muzzlesTemp = _muzzles - ["this"];
			if (!(_muzzlesTemp isEqualTo [])) then
			{
				{
					_muzzle = _x;

					_magazinesTemp = getArray(configFile/"CfgWeapons"/_weapon/_muzzle/"magazines");
					{
						_magazine = format ["%1 (muzzle)",_x];
						_magazines pushBackUnique _magazine;
					} forEach _magazinesTemp;
				} forEach _muzzlesTemp;
			};

			_linkedItems = ["-"];
			_linkedItemsConfig = configFile/"CfgWeapons"/_weapon/"LinkedItems";
			if (isClass _linkedItemsConfig) then
			{
				_linkedItems = [];

				for "_i" from (0) to ((count _linkedItemsConfig) - 1) do
				{
					_linkedItemsClass = _linkedItemsConfig select _i;

					if (isClass _linkedItemsClass) then
					{
						_slot = getText (_linkedItemsClass/"slot");
						_item = getText (_linkedItemsClass/"item");

						_linkedItem = format ["%1 (%2)",_item,_slot];
						_linkedItems pushBack _linkedItem;
					};
				};
			};

			_author = getText(configFile/"CfgWeapons"/_weapon/"author");

			_tempText = "";
			if (TEST_exportToWiki) then
			{
				_tempText = _tempText + "|-" + endl;
				_tempText = _tempText + format ["| %1 || %2 || %3 || %4 || %5 || %6 || %7",_weapon,_displayName,_mass,[_magazines] call TEST_fnc_convertToMultiLine,[_muzzles] call TEST_fnc_convertToMultiLine,[_linkedItems] call TEST_fnc_convertToMultiLine,_author] + endl;
			}
			else
			{
				_tempText = format ["%1	%2	%3	%4	%5	%6	%7",_weapon,_displayName,_mass,_magazines,_muzzles,_linkedItems,_author] + endl;
			};
			_text = _text + _tempText;
		};
	} forEach _weapons;

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

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

//# infantry magazines

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Infantry magazines ==" + endl;
}
else
{
	_tempText = "// Infantry magazines" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Magazines !! DisplayName !! Mass !! Ammo" + endl;
}
else
{
	_tempText = _tempText + "Magazines	DisplayName	Mass	Ammo" + endl + endl;
};
_export = _export + _tempText;

//class - displayName - magazines[] # image - author #

_fnc_MagazinesOverview =
{
	params ["_type","_magazines"];

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
		_magazine = _x;

		if (_magazine != "-") then
		{
			_displayName = getText(configFile/"CfgMagazines"/_magazine/"displayName");
			_mass = getNumber(configFile/"CfgMagazines"/_magazine/"mass");
			_ammo = getText(configFile/"CfgMagazines"/_magazine/"ammo");

			_tempText = "";
			if (TEST_exportToWiki) then
			{
				_tempText = _tempText + "|-" + endl;
				_tempText = _tempText + format ["| %1 || %2 || %3 || %4",_magazine,_displayName,_mass,_ammo] + endl;
			}
			else
			{
				_tempText = format ["%1	%2	%3	%4",_magazine,_displayName,_mass,_ammo] + endl;
			};
			_text = _text + _tempText;
		};
	} forEach _magazines;

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

///////////////////////////////////////////////////////////////////////////////

//# clothing

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Clothing ==" + endl;
}
else
{
	_tempText = "// Clothing" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Clothing !! DisplayName !! Mass !! Author" + endl;
}
else
{
	_tempText = _tempText + "Clothing	DisplayName	Mass	Author" + endl + endl;
};
_export = _export + _tempText;

//class - displayName - (ItemInfo) mass - (HitpointsProtectionInfo) class (hitpointName) - armor - passThrough # image - author #
_fnc_ClothingOverview =
{
	params ["_type","_clothings","_isWeapon"];

	TEST_Winter_newLineSet = false;

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

			_tempText = "";
			if (TEST_exportToWiki) then
			{
				_tempText = _tempText + "|-" + endl;
				_tempText = _tempText + format ["| %1 || %2 || %3 || %4",_clothing,_displayName,_mass,_author] + endl;
			}
			else
			{
				_tempText = format ["%1	%2	%3	%4",_clothing,_displayName,_mass,_author] + endl;
			};
			_text = _text + _tempText;
		};
	} forEach _clothings;

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

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

//# backpack

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Backpacks ==" + endl + endl;
}
else
{
	_tempText = "// Backpacks" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Backpacks !! DisplayName !! Mass !! MaximumLoad !! TransportWeapons !! Transportmagazines !! TransportItems !! Author" + endl;
}
else
{
	_tempText = _tempText + "Backpacks	DisplayName	Mass	MaximumLoad	TransportWeapons	Transportmagazines	TransportItems	Author" + endl;
};
_export = _export + _tempText;

//class - displayName - mass - maximumLoad - Transportmagazines[] - magazines[] (count)
_fnc_ContainerOverview =
{
	params ["_type","_containers"];

	_text = "";
	if (TEST_exportToWiki) then
	{
		_text = _text + '{| class="wikitable"' + endl;
		_text = _text + _header;
	}
	else
	{
//		_text = _type + endl;
	};

	{
		_container = _x;

		if (_container != "") then
		{

			_displayName = getText(configFile/"CfgVehicles"/_container/"displayName");
			_mass = getNumber(configFile/"CfgVehicles"/_container/"mass");
			_maximumLoad = getNumber(configFile/"CfgVehicles"/_container/"maximumLoad");

			_transportWeapons = configFile/"CfgVehicles"/_container/"TransportWeapons";
			_transportMagazines = configFile/"CfgVehicles"/_container/"TransportMagazines";
			_transportItems = configFile/"CfgVehicles"/_container/"TransportItems";

			_fnc_checkTransportClass =
			{
				_transport = _this select 0;
				_type = _this select 1;

				_transportText = ["-"];

				if ((count _transport) > 0) then
				{
					_transportText = [];

					_transportTypes = [];
					_transportCount = [];

					for "_i" from (0) to ((count _transport) - 1) do
					{
						_class = _transport select _i;

						if (isClass _class) then
						{
							_transportTypes pushBack (getText (_class/_type));
							_transportCount pushBack (getNumber(_class/"count"));
						};
					};

					{
						_transportText pushBack (format ["%2x %1",_x,_transportCount select _forEachIndex]);
					} forEach _transportTypes;
				};

				_transportText
			};

			_transportWeaponsText = [_transportWeapons,"weapon"] call _fnc_checkTransportClass;
			_transportMagazinesText = [_transportMagazines,"magazine"] call _fnc_checkTransportClass;
			_transportItemsText = [_transportItems,"name"] call _fnc_checkTransportClass;

			_author = getText(configFile/"CfgVehicles"/_container/"author");

			_tempText = "";
			if (TEST_exportToWiki) then
			{
				_tempText = _tempText + "|-" + endl;
				_tempText = _tempText + format ["| %1 || %2 || %3 || %4 || %5 || %6 || %7 || %8",_container,_displayName,_mass,_maximumLoad,[_transportWeaponsText] call TEST_fnc_convertToMultiLine,[_transportMagazinesText] call TEST_fnc_convertToMultiLine,[_transportItemsText] call TEST_fnc_convertToMultiLine,_author] + endl;
			}
			else
			{
				_tempText = format ["%1	%2	%3	%4	%5	%6	%7	%8",_container,_displayName,_mass,_maximumLoad,_transportWeaponsText,_transportMagazinesText,_transportItemsText,_author] + endl;
			};
			_text = _text + _tempText;
		};
	} forEach _containers;

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

_backpackText = ["Backpacks",TEST_allBackpacks] call _fnc_ContainerOverview;
_export = _export + _backpackText;

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

//# Ammoboxes

_tempText = "";
if (TEST_exportToWiki) then
{
	_tempText = "== Ammoboxes ==" + endl + endl;
}
else
{
	_tempText = "// Ammoboxes" + endl + endl;
};

_header = "";
if (TEST_exportToWiki) then
{
	_header = "! Ammoboxes !! DisplayName !! Mass !! MaximumLoad !! TransportWeapons !! Transportmagazines !! TransportItems !! Author" + endl;
}
else
{
	_tempText = Ammoboxes + "Ammoboxes	DisplayName	Mass	MaximumLoad	TransportWeapons	Transportmagazines	TransportItems	Author" + endl;
};
_export = _export + _tempText;

_backpackText = ["Backpacks",TEST_allAmmoBoxes] call _fnc_ContainerOverview;
_export = _export + _backpackText;

///////////////////////////////////////////////////////////////////////////////

_export = _export + endl + endl + endl;

copyToClipboard _export;
