TEST_IncludedAuthors = ["[TF]Nkey","Anitsoy","AWAR & [TF]Nkey & TurkishSoap","AWAR & El Tyranos","AWAR & I44","AWAR & IFA3 Team","AWAR & Joarius","AWAR & Jove Chiere","AWAR & Lawz","AWAR & Lennard","AWAR & Shvetz","AWAR & Snippers","AWAR & Stadl0r","AWAR & swurvin","AWAR","Beton","BI & Jones","BI & Lennard","Crotmoul","CSA38","Diabolical","El Tyranos & Jove Chiere","El Tyranos & Lennard","El Tyranos","El Tyranos, Pazel","French baguettes Crotmoul and El Tyranos","GSTAVO","I44 & IFA3 Teams","I44 & RJW","I44 and El Tyranos","I44","IFA3 team","IFA3 Team","Joarius","Jove Chiere & El Tyranos","Jove Chiere","Justin N. / swurvin","Justin N.","Justin","Kutejnikov","LEN","Lennard & El Tyranos","Lennard","Luchador, El Tyranos","OPX","Rauenhofer","Reyhard & Joarius","RJW","Snippers","Stadl0r","Stagler","swurvin & Invasion 1944 team","Swurvin","tierprot & [TF]Nkey & TurkishSoap","tierprot & El Tyranos","tierprot","TurkishSoap","ZVER, El Tyranos","CUP","CWA (Mondkalb)","CWA","Mondkalb"];

TEST_IncludedAuthors = TEST_IncludedAuthors + ["","invasion 1944 team"];

//not in ["Bohemia Interactive","Bravo Zero One Studios","$SAM_System_01_base_F"]

///////////////////////////////////////////////////////////////////////////////

TEST_IncludedAuthors = TEST_IncludedAuthors apply {toLower _x};

startLoadingScreen ["WAIT",""];

Test_fnc_diagMacrosSimpleObject = compile preprocessFileLineNumbers "fn_diagMacrosSimpleObject.sqf";

Test_fnc_adjustSimpleObject = compile preprocessFileLineNumbers "fn_adjustSimpleObject.sqf";
Test_fnc_createSimpleObject = compile preprocessFileLineNumbers "fn_createSimpleObject.sqf";
Test_fnc_replaceWithSimpleObject = compile preprocessFileLineNumbers "fn_replaceWithSimpleObject.sqf";
Test_fnc_simpleObjectData = compile preprocessFileLineNumbers "fn_simpleObjectData.sqf";

"ConfigDumpFileIO" callExtension ("open:" + "A3_SimpleObjects.cpp");

[] call Test_fnc_diagMacrosSimpleObject;

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

endMission "END1";
