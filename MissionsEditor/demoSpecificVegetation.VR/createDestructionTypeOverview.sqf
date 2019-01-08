//http://community.bistudio.com/wiki/CfgVehicles_Config_Reference#destrType

/*
enum
{
  DestructNo,
  DestructBuilding,
  DestructEngine,
  DestructTree,
  DestructTent,
  DestructMan,
  DestructDefault,
  DestructWreck
};

Used for animation, sound, and final 'look' of vehicle.

 destrType = "DestructNo"; // nothing happens
 destrType = "DestructBuilding"; // smoke. explosion
 destrType = "DestructEngine"; // smoke only
 destrType = "DestructTree"; // smoke, crushing, falls over
 destrType = "DestructTent"; // smoke, crushing, flattens
 destrType = "DestructMan";  
 destrType = "DestructDefault"; // =building
 
Tent and Tree are no longer identifiable when destroyed if not class 'things'
*/

//See also?
//https://wiki.bistudio.com/index.php/Po%C5%A1kozov%C3%A1n%C3%AD_modelu_ve_h%C5%99e_%28Model_damage_in_game%29

startLoadingScreen ["Wait",""];

{
	_class = _x;
	_configOfClass = configFile/"cfgVehicles"/_class;

	if (isClass _configOfClass) then
	{
		_displayName = getText (_configOfClass/"displayName");
		_destrTypeValue = str (getNumber (_configOfClass/"destrType"));
		_destrTypeString = switch (_destrTypeValue) do
		{
			case "0":	{"DestructNo"};
			case "1":	{"DestructBuilding"};
			case "2":	{"DestructEngine"};
			case "3":	{"DestructTree"};
			case "4":	{"DestructTent"};
			case "5":	{"DestructMan"};
			case "7":	{"DestructDefault"};
			case "8":	{"DestructWreck"};
			default		{"ERROR"};
		};
		diag_log (_destrTypeValue + "	" + _destrTypeString + "	" + _class + "	" + _displayName);
	}
	else
	{
		diag_log ("=== ERROR ===" + "	" + _class + "	" + "NOT FOUND");
	};
} forEach BIS_EditorObjectsFromSheet;

endLoadingScreen;

hint "done";