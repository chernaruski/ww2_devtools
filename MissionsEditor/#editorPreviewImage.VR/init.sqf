TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors + ["","invasion 1944 team","swurvin & Invasion 1944 team","invasion 1944 team & rjw"];

///////////////////////////////////////////////////////////////////////////////

Test_doConfigExport = false;
//Test_doConfigExport = true;

Test_createMissingOnly = false;
Test_createMissingOnly = true;

///////////////////////////////////////////////////////////////////////////////

Test_exportType = "vehicles";
Test_exportType = "props";
Test_exportType = "all";

///////////////////////////////////////////////////////////////////////////////

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
	"Bag_Base"
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

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

if (Test_createMissingOnly) then
{
	_dummy = preprocessFile "missing.sqm";
	_dummy = execVM "missing.sqm";
};

_handle = [nil,Test_exportType] execVM "fn_exportEditorPreviews.sqf";

waitUntil {scriptDone _handle};

endLoadingScreen;

endMission "END1";
