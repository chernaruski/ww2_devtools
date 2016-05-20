startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

_rootClass = "cfgVehicles";
_staticWeaponClasses = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class","_armory"];
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		_className = configName _class;
		if (_className isKindOf "StaticWeapon") then
		{
			_staticWeaponClasses set [count _staticWeaponClasses,_className];
		};
	};
};

{
	[configFile/"CfgVehicles"/_x,true] call _fnc_configParser;
} forEach _staticWeaponClasses;

endLoadingScreen;

endMission "END1";