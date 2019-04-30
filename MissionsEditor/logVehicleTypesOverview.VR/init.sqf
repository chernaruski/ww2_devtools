startLoadingScreen ["PLEASE_WAIT"];

TAG_AllVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";



TAG_fnc_determineVehicleType = compile preprocessFileLineNumbers "determineVehicleType.sqf";
TAG_fnc_logVehicleOverviewToRpt = compile preprocessFileLineNumbers "logVehicleOverviewToRpt.sqf";
TAG_fnc_createVehicleListOfGivenFaction = compile preprocessFileLineNumbers "createVehicleListOfGivenFaction.sqf";
TAG_fnc_concatArrayAsString = compile preprocessFileLineNumbers "concatArrayAsString.sqf";
_rootClass = "CfgFactionClasses";

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_factionConfig"];
	_factionConfig = (configFile/_rootClass) select _i;

	if (isClass _factionConfig) then
	{
		private["_faction"];
		_faction = toLower (configName _factionConfig);

		if (!(_faction in ["default","training","no_category","events","intel","objectmodifiers","groupmodifiers","strategicmap","sites","supports","effects","modes","multiplayer","none","firingdrills","virtual_f","interactive_f","objectives","curator","ordnance","smokeshells","chemlights","flares","respawn","animals","audio","environment","missionflow"])) then
		{
			private["_vehicles","_sideNumber","_side"];
			_vehicles = [_faction,TAG_AllVehicles] call TAG_fnc_createVehicleListOfGivenFaction;

			_sideNumber = getNumber (configFile/"CfgFactionClasses"/_faction/"side");

			_side = switch (_sideNumber) do
			{
				case 0:	{"EAST"};
				case 1:	{"WEST"};
				case 2:	{"GUER"};
				case 3:	{"CIV"};
				default	{"NONE"};
			};
			diag_log [getText (configFile/"CfgFactionClasses"/_faction/"displayName") + " - " + _side];

			[_vehicles,_faction] call TAG_fnc_logVehicleOverviewToRpt;
			diag_log "";
		};
	};
};
endLoadingScreen;

endMission "END1";