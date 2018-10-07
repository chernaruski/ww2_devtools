//_handle = configFile execVM "dumpConfig.sqf";

startLoadingScreen ["Loading My Mission"];

[] spawn
{
	waitUntil {inputAction "ingamePause" > 0};

	endLoadingScreen;
	"ConfigDumpFileIO" callExtension "close:yes";
	endLoadingScreen;
	endMission "END1";
	endLoadingScreen;
};

_starTick = diag_tickTime;

//[configFile] call compile preprocessFileLineNumbers "dumpConfig.sqf";
//[configFile/"CfgDifficultyPresets"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"CfgDifficulties"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"SteamManagerConfig"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"CfgTextureToMaterial"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"CfgMineTriggers"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"CfgMagazines"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"Mode_SemiAuto"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";

//[configFile/"cfgWeapons"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";
//[configFile/"cfgAmmo"] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";

[configFile] call compile preprocessFileLineNumbers "aiocfg_mbfileio.sqf";

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

[] spawn
{
	while {true} do
	{
		sleep 1;
		endLoadingScreen;
		"ConfigDumpFileIO" callExtension "close:yes";
		endLoadingScreen;
		endMission "END1";
		endLoadingScreen;
	};
};
