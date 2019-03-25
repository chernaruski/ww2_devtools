TEST_IncludedVehicleTypes = ["LIB_sov_Soldier_base","LIB_GER_Soldier_base","LIB_US_Soldier_base"];
TEST_IncludedFactions = ["LIB_ACI","LIB_ARR","LIB_CIV","LIB_DAK","LIB_FFI","LIB_FSJ","LIB_GUER","LIB_LUFTWAFFE","LIB_LUFTWAFFE_w","LIB_MKHL","LIB_NAC","LIB_NKVD","LIB_PANZERWAFFE","LIB_PANZERWAFFE_w","LIB_RAAF","LIB_RAF","LIB_RBAF","LIB_RKKA","LIB_RKKA_w","LIB_UK_AB","LIB_UK_AB_W","LIB_UK_ARMY","LIB_UK_ARMY_W","LIB_UK_DR","LIB_US_101AB","LIB_US_82AB","LIB_US_AIRFORCE","LIB_US_AIRFORCE_w","LIB_US_ARMY","LIB_US_ARMY_w","LIB_US_RANGERS","LIB_US_TANK_TROOPS","LIB_US_TANK_TROOPS_w","LIB_USSR_AIRFORCE","LIB_USSR_AIRFORCE_w","LIB_USSR_TANK_TROOPS","LIB_USSR_TANK_TROOPS_w","LIB_WEHRMACHT","LIB_WEHRMACHT_w","SG_STURM","SG_STURM_w","SG_STURMPANZER"];
TEST_IncludeWinterType = false;
TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

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
