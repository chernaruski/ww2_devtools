
_alphaTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_alphaTrigger setTriggerActivation ["ALPHA","PRESENT",true];
_alphaTrigger setTriggerStatements ["this","selectPlayer ENG_UNIT",""];
(1) setRadioMsg "ENG_UNIT";


_bravoTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_bravoTrigger setTriggerActivation ["BRAVO","PRESENT",true];
_bravoTrigger setTriggerStatements ["this","selectPlayer RUS_UNIT",""];
(2) setRadioMsg "RUS_UNIT";

_charlieTrigger = createTrigger["EmptyDetector",[-1000,-1000,0]];
_charlieTrigger setTriggerActivation ["CHARLIE","PRESENT",true];
_charlieTrigger setTriggerStatements ["this","selectPlayer CIV_UNIT",""];
(3) setRadioMsg "CIV_UNIT";

//

startLoadingScreen ["WAIT",""];
MyVehicles = ["inf"] call compile preprocessFileLineNumbers "createVehicleList.sqf";
endLoadingScreen;

waitUntil {sleep 0.01; (!(isNull (findDisplay 46)))};
sleep 1;

{
	_vehicle = _x;
	_class = typeof _vehicle;
	diag_log [_class,getText(configFile/"CfgVehicles"/_class/"faceType")];
	diag_log [speaker _vehicle,face _vehicle,getArray (configFile/"CfgVehicles"/_class/"identitytypes")];
} forEach allUnits;

diag_log "";
diag_log "";
diag_log "";

_westGroup = createGroup west;
_eastGroup = createGroup east;
_resistanceGroup = createGroup resistance;

if (true) then
{
	private["_xCoord","_yCoord"];
	_xCoord = (getMarkerPos "target") select 0;
	_yCoord = (getMarkerPos "target") select 1;
	{
		_class = _x;

		_group = switch (true) do
		{
			case (_class isKindOf "SoldierWB"): {_westGroup};
			case (_class isKindOf "SoldierEB"): {_eastGroup};
			case (_class isKindOf "SoldierGB"): {_resistanceGroup};
			default {_westGroup};
		};
		_vehicle = _group createUnit [_class,[_xCoord,_yCoord,0],[],0,"CAN_COLLIDE"];

		diag_log "";
		diag_log [_class,getText(configFile/"CfgVehicles"/_class/"faceType")];
		diag_log [speaker _vehicle,face _vehicle,getArray (configFile/"CfgVehicles"/_class/"identitytypes")];

		deleteVehicle _vehicle;
	} forEach MyVehicles;
};
