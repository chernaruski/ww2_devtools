_spaceBetweenItems = 2;

startLoadingScreen [""];

_rootClass = "cfgWeapons";
_weaponClasses = [];
_weaponClassesUnique = [];


for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		_className = configName _class;
		if
		(
//			(toUpper (getText (configFile/_rootClass/_className/"author")) isEqualTo "AWAR") or

//			(_className isKindOf ["H_LIB_HelmetB",configFile/_rootClass]) or
//			(_className isKindOf ["U_LIB_BasicBody",configFile/_rootClass]) or
			(_className isKindOf ["V_LIB_Vest_Camo_Base",configFile/_rootClass]) or
			false
		) then
		{
			if (getNumber (configFile/_rootClass/_className/"scope") > 0) then
			{
				_weaponClasses pushBack _className;
				_weaponClassesUnique pushBackUnique _className;
			};
		};
	};
};

_numberOfWeapons = count _weaponClasses;
_xMax = round (sqrt _numberOfWeapons);

_logicPosition = getPos WW2_logic;
_logicPositionX = _logicPosition select 0;
_logicPositionY = _logicPosition select 1;

_x = 0;
_y = 0;

for "_i" from 0 to (_numberOfWeapons - 1) do
{
	_weaponClass = _weaponClasses select _i;
	_tag = switch (true) do
	{
		case (_weaponClass isKindOf ["H_LIB_HelmetB",configFile/_rootClass]): {"Headgear_"};
		case (_weaponClass isKindOf ["U_LIB_BasicBody",configFile/_rootClass]): {"Uniform_"};
		case (_weaponClass isKindOf ["V_LIB_Vest_Camo_Base",configFile/_rootClass]): {"Vest_"};
//		case (_weaponClass isKindOf ["Headgear_H_LIB_Headgear_Base",configFile/_rootClass]): {"Headgear_"};
//		case (_weaponClass isKindOf ["Uniform_U_LIB_BasicBody",configFile/_rootClass]): {"Uniform_"};
//		case (_weaponClass isKindOf ["Vest_V_LIB_Vest_Base",configFile/_rootClass]): {"Vest_"};
		default {"Item_"};
	};
	_weaponClassItem = _tag + _weaponClass;
//	diag_log ["_weaponClassItem",_weaponClassItem];
	_weapon = createVehicle [_weaponClassItem,[_logicPositionX + _x * _spaceBetweenItems,_logicPositionY + _y * _spaceBetweenItems,0],[],0,"CAN_COLLIDE"];

	_x = _x + 1;

	if (_x >= _xMax) then
	{
		_x = 0;
		_y = _y + 1;
	};
};
endLoadingScreen;
