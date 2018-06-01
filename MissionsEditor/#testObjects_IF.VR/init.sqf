//TEST_IncludedVehicleTypes = [];
//TEST_IncludedFactions = [];
//TEST_IncludeWinterType = false;
TEST_IncludedAuthors = ["","[TF]Nkey","TurkishSoap","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44","IFA3 team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","Snippers","Stadl0r","Stagler","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","ZVER, El Tyranos"];

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