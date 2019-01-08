// Constants
_CRLF = toString [0x0D,0x0A];
_TAB = toString [0x09];

TEST_fnc_initFilterModels =
{
	TEMP_ModelClasses_All = [];

	TEMP_ModelClasses_Vegetation_Clutter = [];
//	TEMP_ModelClasses_Vegetation_Bocage = [];
	TEMP_ModelClasses_Vegetation_Bushes = [];
	TEMP_ModelClasses_Vegetation_Trees = [];
	TEMP_ModelClasses_Vegetation_Burnt = [];
	TEMP_ModelClasses_Vegetation_Plants = [];

	//configFile
	_modelPropertiesConfig = missionConfigFile/"ModelProperties";

	for "_i" from (0) to ((count _modelPropertiesConfig) - 1) do
	{
		private _modelPropertyConfig = _modelPropertiesConfig select _i;

		if (isClass _modelPropertyConfig) then
		{
			_modelPropertyClass = toLower (configName _modelPropertyConfig);

			TEMP_ModelClasses_All pushBack _modelPropertyClass;

			switch (true) do
			{
				case ((_modelPropertyClass find "burnt_") != -1):				{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "trunk_") != -1):				{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "vegetation_if_misc_") != -1):			{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "vegetation_if_miscwinter_") != -1):		{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "deadtrees_") != -1):				{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "plants2_misc_misc_") != -1):			{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "plants_pmc_misc_misc_") != -1):		{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_treeparts_d_") != -1):			{TEMP_ModelClasses_Vegetation_Burnt pushBack _modelPropertyClass};

				case ((_modelPropertyClass find "clutter_c_") != -1):				{TEMP_ModelClasses_Vegetation_Clutter pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "clutters_") != -1):				{TEMP_ModelClasses_Vegetation_Clutter pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "clutter_") != -1):				{TEMP_ModelClasses_Vegetation_Clutter pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "clutterswinter_") != -1):			{TEMP_ModelClasses_Vegetation_Clutter pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "weeds_") != -1):				{TEMP_ModelClasses_Vegetation_Clutter pushBack _modelPropertyClass};

				case ((_modelPropertyClass find "bush_b_") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "bush_bw_") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_bush") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "bushes_") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "busheswinter_") != -1):			{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "bocage_") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "earth_mounds_") != -1):			{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_crop_b_") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_shrub_b_") != -1):				{TEMP_ModelClasses_Vegetation_Bushes pushBack _modelPropertyClass};

				case ((_modelPropertyClass find "tree_t_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "forest_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_tree_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "trees_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "treeswinter_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_crop_t_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_lianas_d_") != -1):				{TEMP_ModelClasses_Vegetation_Trees pushBack _modelPropertyClass};

				case ((_modelPropertyClass find "plants_p_") != -1):				{TEMP_ModelClasses_Vegetation_Plants pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "plant_p_") != -1):				{TEMP_ModelClasses_Vegetation_Plants pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "plants_") != -1):				{TEMP_ModelClasses_Vegetation_Plants pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_plant_p_") != -1):				{TEMP_ModelClasses_Vegetation_Plants pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "_plants2_plant_") != -1):			{TEMP_ModelClasses_Vegetation_Plants pushBack _modelPropertyClass};
				case ((_modelPropertyClass find "wheat") != -1):				{TEMP_ModelClasses_Vegetation_Plants pushBack _modelPropertyClass};
				default {};
			};
		};
	};
};

TEST_fnc_createNamedPropertiesOutput =
{
	_LODs = [];
	_namedPropertiesPerLOD = [];

	//configFile
	_modelPropertiesConfig = missionConfigFile/"ModelProperties";

	for "_i" from (0) to ((count _modelPropertiesConfig) - 1) do
	{
		private _modelPropertyConfig = _modelPropertiesConfig select _i;

		if (isClass _modelPropertyConfig) then
		{
			for "_j" from (0) to ((count _modelPropertyConfig) - 1) do
			{
				private _modelParameterConfig = _modelPropertyConfig select _j;

				if (isClass _modelParameterConfig) then
				{
					_modelLODClass = toLower (configName _modelParameterConfig);

					_LODIndex = _LODs find _modelLODClass;

					if (_LODIndex == -1) then
					{
						_LODs pushBack _modelLODClass;
						_namedProperties = [];

						for "_k" from (0) to ((count _modelParameterConfig) - 1) do
						{
							_namedPropertyConfig = _modelParameterConfig select _k;
							_namedProperty = configName _namedPropertyConfig;

							_namedProperties pushBack _namedProperty;

						};

						_namedProperties sort true;

						_namedPropertiesPerLOD pushBack _namedProperties;
					}
					else
					{
						_namedProperties = _namedPropertiesPerLOD select _LODIndex;

						for "_k" from (0) to ((count _modelParameterConfig) - 1) do
						{
							_namedPropertyConfig = _modelParameterConfig select _k;
							_namedProperty = configName _namedPropertyConfig;

							_namedProperties pushBackUnique _namedProperty;
						};

						_namedProperties sort true;

						_namedPropertiesPerLOD set [_LODIndex,_namedProperties];
					};
				};
			};
		};
	};

	{
		_LOD = _x;
		_namedProperties = _namedPropertiesPerLOD select _forEachIndex;

		diag_log [_LOD,_namedProperties];
	} forEach _LODs;
};

TEST_fnc_createCountedNamedPropertiesOutput =
{
	_LODs = [];
	_namedPropertiesPerLOD = [];
	_namedPropertiesCountPerLOD = [];

	//configFile
	_modelPropertiesConfig = missionConfigFile/"ModelProperties";

	for "_i" from (0) to ((count _modelPropertiesConfig) - 1) do
	{
		private _modelPropertyConfig = _modelPropertiesConfig select _i;

		if (isClass _modelPropertyConfig) then
		{
			for "_j" from (0) to ((count _modelPropertyConfig) - 1) do
			{
				private _modelParameterConfig = _modelPropertyConfig select _j;

				if (isClass _modelParameterConfig) then
				{
					_modelLODClass = toLower (configName _modelParameterConfig);

					_LODIndex = _LODs find _modelLODClass;

					if (_LODIndex == -1) then
					{
						_LODs pushBack _modelLODClass;
						_namedProperties = [];
						_namedPropertiesCount = [];

						for "_k" from (0) to ((count _modelParameterConfig) - 1) do
						{
							_namedPropertyConfig = _modelParameterConfig select _k;
							_namedProperty = configName _namedPropertyConfig;

							_namedProperties pushBack _namedProperty;
							_count = 1;
							_namedPropertiesCount pushBack _count;

						};

//						_namedProperties sort true;

						_namedPropertiesPerLOD pushBack _namedProperties;
						_namedPropertiesCountPerLOD pushBack _namedPropertiesCount;
//diag_log ["_namedPropertiesCount 1",_namedPropertiesCount];
//diag_log ["_namedPropertiesCountPerLOD 1",_namedPropertiesCountPerLOD];
					}
					else
					{
						_namedProperties = _namedPropertiesPerLOD select _LODIndex;
						_namedPropertiesCount = _namedPropertiesCountPerLOD select _LODIndex;
//diag_log ["_namedPropertiesCount 2",_namedPropertiesCount];
//diag_log ["_namedPropertiesCountPerLOD 2",_namedPropertiesCountPerLOD];

						for "_k" from (0) to ((count _modelParameterConfig) - 1) do
						{
							_namedPropertyConfig = _modelParameterConfig select _k;
							_namedProperty = toLower (configName _namedPropertyConfig);

							_namedProperties pushBackUnique _namedProperty;
							
							_namedPropertyIndex = _namedProperties find _namedProperty;

							if (_namedPropertyIndex == -1) then
							{
								_namedPropertiesCount pushBack 1;
							}
							else
							{
								_currentNamedPropertyCount = _namedPropertiesCount select _namedPropertyIndex;
								if (isNil "_currentNamedPropertyCount") then {_currentNamedPropertyCount = 0;};
								_namedPropertiesCount set [_namedPropertyIndex,_currentNamedPropertyCount + 1];
							};
						};

//						_namedProperties sort true;

						_namedPropertiesPerLOD set [_LODIndex,_namedProperties];
						_namedPropertiesCountPerLOD set [_LODIndex,_namedPropertiesCount];
//diag_log ["_namedPropertiesCount 3",_namedPropertiesCount];
//diag_log ["_namedPropertiesCountPerLOD 3",_namedPropertiesCountPerLOD];
					};
				};
			};
		};
	};

//	_LODs sort true;
	
	_allNamedProperties = [];
	{
		_namedProperties = _x;
		{
			_namedProperty = toLower _x;
			_allNamedProperties pushBackUnique _namedProperty;
		} forEach _namedProperties
	} forEach _namedPropertiesPerLOD;

	_allNamedProperties sort true;

	_title = "XXX" + "	";
	{
		_namedPropertyName = _x;
		_title = _title + _namedPropertyName + "	";
	} forEach _allNamedProperties;

	diag_log _title;

	{
		_LOD = _x;
		_namedProperties = _namedPropertiesPerLOD select _forEachIndex;
		_namedPropertiesCount = _namedPropertiesCountPerLOD select _forEachIndex;
//		diag_log ["_namedProperties",_namedProperties];
//		diag_log ["_namedPropertiesCount",_namedPropertiesCount];

		_output = "";
		{
			_namedPropertyName = toLower _x;
			
			_namedPropertyIndex = _namedProperties find _namedPropertyName;
			
			if (_namedPropertyIndex == -1) then
			{
				_output = _output + "-";
			}
			else
			{
				_output = _output + str (_namedPropertiesCount select _namedPropertyIndex);
			};
			
			_output = _output + "	";
		} forEach _allNamedProperties;

//		{
//			_namedPropertyName = _x;
//			_namedPropertyCount = _namedPropertiesCount select _forEachIndex;
//			_output = _output + format ["%1x %2 ",_namedPropertyCount,_namedPropertyName];
//		} forEach _namedProperties;

		diag_log [_LOD,_output];
	} forEach _LODs;
};

TEST_fnc_determineLODs =
{
	_modelPropertyClasses = _this select 0;

	_LODs = [];

	{
		_modelPropertyClass = _x;

		_modelPropertyConfig = (missionConfigFile/"ModelProperties"/_modelPropertyClass);

		for "_i" from (0) to ((count _modelPropertyConfig) - 1) do
		{
			private _modelProperty = _modelPropertyConfig select _i;

			if (isClass _modelProperty) then
			{
				_modelLODClass = toLower (configName _modelProperty);

				_LODs pushBackUnique _modelLODClass;
			};
		};
	} forEach _modelPropertyClasses;

	_LODs sort true;

	_LODs
};

TEST_fnc_determineNamedPropertiesOfLODs =
{
	_modelPropertyClasses = _this select 0;
	_LODs = _this select 1;

	_namedPropertiesOfLODs = [];
	//init array
	{
		_namedPropertiesOfLODs pushBack [];
	} forEach _LODs;

	{
		_modelPropertyClass = _x;

		_modelPropertyConfig = (missionConfigFile/"ModelProperties"/_modelPropertyClass);


		{
			_LOD = _x;

			_LODConfig = _modelPropertyConfig/_LOD;
//			_namedPropertyNames = [];
			_namedPropertyNames = _namedPropertiesOfLODs select _forEachIndex;

			if (isClass _LODConfig) then
			{
				_tempArray = [];

				for "_i" from (0) to ((count _LODConfig) - 1) do
				{
					private _namedPropertyConfig = _LODConfig select _i;

					if (!isClass _namedPropertyConfig) then
					{
						_namedPropertyName = toLower (configName _namedPropertyConfig);

						_namedPropertyNames pushBackUnique _namedPropertyName;
					};
				};
			};

			_namedPropertyNames sort true;

			_namedPropertiesOfLODs set [_forEachIndex,_namedPropertyNames];

		} forEach _LODs;
	} forEach _modelPropertyClasses;

	_namedPropertiesOfLODs
};

TEST_fnc_createSheetOutputPerModel =
{
	_modelPropertyClass = _this select 0;
	_outputString = _this select 1;
	_LODs = _this select 2;
	_namedPropertiesOfLODs = _this select 3;

	_modelPropertyConfig = (missionConfigFile/"ModelProperties"/_modelPropertyClass);

	_modelClass = configName _modelPropertyConfig;

	_outputString = _outputString + _modelClass + _TAB;

	{
		_LOD = _x;

		_LODConfig = _modelPropertyConfig/_LOD;
//		_namedPropertyNames = [];
		_namedPropertyNames = _namedPropertiesOfLODs select _forEachIndex;

		_outputString = _outputString + "#" + _TAB;

		{
			_namedPropertyName = _x;

			if (isClass _LODConfig) then
			{
				_namedPropertyValue = getText (_modelPropertyConfig/_LOD/_namedPropertyName);
				if (_namedPropertyValue == "") then {_namedPropertyValue = "-";};
				_outputString = _outputString + _namedPropertyValue;
			}
			else
			{
				_outputString = _outputString + "-";
			};

			_outputString = _outputString + _TAB;
		} forEach _namedPropertyNames;
	} forEach _LODs;

	_outputString = _outputString + _CRLF;

	_outputString
};

TEST_fnc_createSheetOutput =
{
	_modelPropertyClasses = _this select 0;

	_LODs = [_modelPropertyClasses] call TEST_fnc_determineLODs;
	_namedPropertiesOfLODs = [_modelPropertyClasses,_LODs] call TEST_fnc_determineNamedPropertiesOfLODs;

	//Create header
	_outputString = "Model" + _TAB;

	{
		_LOD = _LODs select _forEachIndex;
		_namedPropertyNames = _x;

		_outputString = _outputString + _LOD + _TAB;

		{
			_namedPropertyName = _x;
			_outputString = _outputString + _namedPropertyName + _TAB;
		} forEach _namedPropertyNames;
	} forEach _namedPropertiesOfLODs;

	_outputString = _outputString + _CRLF;

	{
		_outputString = [_x,_outputString,_LODs,_namedPropertiesOfLODs] call TEST_fnc_createSheetOutputPerModel;
	} forEach _modelPropertyClasses;

	copyToClipboard _outputString
};

TEST_fnc_createModelList =
{
	_modelPropertyClasses = _this select 0;

	//Create header
	_outputString = "Models" + _CRLF;// + _TAB;

	{
		_modelPropertyClass = _x;

		_modelName = getText (missionConfigFile/"ModelProperties"/_modelPropertyClass/"file");

		_outputString = _outputString + _modelName + _CRLF;
	} forEach _modelPropertyClasses;

	copyToClipboard _outputString
};

TEST_fnc_determineNamedPropertyValuesPerModel =
{
	_modelPropertyClasses = _this select 0;
	_LODs = _this select 1;
	_namedPropertiesOfLODs = _this select 2;

	_namedPropertiesValues = [];
	//init array
	{
		_LODIndex = _forEachIndex;
		_LODNamedPropertyDefinitions = [];

		_namedPropertiesCurrentLOD = _namedPropertiesOfLODs select _LODIndex;

		{
//			_namedProperty = _namedPropertiesOfLODs select _forEachIndex;

			_LODNamedPropertyDefinitions pushBack [_x,[]];
		} forEach _namedPropertiesCurrentLOD;

		_namedPropertiesValues pushBack [_x,_LODNamedPropertyDefinitions];
	} forEach _LODs;

//diag_log _namedPropertiesValues;

	{
		_modelPropertyClass = _x;

		_modelPropertyConfig = (missionConfigFile/"ModelProperties"/_modelPropertyClass);

		_modelClass = configName _modelPropertyConfig;

		{
			_LOD = _x;

			_LODConfig = _modelPropertyConfig/_LOD;
			_LODIndex = _forEachIndex;

			_namedPropertyDefinitionsCurrentLOD = _namedPropertiesValues select _LODIndex;
			_currentLOD = _namedPropertyDefinitionsCurrentLOD select 0;
			_namedPropertyDefinitions = _namedPropertyDefinitionsCurrentLOD select 1;
//diag_log ["_currentLOD",_currentLOD];
//diag_log ["_namedPropertyDefinitions",_namedPropertyDefinitions];

			{
				_namedPropertyName = _x select 0;
//diag_log ["_namedPropertyName",_namedPropertyName];
				_namedPropertyValues = _x select 1;
//diag_log ["_namedPropertyValues",_namedPropertyValues];

				if (isClass _LODConfig) then
				{
					_namedPropertyValue = getText (_modelPropertyConfig/_LOD/_namedPropertyName);
					if (_namedPropertyValue != "") then
					{
						_namedPropertyValues pushBackUnique _namedPropertyValue;
					};
				};

				_namedPropertyValues sort true;

				_namedPropertyDefinitions set [_forEachIndex,[_namedPropertyName,_namedPropertyValues]];
			} forEach _namedPropertyDefinitions;
		} forEach _LODs;
	} forEach _modelPropertyClasses;

	_namedPropertiesValues
};

TEST_fnc_createNamedPropertiesOverview =
{
	_modelPropertyClasses = _this select 0;

	_LODs = [_modelPropertyClasses] call TEST_fnc_determineLODs;
	_namedPropertiesOfLODs = [_modelPropertyClasses,_LODs] call TEST_fnc_determineNamedPropertiesOfLODs;

	_namedPropertiesValues = [_modelPropertyClasses,_LODs,_namedPropertiesOfLODs] call TEST_fnc_determineNamedPropertyValuesPerModel;

	//Create header
	_outputString = "LODs" + _TAB + "Properties" +_CRLF;

	{
		_LOD = _x select 0;
		_namedPropertyDefinitions = _x select 1;
//diag_log ["_LOD",_LOD];
//diag_log ["_namedPropertyDefinitions",_namedPropertyDefinitions];

		_outputString = _outputString + _LOD + _CRLF;

		{
			_namedPropertyName = _x select 0;
			_namedPropertyValues = _x select 1;
//diag_log ["_namedPropertyName",_namedPropertyName];
//diag_log ["_namedPropertyValues",_namedPropertyValues];

			_outputString = _outputString + _TAB + _namedPropertyName;

			{
				_namedPropertyValue = _x;

				_outputString = _outputString + _TAB + _namedPropertyValue;
			} forEach _namedPropertyValues;

			_outputString = _outputString + _CRLF;
		} forEach _namedPropertyDefinitions;
	} forEach _namedPropertiesValues;


	copyToClipboard _outputString
};

_start = diag_tickTime;
//[] call TEST_fnc_createNamedPropertiesOutput;
//[] call TEST_fnc_createCountedNamedPropertiesOutput;
[] call TEST_fnc_initFilterModels;
_stop = diag_tickTime;
diag_log format ["%1",_stop - _start];

//[TEMP_ModelClasses_Vegetation_Clutter] call TEST_fnc_createSheetOutput;
//[TEMP_ModelClasses_Vegetation_Bushes] call TEST_fnc_createSheetOutput;
//[TEMP_ModelClasses_Vegetation_Trees] call TEST_fnc_createSheetOutput;
//[TEMP_ModelClasses_Vegetation_Burnt] call TEST_fnc_createSheetOutput;
//[TEMP_ModelClasses_Vegetation_Plants] call TEST_fnc_createSheetOutput;

//[TEMP_ModelClasses_Vegetation_Clutter] call TEST_fnc_createModelList;
//[TEMP_ModelClasses_Vegetation_Bushes] call TEST_fnc_createModelList;
//[TEMP_ModelClasses_Vegetation_Trees] call TEST_fnc_createModelList;
//[TEMP_ModelClasses_Vegetation_Burnt] call TEST_fnc_createModelList;
[TEMP_ModelClasses_Vegetation_Plants] call TEST_fnc_createModelList;

//[TEMP_ModelClasses_Vegetation_Trees] call TEST_fnc_createNamedPropertiesOverview;
//[TEMP_ModelClasses_All] call TEST_fnc_createNamedPropertiesOverview;