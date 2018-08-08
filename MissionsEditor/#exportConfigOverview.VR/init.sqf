startLoadingScreen ["WAIT",""];

_uniqueOnly = false;
_uniqueOnly = true;

_rootClass = "CfgAmmo";
_configParameter = "hit";

_rootClass = "CfgVehicles";
_configParameter = "threat";
//_configParameter = "cost";
//_configParameter = "driverCanSee";
//_configParameter = "gunnerCanSee";
//_configParameter = "commanderCanSee";
//_configParameter = "normalSpeedForwardCoef";
//_configParameter = "slowSpeedForwardCoef";
//_configParameter = "wheelDamageThreshold";//bugged
//_configParameter = "wheelDamageRadiusCoef";//bugged
//_configParameter = "terrainCoef";//bugged
//_configParameter = "fuelCapacity";
//_configParameter = "camouflage";
//_configParameter = "accuracy";
//_configParameter = "audible";
//_configParameter = "sensitivity";
//_configParameter = "sensitivityEar";

//CfgAmmo
//CfgMagazines
//CfgWeapons
//CfgVehicles
_return = "ERROR";
_return = [_rootClass,_configParameter,_uniqueOnly] call compile preprocessFileLineNumbers "createConfigOverview.sqf";

endLoadingScreen;

copyToClipboard _return;
endMission "END1";
