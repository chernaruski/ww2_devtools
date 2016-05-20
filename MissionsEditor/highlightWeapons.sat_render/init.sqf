_array = [];

//_cfgweapons = configFile >> "cfgWeapons";
//for "_i" from 0 to (count _cfgweapons)-1 do {
//	_weapon = _cfgweapons select _i;
//	if (isClass _weapon) then {
//		_name = configName _weapon;
//		_xx = toArray _name;
//		_prefix = toString [_xx select 0, _xx select 1, _xx select 2];
//		if (_prefix == "CUP") then {
//			if (getNumber (_weapon >> "scope") == 2) then {
//				_array = _array + [_name];
//			};
//		};
//	};
//};

_array =
[
	//3 shotguns
	"CUP_sgun_AA12",
	"",
	"CUP_sgun_M1014",
	"",
	"CUP_sgun_Saiga12K",

	//3 grenade launchers
	"CUP_glaunch_M32",
	"",
	"CUP_glaunch_M79",
	"",
	"CUP_glaunch_Mk13",

	//7 SMGs
	"CUP_smg_bizon",
//	"CUP_smg_bizon_snds",
	"CUP_smg_EVO",
//	"CUP_smg_EVO_MRad_Flashlight",
	"CUP_smg_EVO_MRad_Flashlight_Snds",
	"CUP_smg_MP5A5",
	"CUP_smg_MP5SD6",

	//11 Accessories
	"CUP_acc_ANPEQ_15",
//	"CUP_acc_ANPEQ_2",
//	"CUP_acc_ANPEQ_2_camo",
	"CUP_acc_ANPEQ_2_desert",
//	"CUP_acc_ANPEQ_2_grey",
	"CUP_acc_CZ_M3X",
//	"CUP_acc_Flashlight",
//	"CUP_acc_Flashlight_desert",
//	"CUP_acc_Flashlight_wdl",
	"CUP_acc_Glock17_Flashlight",
	"CUP_acc_XM8_light_module",

	//14 Launchers
//	"CUP_launch_9K32Strela",
	"CUP_launch_FIM92Stinger",
//	"CUP_launch_Igla",
	"CUP_launch_Javelin",
//	"CUP_launch_M136",
	"CUP_launch_M47",
//	"CUP_launch_MAAWS",
//	"CUP_launch_MAAWS_Scope",
	"CUP_launch_Metis",
//	"CUP_launch_Mk153Mod0",
//	"CUP_launch_Mk153Mod0_SMAWOptics",
//	"CUP_launch_NLAW",
	"CUP_launch_RPG18",
//	"CUP_launch_RPG7V",

	//18 Muzzles
	"CUP_muzzle_Bizon",
//	"CUP_muzzle_mfsup_SCAR_H",
//	"CUP_muzzle_mfsup_SCAR_L",
//	"CUP_muzzle_PB6P9",
//	"CUP_muzzle_PBS4",
//	"CUP_muzzle_snds_AWM",
	"CUP_muzzle_snds_G36_black",
//	"CUP_muzzle_snds_G36_desert",
//	"CUP_muzzle_snds_L85",
	"CUP_muzzle_snds_M110",
//	"CUP_muzzle_snds_M14",
//	"CUP_muzzle_snds_M16",
//	"CUP_muzzle_snds_M16_camo",
	"CUP_muzzle_snds_M9",
	"CUP_muzzle_snds_MicroUzi",
//	"CUP_muzzle_snds_SCAR_H",
//	"CUP_muzzle_snds_SCAR_L",
//	"CUP_muzzle_snds_XM8",

	//19 Machine guns
//	"CUP_lmg_L110A1",
	"CUP_lmg_L110A1_Aim_Laser",
//	"CUP_lmg_L7A2",
//	"CUP_lmg_M240",
//	"CUP_lmg_M240_ElcanM143",
//	"CUP_lmg_M249",
	"CUP_lmg_M249_ANPAS13c2_Laser",
//	"CUP_lmg_M249_ElcanM145_Laser",
//	"CUP_lmg_M249_Laser",
//	"CUP_lmg_M249_para",
	"CUP_lmg_M60A4",
//	"CUP_lmg_Mk48_des",
//	"CUP_lmg_Mk48_des_Aim_Laser",
//	"CUP_lmg_Mk48_wdl",
//	"CUP_lmg_Mk48_wdl_Aim_Laser",
//	"CUP_lmg_Pecheneg",
	"CUP_lmg_Pecheneg_PScope",
	"CUP_lmg_PKM",
//	"CUP_lmg_UK59",

	//22 Pistols
//	"CUP_hgun_Colt1911",
//	"CUP_hgun_Colt1911_snds",
	"CUP_hgun_Compact",
//	"CUP_hgun_Duty",
//	"CUP_hgun_Duty_M3X",
//	"CUP_hgun_Glock17",
//	"CUP_hgun_glock17_flashlight",
//	"CUP_hgun_glock17_flashlight_snds",
//	"CUP_hgun_glock17_snds",
	"CUP_hgun_M9",
//	"CUP_hgun_M9_snds",
//	"CUP_hgun_Makarov",
//	"CUP_hgun_MicroUzi",
//	"CUP_hgun_MicroUzi_snds",
//	"CUP_hgun_PB6P9",
	"CUP_hgun_PB6P9_snds",
//	"CUP_hgun_Phantom",
//	"CUP_hgun_Phantom_Flashlight",
//	"CUP_hgun_Phantom_Flashlight_snds",
	"CUP_hgun_SA61",
	"CUP_hgun_TaurusTracker455",
//	"CUP_hgun_TaurusTracker455_gold",

	//39 sniper rifles
	"CUP_srifle_ksvk_PSO3",
	"CUP_srifle_AS50",
//	"CUP_srifle_AS50_AMPAS13c2",
//	"CUP_srifle_AS50_SBPMII",
//	"CUP_srifle_AWM_des",
	"CUP_srifle_AWM_des_SBPMII",
//	"CUP_srifle_AWM_wdl",
//	"CUP_srifle_AWM_wdl_SBPMII",
//	"CUP_srifle_CZ550",
//	"CUP_srifle_CZ750",
//	"CUP_srifle_CZ750_SOS_bipod",
//	"CUP_srifle_DMR",
//	"CUP_srifle_DMR_LeupoldMk4",
//	"CUP_srifle_ksvk",
//	"CUP_srifle_LeeEnfield",
//	"CUP_srifle_M107_ANPAS13c2",
//	"CUP_srifle_M107_Base",
//	"CUP_srifle_M107_LeupoldVX3",
//	"CUP_srifle_M110",
//	"CUP_srifle_M110_ANPAS13c2",
//	"CUP_srifle_M110_ANPVS10",
//	"CUP_srifle_M14",
//	"CUP_srifle_M14_Aim",
//	"CUP_srifle_M24_des",
//	"CUP_srifle_M24_des_LeupoldMk4LRT",
//	"CUP_srifle_M24_ghillie",
//	"CUP_srifle_M24_wdl",
//	"CUP_srifle_M24_wdl_LeupoldMk4LRT",
//	"CUP_srifle_M40A3",
//	"CUP_srifle_Mk12SPR",
//	"CUP_srifle_Mk12SPR_LeupoldM3LR",
//	"CUP_srifle_SVD",
//	"CUP_srifle_SVD_des",
	"CUP_srifle_SVD_des_ghillie_pso",
//	"CUP_srifle_SVD_Des_pso",
//	"CUP_srifle_SVD_NSPU",
//	"CUP_srifle_SVD_pso",
//	"CUP_srifle_SVD_wdl_ghillie",
//	"CUP_srifle_VSSVintorez",
	"CUP_srifle_VSSVintorez_pso",

	//42 optics
	"CUP_optic_ACOG",
//	"CUP_optic_AN_PAS_13c1",
//	"CUP_optic_AN_PAS_13c2",
//	"CUP_optic_AN_PVS_10",
//	"CUP_optic_AN_PVS_4",
//	"CUP_optic_CompM2_Black",
//	"CUP_optic_CompM2_Desert",
//	"CUP_optic_CompM2_Woodland",
//	"CUP_optic_CompM2_Woodland2",
//	"CUP_optic_CompM4",
	"CUP_optic_CWS",
//	"CUP_optic_ELCAN_SpecterDR",
//	"CUP_optic_ElcanM145",
//	"CUP_optic_Eotech533",
//	"CUP_optic_Eotech533Grey",
	"CUP_optic_GOSHAWK",
//	"CUP_optic_HoloBlack",
//	"CUP_optic_HoloDesert",
//	"CUP_optic_HoloWdl",
//	"CUP_optic_Kobra",
//	"CUP_optic_Leupold_VX3",
//	"CUP_optic_LeupoldM3LR",
//	"CUP_optic_LeupoldMk4",
//	"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
//	"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
//	"CUP_optic_LeupoldMk4_CQ_T",
//	"CUP_optic_LeupoldMk4_MRT_tan",
//	"CUP_optic_MAAWS_Scope",
//	"CUP_optic_MRad",
	"CUP_optic_NSPU",
//	"CUP_optic_PechenegScope",
//	"CUP_optic_PSO_1",
//	"CUP_optic_PSO_3",
//	"CUP_optic_RCO",
//	"CUP_optic_RCO_desert",
//	"CUP_optic_SB_11_4x20_PM",
//	"CUP_optic_SB_3_12x50_PMII",
//	"CUP_optic_SMAW_Scope",
	"CUP_optic_SUSAT",
//	"CUP_optic_TrijiconRx01_black",
//	"CUP_optic_TrijiconRx01_desert",
//	"CUP_optic_ZDDot",

	//142 assault rifle classes
	"CUP_arifle_AK107",
//	"CUP_arifle_AK107_GL",
//	"CUP_arifle_AK107_GL_kobra",
//	"CUP_arifle_AK107_GL_pso",
//	"CUP_arifle_AK107_kobra",
//	"CUP_arifle_AK107_pso",
//	"CUP_arifle_AK74",
//	"CUP_arifle_AK74_GL",
	"CUP_arifle_AK74_GL_kobra",
//	"CUP_arifle_AKM",
//	"CUP_arifle_AKS",
	"CUP_arifle_AKS_Gold",
//	"CUP_arifle_AKS74",
	"CUP_arifle_AKS74_Goshawk",
//	"CUP_arifle_AKS74_kobra",
//	"CUP_arifle_AKS74_NSPU",
//	"CUP_arifle_AKS74_pso",
//	"CUP_arifle_AKS74U",
	"CUP_arifle_AKS74UN_kobra_snds",
//	"CUP_arifle_CZ805_A1",
//	"CUP_arifle_CZ805_A1_Aco_Laser",
//	"CUP_arifle_CZ805_A1_Holo_Laser",
//	"CUP_arifle_CZ805_A1_MRCO_Laser",
	"CUP_arifle_CZ805_A1_ZDDot_Laser",
//	"CUP_arifle_CZ805_A2",
//	"CUP_arifle_CZ805_A2_Aco_Laser",
//	"CUP_arifle_CZ805_A2_Holo_Laser",
//	"CUP_arifle_CZ805_A2_MRCO_Laser",
	"CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds",
//	"CUP_arifle_CZ805_B",
//	"CUP_arifle_CZ805_B_GL",
//	"CUP_arifle_CZ805_GL",
//	"CUP_arifle_CZ805_GL_Hamr_Laser",
//	"CUP_arifle_CZ805_GL_ZDDot_Laser",
	"CUP_arifle_CZ805B_GL_ACOG_Laser",
//	"CUP_arifle_FNFAL",
//	"CUP_arifle_FNFAL_ANPVS4",
	"CUP_arifle_FNFAL_railed",
//	"CUP_arifle_G36A",
	"CUP_arifle_G36A_camo",
//	"CUP_arifle_G36C",
//	"CUP_arifle_G36C_camo",
	"CUP_arifle_G36C_camo_holo_snds",
//	"CUP_arifle_G36C_holo_snds",
	"CUP_arifle_G36K",
//	"CUP_arifle_G36K_camo",
//	"CUP_arifle_L85A2",
//	"CUP_arifle_L85A2_ACOG_Laser",
	"CUP_arifle_L85A2_CWS_Laser",
//	"CUP_arifle_L85A2_GL",
//	"CUP_arifle_L85A2_GL_ACOG_Laser",
//	"CUP_arifle_L85A2_GL_Holo_laser",
//	"CUP_arifle_L85A2_GL_SUSAT_Laser",
//	"CUP_arifle_L85A2_Holo_laser",
	"CUP_arifle_L85A2_SUSAT_Laser",
//	"CUP_arifle_L86A2",
	"CUP_arifle_L86A2_ACOG",
//	"CUP_arifle_M16A2",
	"CUP_arifle_M16A2_GL",
	"CUP_arifle_M16A4_ACOG_Laser",
//	"CUP_arifle_M16A4_Aim_Laser",
//	"CUP_arifle_M16A4_GL",
//	"CUP_arifle_M16A4_GL_ACOG_Laser",
//	"CUP_arifle_M16A4GL",
//	"CUP_arifle_M4A1",
//	"CUP_arifle_M4A1_Aim",
	"CUP_arifle_M4A1_black",
//	"CUP_arifle_M4A1_BUIS_camo_GL",
//	"CUP_arifle_M4A1_BUIS_desert_GL",
//	"CUP_arifle_M4A1_BUIS_GL",
//	"CUP_arifle_M4A1_camo",
//	"CUP_arifle_M4A1_camo_Aim",
//	"CUP_arifle_M4A1_camo_AIM_snds",
//	"CUP_arifle_M4A1_camo_GL_Holo_Flashlight",
//	"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds",
//	"CUP_arifle_M4A1_desert",
//	"CUP_arifle_M4A1_GL_ACOG_Flashlight",
//	"CUP_arifle_M4A1_GL_Holo_Flashlight",
	"CUP_arifle_M4A3_desert_Aim_Flashlight",
//	"CUP_arifle_M4A3_desert_GL_ACOG_Laser",
	"CUP_arifle_MG36",
//	"CUP_arifle_MG36_camo",
//	"CUP_arifle_Mk16_CQC",
	"CUP_arifle_Mk16_CQC_EGLM",
//	"CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup",
//	"CUP_arifle_Mk16_CQC_FG",
//	"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",
//	"CUP_arifle_Mk16_CQC_SFG",
//	"CUP_arifle_Mk16_CQC_SFG_Holo",
	"CUP_arifle_Mk16_STD",
//	"CUP_arifle_Mk16_STD_EGLM",
//	"CUP_arifle_Mk16_STD_EGLM_ACOG_Laser",
//	"CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup",
//	"CUP_arifle_Mk16_STD_FG",
//	"CUP_arifle_Mk16_STD_FG_Holo_Laser",
//	"CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser",
//	"CUP_arifle_Mk16_STD_SFG",
	"CUP_arifle_Mk16_SV",
//	"CUP_arifle_Mk17_CQC",
//	"CUP_arifle_Mk17_CQC_EGLM",
//	"CUP_arifle_Mk17_CQC_FG",
//	"CUP_arifle_Mk17_CQC_SFG",
	"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup",
//	"CUP_arifle_Mk17_STD",
//	"CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser",
//	"CUP_arifle_Mk17_STD_EGLM",
//	"CUP_arifle_Mk17_STD_FG",
	"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds",
//	"CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds",
//	"CUP_arifle_Mk17_STD_SFG",
//	"CUP_arifle_Mk20",
	"CUP_arifle_Mk20_LeupoldMk4MRT",
//	"CUP_arifle_Mk20_SB11420_snds",
//	"CUP_arifle_Mk20_SV_LeupoldMk4MRT
	"CUP_arifle_RPK74",
//	"CUP_arifle_Sa58P",
	"CUP_arifle_Sa58P_des",
//	"CUP_arifle_Sa58RIS1",
//	"CUP_arifle_Sa58RIS1_Aco_Laser",
//	"CUP_arifle_Sa58RIS1_camo_Aco_Laser",
	"CUP_arifle_Sa58RIS1_des",
//	"CUP_arifle_Sa58RIS2",
	"CUP_arifle_Sa58RIS2_Arco_Laser",
//	"CUP_arifle_Sa58RIS2_camo",
//	"CUP_arifle_Sa58RIS2_camo_Arco_Laser",
	"CUP_arifle_Sa58V",
//	"CUP_arifle_Sa58V_ACOG_Laser",
//	"CUP_arifle_Sa58V_Aim_Laser",
//	"CUP_arifle_Sa58V_camo",
//	"CUP_arifle_XM8_Carbine",
//	"CUP_arifle_XM8_Carbine_FG",
//	"CUP_arifle_XM8_Carbine_GL",
//	"CUP_arifle_XM8_Compact",
	"CUP_arifle_XM8_Compact_Holo_Flashlight",
//	"CUP_arifle_XM8_Compact_Rail",
//	"CUP_arifle_XM8_Railed",
//	"CUP_arifle_XM8_Railed_ANPAS13c1_Laser",
//	"CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds",
//	"CUP_arifle_XM8_Railed_Holo_Laser_snds",
//	"CUP_arifle_xm8_SAW",
	"CUP_arifle_xm8_sharpshooter",

	""
];


_startPos = getpos logic;
_dir = vectorDir logic;
_dir = _dir vectorMultiply 0.7;
{
	_v = "WeaponHolder_Single_F" createVehicle [(_startPos) select 0, (_startPos) select 1, 100 ];
	_v enableSimulation false;
	if (_x != "") then
	{
		_v addWeaponCargoGlobal [_x,1];
	};
	_v setpos [(getpos _v) select 0, (getpos _v) select 1, 100];
	_v setDir -45;

	_startpos = _startPos vectorAdd _dir;
	
} forEach _array;

_duration = 390;
_camera = "camera" camCreate [1000,0,103];
_camera camCommand "inertia on";

showCinemaBorder false;

_camera camPrepareTarget [1000,50,-200];
_camera camPreparePos [1000,0,103];
_camera camPrepareFOV 0.01;
_camera camCommitPrepared 0;

_camera cameraEffect ["internal", "BACK"];

_camera camPrepareTarget [1000,1500,-200];
_camera camPreparePos [1000,100,103];
_camera camPrepareFOV 0.4;
_camera camCommitPrepared _duration;
sleep _duration;


sleep 10;
_camera cameraEffect ["Terminate", "BACK"];