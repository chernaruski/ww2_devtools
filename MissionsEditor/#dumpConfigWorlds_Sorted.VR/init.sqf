_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

TEST_IncludedTerrains = ["DefaultWorld","CAWorld","Stratis","Altis","Chernarus","Tanoa","Baranow","Colleville","Ivachev","Panovo","Staszow","I44_Merderet","I44_Omaha_v2","MCN_Neaville","PLR_Bulge"];

TEST_IncludedTerrains = TEST_IncludedTerrains apply {toLower _x};

_rootClass = "cfgWorlds";

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private _class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private _className = configName _class;

		if ((toLower _className) in TEST_IncludedTerrains) then
		{
			_myInitString = format ["A3_cfgWorlds_%1_Sorted_Inherited.cpp",_className];
			"ConfigDumpFileIO" callExtension ("open:" + _myInitString);

			[configFile/"cfgWorlds"/_className,true] call _fnc_configParser;

			"ConfigDumpFileIO" callExtension "close:yes";
		};
	};
};

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";
