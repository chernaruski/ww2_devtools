if (time == 0) exitwith {["A mission must be running."] call bis_fnc_error; false};

private ["_br","_tab","_result","_add","_addFormat","_addIndent","_indent","_sides"];
_br = tostring [13,10];
_tab = "	";
_result = "";
_add = {
//	for "_i" from 1 to _indent do {_result = _result + _tab;};
	diag_log [_this];
};
_addFormat =
{
	(format _this) call _add;
};
_addIndent = {_indent = _indent + _this;};
_sides = ["TEast","TWest","TGuerrila","TCivilian"];

if (count _this > 0) then
{
	_cfgGroup = _this param [0,configFile,[configFile]];
	_indent = _this param [1,0,[0]];

	_groupClass = configName _cfgGroup;
	_groupSide = _sides select (getnumber (_cfgGroup >> "side"));
	_grp = [[100,100,0],playerside,_cfgGroup] call bis_fnc_spawnGroup;

	_units = [];
	{
		if (effectivecommander vehicle _x == _x) then
		{
			_units set [count _units,_x];
		};

		_x setPos [position _x select 0,position _x select 1,0];
	} forEach units _grp;

	//--- Make sure all units are on correct positions
	_time = time;

	waitUntil
	{
		_ready = true;

		{
			_veh = vehicle _x;
			if (([formationposition _veh,_veh] call bis_fnc_distance2D) > 1) then {_veh setpos formationposition _veh; _ready = false;};
			sleep 0.001;
		} forEach units _grp;

		if (time > _time + 1) exitWith {_ready = true;};

		_ready
	};

	_center = [0,0,0];
	_index = 0;
	{
		_unitClass = configName _x;
		_veh = gettext (_x >> "vehicle");

		_pos = if (isclass (configFile >> "cfgvehicles" >> _veh)) then
		{
			_unit = _units select _index;
			_index = _index + 1;
			_pos = formationposition vehicle _unit;
			if (_forEachindex == 0) then {_center = _pos;};
			//_posX = (_pos select 0) - (_center select 0);
			//_posY = (_pos select 1) - (_center select 1);
			//_posZ = (_pos select 2) - (_center select 2);
			//[_posX,_posY,_posZ]
			(vehicle leader _unit) worldtomodel _pos
		}
		else
		{
			["%1 not found in CfgVehicles",_veh] call bis_fnc_error;
			getarray (_x >> "position");
		};

		[
			"class %1	{side = %2; vehicle = %3; rank = ""%4""; position[] = {%5,%6,%7};};",
			_unitClass,
			_groupSide,
			_veh,
			gettext (_x >> "rank"),
			round (_pos select 0),
			round (_pos select 1),
			round (_pos select 2)
		] call _addFormat;
	} forEach (_cfgGroup call bis_fnc_returnChildren);

	_units = units _grp;

	{
		deletevehicle (vehicle _x);
		deletevehicle _x;
	} forEach _units;

	deletegroup _grp;

//	copytoclipboard _result;
//	hintsilent str _cfgGroup;
	_result
}
else
{
	//startloadingscreen [""];
//	cuttext ["","black in",1e10];
	_progress = 0;
	_indent = 0;

	"class CfgGroups" call _add;
//	"{" call _add;

	{
		//if (_forEachindex == 0) then { //--- DEBUG
		if (true) then
		{
			_sideClass = configName _x;
			_side = _sides select (getnumber (_x >> "side"));
//			+1 call _addIndent;
			["class %1",_sideClass] call _addFormat;
//			"{" call _add;
//			+1 call _addIndent;
			["name = $STR_A3_CfgGroups_%1%2;",_sideClass,0] call _addFormat;
			["side = %1;",_side] call _addFormat;

			{
				_factionClass = configName _x;
				if (toLower _factionClass in TEST_IncludedFactions) then
				{
					["class %1",_factionClass] call _addFormat;
//					"{" call _add;
//					+1 call _addIndent;
					["name = $STR_A3_CfgGroups_%1_%2%3;",_sideClass,_factionClass,0] call _addFormat;

					{
						_typeClass = configName _x;
						["class %1",_typeClass] call _addFormat;
//						"{" call _add;
//						+1 call _addIndent;
						["name = $STR_A3_CfgGroups_%1_%2_%3%4;",_sideClass,_factionClass,_typeClass,0] call _addFormat;

						{
//							hintsilent str _x;
							_groupClass = configName _x;
							["class %1",_groupClass] call _addFormat;
//							"{" call _add;
//							+1 call _addIndent;
							["name = $STR_A3_CfgGroups_%1_%2_%3_%4%5;",_sideClass,_factionClass,_typeClass,_groupClass,0] call _addFormat;
							["side = %1;",_sides select (getnumber (_x >> "side"))] call _addFormat;
							["faction = %1;",gettext (_x >> "faction")] call _addFormat;

							diag_log[([_x,_indent] call bis_fnc_exportGroupformations)];

//							-1 call _addIndent;
//							"};" call _add;
						} forEach (_x call bis_fnc_returnChildren);

//						-1 call _addIndent;
//						"};" call _add;
					} forEach (_x call bis_fnc_returnChildren);
				};

//				-1 call _addIndent;
//				"};" call _add;
			} forEach (_x call bis_fnc_returnChildren);

//			-1 call _addIndent;
//			"};" call _add;
//			-1 call _addIndent;
		};
	} forEach ([configFile >> "CfgGroups"] call bis_fnc_returnChildren);

//	"};" call _add;
//	copytoclipboard _result;
//	hintc "Copied to clipboard";
	endloadingscreen;
//	cuttext ["","black in",1];
};