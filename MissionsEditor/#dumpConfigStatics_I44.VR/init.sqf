TEST_IncludedAuthors = ["","invasion 1944 team"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

[configFile/"CfgVehicles"] call compile preprocessFileLineNumbers "dumpConfig.sqf";

endMission "END1";