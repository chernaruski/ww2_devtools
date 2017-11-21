TEST_IncludedAuthors = ["","Alan","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","LODU & El Tyranos","LODU & Lennard","LODU & tierprot","LODU","LODU, tierprot & Shemich","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","Stagler","Swurvin","tierprot & El Tyranos","tierprot","ZVER, El Tyranos"];
TEST_IncludedAuthors = TEST_IncludedAuthors + ["","invasion 1944 team"];

Test_createMissingOnly = true;


Test_restrictedModels =
[
//	"\A3\Weapons_f\dummyweapon.p3d",
	"\A3\Weapons_F\empty.p3d",
	"\A3\Weapons_f\empty",
	"\A3\Weapons_f\laserTgt.p3d",
	"\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d",
	""
];
Test_blacklistClassTree =
[
//	"WeaponHolder",
//	"Bag_Base",
	"LaserTarget"
];
Test_whiteListClassTree =
[
//	"Bag_Base"
];

///////////////////////////////////////////////////////////////////////////////

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

//_handle = [nil,"vehicles"] execVM "fn_exportEditorPreviews.sqf";
_handle = [nil,"props"] execVM "fn_exportEditorPreviews.sqf";

waitUntil {scriptDone _handle};

endMission "END1";
