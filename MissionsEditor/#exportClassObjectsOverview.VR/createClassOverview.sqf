TEST_exportToWiki = false;
TEST_exportToWiki = true;

TEST_exportWinter = false;
TEST_exportWinter = true;

_export = "";

TEST_allObjects = [];
TEST_addedObjects = [];

for "_i" from (0) to ((count(configFile/"CfgVehicles")) - 1) do
{
	_class = (configFile/"CfgVehicles") select _i;

	if (isClass _class) then
	{
		if (getNumber(_class/"scope") == 2) then
		{
//			_displayName = getText (_class/"displayName");
//			if (_displayName == "") exitWith {};

			_className = configName _class;

//			if (_className isKindOf "AllVehicles") exitWith {};
			if (!((_className isKindOf "Static") || (_className isKindOf "Thing"))) exitWith {};

			if (_className isKindOf "ReammoBox") exitWith {};
			if (_className isKindOf "ReammoBox_F") exitWith {};
//			if (_className isKindOf "LIB_ReammoBox_base") exitWith {};
			if (_className isKindOf "LIB_MineObject_base") exitWith {};
			if (_className isKindOf "LIB_Mine_base") exitWith {};

			_author = toLower (getText (_class/"author"));
			if (_author in TEST_IncludedAuthors) then
			{
				switch (true) do
				{
//					case (_className isKindOf XXX):	{TEST_allObjects pushback _className;};
					default
					{
						_include = true;

						_isWinter = getNumber (_class/"LIB_isWinter");

						_include = if (TEST_exportWinter) then
						{
							(_isWinter == 1)
						}
						else
						{
							(_isWinter == 0)
						};

						if (_include) then
						{
							TEST_allObjects pushback _className;
						};
					};
				};
			}
			else
			{
				if (_author != "Bohemia Interactive") then
				{
					diag_log ["Excluded:",_className,_author];
				};
			};
		};
	};
};

///////////////////////////////////////////////////////////////////////////////

_tempText = "";
_header = "";
if (TEST_exportToWiki) then
{
	_header = format ["! Objects !! DisplayName !! Armor !! MapSize !! Author",""] + endl;
}
else
{
	_tempText = _tempText + format ["Objects	DisplayName	Armor	MapSize	Author",""] + endl + endl;
};
_export = _export + _tempText;

_fnc_ObjectsOverview =
{
	params ["_type","_filter","_objects"];

	_baseClass = _filter;

	_vehicleClass = getText(configFile/"CfgVehicles"/_baseClass/"vehicleClass");
	_editorCategory = getText(configFile/"CfgVehicles"/_baseClass/"editorCategory");
	_editorSubcategory = getText(configFile/"CfgVehicles"/_baseClass/"editorSubcategory");

	_vehicleClassText = getText(configFile/"CfgVehicleClasses"/_vehicleClass/"displayName");
	_editorCategoryText = getText(configFile/"CfgEditorCategories"/_editorCategory/"displayName");
	_editorSubcategoryText = getText(configFile/"CfgEditorSubcategories"/_editorSubcategory/"displayName");
	//vehicleClass	CfgVehicleClasses
	//editorCategory	CfgEditorCategories
	//editorSubcategory	CfgEditorSubcategories

	_text = "";
	if (TEST_exportToWiki) then
	{
		_text = _text + endl;
		_text = _text + format ["=== %1 ===",_type] + endl + endl;
		_text = _text + format ["BaseClass: %1",_baseClass] + endl + endl;
		_text = _text + format ["* VehicleClass: %1 (%2)",_vehicleClass,_vehicleClassText] + endl;
		_text = _text + format ["* EditorCategory: %1 (%2)",_editorCategory,_editorCategoryText] + endl;
		_text = _text + format ["* EditorSubcategory: %1 (%2)",_editorSubcategory,_editorSubcategoryText] + endl;
		_text = _text + endl;
		_text = _text + '{| class="wikitable"' + endl;
		_text = _text + _header;
	}
	else
	{
		_text = _type + endl + endl;
		_text = _text + format ["BaseClass: %1",_baseClass] + endl;
		_text = _text + format ["VehicleClass: %1 (%2)",_vehicleClass,_vehicleClassText] + endl;
		_text = _text + format ["EditorCategory: %1 (%2)",_editorCategory,_editorCategoryText] + endl;
		_text = _text + format ["EditorSubcategory: %1 (%2)",_editorSubcategoryText,_editorSubcategoryText] + endl;
		_text = _text + endl;
	};

	{
		_object = _x;

		if (_object != "-") then
		{
			_displayName = getText(configFile/"CfgVehicles"/_object/"displayName");
			_armor = getNumber(configFile/"CfgVehicles"/_object/"armor");
			_mapSize = getNumber(configFile/"CfgVehicles"/_object/"mapSize");
			_author = getText(configFile/"CfgVehicles"/_object/"author");
//picture

			_tempText = "";
			if (TEST_exportToWiki) then
			{
				_tempText = _tempText + "|-" + endl;
				_tempText = _tempText + format ["| %1 || %2 || %3 || %4 || %5",_object,_displayName,_armor,_mapSize,_author] + endl;
			}
			else
			{
				_tempText = format ["%1	%2	%3	%4	%5",_object,_displayName,_armor,_mapSize,_author] + endl;
			};
			_text = _text + _tempText;
		};
	} forEach _objects;

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

_fnc_filterObjects =
{
	_objectset = _x;

	if ((count _objectset) == 0) exitWith {};

	_type = _objectset select 0;
	_filter = _objectset select 1;

	_objects = [];

	{
		_object = _x;

		if (_object isKindOf _filter) then
		{
			_objects pushBackUnique _object;
			TEST_addedObjects pushBackUnique (toLower _object);
		};
	} forEach TEST_allObjects;

	_text = [_type,_filter,_objects] call _fnc_ObjectsOverview;

	_export = _export + _text;
};

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Military objects ==" + endl;
}
else
{
	_titleText = "// Military objects" + endl + endl;
};
_export = _export + _titleText;

{
	_x call _fnc_filterObjects;
} forEach
[
	["Bunker","LIB_Objects_Military_Bunker_base"],//House_F

	["Fortifications","LIB_Objects_Military_Fortifications_base"],//Strategic

	["Tents","LIB_Objects_Tents_base"],//LIB_Objects_Misc_NonStrategic_base

	["CamoNets","LIB_Objects_Military_CamoNets_base"],//House_F

	["Trenches","LIB_Objects_Military_Trenches_base"],//Strategic

	["BagFence","LIB_Objects_BagFence_base"],//Strategic

	["TankBarrier","LIB_Objects_TankBarrier_base"],//NonStrategic

	["Wire","LIB_Objects_Wire_base"],//NonStrategic

	["Fences","LIB_Objects_Fences_base"],//Wall_F

	["Flags","LIB_FlagCarrier_base"],//FlagCarrier

//	["Wrecks","LIB_Objects_Wrecks_base"],//Strategic
	["Vehicle wrecks","LIB_Wreck_base"],//Wreck_Base
	["Plane wrecks","LIB_PlaneWreck_base"],//PlaneWreck
	["Vehicle parts","LIB_Vehicle_Parts_base"],//Thing

	["Craters","LIB_Objects_Environment_Other_Craters_base"],//Ruins_F

	["Scenery","LIB_Objects_Scenery_base"],//LIB_Objects_base
//	class LIB_Objects_Scenery_Ships_base: LIB_Objects_Scenery_base
//	class LIB_Objects_Scenery_Planes_base: LIB_Objects_Scenery_base

	[]
];

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Structures ==" + endl;
}
else
{
	_titleText = "// Structures" + endl + endl;
};
_export = _export + _titleText;

{
	_x call _fnc_filterObjects;
} forEach
[
	["SmallBuildings","LIB_Objects_Structures_SmallBuildings_base"],//House_Small_F

	["Buildings","LIB_Objects_Structures_Buildings_base"],//House_F

	["Churches","LIB_Objects_Structures_Churches_base"],//Church_F

	["Castle","LIB_Objects_Structures_Castle_base"],//House_F

	["Misc","LIB_Objects_Structures_Misc_base"],//House_F

	["Military","LIB_Objects_Structures_Military_base"],//House_F

	["Shed","LIB_Objects_Structures_Shed_base"],//House_F

	["NonStrategic","LIB_Objects_Misc_NonStrategic_base"],//NonStrategic

	["Ruins","LIB_Objects_Ruins_base"],//Ruins_F

	["Walls","LIB_Objects_Walls_base"],//Wall_F
//	class LIB_Objects_Walls_Stone_base: LIB_Objects_Walls_base
//	class LIB_Objects_Walls_Military_base: LIB_Objects_Walls_base

	["Cemetery","LIB_Objects_Cemetery_base"],//Cemetery_base_F

	["Poles","LIB_Objects_Poles_base"],//PowerLines_Small_base_F

	["Lamps","LIB_Objects_Misc_Lamps_base"],//Lamps_base_F

	[]
];

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Signs ==" + endl;
}
else
{
	_titleText = "// Signs" + endl + endl;
};
_export = _export + _titleText;

{
	_x call _fnc_filterObjects;
} forEach
[
	["Signs","LIB_Objects_Signs_base"],//NonStrategic

	["Towns signs","LIB_Objects_Signs_Towns_base"],//Signs_base_F

	["Military signs","LIB_Objects_Signs_Military_base"],//Wall_F

	["Billboards","LIB_Objects_Signs_Billboards_base"],//Static

	[]
];

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Pathway ==" + endl;
}
else
{
	_titleText = "// Pathway" + endl + endl;
};
_export = _export + _titleText;

{
	_x call _fnc_filterObjects;
} forEach
[
	["Streets","LIB_Objects_Pathway_Streets_base"],//LIB_Objects_base

	["Railways","LIB_Objects_Pathway_Railways_base"],//LIB_Objects_Base

	["SideWalks","LIB_Objects_Pathway_SideWalks_base"],//Pavements_base_F

	["Bridges","LIB_Objects_Pathway_Bridges_base"],//House_F

	[]
];

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Misc objects ==" + endl;
}
else
{
	_titleText = "// Misc objects" + endl + endl;
};
_export = _export + _titleText;

{
	_x call _fnc_filterObjects;
} forEach
[
	["Things","LIB_Objects_Misc_Things_base"],//LIB_Objects_base

	["Surfaces","LIB_Objects_Misc_Surfaces_base"],//LIB_Objects_base

	["Decals","LIB_Objects_Decals_base"],//House_F

	["Dead cows","WW2_Cow_Dead_base"],//Static
	["Dead soldiers","WW2_US_Airborne_Dead_base"],//Static
//	class LIB_Objects_base: Static

	[]
];

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Vegetation ==" + endl;
}
else
{
	_titleText = "// Vegetation" + endl + endl;
};
_export = _export + _titleText;

{
	_x call _fnc_filterObjects;
} forEach
[
//	["Environment","LIB_Objects_Environment_base"],//LIB_Objects_base

//	class LIB_Objects_Environment_Clutter_base: LIB_Objects_Environment_base
	["Grass","LIB_Objects_Environment_Clutters_Grass_base"],//LIB_Objects_Environment_Clutter_base
	["Stones","LIB_Objects_Environment_Clutters_Stones_base"],//LIB_Objects_Environment_Clutter_base
	["Rocks","LIB_Objects_Environment_Stones_Rocks_base"],//Strategic

//	class LIB_Objects_Environment_Vegetation_base: LIB_Objects_Environment_base
	["Bushes","LIB_Objects_Environment_Vegetation_Bushes_base"],//LIB_Objects_Environment_Vegetation_base
	["Crops","LIB_Objects_Environment_Vegetation_Crops_base"],//LIB_Objects_Environment_Vegetation_base
//	["Plants","LIB_Objects_Environment_Vegetation_Plants_base"],//LIB_Objects_Environment_Vegetation_base
//	["Shrubs","LIB_Objects_Environment_Vegetation_Shrubs_base"],//LIB_Objects_Environment_Vegetation_base
	["Trees","LIB_Objects_Environment_Vegetation_Trees_base"],//LIB_Objects_Environment_Vegetation_base
	["Burnt","LIB_Objects_Environment_Vegetation_Burnt_base"],//LIB_Objects_Environment_Vegetation_base
	["DeadTrees","LIB_Objects_Environment_Vegetation_DeadTrees_base"],//LIB_Objects_Environment_Vegetation_base
	["Misc","LIB_Objects_Environment_Vegetation_Misc_base"],//LIB_Objects_Environment_Vegetation_base
	["Wheat","LIB_Objects_Environment_Vegetation_Wheat_base"],//LIB_Objects_Environment_Vegetation_base
	["Hedgerows","LIB_Objects_Environment_Vegetation_Hedgerows_base"],//LIB_Objects_Environment_Vegetation_base
	["Bocage","LIB_Objects_Environment_Vegetation_Bocage_base"],//LIB_Objects_Environment_Vegetation_base

	["Ponds","LIB_Objects_Environment_Other_Ponds_base"],//LIB_Objects_Environment_base

	[]
];

_export = _export + endl + endl + endl;

///////////////////////////////////////////////////////////////////////////////

_titleText = "";
if (TEST_exportToWiki) then
{
	_titleText = "== Unsorted ==" + endl;
}
else
{
	_titleText = "// Unsorted" + endl + endl;
};
_export = _export + _titleText;

_remainingObjects = [];

{
	if (!((toLower _x) in TEST_addedObjects)) then
	{
		_remainingObjects pushBackUnique _x;
	};
} forEach TEST_allObjects;

_text = ["Unsorted","All",_remainingObjects] call _fnc_ObjectsOverview;

_export = _export + _text;

///////////////////////////////////////////////////////////////////////////////

_export = _export + endl + endl + endl;

copyToClipboard _export;

///////////////////////////////////////////////////////////////////////////////

{
	if (!((toLower _x) in TEST_addedObjects)) then
	{
		diag_log ["No category found:",_x];
	};
} forEach TEST_allObjects;
