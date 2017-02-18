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

///////////////////////////////////////////////////////////////////////////////

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

[nil,"vehicles"] execVM "fn_exportEditorPreviews.sqf";
//[nil,"props"] execVM "fn_exportEditorPreviews.sqf";

endMission "END1";
