//TEST_IncludedVehicleTypes = [];
//TEST_IncludedFactions = [];
//TEST_IncludeWinterType = false;

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