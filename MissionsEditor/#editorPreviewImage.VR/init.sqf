TEST_IncludedAuthors = [];
TEST_IncludedAuthors = TEST_IncludedAuthors + ["","alan","anitsoy","awar","awar & [tf]nkey & turkishsoap","awar & el tyranos","awar & i44","awar & joarius","awar & jove chiere","awar & lennard","awar & shvetz","awar & snippers","beton","bi & jones","bi & lennard","crotmoul","csa 38","csa38","diabolical","el tyranos","el tyranos & jove chiere","el tyranos & lennard","el tyranos, pazel","french baguettes crotmoul and el tyranos","gstavo","i44","i44 & ifa3 teams","i44 team","ifa3 team","invasion 1944 team","invasion 44","joarius","jove chiere","jove chiere & el tyranos","justin","justin n.","kutejnikov","len","lennard","lennard & el tyranos","lodu","lodu & el tyranos","lodu & lennard","lodu & tierprot","lodu, tierprot & shemich","luchador, el tyranos","opx","rauenhofer","reyhard & joarius","stagler","swurvin","tierprot","tierprot & el tyranos","zver, el tyranos"];
//TEST_IncludedAuthors = TEST_IncludedAuthors + ["","invasion 1944 team"];

Test_createMissingOnly = true;


Test_restrictedModels =
[
//	"\A3\Weapons_f\dummyweapon.p3d",
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
