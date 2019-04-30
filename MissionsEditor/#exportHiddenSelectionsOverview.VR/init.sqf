TEST_genericColors = false;
TEST_genericColors = true;

TEST_singleLine = false;
TEST_singleLine = true;

///////////////////////////////////////////////////////////////////////////////

TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos,Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador,El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER,El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen [""];

///////////////////////////////////////////////////////////////////////////////

TEST_colors =
[
	"#(argb,8,8,3)color(1,0,0,1,ca)",
	"#(argb,8,8,3)color(0,1,0,1,ca)",
	"#(argb,8,8,3)color(0,0,1,1,ca)",
	"#(argb,8,8,3)color(1,0,1,1,ca)",
	"#(argb,8,8,3)color(1,1,0,1,ca)",
	"#(argb,8,8,3)color(0,1,1,1,ca)",
	"#(argb,8,8,3)color(1,1,1,1,ca)",

	"#(argb,8,8,3)color(0.5,0,0,0.5,ca)",
	"#(argb,8,8,3)color(0,0.5,0,0.5,ca)",
	"#(argb,8,8,3)color(0,0,0.5,0.5,ca)",
	"#(argb,8,8,3)color(0.5,0,0.5,0.5,ca)",
	"#(argb,8,8,3)color(0.5,0.5,0,0.5,ca)",
	"#(argb,8,8,3)color(0,0.5,0.5,0.5,ca)",
	"#(argb,8,8,3)color(0.5,0.5,0.5,0.5,ca)",

	"#(argb,8,8,3)color(0.25,0.25,0.25,1,ca)",
	"#(argb,8,8,3)color(0.50,0.50,0.50,1,ca)",
	"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)",

	"TODO 1",
	"TODO 2",
	"TODO 3",
	"TODO 4",
	"TODO 5"
];

///////////////////////////////////////////////////////////////////////////////

_vehiclesWithHiddenSelections_TexturesDefinitions = [];

for "_i" from (0) to ((count(configFile/"CfgVehicles")) - 1) do
{
	_vehicleConfig = (configFile/"CfgVehicles") select _i;

	if (isClass _vehicleConfig) then
	{
//		_scope = getNumber(_vehicleConfig/"scope");
//		_model = getText(_vehicleConfig/"model");

		_scope = 2;
		_model = "-";

		if ((_scope > 0) && (_model != "")) then
		{
			_vehicleClass = configName _vehicleConfig;

			if (_vehicleClass isKindOf "AllVehicles") then
			{
				_author = toLower (getText (_vehicleConfig/"author"));

				if (_author in TEST_IncludedAuthors) then
				{
					for "_i" from (0) to ((count _vehicleConfig) - 1) do
					{
						_parameterConfig = _vehicleConfig select _i;

						if (!(isClass _parameterConfig)) then
						{
							if ((toLower (configName _parameterConfig)) in ["hiddenselections","hiddenselectionstextures"]) then
							{
								_hiddenSelectionsTextures = getArray(_vehicleConfig/"hiddenSelectionsTextures");

								if ((count _hiddenSelectionsTextures) > 0) then
								{
//									diag_log["_hiddenSelectionsTextures",_parameterConfig];
									_vehiclesWithHiddenSelections_TexturesDefinitions pushBackUnique _vehicleClass;
								};
							};
						};
					};
				};
			};
		};
	};
};

///////////////////////////////////////////////////////////////////////////////

_export = "";
_textBaseClassesVehicles = "";
_textVehicles = "";

_header = "";
if (true) then
{
	_header = _header + "class CfgPatches" + endl;
	_header = _header + "{" + endl;
	_header = _header + "	class WW2_TEST_Reskin" + endl;
	_header = _header + "	{" + endl;
	_header = _header + "		units[] = {};" + endl;
	_header = _header + "		weapons[] = {};" + endl;
	_header = _header + "		requiredVersion = 0.1;" + endl;
	_header = _header + '		requiredAddons[] = {"WW2_Core_c_WW2_Core_c","WW2_Assets_c_Characters_ZZZ_LastLoaded_c","WW2_Assets_c_Vehicles_ZZZ_LastLoaded_c"};' + endl;
	_header = _header + "	};" + endl;
	_header = _header + "};" + endl;
};

_export = _header;//+ endl;



_export = _export + "class cfgVehicles" + endl;

_export = _export + "{" + endl;



_vehicleBaseClasses = [];

{
	_vehicleClass = _x;

	_vehicleConfig = configFile/"CfgVehicles"/_vehicleClass;

	_vehicleBaseClass = configName (inheritsFrom _vehicleConfig);

	if (!(_vehicleBaseClass in _vehiclesWithHiddenSelections_TexturesDefinitions)) then
	{
		_vehicleBaseClasses pushBackUnique _vehicleBaseClass;
	};
} forEach _vehiclesWithHiddenSelections_TexturesDefinitions;

_vehicleBaseClasses sort true;
{
	_vehicleBaseClass = _x;

	_text = format ["	class %1;",_vehicleBaseClass];

	_textBaseClassesVehicles = _textBaseClassesVehicles + _text + endl;
} forEach _vehicleBaseClasses;

_export = _export + _textBaseClassesVehicles + endl;



{
	_vehicleClass = _x;

	_vehicleConfig = configFile/"CfgVehicles"/_vehicleClass;

	_vehicleBaseClass = configName (inheritsFrom _vehicleConfig);

	_hiddenSelections = getArray(_vehicleConfig/"hiddenSelections");
	_hiddenSelectionsTextures = getArray(_vehicleConfig/"hiddenSelectionsTextures");

	_text = "";

	_text = _text + format ["	class %1: %2",_vehicleClass,_vehicleBaseClass] + endl;

	_text = _text + "	{" + endl;

//	_text = _text + "		scope = 2;" + endl;
//	_text = _text + "		scopeCurator = 1;" + endl;
//	_text = _text + "		scopeArsenal = 1;" + endl;

//	_text = _text + format ['		author = "%1";',_authorVariant] + endl;

//	_text = _text + format ['		displayName = "%1";',getText(configFile/"CfgVehicles"/_vehicleClass/"displayName")] + endl;
//	_text = _text + format ['		faction = "%1";',getText(configFile/"CfgVehicles"/_vehicleClass/"faction")] + endl;


	_hiddenSelectionsText = "";

	_sizeHiddenSelections = count _hiddenSelections;
	_sizeHiddenSelectionsTextures = count _hiddenSelectionsTextures;
	if (_sizeHiddenSelections < _sizeHiddenSelectionsTextures) then {diag_log "WARNING: More hiddenSelectionsTextures than hiddenSelections defined!";};
	if (_sizeHiddenSelections != _sizeHiddenSelectionsTextures) then {diag_log format ["%1: %2 - HS %3, HST: %4",_vehicleClass,_vehicleBaseClass,_sizeHiddenSelections,_sizeHiddenSelectionsTextures];};

	{
		_separator = "";
		if ((_forEachIndex + 1) < _sizeHiddenSelections) then {_separator = ",";};

		_hiddenSelectionsText = _hiddenSelectionsText + format ['"%1"%2',_x,_separator];
	} forEach _hiddenSelections;

	_text = _text + format ['%2%2		hiddenSelections[] = {%1};',_hiddenSelectionsText,"/"] + endl;


	if (TEST_singleLine) then
	{
		_hiddenSelectionsTexturesText = "";

		{
			_texture = _x;
			if (TEST_genericColors) then {_texture = TEST_colors select _forEachIndex;};

			_separator = "";
			if ((_forEachIndex + 1) < _sizeHiddenSelectionsTextures) then {_separator = ",";};

			_hiddenSelectionsTexturesText = _hiddenSelectionsTexturesText + format ['"%1"%2',_texture,_separator];
		} forEach _hiddenSelectionsTextures;

		_text = _text + format ['		hiddenSelectionsTextures[] = {%1};',_hiddenSelectionsTexturesText] + endl;
	}
	else
	{
		_text = _text + "		hiddenSelectionsTextures[] = " + endl;
		_text = _text + "		{" + endl;

		{
			_texture = _x;
			if (TEST_genericColors) then {_texture = TEST_colors select _forEachIndex;};

			_separator = "";
			if ((_forEachIndex + 1) < _sizeHiddenSelectionsTextures) then {_separator = ",";};

			_text = _text + format ['/%4 %1 %4/			"%2"%3',_hiddenSelections select _forEachIndex,_texture,_separator,"*"] + endl;
		} forEach _hiddenSelectionsTextures;

		_text = _text + "		};" + endl;
	};


	_text = _text + "	};" + endl;

	_textVehicles = _textVehicles + _text;
} forEach _vehiclesWithHiddenSelections_TexturesDefinitions;

_export = _export + _textVehicles;

_export = _export + "};" + endl;

///////////////////////////////////////////////////////////////////////////////

_export = _export + endl + endl + endl;

copyToClipboard _export;

///////////////////////////////////////////////////////////////////////////////

endLoadingScreen;

endMission "END1";
