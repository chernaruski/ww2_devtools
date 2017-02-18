TEST_IncludedAuthors = ["","awar & lennard","awar","el tyranos","lennard","lib","lodu & el tyranos","lodu & tierprot","lodu","lodu, tierprot & shemich","stagler","tierprot"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

[configFile/"CfgVehicles"] call compile preprocessFileLineNumbers "dumpConfig.sqf";

endMission "END1";