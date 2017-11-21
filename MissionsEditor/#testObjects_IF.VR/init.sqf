//TEST_IncludedVehicleTypes = [];
//TEST_IncludedFactions = [];
//TEST_IncludeWinterType = false;
TEST_IncludedAuthors = ["","Alan","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","LODU & El Tyranos","LODU & Lennard","LODU & tierprot","LODU","LODU, tierprot & Shemich","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","Stagler","Swurvin","tierprot & El Tyranos","tierprot","ZVER, El Tyranos"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen ["WAIT",""];
MyVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = (getMarkerPos "target") select 0;
	_yCoord = (getMarkerPos "target") select 1;
	{
		diag_log "";
		diag_log _x;

		_vehicle = createVehicle [_x,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		deleteVehicle _vehicle;
	} forEach MyVehicles;
};
endLoadingScreen;

endMission "END1";