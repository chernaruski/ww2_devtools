TEST_IncludedAuthors = ["","awar & lennard","awar","el tyranos","lennard","lib","lodu & el tyranos","lodu & tierprot","lodu","lodu, tierprot & shemich","stagler","tierprot"];
//TEST_IncludedAuthors = ["","invasion 1944 team"];


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
	"Bag_Base"
];

///////////////////////////////////////////////////////////////////////////////

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

//_handle = [nil,"vehicles"] execVM "fn_exportEditorPreviews.sqf";
_handle = [nil,"props"] execVM "fn_exportEditorPreviews.sqf";

waitUntil {scriptDone _handle};

endMission "END1";
