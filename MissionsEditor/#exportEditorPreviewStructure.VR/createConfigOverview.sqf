_rootClass = "cfgVehicles";

_return = "";

LIB_GER_Soldier_base = [];
LIB_SOV_Soldier_base = [];
LIB_US_Soldier_base = [];
LIB_Civilian_Base = [];

LIB_Boat_base = [];
LIB_Car_base = [];
LIB_Truck_base = [];
LIB_Wheeled_APC_base = [];
LIB_Tank_base = [];
Plane_Base_F = [];

LIB_StaticMGWeapon_base = [];
LIB_StaticCannon_base = [];
LIB_StaticCanon_base = [];
LIB_StaticSearchLight_base = [];
LIB_StaticMortar_base = [];

LIB_Wreck_Base = [];

LIB_FlagCarrier_base = [];
LIB_Target_base = [];
LIB_Invisible_Target_Base = [];

LIB_ReammoBox_base = [];

B_LIB_AssaultPack_Base = [];

LIB_Main_Obj = [];
LIB_Mine_base = [];

LIB_Logic = [];

LIB_Building = [];
LIB_Thing = [];

_allTypes = [LIB_GER_Soldier_base,LIB_SOV_Soldier_base,LIB_US_Soldier_base,LIB_Civilian_Base,LIB_Boat_base,LIB_Car_base,LIB_Truck_base,LIB_Wheeled_APC_base,LIB_Tank_base,Plane_Base_F,LIB_StaticMGWeapon_base,LIB_StaticCannon_base,LIB_StaticCanon_base,LIB_StaticSearchLight_base,LIB_StaticMortar_base,LIB_Wreck_Base,LIB_FlagCarrier_base,LIB_Target_base,LIB_Invisible_Target_Base,LIB_ReammoBox_base,B_LIB_AssaultPack_Base,LIB_Main_Obj,LIB_Mine_base,LIB_Logic,LIB_Building,LIB_Thing];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className","_configValue"];
		_className = configName _class;

		if (getNumber (_class/"scope") == 2) then
		{
			_string = (format ["%1: %2 {%3};",_className,configName (inheritsFrom _class),getText(_class/"model")]);

			switch (true) do
			{
				case (_className isKindOf "LIB_GER_Soldier_base"):	{LIB_GER_Soldier_base pushBack _string};
				case (_className isKindOf "LIB_SOV_Soldier_base"):	{LIB_SOV_Soldier_base pushBack _string};
				case (_className isKindOf "LIB_US_Soldier_base"):	{LIB_US_Soldier_base pushBack _string};
				case (_className isKindOf "LIB_Civilian_Base"):		{LIB_Civilian_Base pushBack _string};

				case (_className isKindOf "LIB_Boat_base"):		{LIB_Boat_base pushBack _string};
				case (_className isKindOf "LIB_Car_base"):		{LIB_Car_base pushBack _string};
				case (_className isKindOf "LIB_Truck_base"):		{LIB_Truck_base pushBack _string};
				case (_className isKindOf "LIB_Wheeled_APC_base"):	{LIB_Wheeled_APC_base pushBack _string};
				case (_className isKindOf "LIB_Tank_base"):		{LIB_Tank_base pushBack _string};
				case (_className isKindOf "Plane_Base_F"):		{Plane_Base_F pushBack _string};

				case (_className isKindOf "LIB_StaticMGWeapon_base"):	{LIB_StaticMGWeapon_base pushBack _string};
				case (_className isKindOf "LIB_StaticCannon_base"):	{LIB_StaticCannon_base pushBack _string};
				case (_className isKindOf "LIB_StaticCanon_base"):	{LIB_StaticCanon_base pushBack _string};
				case (_className isKindOf "LIB_StaticSearchLight_base"):{LIB_StaticSearchLight_base pushBack _string};
				case (_className isKindOf "LIB_StaticMortar_base"):	{LIB_StaticMortar_base pushBack _string};

				case (_className isKindOf "LIB_Wreck_Base"):		{LIB_Wreck_Base pushBack _string};

				case (_className isKindOf "LIB_FlagCarrier_base"):	{LIB_FlagCarrier_base pushBack _string};
				case (_className isKindOf "LIB_Target_base"):		{LIB_Target_base pushBack _string};
				case (_className isKindOf "LIB_Invisible_Target_Base"):	{LIB_Invisible_Target_Base pushBack _string};

				case (_className isKindOf "LIB_ReammoBox_base"):	{LIB_ReammoBox_base pushBack _string};

				case (_className isKindOf "B_LIB_AssaultPack_Base"):	{B_LIB_AssaultPack_Base pushBack _string};

				case (_className isKindOf "LIB_Main_Obj"):		{LIB_Main_Obj pushBack _string};
				case (_className isKindOf "LIB_Mine_base"):		{LIB_Mine_base pushBack _string};

				case (_className isKindOf "LIB_Logic"):			{LIB_Logic pushBack _string};

				case (_className isKindOf "Building"):
				{
					private["_author"];
					_author = toLower (getText (_class/"author"));
					if (_author in TEST_IncludedAuthors) then
					{
						LIB_Building pushBack _string
					};
				};
				case (_className isKindOf "Thing"):
				{
					private["_author"];
					_author = toLower (getText (_class/"author"));
					if (_author in TEST_IncludedAuthors) then
					{
						LIB_Thing pushBack _string
					};
				};

				default {};
			};
		};
	};
};
//_return = [_result,toString [0x0D,0x0A]] call _joinString;

_newLine = toString [0x0D,0x0A];

{
	_type = _x;
	{
		_element = _x;
		_return = _return + (format ["	class %1%2",_element,_newLine]);
	} forEach _type;
} forEach _allTypes;

copyToClipboard _return;