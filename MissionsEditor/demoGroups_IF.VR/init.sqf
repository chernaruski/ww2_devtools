TEST_IncludedVehicleTypes = ["LIB_sov_Soldier_base","LIB_GER_Soldier_base","LIB_US_Soldier_base"];
TEST_IncludedFactions = ["LIB_RKKA","LIB_NKVD","LIB_USSR_TANK_TROOPS","LIB_USSR_AIRFORCE","LIB_WEHRMACHT","LIB_PANZERWAFFE","LIB_LUFTWAFFE","SG_STURMPANZER","SG_STURM","LIB_GUER","LIB_US_ARMY","LIB_US_TANK_TROOPS","LIB_US_AIRFORCE","LIB_MKHL","LIB_ARR","LIB_RBAF","LIB_RAF","LIB_RAAF","LIB_ACI"];
TEST_IncludeWinterType = false;
TEST_IncludedAuthors = ["","Alan","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","LODU & El Tyranos","LODU & Lennard","LODU & tierprot","LODU","LODU, tierprot & Shemich","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","Stagler","Swurvin","tierprot & El Tyranos","tierprot","ZVER, El Tyranos"];

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen ["WAIT",""];
MyVehicles = [] call compile preprocessFileLineNumbers "createVehicleList.sqf";

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = 10;
	_yCoord = 10;
	{
		_group = [[_xCoord,_yCoord,0],playerSide,_x] call BIS_fnc_spawnGroup;

		_xCoord = _xCoord + 20;
		if (_xCoord > 25) then
		{
			_yCoord = _yCoord + 20;
			_xCoord = 10;
		};

		{
			_vehicle = _x;

			_vehicle allowDamage false;

			_vehicle setPos [(getPos _vehicle) select 0,(getPos _vehicle) select 1,0];
			_vehicle setVelocity [0,0,0];

			_vehicle disableAI "TARGET";//stop the unit to watch the assigned target / group commander may not assign targets
			_vehicle disableAI "AUTOTARGET";//prevent the unit from assigning a target independently and watching unknown objects / no automatic target selection
			_vehicle disableAI "MOVE";//disable the AI's movement / do not move
//			_vehicle disableAI "ANIM";//disable ability of AI to change animation. Available only since ArmA: Cold War Assault (OFP 1.99).
			_vehicle disableAI "FSM";//disable the execution of AI behavior scripts. Available only since Operation Arrowhead v1.60.
			_vehicle disableAI "AIMINGERROR";//prevents AI's aiming from being distracted by its shooting, moving, turning, reloading, hit, injury, fatigue, suppression or concealed/lost target Available only since Arma 3 v1.42.
			_vehicle disableAI "SUPPRESSION";//prevents AI from being suppressed Available only since Arma 3 v1.42.
			_vehicle disableAI "CHECKVISIBLE";//disables visibility raycasts Available only since Arma 3 v1.54.
			_vehicle disableAI "COVER";//disables usage of cover positions by the AI Available only since Arma 3 v1.56.
			_vehicle disableAI "AUTOCOMBAT";//disables autonomous switching to COMBAT when in danger Available only since Arma 3 v1.56.
			_vehicle disableAI "PATH";//stops the AI’s movement but not the target alignment Available only since Arma 3 v1.61.
//			_vehicle disableAI "ALL";//all of the above Available since Arma 3 v1.65
		} forEach (units _group);
	} forEach MyVehicles;
};
endLoadingScreen;
