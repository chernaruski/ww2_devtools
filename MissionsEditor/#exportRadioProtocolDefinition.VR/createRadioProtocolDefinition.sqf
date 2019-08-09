TEST_vehicleBaseClassIncludes = [];
TEST_vehicleBaseClassIncludes pushBack "AllVehicles";
//TEST_vehicleBaseClassIncludes pushBack "Static";
//TEST_vehicleBaseClassIncludes pushBack "Thing";

TEST_exportOnlyClassesWithDefinitions = false;
//TEST_exportOnlyClassesWithDefinitions = true;

TEST_filterOutVanillaClasses = false;
//TEST_filterOutVanillaClasses = true;

///////////////////////////////////////////////////////////////////////////////

TEST_weaponBaseClassExcludes = ["ItemCore","DetectorCore","InventoryItem_Base_F","H_FakeHeadgear","MuzzleSlot","H_FakeHeadgear_Syndikat_F"];
TEST_vanillaModFolders = ["a3","argo","curator","expansion","heli","jets","kart","mark","orange","tacops","tank"];

TEST_modFoldersToExclude = [""];
TEST_modFoldersToExclude append ["@a3_hideassetsfromeditor"];
TEST_modFoldersToExclude append TEST_vanillaModFolders;

TEST_modFoldersToExclude = TEST_modFoldersToExclude apply {toLower _x};

///////////////////////////////////////////////////////////////////////////////

TEST_magazineClassesToDefine = [];
TEST_addedMagazineClasses = [];
TEST_magazineBaseClassesToDefine = [];

TEST_weaponClassesToDefine = [];
TEST_addedWeaponClasses = [];
TEST_weaponBaseClassesToDefine = [];

TEST_vehicleClassesToDefine = [];
TEST_addedVehicleClasses = [];
TEST_vehicleBaseClassesToDefine = [];

_export = "";

for "_i" from (0) to ((count(configFile/"CfgMagazines")) - 1) do
{
	_class = (configFile/"CfgMagazines") select _i;

	if (isClass _class) then
	{
		_className = configName _class;

		if ((TEST_filterOutVanillaClasses) && {((toLower (configSourceMod _class)) in TEST_modFoldersToExclude) && {((getText (_class/"ammo")) != "")}}) exitWith {};

//diag_log [_className,configSourceModList _class];
		_sameValue = false;

		_nameSound = getText (_class/"nameSound");

		_baseClass = inheritsFrom _class;
		_parentClassName = configName _baseClass;

		if (_parentClassName != "") then
		{
			_nameSoundParent = getText (_baseClass/"nameSound");

			if (_nameSound isEqualTo _nameSoundParent) then {_sameValue = true;};
		};

		if ((TEST_exportOnlyClassesWithDefinitions) && {(_sameValue)}) exitWith {};

		TEST_magazineClassesToDefine pushBack [_className,_parentClassName,_nameSound,_sameValue];
		TEST_addedMagazineClasses pushBack _className;

		if (!(_parentClassName in TEST_addedMagazineClasses)) then
		{
			TEST_magazineBaseClassesToDefine pushBackUnique _parentClassName;
		};
	};
};

_export = _export + "class CfgMagazines" + endl;
_export = _export + "{" + endl;

TEST_magazineBaseClassesToDefine = TEST_magazineBaseClassesToDefine - [""];
{
	_export = _export + format ["	class %1;",_x] + endl;
} forEach TEST_magazineBaseClassesToDefine;

if ((count TEST_magazineBaseClassesToDefine) > 0) then {_export = _export + endl;};

{
	_className = _x select 0;
	_parentClassName = _x select 1;
	_nameSound = _x select 2;
	_sameValue = _x select 3;

	_separator = ": ";
	if (_parentClassName == "") then {_separator = "";};
	_export = _export + format ["	class %1%2%3",_className,_separator,_parentClassName] + endl;

	_export = _export + "	{" + endl;

	if (!(_sameValue)) then
	{
		_export = _export + format ['		nameSound = "%1";',_nameSound] + endl;
	};

	_export = _export + "	};" + endl;

} forEach TEST_magazineClassesToDefine;

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

for "_i" from (0) to ((count(configFile/"CfgWeapons")) - 1) do
{
	_class = (configFile/"CfgWeapons") select _i;

	if (isClass _class) then
	{
		_className = configName _class;

		if ((TEST_weaponBaseClassExcludes findIf {_className isKindOf [_x,configFile >> "CfgWeapons"]}) > -1) exitWith {};

		if ((TEST_filterOutVanillaClasses) && {((toLower (configSourceMod _class)) in TEST_modFoldersToExclude) && {((count (getArray (_class/"magazines"))) > 0)}}) exitWith {};

//diag_log [_className,configSourceModList _class];
		_sameValue = false;

		_nameSound = getText (_class/"nameSound");

		_baseClass = inheritsFrom _class;
		_parentClassName = configName _baseClass;

		if (_parentClassName != "") then
		{
			_nameSoundParent = getText (_baseClass/"nameSound");

			if (_nameSound isEqualTo _nameSoundParent) then {_sameValue = true;};
		};

		if ((TEST_exportOnlyClassesWithDefinitions) && {(_sameValue)}) exitWith {};

		TEST_weaponClassesToDefine pushBack [_className,_parentClassName,_nameSound,_sameValue];
		TEST_addedWeaponClasses pushBack _className;

		if (!(_parentClassName in TEST_addedWeaponClasses)) then
		{
			TEST_weaponBaseClassesToDefine pushBackUnique _parentClassName;
		};
	};
};

_export = _export + "class CfgWeapons" + endl;
_export = _export + "{" + endl;

TEST_weaponBaseClassesToDefine = TEST_weaponBaseClassesToDefine - [""];
{
	_export = _export + format ["	class %1;",_x] + endl;
} forEach TEST_weaponBaseClassesToDefine;

if ((count TEST_vehicleBaseClassesToDefine) > 0) then {_export = _export + endl;};

{
	_className = _x select 0;
	_parentClassName = _x select 1;
	_nameSound = _x select 2;
	_sameValue = _x select 3;

	_separator = ": ";
	if (_parentClassName == "") then {_separator = "";};
	_export = _export + format ["	class %1%2%3",_className,_separator,_parentClassName] + endl;

	_export = _export + "	{" + endl;

	if (!(_sameValue)) then
	{
		_export = _export + format ['		nameSound = "%1";',_nameSound] + endl;
	};

	_export = _export + "	};" + endl;

} forEach TEST_weaponClassesToDefine;

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

for "_i" from (0) to ((count(configFile/"CfgVehicles")) - 1) do
{
	_class = (configFile/"CfgVehicles") select _i;

	if (isClass _class) then
	{
		_className = configName _class;

		if ((TEST_filterOutVanillaClasses) && {((toLower (configSourceMod _class)) in TEST_modFoldersToExclude) && {((getText (_class/"model")) != "")}}) exitWith {};

//diag_log [_className,configSourceModList _class];

		if ((TEST_vehicleBaseClassIncludes findIf {_className isKindOf _x}) > -1) then
		{
//			_scope = getNumber (_class/"scope");
//			_model = getText (_class/"model");

			_baseClass = inheritsFrom _class;
			_parentClassName = configName _baseClass;

//			_modelParent = getText (_baseClass/"model");
//
//			if ((_scope > 0) && {(_model != "") && {(_model isEqualTo _modelParent)}}) exitWith {};

			if (getNumber (_class/"LIB_isWinter") == 1) exitWith {};
			if (getNumber (_class/"hasDriver") == -1) exitWith {};

			_sameValueSpeechSingular = false;
			_sameValueSpeechPlural = false;
			_sameValueTextSingular = false;
			_sameValueTextPlural = false;
			_sameValueNameSound = false;

			_speechSingular = getArray (_class/"SpeechVariants"/"Default"/"speechSingular");
			_speechPlural = getArray (_class/"SpeechVariants"/"Default"/"speechPlural");
			_textSingular = getText (_class/"textSingular");
			_textPlural = getText (_class/"textPlural");
			_nameSound = getText (_class/"nameSound");

			if (_parentClassName != "") then
			{
				_speechSingularParent = getArray (_baseClass/"SpeechVariants"/"Default"/"speechSingular");
				_speechPluralParent = getArray (_baseClass/"SpeechVariants"/"Default"/"speechPlural");
				_textSingularParent = getText (_baseClass/"textSingular");
				_textPluralParent = getText (_baseClass/"textPlural");
				_nameSoundParent = getText (_baseClass/"nameSound");

				if (_speechSingular isEqualTo _speechSingularParent) then {_sameValueSpeechSingular = true;};
				if (_speechPlural isEqualTo _speechPluralParent) then {_sameValueSpeechPlural = true;};
				if (_textSingular isEqualTo _textSingularParent) then {_sameValueTextSingular = true;};
				if (_textPlural isEqualTo _textPluralParent) then {_sameValueTextPlural = true;};
				if (_nameSound isEqualTo _nameSoundParent) then {_sameValueNameSound = true;};
			};

			if ((TEST_exportOnlyClassesWithDefinitions) && {((_sameValueSpeechSingular) && {(_sameValueSpeechPlural) && {(_sameValueTextSingular) && {(_sameValueTextPlural) && {(_sameValueNameSound)}}}})}) exitWith {};

			TEST_vehicleClassesToDefine pushBack [_className,_parentClassName,_nameSound,_sameValueSpeechSingular,_sameValueSpeechPlural,_speechSingular,_speechPlural,_sameValueTextSingular,_textSingular,_sameValueTextPlural,_textPlural,_sameValueNameSound];
			TEST_addedVehicleClasses pushBack _className;

			if (!(_parentClassName in TEST_addedVehicleClasses)) then
			{
				TEST_vehicleBaseClassesToDefine pushBackUnique _parentClassName;
			};
		};
	};
};

_export = _export + "class CfgVehicles" + endl;
_export = _export + "{" + endl;

{
	_export = _export + format ["	class %1;",_x] + endl;
} forEach TEST_vehicleBaseClassesToDefine;

_export = _export + endl;

{
	_className = _x select 0;
	_parentClassName = _x select 1;
	_nameSound = _x select 2;
	_sameValueSpeechSingular = _x select 3;
	_sameValueSpeechPlural = _x select 4;
	_speechSingular = _x select 5;
	_speechPlural = _x select 6;
	_sameValueTextSingular = _x select 7;
	_textSingular = _x select 8;
	_sameValueTextPlural = _x select 9;
	_textPlural = _x select 10;
	_sameValueNameSound = _x select 11;

	_separator = ": ";
	if (_parentClassName == "") then {_separator = "";};
	_export = _export + format ["	class %1%2%3",_className,_separator,_parentClassName] + endl;

	_export = _export + "	{" + endl;

	if (!(_sameValueSpeechSingular && _sameValueSpeechPlural)) then
	{
		_export = _export + "		class SpeechVariants" + endl;
		_export = _export + "		{" + endl;

		_export = _export + "			class Default" + endl;
		_export = _export + "			{" + endl;

		_export = _export + format ['				speechSingular[] = {"%1"};',_speechSingular select 0] + endl;
		_export = _export + format ['				speechPlural[] = {"%1"};',_speechPlural select 0] + endl;

		_export = _export + "			};" + endl;

		_export = _export + "		};" + endl;
	};
	if (!(_sameValueTextSingular)) then
	{
		_export = _export + format ['		textSingular = "%1";',_textSingular] + endl;
	};
	if (!(_sameValueTextPlural)) then
	{
		_export = _export + format ['		textPlural = "%1";',_textPlural] + endl;
	};
	if (!(_sameValueNameSound)) then
	{
		_export = _export + format ['		nameSound = "%1";',_nameSound] + endl;
	};

	_export = _export + "	};" + endl;

} forEach TEST_vehicleClassesToDefine;

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

copyToClipboard _export;
