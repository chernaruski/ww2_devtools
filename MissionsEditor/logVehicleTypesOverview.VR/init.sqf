_exclude = ["default","training","no_category","events","intel","objectmodifiers","groupmodifiers","strategicmap","sites","supports","effects","modes","multiplayer","none","firingdrills","virtual_f","interactive_f","objectives","curator","ordnance","smokeshells","chemlights","flares","respawn","animals","audio","environment","missionflow","ambient","keyframeanimation"];
//native A3 factions
_exclude = _exclude + ["blu_f","opf_f","ind_f","ind_g_f","civ_f","blu_g_f","opf_g_f","ind_c_f","blu_t_f","blu_ctrg_f","blu_gen_f","opf_t_f","opf_v_f","combatpatrol","civ_idap_f","warlords"];

///////////////////////////////////////////////////////////////////////////////

startLoadingScreen ["PLEASE_WAIT"];

TAG_export = "";

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

		if (!(_faction in _exclude)) then
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
			TAG_export = TAG_export + format ["%1 - %2 - %3",getText (configFile/"CfgFactionClasses"/_faction/"displayName"),_faction,_side] + endl;

			[_vehicles,_faction] call TAG_fnc_logVehicleOverviewToRpt;

			TAG_export = TAG_export + endl;
		};
	};
};

copyToClipboard TAG_export;

endLoadingScreen;

endMission "END1";