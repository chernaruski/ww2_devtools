//Test_createMissingOnly = false;
Test_createMissingOnly = true;

///////////////////////////////////////////////////////////////////////////////

//Test_exportType = "vehicles";
Test_exportType = "props";
//Test_exportType = "all";

///////////////////////////////////////////////////////////////////////////////

Test_doListedDLCsOnly =
[
	"Enoch"
];

Test_doListedClassesOnly =
[

];

Test_restrictedModels =
[
//	"\A3\Weapons_f\dummyweapon.p3d",
	"\A3\Weapons_f\laserTgt.p3d",
	"\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d",
	""
];
Test_blacklistClassTree =
[
//	"CAManBase",
//	"WeaponHolder",
//	"Bag_Base",
	"LaserTarget"
];
Test_whiteListClassTree =
[
//	"LIB_Plane_base"
//	"Bag_Base"
];

Test_dummyEditorPreviewImages =
[
	"\a3\editorpreviews_f\data\cfgvehicles\default\armor.jpg",
	"\a3\editorpreviews_f\data\cfgvehicles\default\car.jpg",
	"\a3\editorpreviews_f\data\cfgvehicles\default\man.jpg",
	"\a3\editorpreviews_f\data\cfgvehicles\default\prop.jpg",
	"\a3\editorpreviews_f\data\cfgvehicles\default\ship.jpg"
];

///////////////////////////////////////////////////////////////////////////////

if (Test_createMissingOnly) then
{
	_dummy = preprocessFile "missing.sqm";
	_dummy = execVM "missing.sqm";
};

_handle = [nil,Test_exportType] execVM "fn_exportEditorPreviews.sqf";

waitUntil {scriptDone _handle};

endLoadingScreen;

endMission "END1";
