// Customization
TEST_BackgroundAlpha = 0.5;//0-1 range (0 to 100% transparency)
TEST_UpdateDelay = 1;//in seconds

//sleep 1;

Test_clutterGridSize = 25;
Test_clutterModels = [];
Test_clutterMarkers = [];

Test_currentActiveSurfaceCharacterTemplateConfig = (configFile/"CfgSurfaceCharacters" select 1);
Test_currentActiveSurfaceCharacterProbabilities = [];
Test_currentActiveSurfaceCharacterNames = [];

TEST_fnc_updateCurrentActiveSurfaceCharacter =
{
	Test_currentActiveSurfaceCharacterProbabilities = [];
	Test_currentActiveSurfaceCharacterNames = [];

	for "_i" from (1) to (10) do //number of elements
	{
		Test_currentActiveSurfaceCharacterProbabilities pushBack -1;
		Test_currentActiveSurfaceCharacterNames pushBack "";
	};

	_clutterProbabilities = getArray (Test_currentActiveSurfaceCharacterTemplateConfig/"probability");
	_clutterNames = getArray (Test_currentActiveSurfaceCharacterTemplateConfig/"names");
	{
		_probability = _x;

		Test_currentActiveSurfaceCharacterProbabilities set [_forEachIndex,_probability];
		Test_currentActiveSurfaceCharacterNames set [_forEachIndex,(_clutterNames select _forEachIndex)];
	} forEach _clutterProbabilities;

	Test_clutterSelectionMisses = 0;
	Test_clutterSet = [];
	Test_modelSet = [];

	{
		Test_clutterSet pushBack 0;
		Test_modelSet pushBack 0;
	} forEach _clutterProbabilities;
};

[] call TEST_fnc_updatecurrentActiveSurfaceCharacter;

startLoadingScreen ["Wait",""];

//_fnc_getSeed =
//{
//	_x = _this select 0;
//	_z = _this select 1;
//	_y = _this select 2;
//
//	_x = _x - _y; _x = _x - _y; _x = _x ^ (_y>>13);
//	_y = _y - _y; _y = _y - _x; _y = _y ^ (_x<<8);
//	_z = _z - _x; _y = _y - _y; _y = _y ^ (_y>>13);
//	_x = _x - _y; _x = _x - _y; _x = _x ^ (_y>>12);
//	_y = _y - _y; _y = _y - _x; _y = _y ^ (_x<<16);
//	_z = _z - _x; _y = _y - _y; _y = _y ^ (_y>>5);
//	_x = _x - _y; _x = _x - _y; _x = _x ^ (_y>>3);
//	_y = _y - _y; _y = _y - _x; _y = _y ^ (_x<<10);
//	_z = _z - _x; _y = _y - _y; _y = _y ^ (_y>>15);
//
//	_z
//};

// generate a position pair for each grid location

TEST_UpdateClutterTimestamp = time;
TEST_UpdateClutterThreadRunning = false;

TEST_fnc_queueClutterUpdate =
{
	_xPos = _this select 0;
	_yPos = _this select 1;

	_probabilites = _this select 2;
	_names = _this select 3;

	TEST_UpdateClutterTimestamp = time;

	if (!(TEST_UpdateClutterThreadRunning)) then
	{
		TEST_UpdateClutterThreadRunning = true;

		[_xPos,_yPos,_probabilites,_names] spawn Test_fnc_UpdateClutterThread;
	};
};
Test_fnc_UpdateClutterThread =
{
	_xPos = _this select 0;
	_yPos = _this select 1;

	_probabilites = _this select 2;
	_names = _this select 3;

	while {time < (TEST_UpdateClutterTimestamp + TEST_UpdateDelay)} do
	{
		sleep 0.1;
	};

	[_xPos,_yPos,_probabilites,_names] call TEST_fnc_determineClutter;

	TEST_UpdateClutterThreadRunning = false;
};

TEST_fnc_refreshClutterComposition =
{
	[] call Test_fnc_cleanUpModelsAndMarkers;

	_probabilites = Test_currentActiveSurfaceCharacterProbabilities;
	_names = Test_currentActiveSurfaceCharacterNames;

	_xPos = (position player) select 0;
	_yPos = (position player) select 1;

	[_xPos,_yPos,_probabilites,_names] call TEST_fnc_queueClutterUpdate;
};

Test_fnc_computeRandomClutter =
{
	_sumedProbabilites = _this select 0;
	_names = _this select 1;
	_position = _this select 2;

	_clutterModel = objNull;

	//TODO: replicate bit shifted randomization
	_seedXZ = random 1;//randGen.GetSeed(_xx,_zz,_layer);

	// relative position in the grid (0..1 in both directions)
	_isHere = "";
	_isHereF = random 1;//randGen.RandomValue(_seedXZ);

	_found = false;
	_index = -1;

	for "_i" from (0) to ((count _sumedProbabilites) - 1) do
	{
		_probability = _sumedProbabilites select _i;

//diag_log["tested:",_probability >= _isHereF,_probability toFixed 3,_isHereF toFixed 3,_names select _i];
		if (_probability >= _isHereF) exitWith
		{
			_isHere = toLower (_names select _i);
//diag_log["used__:",_probability >= _isHereF,_isHereF toFixed 3,_probability toFixed 3,_isHere];
			_currentValue = Test_clutterSet select _i;
			Test_clutterSet set [_i,_currentValue + 1];

			_index = _i;
			_found = true;
		};
	};

	if (!_found) then
	{
		Test_clutterSelectionMisses = Test_clutterSelectionMisses + 1;
	};

//    int seedXZ = randGen.GetSeed(xx,zz,layer);
//     relative position in the grid (0..1 in both directions)
//    int isHere = -1;
//    float isHereF = randGen.RandomValue(seedXZ);
//    for (int i=0; i<surf.Size(); i++)
//    {
//      float prop = surf.Get(i)._probabilityThold;
//      if (prop>=isHereF)

//	_isHere(_xx,_zz) = _isHere;
//	names[] = {"StrGrassDryGroup","StrGrassDryMediumgroup","StrWeedBrownTallGroup","StrWeedGreenTall","StrThistleYellowShrub","StrPlantMullein"};
/*
class cfgWorlds
class CAWorld: DefaultWorld
class Clutter
	class StrGrassDryGroup
		model = "A3\plants_f\Clutter\c_StrGrassDry_group.p3d";
		scaleMin = 0.65;
		scaleMax = 1;
*/
	if (_isHere != "") then
	{
		_clutterIndex = TEST_Clutters find _isHere;
//diag_log["_clutterIndex",_clutterIndex];

		if (_clutterIndex != -1) then
		{
			_clutterProperties = TEST_ClutterProperties select _clutterIndex;

			_model = _clutterProperties select 0;
			_scaleMin = _clutterProperties select 1;
			_scaleMax = _clutterProperties select 2;

			_height = 5.5;
			_position set [2,_height];

//diag_log["_model",_model,_position];
			_clutterModel = createSimpleObject [_model,_position];
//diag_log["_model",_model,_position,getPos _clutter];
//			_clutter setPosASL [_xPos + _xx,_yPos + _zz,0];

			Test_clutterModels pushBack _clutterModel;

			_currentValue = Test_modelSet select _index;
			Test_modelSet set [_index,_currentValue + 1];

//			_pos(_xx,_zz).x = randGen.RandomValue(_seedXZ+1);
//			_pos(_xx,_zz).z = randGen.RandomValue(_seedXZ+2);
		};
	};

	_clutterModel
};

Test_fnc_computeSumedProbabilites =
{
	_probabilites = _this select 0;

	_sumedProbabilites = [];
	_previousValidProbability = 0;

	{
		_probability = _x;
		_nextProbability = 0;

		_nextProbability = switch (true) do
		{
			case (_forEachIndex == 0):
			{
				_probability
			};
			default
			{
				_previousProbability = _sumedProbabilites select (_forEachIndex - 1);

				switch (true) do
				{
					case (_probability < 0):
					{
						_probability
					};
					case (_previousProbability < 0):
					{
						_previousValidProbability + _probability
					};
					default
					{
						_previousProbability + _probability
					};
				};
			};
		};
		if (_nextProbability > 0) then
		{
			_previousValidProbability = _nextProbability;
		};

		_sumedProbabilites set [_forEachIndex,_nextProbability];
	} forEach _probabilites;

	_sumedProbabilites
};

TEST_fnc_determineClutter =
{
	startLoadingScreen ["Wait",""];

	_xPos = _this select 0;
	_yPos = _this select 1;

	_probabilites = _this select 2;
	_names = _this select 3;

	_sumedProbabilites = [_probabilites] call Test_fnc_computeSumedProbabilites;

	diag_log["_probabilites",_probabilites];
	diag_log["_sumedProbabilites",_sumedProbabilites];
	diag_log["_names",_names];

	Test_clutterSelectionMisses = 0;
	Test_clutterSet = [];
	Test_modelSet = [];

	{
		Test_clutterSet pushBack 0;
		Test_modelSet pushBack 0;
	} forEach _sumedProbabilites;

	_x = Test_clutterGridSize;
	_z = Test_clutterGridSize;

	for [{_zz = 0}, {_zz < _z}, {_zz = _zz + 1}] do
	{
		for [{_xx = 0}, {_xx < _x}, {_xx = _xx + 1}] do
		{
			_newPosition = [_xPos + _xx,_yPos + _zz,0];

			[_sumedProbabilites,_names,_newPosition] call Test_fnc_computeRandomClutter;
		};
	};

	diag_log ["Test_clutterSelectionMisses",(Test_clutterSelectionMisses/(Test_clutterGridSize * Test_clutterGridSize)) toFixed 2,"-",Test_clutterSelectionMisses,Test_clutterGridSize * Test_clutterGridSize];
	diag_log ["Test_clutterSet",Test_clutterSet];
	diag_log ["Test_modelSet",Test_modelSet];
	diag_log "";

	_CRLF = endl;//toString [0x0D,0x0A];

	_string = "";

	_stringProbabilities = "";
	{
		_stringProbability = _x;

		if ((_stringProbability > 0) && (_stringProbability < 1)) then
		{
			_stringProbabilities = _stringProbabilities + str _stringProbability + ",";
		};
	} forEach _probabilites;

	if (_stringProbabilities != "") then
	{
		_tempString = toArray _stringProbabilities;
		_tempString deleteAt ((count _tempString) - 1);
		_stringProbabilities = toString _tempString;
	};

	_stringNames = "";
	{
		_name = _x;

		if (_name != "") then
		{
			_stringNames = _stringNames + '"' + _name + '"' + ",";
		};
	} forEach _names;

	if (_stringNames != "") then
	{
		_tempString = toArray _stringNames;
		_tempString deleteAt ((count _tempString) - 1);
		_stringNames = toString _tempString;
	};


	_string = _string + "	class TAG_Name_ClutterSet" + _CRLF;
	_string = _string + "	{" + _CRLF;
//	0.05,0.012,0.01,0.1,0.05
	_string = _string + format ["		probability[] = {%1};",_stringProbabilities] + _CRLF;
//	"StrBigFallenBranches_pine","StrBigFallenBranches_pine02","StrBigFallenBranches_pine03","StrGrassDryGroup","StrGrassGreenGroup"
	_string = _string + format ["		names[] = {%1};",_stringNames] + _CRLF;
	_string = _string + "	};" + _CRLF;
	_string = _string + "" + _CRLF;
	_string = _string + "		class Clutter" + _CRLF;
	_string = _string + "		{" + _CRLF;

	{
		_name = toLower _x;

		_clutterIndex = TEST_Clutters find _name;

		if (_clutterIndex != -1) then
		{
			_clutterProperties = TEST_ClutterProperties select _clutterIndex;

			_model = _clutterProperties select 0;
			_scaleMin = _clutterProperties select 1;
			_scaleMax = _clutterProperties select 2;
			_affectedByWind = _clutterProperties select 3;
			_swLighting = _clutterProperties select 4;

			_string = _string + format ["			class %1: DefaultClutter",_name] + _CRLF;
			_string = _string + "			{" + _CRLF;
			_string = _string + format ['				model = "%1";',_model] + _CRLF;
			_string = _string + format ["				affectedByWind = %1;",_affectedByWind] + _CRLF;
			_string = _string + format ["				swLighting = %1;",_swLighting] + _CRLF;
			_string = _string + format ["				scaleMin = %1;",_scaleMin] + _CRLF;
			_string = _string + format ["				scaleMax = %1;",_scaleMax] + _CRLF;
			_string = _string + "			};" + _CRLF;
		};
	} forEach _names;

	_string = _string + "		};" + _CRLF;

	copyToClipboard _string;

	hint "Settings exported to clipboard";

	endLoadingScreen;
};

TEST_Clutters = [];
TEST_ClutterProperties = [];

_worldsConfig = configFile/"cfgWorlds";

for "_i" from (0) to ((count _worldsConfig) - 1) do
{
	private _worldConfig = _worldsConfig select _i;

	if (isClass _worldConfig) then
	{
		_cluttersConfig = _worldConfig/"Clutter";

		if (isClass _cluttersConfig) then
		{
			for "_j" from (0) to ((count _cluttersConfig) - 1) do
			{
				private _clutterConfig = _cluttersConfig select _j;

				if (isClass _clutterConfig) then
				{
					_clutterClass = toLower (configName _clutterConfig);

					_model = toLower (getText (_clutterConfig/"model"));
					_scaleMin = getNumber (_clutterConfig/"scaleMin");
					_scaleMax = getNumber (_clutterConfig/"scaleMax");
					_affectedByWind = getNumber (_clutterConfig/"affectedByWind");
					_swLighting = getNumber (_clutterConfig/"swLighting");

					if (_model != "") then
					{
						if ((TEST_Clutters find _clutterClass) == -1) then
						{
							TEST_Clutters pushBack _clutterClass;
							TEST_ClutterProperties pushBack [_model,_scaleMin,_scaleMax,_affectedByWind,_swLighting];
						};
					};
				};
			};
		};
	};
};

TEST_uniqueClutterModels = [];
TEST_uniqueClutters = [];

{
	_clutterProperties =  _x;
	_model = toLower (_clutterProperties select 0);

	if (!(_model in TEST_uniqueClutterModels)) then
	{
		TEST_uniqueClutterModels pushBack _model;

		_clutter = TEST_Clutters select _forEachIndex;
		_scaleMin = _clutterProperties select 1;
		_scaleMax = _clutterProperties select 2;
		_affectedByWind = _clutterProperties select 3;
		_swLighting = _clutterProperties select 4;

		TEST_uniqueClutters pushBack [_clutter,_scaleMin,_scaleMax,_affectedByWind,_swLighting];
	};
} forEach TEST_ClutterProperties;

TEST_uniqueClutterModelsSorted =+ TEST_uniqueClutterModels;
TEST_uniqueClutterModelsSorted sort true;

{
//#	diag_log [_x,TEST_ClutterProperties select _forEachIndex];
} forEach TEST_Clutters;

endLoadingScreen;

///////////////////////////////////////////////////////////////////////////////

TEST_fnc_createSurfaceCharacterMarker =
{
	_surfaceCharacterClass = _this select 0;
	_xPos = _this select 1;
	_yPos = _this select 2;

	_marker = createMarker [_surfaceCharacterClass,[_xPos + Test_clutterGridSize/2,_yPos + Test_clutterGridSize/2,0]];
	_marker setMarkerType "mil_dot";
	_marker setMarkerSize [0.1,0.1];
	_marker setMarkerText _surfaceCharacterClass;

	Test_clutterMarkers pushBack _marker;

	_marker
};

TEST_fnc_previewAllSurfaceCharacters =
{
	startLoadingScreen ["Wait",""];

	[] call Test_fnc_cleanUpModelsAndMarkers;

	_surfaceCharactersConfig = configFile/"CfgSurfaceCharacters";

	_numberOfSurfaceCharacters = (count _surfaceCharactersConfig) - 2;
	_length = ceil (sqrt _numberOfSurfaceCharacters);

	_centerPosition = getPos player;

	_centerPositionX = _centerPosition select 0;
	_centerPositionY = _centerPosition select 1;

	_xPos = _centerPositionX;
	_yPos = _centerPositionY;
	_count = 0;

	Test_clutterGridSize = Test_clutterGridSize * 4/10;

	_offset = 1;

	for "_i" from (0) to ((count _surfaceCharactersConfig) - 1) do
	{
		private _surfaceCharacterConfig = _surfaceCharactersConfig select _i;

		if (isClass _surfaceCharacterConfig) then
		{
			_surfaceCharacterClass = configName _surfaceCharacterConfig;

			_probabilites = getArray (_surfaceCharacterConfig/"probability");
			_names = getArray (_surfaceCharacterConfig/"names");

			_probabilitesCount = count _probabilites;
			_namesCount = count _names;

			if ((_probabilitesCount > 0) && (_namesCount > 0) && (_probabilitesCount == _namesCount)) then
			{
				[_xPos,_yPos,_probabilites,_names] call TEST_fnc_determineClutter;

				_marker = [_surfaceCharacterClass,_xPos,_yPos] call TEST_fnc_createSurfaceCharacterMarker;

				if (_count > _length) then
				{
					_count = 1;
					_xPos = _centerPositionX - _offset - Test_clutterGridSize;
					_yPos = _yPos + Test_clutterGridSize + _offset;
				}
				else
				{
					_count = _count + 1;
				};

				_xPos = _xPos + Test_clutterGridSize + _offset;
			};
		};
	};

	Test_clutterGridSize = Test_clutterGridSize * 25/10;

	endLoadingScreen;
};

TEST_fnc_applySurfaceCharacterTemplate =
{
	_display = findDisplay 4712;

//	_listBox = _display displayCtrl 100;

	_index = lbCurSel 100;

	if (_index != -1) then
	{
		Test_currentActiveSurfaceCharacterTemplateConfig = (configFile/"CfgSurfaceCharacters" select _index);

		[] call TEST_fnc_updateCurrentActiveSurfaceCharacter;
	};

	closeDialog 0;
};

TEST_fnc_initSelectSurfaceCharacterTemplateDialog =
{
	_action = _this select 0;
	_display = (_this select 1) select 0;
//	_display = findDisplay 4711;
	if (isNull _display) exitWith {};
//diag_log ["_display",_display];
//diag_log ["_this",_this];

//	_display displayAddEventHandler ["KeyDown","_this call Test_fnc_handleKeyDownMainDialog"];

	_listBox = _display displayCtrl 100;

	_index = 0;

	_surfaceCharactersConfig = configFile/"CfgSurfaceCharacters";

	for "_i" from (0) to ((count _surfaceCharactersConfig) - 1) do
	{
		private _surfaceCharacterConfig = _surfaceCharactersConfig select _i;

		if (isClass _surfaceCharacterConfig) then
		{
			_surfaceCharacterClass = configName _surfaceCharacterConfig;

			_probabilites = getArray (_surfaceCharacterConfig/"probability");
			_names = getArray (_surfaceCharacterConfig/"names");

			_text = "";

			{
				_probability = _x;
				_name = "-";

				if ((count _names) > _forEachIndex) then
				{
					_name = _names select _forEachIndex;
				};

				_text = _text + format ["[%1] %2 # ",_probability,_name];
			} forEach _probabilites;

//			_listBox lbAdd _text;
//			_index = lbAdd [_listBox,_text];

			_listBox lnbAddRow [_surfaceCharacterClass,_text];
		};
	};

	_listBox lbSetColor [_index,[1,0,0,0.3]];
//	_listBox lbSetCurSel 0;

//	(_display displayCtrl _listBox)  ctrlAddEventHandler ["LBSelChanged","_this execVM 'scriptName.sqf'"];
};

Test_fnc_cleanUpModelsAndMarkers =
{
	startLoadingScreen ["Wait",""];

	{
		deleteVehicle _x;
	} forEach Test_clutterModels;

	{
		deleteMarker _x;
	} forEach Test_clutterMarkers;

	endLoadingScreen;
};

TEST_fnc_previewSurfaceCharacterTemplate =
{
	_control = _this select 0;
	_currentSelectionIndex = _this select 1;

	Test_currentActiveSurfaceCharacterTemplateConfig = (configFile/"CfgSurfaceCharacters" select _currentSelectionIndex);//(_currentSelectionIndex - 1));

	[] call Test_fnc_cleanUpModelsAndMarkers;

	_probabilites = getArray (Test_currentActiveSurfaceCharacterTemplateConfig/"probability");
	_names = getArray (Test_currentActiveSurfaceCharacterTemplateConfig/"names");
//	_probabilites = Test_currentActiveSurfaceCharacterProbabilities;
//	_names = Test_currentActiveSurfaceCharacterNames;

	_xPos = (position player) select 0;
	_yPos = (position player) select 1;

	[_xPos,_yPos,_probabilites,_names] call TEST_fnc_queueClutterUpdate;

	_marker = [configName Test_currentActiveSurfaceCharacterTemplateConfig,_xPos,_yPos,Test_clutterGridSize] call TEST_fnc_createSurfaceCharacterMarker;

//	if((_control lbData _currentSelectionIndex) == "XXX") then
//	{
//
//	};
};

Test_fnc_checkBoxChangedOnLeftBox =
{
	_control = (_this select 0) select 0;
	_newState = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
//diag_log ["Test_fnc_checkBoxChangedOnLeftBox",_this];

	missionNamespace setVariable [format ["TEST_Clutters_Checkbox_%1",_idcOffset],_newState == 1];

	for "_i" from (1) to (10) do //number of elements
	{
		_idcOffsetIndex = _i * 100;

		if (_idcOffsetIndex != _idcOffset) then
		{
			_checkBoxControl = _display displayCtrl (1000 + _idcOffsetIndex);

			_checkBoxState = false;
			missionNamespace setVariable [format ["TEST_Clutters_Checkbox_%1",_idcOffsetIndex],_checkBoxState];
			_checkBoxControl cbSetChecked _checkBoxState;
		};
	};

//	if (_newState == 1) then
//	{
//		hint "enabled";
//	}
//	else
//	{
//		hint "disabled";
//	};
};

Test_fnc_sliderChangedOnLeftBox =
{
	_control = (_this select 0) select 0;
	_newValue = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
//diag_log ["Test_fnc_sliderChangedOnLeftBox",_this];

	_index = (_idcOffset / 100) - 1;

	_newValueNormalized = _newValue toFixed 0;

	_probabilitySliderControl = _display displayCtrl (1001 + _idcOffset);
	_probabilitySliderControl ctrlSetText _newValueNormalized;

	Test_currentActiveSurfaceCharacterProbabilities set [_index,(parseNumber _newValueNormalized) / 100];

	[] call TEST_fnc_refreshClutterComposition;
};

Test_fnc_textChangedOnLeftBox =
{
	_control = (_this select 0) select 0;
	_newValue = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
	_dataField = _this select 3;
//diag_log ["Test_fnc_textChangedOnLeftBox",_this];

	_index = (_idcOffset / 100) - 1;

	_baseIdc = switch (_dataField) do
	{
		case "clutterProbability":	{1001};
//		case "scaleMin":		{1004};
//		case "scaleMax":		{1006};
		default				{0};
	};

	if (_baseIdc == 0) exitWith {};

	_idc = _idcOffset + _baseIdc;

	_valueControl = _display displayCtrl _idc;
	_currentText = ctrlText _valueControl;

	_textAsArray = toArray _currentText;
	_tempArray = [];

	_validCharaters = [49,50,51,52,53,54,55,56,57,48]; //1-9,0

	_i = 0;
	{
		_decimalUnicodeRepresentationsOfCharacters = _x;
//diag_log ["_decimalUnicodeRepresentationsOfCharacters",_decimalUnicodeRepresentationsOfCharacters];
//diag_log ["_validCharaters",_validCharaters];
//diag_log ["in",_decimalUnicodeRepresentationsOfCharacters in _validCharaters];

		if (_decimalUnicodeRepresentationsOfCharacters in _validCharaters) then
		{
			_tempArray pushBack _decimalUnicodeRepresentationsOfCharacters;
		};
		_i = _i + 1;
	} forEach _textAsArray;

	_newText = toString _tempArray;

	//upper limit
	if ((parseNumber _newText) > 99) then
	{
		_newText = "99";
	};

	if (_newText == "") then
	{
		_newText = "0";
	};

	_valueControl ctrlSetText _newText;

	_newValue = parseNumber _newText;

	_newValueNormalized = _newValue toFixed 0;

	if (_dataField == "clutterProbability") then
	{
		_probabilitySliderControl = _display displayCtrl (1001 + _idcOffset);
		_probabilitySliderControl ctrlSetText _newValueNormalized;

		Test_currentActiveSurfaceCharacterProbabilities set [_index,(parseNumber _newValueNormalized) / 100];
	};

	[] call TEST_fnc_refreshClutterComposition;
};

TEST_fnc_assignClutter =
{
	_control = _this select 0;
	_currentSelectionIndex = _this select 1;

diag_log["_currentSelectionIndex",_currentSelectionIndex];

	if (_currentSelectionIndex == 0) exitWith {};

	_model = _control lbText _currentSelectionIndex;

	if (_model == "Empty") exitWith {};

	_index = TEST_uniqueClutterModels find _model;

	_clutterDefinition = TEST_uniqueClutters select _index;
	_surfaceCharacterClass = _clutterDefinition select 0;
	_minScale = _clutterDefinition select 1;
	_maxScale = _clutterDefinition select 2;

	_display = findDisplay 4711;

	for "_i" from (1) to (10) do //number of elements
	{
		_idcOffset = _i * 100;

		_checkBoxControl = _display displayCtrl (1000 + _idcOffset);

		if (cbChecked _checkBoxControl) then
		{
			_clutterNameControl = _display displayCtrl (1002 + _idcOffset);
			_clutterNameControl ctrlSetText _surfaceCharacterClass;
			_clutterNameControl ctrlSetTooltip _surfaceCharacterClass;

			_scaleMinControl = _display displayCtrl (1004 + _idcOffset);
			_scaleMinControl ctrlSetText ((_minScale * 100) toFixed 0);

			_scaleMaxControl = _display displayCtrl (1006 + _idcOffset);
			_scaleMaxControl ctrlSetText ((_maxScale * 100) toFixed 0);

			_index = _i - 1;

			Test_currentActiveSurfaceCharacterNames set [_index,_surfaceCharacterClass];

			[] call TEST_fnc_refreshClutterComposition;
		};
	};

	_modelScaleBase = 1;
	_modelScale = 1;
	_modelVector = [[0,0,0],[0,0,0]];
	_modelVector = [[0.0301068,0.0430097,0],[-0.0024624,-0.00172368,0.0524139]];
//	_modelVector = [[-0.0301068,0.0430097,0],[-0.0024624,-0.00172368,0.0524139]];
//	_modelVector = [[-0.0301068,0.0430097,0],[-0.0024624,-0.00172368,0.0524139]];

	_model = "\" + _model;

	_ctrlModel = _display displayCtrl 9999;
	_ctrlModel ctrlSetModel _model;
//	_ctrlModel ctrlSetModelScale (_modelScaleBase * _modelScale);
//	_ctrlModel ctrlSetModelDirAndUp _modelVector;

//	_modelPos = ctrlPosition _ctrlModel;
//	_modelPos set [2,(_modelPos select 2) - 0.1];
//	_ctrlModel ctrlSetPosition _modelPos;

//	_text = format ["%1 - %2 - %3",_surfaceCharacterClass,_minScale,_maxScale];
//
//	hint _text;
};

TEST_fnc_initTweakClutterCompositionDialog =
{
	_action = _this select 0;
	_display = (_this select 1) select 0;
//	_display = findDisplay 4711;
	if (isNull _display) exitWith {};
//diag_log ["_display",_display];
//diag_log ["_this",_this];

//	_display displayAddEventHandler ["KeyDown","_this call Test_fnc_handleKeyDownMainDialog"];

	_leftBackgroundControl = _display displayCtrl 9990;
	_rightBackgroundControl = _display displayCtrl 9991;
//	_topBackgroundControl = _display displayCtrl 9992;
//	_bottomBackgroundControl = _display displayCtrl 9993;
	_leftBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];
	_rightBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];
//	_topBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];
//	_bottomBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];


	for "_i" from (1) to (10) do //number of elements
	{
		_idcOffset = _i * 100;

		_checkBoxControl = _display displayCtrl (1000 + _idcOffset);
		_checkBoxState = false;
		if (missionNamespace getVariable [format ["TEST_Clutters_Checkbox_%1",_idcOffset],false]) then {_checkBoxState = true;};
		_checkBoxControl cbSetChecked _checkBoxState;
		_checkBoxControl ctrlSetTooltip "Toggle to import model";

		_index = (_i - 1);

		_currentProbability = if (_index < (count Test_currentActiveSurfaceCharacterProbabilities)) then
		{
			Test_currentActiveSurfaceCharacterProbabilities select _index
		}
		else
		{
			0
		};

		_currentName = if (_index < (count Test_currentActiveSurfaceCharacterNames)) then
		{
			Test_currentActiveSurfaceCharacterNames select _index
		}
		else
		{
			"-"
		};
		_currentProbability = _currentProbability * 100;
//diag_log ["_currentProbability",_currentProbability];
//diag_log ["_currentName",_currentName];

		_probabilitySliderControl = _display displayCtrl (1007 + _idcOffset);
		_probabilitySliderControl sliderSetRange [0,100];
		_probabilitySliderControl sliderSetPosition _currentProbability;

		_clutterProbabilityControl = _display displayCtrl (1001 + _idcOffset);
		_clutterProbabilityControl ctrlSetText (_currentProbability toFixed 0);
		_clutterProbabilityControl ctrlSetTooltip "Value in percentage";

		_clutterNameControl = _display displayCtrl (1002 + _idcOffset);
		_clutterNameControl ctrlSetText _currentName;
		_clutterNameControl ctrlSetTooltip _currentName;

		_scaleMinControl = _display displayCtrl (1004 + _idcOffset);
		_scaleMinControl ctrlSetText "100";//(_scaleMinControlValue toFixed 0);
		_scaleMinControl ctrlSetTooltip "Value in percentage";

		_scaleMaxControl = _display displayCtrl (1006 + _idcOffset);
		_scaleMaxControl ctrlSetText "100";//(_scaleMaxControlValue toFixed 0);
		_scaleMaxControl ctrlSetTooltip "Value in percentage";

		if (_action == "onLoad") then
		{
			_checkBoxControl ctrlAddEventHandler
			[
				"CheckedChanged",
				format ["[_this,'%1',%2] call Test_fnc_checkBoxChangedOnLeftBox",_display,_idcOffset]
			];

			_clutterProbabilityControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'clutterProbability'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset]];
			_scaleMinControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'scaleMin'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset]];
			_scaleMaxControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'scaleMax'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset]];

			_probabilitySliderControl ctrlAddEventHandler
			[
				"SliderPosChanged",
				format ["[_this,'%1',%2] call Test_fnc_sliderChangedOnLeftBox",_display,_idcOffset]
			];
		};
	};

	[] call TEST_fnc_refreshClutterComposition;

//	{
//		_probability = _x;
//		_name = _names select _forEachIndex;
//
//		_idcOffset = (_forEachIndex + 1) * 100;
//
//		_clutterProbabilityControl = _display displayCtrl (1001 + _idcOffset);
//		_clutterProbabilityControl ctrlSetText ((_probability * 100) toFixed 0);
//
//		_clutterNameControl = _display displayCtrl (1002 + _idcOffset);
//		_clutterNameControl ctrlSetText _name;
//	} forEach _probabilites;

	_listBox = _display displayCtrl 100;
	_listBox lbAdd "Empty";

	{
		_model = _x;

		_text = _model;

		_listBox lbAdd _text;
//		_index = lbAdd [_listBox,_text];
	} forEach TEST_uniqueClutterModelsSorted;
};

///////////////////////////////////////////////////////////////////////////////

createDialog "TEST_SelectSurfaceCharacterTemplateDialog";
//createDialog "Test_TweakClutterCompositionDialog";

//Action keys: https://community.bistudio.com/wiki/inputAction/actions
player addAction ["Tweak clutter composition",'createDialog "Test_TweakClutterCompositionDialog";',nil,9998,true,false,""];
player addAction ["Select surface character template",'createDialog "TEST_SelectSurfaceCharacterTemplateDialog";',nil,9988,true,false,""];
player addAction ["Preview all surface characters",'[] call TEST_fnc_previewAllSurfaceCharacters;',nil,9978,true,false,""];

player addAction ["Splendid camera","0 = [46] spawn BIS_fnc_camera;",nil,9959,true,false,""];

player addAction ["Back to editor","endmission 'End1'",nil,1,true,false,""];

//hint "done";