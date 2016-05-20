/* ----------------------------------------------------------------------------
Description:
	Enumurates the available vehicles

Returns:
	List of vehicles [Array]

Examples:
	(begin example)
		_weaponsArray = [] execVM "createVehicleList.sqf";
	(end)

Author:
	(c) kju 2011
---------------------------------------------------------------------------- */
private["_return","_rootClass"];

_rootClass = "CfgVehicles";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;

	if (isClass _class) then
	{
		private["_className"];
		_className = configName _class;
		
		if (getNumber(_class/"scope") > 0) then
		{
//			if ((_className isKindOf "USMC_Soldier_Base") || (_className isKindOf "FR_Base") || (_className isKindOf "RU_Soldier_Base") || (_className isKindOf "RUS_Soldier_Base") || (_className isKindOf "MVD_Soldier_Base") || (_className isKindOf "GUE_Soldier_Base") || (_className isKindOf "Ins_Soldier_Base") || (_className isKindOf "CDF_Soldier_Base") || (_className isKindOf "TK_INS_Soldier_Base_EP1") || (_className isKindOf "TK_GUE_Soldier_Base_EP1") || (_className isKindOf "CZ_Soldier_base_EP1") || (_className isKindOf "US_Soldier_Base_EP1") || (_className isKindOf "UN_CDF_Soldier_base_EP1") || (_className isKindOf "TK_Soldier_base_EP1") || (_className isKindOf "GER_Soldier_base_EP1") || (_className isKindOf "InvisibleManW_EP1") || (_className isKindOf "InvisibleManE_EP1") || (_className isKindOf "CIV_Contractor1_BAF") || (_className isKindOf "BAF_Soldier_base_EP1") || (_className isKindOf "Soldier_Base_PMC")) then
			if ((_className isKindOf "GUE_Soldier_Base") || (_className isKindOf "Ins_Soldier_Base") || (_className isKindOf "TK_INS_Soldier_Base_EP1") || (_className isKindOf "TK_GUE_Soldier_Base_EP1") || (_className isKindOf "CZ_Soldier_base_EP1")) then
			{
				private["_faceType","_woman"];
				_faceType = toLower (getText(_class/"faceType"));
				_woman = getNumber(_class/"woman");

//				if ((!(_faceType in ["man_a3","miller","kerry"])) && (_woman == 0)) then
//				{
					_return set [count _return,_className];
//				};
			};
		};
	};
};
_return;