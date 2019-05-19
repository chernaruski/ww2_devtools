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

_export = "";

_export = _export + "class CfgMagazines" + endl;
_export = _export + "{" + endl;

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

		_separator = ": ";
		if (_parentClassName == "") then {_separator = "";};
		_export = _export + format ["	class %1%2%3",_className,_separator,_parentClassName] + endl;

		_export = _export + "	{" + endl;

		if (!(_sameValue)) then
		{
			_export = _export + format ['		nameSound = "%1";',_nameSound] + endl;
		};

		_export = _export + "	};" + endl;
	};
};

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

_export = _export + "class CfgWeapons" + endl;
_export = _export + "{" + endl;

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

		_separator = ": ";
		if (_parentClassName == "") then {_separator = "";};
		_export = _export + format ["	class %1%2%3",_className,_separator,_parentClassName] + endl;

		_export = _export + "	{" + endl;

		if (!(_sameValue)) then
		{
			_export = _export + format ['		nameSound = "%1";',_nameSound] + endl;
		};

		_export = _export + "	};" + endl;
	};
};

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

_export = _export + "class CfgVehicles" + endl;
_export = _export + "{" + endl;

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

			_separator = ": ";
			if (_parentClassName == "") then {_separator = "";};
			_export = _export + format ["	class %1%2%3",_className,_separator,_parentClassName] + endl;

			_export = _export + "	{" + endl;

//		class SpeechVariants
//		{
//			class Default
//			{
//				speechSingular[] = {"veh_unknown_s"};
//				speechPlural[] = {"veh_unknown_p"};
//			};
//		};
//		textSingular = "unknown";
//		textPlural = "unknown";
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
		};
	};
};

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

copyToClipboard _export;
