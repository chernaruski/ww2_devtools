setViewDistance 3000; setObjectViewDistance 3000;

TEST_fnc_showDisplayName =
{
	getText (configFile >> "CfgVehicles" >> (typeOf (_this select 0)) >> "displayName")
};

{
	_x addEventHandler
	["killed",
		{
			params ["_unit","_killer","_instigator","_useEffects"];

			hint composeText
			[
				format ["Dead: %1",[_unit] call TEST_fnc_showDisplayName],lineBreak,
				format ["Killer: %1",[_killer] call TEST_fnc_showDisplayName],lineBreak,
				format ["Instigator: %1",[_instigator] call TEST_fnc_showDisplayName],lineBreak,
				""
			];
		}
	];
	
	_x addEventHandler
	["fired",
		{
			params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];

			_skip = false;

			if
			(
				(_weapon isKindOf ["MGun",configFile >> "CfgWeapons"])
				||
				(_weapon isKindOf ["LIB_PlaneCannon_base",configFile >> "CfgWeapons"])
				||
				(_weapon isKindOf ["LIB_AntiAirCannon_base",configFile >> "CfgWeapons"])
			) then
			{
				_timeLastMGunUse = _unit getVariable ["TEST_TimeLastMGunUse",0];
				
				if (time < (_timeLastMGunUse + 10)) then
				{
					_skip = true;
				}
				else
				{
					_unit setVariable ["TEST_TimeLastMGunUse",time];
				};
			};

			if (!_skip) then
			{
				systemChat format ["%1 on %2 by %5",[_unit] call TEST_fnc_showDisplayName,[assignedTarget _unit] call TEST_fnc_showDisplayName,_weapon,_magazine,_ammo];// (%4 - %5)
			};
		}
	];
}
forEach vehicles;