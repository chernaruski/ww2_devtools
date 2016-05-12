startLoadingScreen [""];
_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

//[configFile/"CfgAmmo",true] call _fnc_configParser;
//[configFile/"CfgMagazines",true] call _fnc_configParser;
//[configFile/"Mode_SemiAuto",true] call _fnc_configParser;
//[configFile/"Mode_Burst",true] call _fnc_configParser;
//[configFile/"Mode_FullAuto",true] call _fnc_configParser;
//[configFile/"CfgWeapons",true] call _fnc_configParser;
//[configFile/"CfgVehicles",false] call _fnc_configParser;

[configFile/"CfgVehicles"/"All",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Land",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"AllVehicles",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"LandVehicle",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Car",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Car_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Wheeled_APC",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Wheeled_APC_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Truck",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Truck_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Tank",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Tank_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Tracked_APC",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"APC_Tracked_01_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Air",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Helicopter",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Helicopter_Base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Helicopter_Base_H",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Plane",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Plane_Base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"UAV",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"UAV_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"UAV_02_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"StaticWeapon",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticMGWeapon",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticATWeapon",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticAAWeapon",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticCannon",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticGrenadeLauncher",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticMortar",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticSEARCHLight",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Ship",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Ship_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Boat_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"MRAP_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"MRAP_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"MRAP_03_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Offroad_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Quadbike_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Hatchback_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"SUV_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"UGV_01_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"APC_Wheeled_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"APC_Wheeled_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"APC_Wheeled_03_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Truck_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Truck_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Truck_03_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Van_01_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"APC_Tracked_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"APC_Tracked_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"APC_Tracked_03_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"MBT_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"MBT_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"MBT_03_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Heli_Attack_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Heli_Attack_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"I_Heli_light_03_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Heli_Light_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Heli_Light_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Heli_Transport_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Heli_Transport_02_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Plane_CAS_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Plane_CAS_02_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Plane_Fighter_03_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Mortar_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"HMG_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"GMG_TriPod",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"GMG_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"GMG_01_high_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"AA_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"AT_01_base_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Boat_Civil_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Boat_Armed_01_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Rubber_duck_base_F",true] call _fnc_configParser;

/*
[configFile/"CfgVehicles"/"Logic",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Motorcycle",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Bicycle",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Man",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"CAManBase",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"SoldierWB",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"B_Soldier_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"SoldierEB",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"SoldierGB",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Civilian",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Civilian_F",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"Animal",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ParachuteBase",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ParachuteWest",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ParachuteEast",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ParachuteG",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Parachute",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"NonSteerable_Parachute_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Paraglide",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Steerable_Parachute_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"LaserTarget",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"NVTarget",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ArtilleryTarget",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ArtilleryTargetW",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ArtilleryTargetE",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"PaperCar",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FireSectorTarget",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Static",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Rope",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Fortress",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Building",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"NonStrategic",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"HeliH",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Strategic",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FlagCarrierCore",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Thing",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ThingEffect",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ThingEffectLight",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ThingEffectFeather",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FxExploArmor1",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FxExploArmor2",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FxExploArmor3",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FxExploArmor4",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"FxCartridge",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"WindAnomaly",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Tracked_APC",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Wheeled_APC",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Bus",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Tractor",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"StaticShip",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Structure",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"fortification",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Tent",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Train",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Gate",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Wreck_Base",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"ReammoBox",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"HouseBase",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Ruins",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"House_Small",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"House",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Church",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Wall",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Fence",true] call _fnc_configParser;
*/
endLoadingScreen;

endMission "END1";