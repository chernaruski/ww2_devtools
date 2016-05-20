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

_type = _this select 0;

_rootClass = "CfgVehicles";
_return = [];

for "_i" from (0) to ((count(configFile/_rootClass)) - 1) do
{
	private["_class"];
	_class = (configFile/_rootClass) select _i;
	if (isClass _class) then
	{
		private["_className","_add","_scope","_model"];
		_className = configName _class;
		_add = false;
		_scope = getNumber(_class/"scope");
		_model = getText(_class/"model");

		if ((_scope > 0) && (_model != "") && (_model != "bmp")) then
		{
			switch (_type) do
			{
				case "other":
				{
					if (!(_className isKindOf "AllVehicles")) then
					{
						if (!(_className isKindOf "Logic")) then
						{
							if (!(_className isKindOf "Sound")) then
							{
								if (!(_className isKindOf "MineGeneric")) then
								{
									_add = true;
								};
							};
						};
					};
				};
				default
				{
					if (_className isKindOf "AllVehicles") then
					{
						switch (true) do
						{
							case (_className isKindOf "Man"):
							{
								if (_type == "inf") then
								{
									_add = true;
								};
							};
							case (_className isKindOf "ParachuteBase"):
							{

							};
							case ((getText (_class/"displayName")) == ""):
							{
								diag_log["displayName empty",_class];
							};
							default
							{
								if (_type == "vehicles") then
								{
									if (_className isKindOf "AllVehicles") then
									{
										if ((count TEST_IncludedVehicles) > 0) then
										{
											{
												if (_className isKindOf _x) then
												{
													_add = true;
												};
											} forEach TEST_IncludedVehicles;
										};
									};
								};
							};
						};
					};
				};
			};
		};
		if (_add) then
		{
			_return set [count _return,_className];
		};
	};
};
_return;