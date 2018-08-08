TEST_IncludedVehicleTypes = [];
TEST_IncludedFactions = [];//"LIB_RKKA","LIB_NKVD","LIB_USSR_TANK_TROOPS","LIB_USSR_AIRFORCE","LIB_WEHRMACHT","LIB_PANZERWAFFE","LIB_LUFTWAFFE","LIB_FSJ","SG_STURMPANZER","SG_STURM","LIB_GUER","LIB_US_ARMY","LIB_US_TANK_TROOPS","LIB_US_AIRFORCE","LIB_US_101AB","LIB_US_82AB","LIB_DAK","LIB_NAC","LIB_US_RANGERS","LIB_UK_ARMY","LIB_CIV","LIB_FFI","LIB_MKHL","LIB_ARR","LIB_RBAF","LIB_RAF","LIB_RAAF","LIB_ACI","LIB_RKKA_w","LIB_USSR_TANK_TROOPS_w","LIB_USSR_AIRFORCE_w","LIB_WEHRMACHT_w","LIB_PANZERWAFFE_w","LIB_LUFTWAFFE_w","LIB_US_ARMY_w","LIB_US_TANK_TROOPS_w","LIB_US_AIRFORCE_w","SG_STURM_w"];
TEST_IncludeWinterType = false;

TEST_MinimumScope = 1;

TEST_CustomParameter = "picture";
//TEST_CustomParameter = "icon";

startLoadingScreen ["WAIT",""];
Test_Vehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

TEST_CustomParameter = toLower TEST_CustomParameter;

TEST_UniqueModels = [];

_export = "";

diag_log "true";

{
	private _vehicleClass = _x;
	private _model = toLower (getText (configFile/"CfgVehicles"/_vehicleClass/"model"));

	if (!(_model in TEST_UniqueModels)) then
	{
		if (!(TEST_CustomParameter in ["picture"])) then
		{
			TEST_UniqueModels pushBack _model;
		};

		_newString = format ["	class %1: %2",_vehicleClass,configName (inheritsFrom (configFile/"CfgVehicles"/_vehicleClass))] + endl;
		_newString = _newString + "	{" + endl;
		
		_customString = switch (TEST_CustomParameter) do
		{
			case "picture":		{format ["\WW2\Assets_t\Vehicles\Pictures_t\Picture_%1_ca.paa",_vehicleClass]};
			case "icon":		{format ["\WW2\Assets_t\Vehicles\Icons_t\Icon_%1_ca.paa",_vehicleClass]};
			default			{""};
		};
		
		_newString = _newString + format ["		%1 = '%2';//%3",TEST_CustomParameter,_customString,getText (configFile/"CfgVehicles"/_vehicleClass/TEST_CustomParameter)] + endl;
		_newString = _newString + "	};" + endl;

		_export = _export + _newString;
	};
} forEach Test_Vehicles;

copyToClipboard _export;

endLoadingScreen;

endMission "END1";