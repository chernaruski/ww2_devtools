sleep 1;

//setAccTime 1;

TEST_music = [];

_numberOfTracks = count (configFile/"CfgMusic");
_random = floor (random _numberOfTracks);
_trackConfig = (configFile/"CfgMusic") select _random;
TEST_music = configName _trackConfig;

player addAction ["OFP_deathDefault",{[player,killer] exec "OFP_deathDefault.sqs"},["params"],1.5,true,true];
player addAction ["OFP_deathDefault - suicide",{[player,player] exec "OFP_deathDefault.sqs"},["params"],1.5,true,true];

player addAction ["OFP_death1",{[player,killer] exec "OFP_death1.sqs"},["params"],1.5,true,true];
player addAction ["OFP_death1 - suicide",{[player,player] exec "OFP_death1.sqs"},["params"],1.5,true,true];

player addAction ["deathcam1",{[player,killer] execVM "deathcam1.sqf"},["params"],1.5,true,true];
player addAction ["deathcam2",{[player,killer] execVM "deathcam2.sqf"},["params"],1.5,true,true];

player addAction ["onplayerkilled_A2",{[player,killer] execVM "onplayerkilled_A2.sqf"},["params"],1.5,true,true];
player addAction ["onplayerkilled_OA_epic",{[player,killer] execVM "onplayerkilled_OA_epic.sqf"},["params"],1.5,true,true];

player addAction ["onplayerkilled_OA",{[player,killer] execVM "onplayerkilled_OA.sqf"},["params"],1.5,true,true];
player addAction ["onPlayerKilled_TOH",{[player,killer] execVM "onPlayerKilled_TOH.sqf"},["params"],1.5,true,true];

player addAction ["A3 standard",{["END1",true,true,true] call BIS_fnc_endMission}];
player addAction ["A3 instant",{["END1",true,false,true] call BIS_fnc_endMission}];