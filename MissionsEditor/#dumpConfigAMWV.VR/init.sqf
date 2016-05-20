(configFile/"CfgPatches") call compile preprocessFileLineNumbers "dumpConfig.sqf";
(configFile/"CfgAmmo") call compile preprocessFileLineNumbers "dumpConfig.sqf";
(configFile/"CfgMagazines") call compile preprocessFileLineNumbers "dumpConfig.sqf";
(configFile/"CfgWeapons") call compile preprocessFileLineNumbers "dumpConfig.sqf";
(configFile/"CfgVehicles") call compile preprocessFileLineNumbers "dumpConfig.sqf";
//_handle = configFile execVM "dumpConfig.sqf";

endMission "END1";