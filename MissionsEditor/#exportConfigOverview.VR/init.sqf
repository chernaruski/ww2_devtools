startLoadingScreen ["WAIT",""];

//CfgAmmo
//CfgMagazines
//CfgWeapons
//CfgVehicles
_return = "ERROR";
_return = ["CfgAmmo","hit"] call compile preprocessFileLineNumbers "createConfigOverview.sqf";

endLoadingScreen;

copyToClipboard _return;
endMission "END1";
