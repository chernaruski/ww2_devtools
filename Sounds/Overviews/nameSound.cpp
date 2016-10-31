class CfgMagazines
	class Default
		nameSound = "";
	class FakeMagazine: Default {};
	class FakeWeapon: FakeMagazine {};
	class CA_Magazine: Default
		nameSound = "magazine";
	class VehicleMagazine: CA_Magazine
	class CA_LauncherMagazine: CA_Magazine
		nameSound = "handgrenade";
	class 30Rnd_556x45_Stanag: CA_Magazine {};
	class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag {};
	class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag {};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag {};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag {};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag {};
	class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag {};
	class 30Rnd_65x39_caseless_mag: CA_Magazine {};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag {};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag {};
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green {};
	class 20Rnd_762x51_Mag: CA_Magazine {};
	class 7Rnd_408_Mag: CA_Magazine {};
	class 5Rnd_127x108_Mag: CA_Magazine {};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
		nameSound = "mgun";
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag {};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag {};
	class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box {};
	class 30Rnd_9x21_Mag: CA_Magazine {};
	class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag {};
	class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag {};
	class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag {};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag {};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02 {};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02 {};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02 {};
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag {};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag {};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag {};
	class RPG32_F: CA_LauncherMagazine
	class RPG32_HE_F: RPG32_F {};
	class NLAW_F: CA_LauncherMagazine
	class 1Rnd_HE_Grenade_shell: CA_Magazine
		nameSound = "";
	class 3Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell {};
	class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell {};
	class 3Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 3Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell {};
	class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 3Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell {};
	class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 3Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell {};
	class 1Rnd_SmokePurple_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 3Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell {};
	class 1Rnd_SmokeBlue_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 3Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell {};
	class 1Rnd_SmokeOrange_Grenade_shell: 1Rnd_Smoke_Grenade_shell {};
	class 3Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell {};
	class HandGrenade: CA_Magazine
		nameSound = "handgrenade";
	class MiniGrenade: CA_Magazine
		nameSound = "handgrenade";
	class HandGrenade_Stone: HandGrenade {};
	class SmokeShell: HandGrenade
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
	class SmokeShellRed: SmokeShell {};
	class SmokeShellGreen: SmokeShell {};
	class SmokeShellYellow: SmokeShell {};
	class SmokeShellPurple: SmokeShell {};
	class SmokeShellBlue: SmokeShell {};
	class SmokeShellOrange: SmokeShell {};
	class Chemlight_green: SmokeShell
		nameSoundWeapon = "Chemlight";
		nameSound = "Chemlight";
	class Chemlight_red: Chemlight_green {};
	class Chemlight_yellow: Chemlight_green {};
	class Chemlight_blue: Chemlight_green {};
	class 60Rnd_CMFlareMagazine: CA_Magazine {};
	class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine {};
	class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine {};
	class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine {};
	class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {};
	class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {};
	class 192Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {};
	class 168Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {};
	class 300Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {};
	class SmokeLauncherMag: VehicleMagazine
		nameSound = "smokeshell";
	class SmokeLauncherMag_boat: VehicleMagazine
		nameSound = "smokeshell";
	class 200Rnd_65x39_Belt: VehicleMagazine
		nameSound = "mgun";
	class 200Rnd_65x39_Belt_Tracer_Red: 200Rnd_65x39_Belt {};
	class 200Rnd_65x39_Belt_Tracer_Green: 200Rnd_65x39_Belt {};
	class 200Rnd_65x39_Belt_Tracer_Yellow: 200Rnd_65x39_Belt {};
	class 1000Rnd_65x39_Belt: 200Rnd_65x39_Belt {};
	class 1000Rnd_65x39_Belt_Tracer_Red: 1000Rnd_65x39_Belt {};
	class 1000Rnd_65x39_Belt_Green: 1000Rnd_65x39_Belt {};
	class 1000Rnd_65x39_Belt_Tracer_Green: 1000Rnd_65x39_Belt_Green {};
	class 1000Rnd_65x39_Belt_Yellow: 1000Rnd_65x39_Belt {};
	class 1000Rnd_65x39_Belt_Tracer_Yellow: 1000Rnd_65x39_Belt_Yellow {};
	class 2000Rnd_65x39_Belt: 200Rnd_65x39_Belt {};
	class 2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt {};
	class 2000Rnd_65x39_Belt_Green: 2000Rnd_65x39_Belt {};
	class 2000Rnd_65x39_Belt_Tracer_Green: 2000Rnd_65x39_Belt_Green {};
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash: 2000Rnd_65x39_Belt_Tracer_Green {};
	class 2000Rnd_65x39_Belt_Yellow: 2000Rnd_65x39_Belt {};
	class 2000Rnd_65x39_Belt_Tracer_Yellow: 2000Rnd_65x39_Belt_Yellow {};
	class 2000Rnd_65x39_Belt_Tracer_Yellow_Splash: 2000Rnd_65x39_Belt_Tracer_Yellow {};
	class 5000Rnd_762x51_Belt: 2000Rnd_65x39_Belt {};
	class 5000Rnd_762x51_Yellow_Belt: 5000Rnd_762x51_Belt {};
	class 500Rnd_127x99_mag: VehicleMagazine
		nameSound = "mgun";
	class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag {};
	class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag {};
	class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag {};
	class 200Rnd_127x99_mag: 500Rnd_127x99_mag {};
	class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag {};
	class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag {};
	class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag {};
	class 100Rnd_127x99_mag: 500Rnd_127x99_mag {};
	class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag {};
	class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag {};
	class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag {};
	class 450Rnd_127x108_Ball: VehicleMagazine
		nameSound = "mgun";
	class 150Rnd_127x108_Ball: 450Rnd_127x108_Ball {};
	class 50Rnd_127x108_Ball: 450Rnd_127x108_Ball {};
	class 200Rnd_40mm_G_belt: VehicleMagazine
		nameSound = "";
	class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt {};
	class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt {};
	class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt {};
	class 200Rnd_20mm_G_belt: VehicleMagazine
		nameSound = "";
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt {};
	class 24Rnd_PG_missiles: VehicleMagazine
		nameSound = "missiles";
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles {};
	class 24Rnd_missiles: VehicleMagazine
		nameSound = "rockets";
	class 12Rnd_missiles: 24Rnd_missiles {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine
		nameSound = "heat";
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class 8Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells {};
	class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells {};
	class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells {};
	class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells {};
	class 6Rnd_155mm_Mo_smoke: 32Rnd_155mm_Mo_shells {};
	class 2Rnd_155mm_Mo_guided: 6Rnd_155mm_Mo_smoke {};
	class 2Rnd_155mm_Mo_LG: 6Rnd_155mm_Mo_smoke {};
	class 6Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_smoke {};
	class 6Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_smoke {};
	class 2Rnd_155mm_Mo_Cluster: 6Rnd_155mm_Mo_smoke {};
	class UGL_FlareWhite_F: CA_Magazine
		nameSound = "";
	class 3Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F {};
	class UGL_FlareGreen_F: UGL_FlareWhite_F {};
	class 3Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F {};
	class UGL_FlareRed_F: UGL_FlareWhite_F {};
	class 3Rnd_UGL_FlareRed_F: UGL_FlareRed_F {};
	class UGL_FlareYellow_F: UGL_FlareWhite_F {};
	class 3Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F {};
	class UGL_FlareCIR_F: UGL_FlareWhite_F {};
	class 3Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F {};
	class FlareWhite_F: CA_Magazine
		nameSound = "";
	class FlareGreen_F: FlareWhite_F {};
	class FlareRed_F: FlareWhite_F {};
	class FlareYellow_F: FlareWhite_F {};
	class Laserbatteries: CA_Magazine
		nameSound = "laserdesignator";
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag {};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01 {};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01 {};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01 {};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01 {};
	class 150Rnd_762x51_Box: CA_Magazine
		nameSound = "mgun";
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box {};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box {};
	class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box {};
	class Titan_AA: CA_LauncherMagazine
	class Titan_AP: Titan_AA {};
	class Titan_AT: Titan_AA {};
	class 300Rnd_20mm_shells: VehicleMagazine
		nameSound = "cannon";
	class 1000Rnd_20mm_shells: 300Rnd_20mm_shells {};
	class 2000Rnd_20mm_shells: 300Rnd_20mm_shells {};
	class 300Rnd_25mm_shells: VehicleMagazine
		nameSound = "cannon";
	class 1000Rnd_25mm_shells: 300Rnd_25mm_shells {};
	class 250Rnd_30mm_HE_shells: VehicleMagazine
		nameSound = "cannon";
	class 250Rnd_30mm_HE_shells_Tracer_Red: 250Rnd_30mm_HE_shells {};
	class 250Rnd_30mm_HE_shells_Tracer_Green: 250Rnd_30mm_HE_shells {};
	class 250Rnd_30mm_APDS_shells: 250Rnd_30mm_HE_shells {};
	class 250Rnd_30mm_APDS_shells_Tracer_Red: 250Rnd_30mm_APDS_shells {};
	class 250Rnd_30mm_APDS_shells_Tracer_Green: 250Rnd_30mm_APDS_shells {};
	class 250Rnd_30mm_APDS_shells_Tracer_Yellow: 250Rnd_30mm_APDS_shells {};
	class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells {};
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells {};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red {};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red {};
	class 60Rnd_30mm_APFSDS_shells: 250Rnd_30mm_HE_shells {};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells {};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells {};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells {};
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
		nameSound = "cannon";
	class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells {};
	class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells {};
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells {};
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells {};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells {};
	class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells {};
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells {};
	class 8Rnd_LG_scalpel: VehicleMagazine
		nameSound = "missiles";
	class 6Rnd_LG_scalpel: 8Rnd_LG_scalpel {};
	class 2Rnd_LG_scalpel: 8Rnd_LG_scalpel {};
	class 2Rnd_LG_scalpel_hidden: 2Rnd_LG_scalpel {};
	class 14Rnd_80mm_rockets: VehicleMagazine
		nameSound = "rockets";
	class 38Rnd_80mm_rockets: 14Rnd_80mm_rockets {};
	class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets {};
	class 2Rnd_AAA_missiles: VehicleMagazine
		nameSound = "missiles";
	class 2Rnd_AAA_missiles_MI02: 2Rnd_AAA_missiles {};
	class 4Rnd_AAA_missiles: 2Rnd_AAA_missiles {};
	class 4Rnd_AAA_missiles_MI02: 4Rnd_AAA_missiles {};
	class 4Rnd_GAA_missiles: VehicleMagazine
		nameSound = "missiles";
	class 4Rnd_Titan_long_missiles: 4Rnd_GAA_missiles {};
	class 5Rnd_GAT_missiles: VehicleMagazine
		nameSound = "missiles";
	class 2Rnd_GAT_missiles: 5Rnd_GAT_missiles {};
	class 30Rnd_120mm_HE_shells: VehicleMagazine
		nameSound = "cannon";
	class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells {};
	class 30Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells {};
	class 30Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells {};
	class 16Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells {};
	class 16Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red {};
	class 16Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green {};
	class 16Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow {};
	class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells {};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells {};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells {};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells {};
	class 32Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells {};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red {};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green {};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow {};
	class 680Rnd_35mm_AA_shells: VehicleMagazine
		nameSound = "cannon";
	class 680Rnd_35mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells {};
	class 680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells {};
	class 680Rnd_35mm_AA_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells {};
	class 6Rnd_AAT_missiles: VehicleMagazine
		nameSound = "missiles";
	class 4Rnd_AAT_missiles: 6Rnd_AAT_missiles {};
	class 1Rnd_GAA_missiles: 4Rnd_GAA_missiles {};
	class 1Rnd_GAT_missiles: 5Rnd_GAT_missiles {};
	class 2Rnd_GBU12_LGB: VehicleMagazine
		nameSound = "cannon";
	class 2Rnd_GBU12_LGB_MI10: 2Rnd_GBU12_LGB {};
	class 2Rnd_Mk82: VehicleMagazine
		nameSound = "missiles";
	class 2Rnd_Mk82_MI08: 2Rnd_Mk82 {};
	class 11Rnd_45ACP_Mag: CA_Magazine
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag {};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag {};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag {};
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag {};
	class B_IR_Grenade: CA_Magazine
		nameSound = "handgrenade";
	class O_IR_Grenade: B_IR_Grenade {};
	class I_IR_Grenade: B_IR_Grenade {};
	class 28Rnd_120mm_APFSDS_shells: 32Rnd_120mm_APFSDS_shells {};
	class 24Rnd_125mm_APFSDS: 32Rnd_120mm_APFSDS_shells {};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Red: 32Rnd_120mm_APFSDS_shells_Tracer_Red {};
	class 24Rnd_125mm_APFSDS_T_Red: 32Rnd_120mm_APFSDS_shells_Tracer_Red {};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Green: 32Rnd_120mm_APFSDS_shells_Tracer_Green {};
	class 24Rnd_125mm_APFSDS_T_Green: 32Rnd_120mm_APFSDS_shells_Tracer_Green {};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Yellow: 32Rnd_120mm_APFSDS_shells_Tracer_Yellow {};
	class 24Rnd_125mm_APFSDS_T_Yellow: 32Rnd_120mm_APFSDS_shells_Tracer_Yellow {};
	class 14Rnd_120mm_HE_shells: 16Rnd_120mm_HE_shells {};
	class 12Rnd_125mm_HE: 16Rnd_120mm_HE_shells {};
	class 14Rnd_120mm_HE_shells_Tracer_Red: 16Rnd_120mm_HE_shells_Tracer_Red {};
	class 12Rnd_125mm_HE_T_Red: 16Rnd_120mm_HE_shells_Tracer_Red {};
	class 14Rnd_120mm_HE_shells_Tracer_Green: 16Rnd_120mm_HE_shells_Tracer_Green {};
	class 12Rnd_125mm_HE_T_Green: 16Rnd_120mm_HE_shells_Tracer_Green {};
	class 14Rnd_120mm_HE_shells_Tracer_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow {};
	class 12Rnd_125mm_HE_T_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow {};
	class 12Rnd_125mm_HEAT: 12Rnd_125mm_HE {};
	class 12Rnd_125mm_HEAT_T_Red: 12Rnd_125mm_HEAT {};
	class 12Rnd_125mm_HEAT_T_Green: 12Rnd_125mm_HEAT {};
	class 12Rnd_125mm_HEAT_T_Yellow: 12Rnd_125mm_HEAT {};
	class 200Rnd_762x51_Belt: VehicleMagazine
		nameSound = "mgun";
	class 200Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt {};
	class 200Rnd_762x51_Belt_T_Red: 200Rnd_762x51_Belt_Red {};
	class 200Rnd_762x51_Belt_Green: 200Rnd_762x51_Belt {};
	class 200Rnd_762x51_Belt_T_Green: 200Rnd_762x51_Belt_Green {};
	class 200Rnd_762x51_Belt_Yellow: 200Rnd_762x51_Belt {};
	class 200Rnd_762x51_Belt_T_Yellow: 200Rnd_762x51_Belt_Yellow {};
	class 1000Rnd_762x51_Belt: 200Rnd_762x51_Belt {};
	class 1000Rnd_762x51_Belt_Red: 1000Rnd_762x51_Belt {};
	class 1000Rnd_762x51_Belt_T_Red: 1000Rnd_762x51_Belt_Red {};
	class 1000Rnd_762x51_Belt_Green: 1000Rnd_762x51_Belt {};
	class 1000Rnd_762x51_Belt_T_Green: 1000Rnd_762x51_Belt_Green {};
	class 1000Rnd_762x51_Belt_Yellow: 1000Rnd_762x51_Belt {};
	class 1000Rnd_762x51_Belt_T_Yellow: 1000Rnd_762x51_Belt_Yellow {};
	class 2000Rnd_762x51_Belt: 200Rnd_762x51_Belt {};
	class 2000Rnd_762x51_Belt_Red: 2000Rnd_762x51_Belt {};
	class 2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_Red {};
	class 2000Rnd_762x51_Belt_Green: 2000Rnd_762x51_Belt {};
	class 2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_Green {};
	class 2000Rnd_762x51_Belt_Yellow: 2000Rnd_762x51_Belt {};
	class 2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_Yellow {};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
		nameSound = "cannon";
	class 2Rnd_Missile_AA_04_F: VehicleMagazine
		nameSound = "missiles";
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine
		nameSound = "missiles";
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
		nameSound = "rockets";
	class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F {};
	class 4Rnd_Bomb_04_F: VehicleMagazine
		nameSound = "cannon";
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {};
	class 2Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_04_F {};
	class 4Rnd_Missile_AGM_01_F: 6Rnd_Missile_AGM_02_F {};
	class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F {};
	class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F {};
	class 2Rnd_Bomb_03_F: 4Rnd_Bomb_04_F {};
	class 40Rnd_105mm_APFSDS: 24Rnd_125mm_APFSDS {};
	class 40Rnd_105mm_APFSDS_T_Red: 40Rnd_105mm_APFSDS {};
	class 40Rnd_105mm_APFSDS_T_Green: 40Rnd_105mm_APFSDS {};
	class 40Rnd_105mm_APFSDS_T_Yellow: 40Rnd_105mm_APFSDS {};
	class 20Rnd_105mm_HEAT_MP: 12Rnd_125mm_HEAT {};
	class 20Rnd_105mm_HEAT_MP_T_Red: 20Rnd_105mm_HEAT_MP {};
	class 20Rnd_105mm_HEAT_MP_T_Green: 20Rnd_105mm_HEAT_MP {};
	class 20Rnd_105mm_HEAT_MP_T_Yellow: 20Rnd_105mm_HEAT_MP {};
	class ATMine_Range_Mag: CA_Magazine
		nameSoundWeapon = "mine";
		nameSound = "mine";
	class APERSMine_Range_Mag: ATMine_Range_Mag {};
	class APERSBoundingMine_Range_Mag: ATMine_Range_Mag {};
	class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag {};
	class APERSTripMine_Wire_Mag: ATMine_Range_Mag {};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine
		nameSoundWeapon = "mine";
		nameSound = "mine";
	class SatchelCharge_Remote_Mag: CA_Magazine
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
	class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag {};
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag {};
	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag {};
	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag {};
	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag {};
	class 6Rnd_GreenSignal_F: 3Rnd_UGL_FlareGreen_F {};
	class 6Rnd_RedSignal_F: 6Rnd_GreenSignal_F {};
	class 10Rnd_338_Mag: CA_Magazine {};
	class 130Rnd_338_Mag: CA_Magazine {};
	class 10Rnd_127x54_Mag: CA_Magazine {};
	class 150Rnd_93x64_Mag: CA_Magazine {};
	class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag {};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag {};
	class 30Rnd_580x42_Mag_F: CA_Magazine {};
	class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F {};
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F {};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F {};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine {};
	class 10Rnd_50BW_Mag_F: CA_Magazine {};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F {};
	class 30Rnd_762x39_Mag_F: CA_Magazine {};
	class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F {};
	class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F {};
	class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F {};
	class 30Rnd_545x39_Mag_F: CA_Magazine {};
	class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F {};
	class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F {};
	class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F {};
	class 200Rnd_556x45_Box_F: CA_Magazine {};
	class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F {};
	class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F {};
	class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F {};
	class 500Rnd_65x39_Belt: 200Rnd_65x39_Belt {};
	class 500Rnd_65x39_Belt_Tracer_Red_Splash: 500Rnd_65x39_Belt {};
	class 500Rnd_65x39_Belt_Tracer_Green_Splash: 500Rnd_65x39_Belt {};
	class 500Rnd_65x39_Belt_Tracer_Yellow_Splash: 500Rnd_65x39_Belt {};
	class RPG7_F: RPG32_F
	class 4Rnd_LG_Jian: 4Rnd_Missile_AGM_01_F {};
	class 4000Rnd_20mm_Tracer_Red_shells: 1000Rnd_20mm_shells {};
	class 160Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells {};
	class 240Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_Tracer_Red_shells {};
	class 100Rnd_105mm_HEAT_MP: 20Rnd_105mm_HEAT_MP {};
	class HandGrenade_West: HandGrenade {};
	class HandGrenade_East: HandGrenade_West {};
	class LIB_8Rnd_9x19: CA_Magazine
	class LIB_8Rnd_762x25: CA_Magazine
	class LIB_7Rnd_762x38: CA_Magazine
	class LIB_32Rnd_9x19: CA_Magazine {};
	class LIB_35Rnd_762x25: CA_Magazine {};
	class LIB_71Rnd_762x25: CA_Magazine
	class LIB_5Rnd_762x54: CA_Magazine {};
	class LIB_10Rnd_762x54: LIB_5Rnd_762x54 {};
	class LIB_5Rnd_792x57: CA_Magazine {};
	class LIB_10Rnd_792x57: LIB_5Rnd_792x57 {};
	class LIB_30Rnd_792x33: CA_Magazine {};
	class LIB_47Rnd_762x54: CA_Magazine
	class LIB_63Rnd_762x54: LIB_47Rnd_762x54 {};
	class LIB_50Rnd_792x57: CA_Magazine
	class LIB_5Rnd_762x63: CA_Magazine {};
	class LIB_8Rnd_762x63: CA_Magazine {};
	class LIB_15Rnd_762x33: LIB_8Rnd_762x63 {};
	class LIB_20Rnd_762x63: CA_Magazine {};
	class LIB_30Rnd_45ACP: CA_Magazine {};
	class LIB_7Rnd_45ACP: CA_Magazine
	class LIB_1Rnd_PzFaust_30m: CA_LauncherMagazine
	class 1Rnd_LIB_PzFaust_30m: LIB_1Rnd_PzFaust_30m {};
	class LIB_PzFaust_30m_Used: CA_LauncherMagazine {};
	class LIB_1Rnd_RPzB: CA_LauncherMagazine
	class LIB_1Rnd_60mm_M6: CA_LauncherMagazine
	class LIB_shg24: HandGrenade_West {};
	class LIB_shg24x7: LIB_shg24 {};
	class LIB_m39: HandGrenade_West {};
	class LIB_f1: HandGrenade_West {};
	class LIB_rg42: HandGrenade_West {};
	class LIB_rpg6: HandGrenade_West {};
	class LIB_pwm: HandGrenade_West {};
	class LIB_US_Mk_2: HandGrenade_West {};
	class LIB_RDG: SmokeShell {};
	class LIB_nb39: SmokeShell {};
	class LIB_US_M18: SmokeShell {};
	class LIB_US_M18_Red: SmokeShell {};
	class LIB_US_M18_Green: SmokeShell {};
	class LIB_US_M18_Yellow: SmokeShell {};
	class LIB_1Rnd_flare_white: CA_Magazine
		nameSound = "grenadelauncher";
	class LIB_1Rnd_flare_green: LIB_1Rnd_flare_white {};
	class LIB_1Rnd_flare_red: LIB_1Rnd_flare_white {};
	class LIB_1Rnd_flare_yellow: LIB_1Rnd_flare_white {};
	class LIB_5Rnd_762x54_D: LIB_5Rnd_762x54 {};
	class LIB_5Rnd_762x54_t46: LIB_5Rnd_762x54 {};
	class LIB_5Rnd_762x54_t30: LIB_5Rnd_762x54 {};
	class LIB_10Rnd_762x54_t46: LIB_10Rnd_762x54 {};
	class LIB_10Rnd_762x54_t30: LIB_10Rnd_762x54 {};
	class LIB_10Rnd_762x54_d: LIB_10Rnd_762x54 {};
	class LIB_10Rnd_762x54_t462: LIB_10Rnd_762x54_t46 {};
	class LIB_10Rnd_762x54_t302: LIB_10Rnd_762x54_t30 {};
	class LIB_5Rnd_792x57_t: LIB_5Rnd_792x57 {};
	class LIB_5Rnd_792x57_sS: LIB_5Rnd_792x57 {};
	class LIB_5Rnd_792x57_SMK: LIB_5Rnd_792x57 {};
	class LIB_10Rnd_792x57_T: LIB_10Rnd_792x57 {};
	class LIB_10Rnd_792x57_T2: LIB_10Rnd_792x57_T {};
	class LIB_10Rnd_792x57_sS: LIB_10Rnd_792x57 {};
	class LIB_10Rnd_792x57_SMK: LIB_10Rnd_792x57 {};
	class LIB_50Rnd_792x57_sS: LIB_50Rnd_792x57 {};
	class LIB_50Rnd_792x57_SMK: LIB_50Rnd_792x57_sS {};
	class LIB_47Rnd_762x54d: LIB_47Rnd_762x54 {};
	class LIB_63Rnd_762x54d: LIB_63Rnd_762x54 {};
	class LIB_35Rnd_762x25_t: LIB_35Rnd_762x25 {};
	class LIB_71Rnd_762x25_t: LIB_71Rnd_762x25 {};
	class LIB_35Rnd_762x25_t2: LIB_35Rnd_762x25_t {};
	class LIB_71Rnd_762x25_t2: LIB_71Rnd_762x25_t {};
	class LIB_35Rnd_762x25_ap: LIB_35Rnd_762x25 {};
	class LIB_71Rnd_762x25_ap: LIB_71Rnd_762x25 {};
	class LIB_5Rnd_762x54_b30: LIB_5Rnd_762x54 {};
	class LIB_10Rnd_762x54_b30: LIB_10Rnd_762x54 {};
	class 100Rnd_127x99_M2: VehicleMagazine
		nameSound = "mgun";
	class LIB_50Rnd_127x108: 100Rnd_127x99_M2
		nameSound = "mgun";
	class LIB_250rnd_7_62x54R_maxim: VehicleMagazine
		nameSound = "mgun";
	class LIB_50Rnd_792x57_Veh: VehicleMagazine
	class LIB_250Rnd_792x57: LIB_50Rnd_792x57_Veh
	class LIB_250rnd_7_62x54R_maxim_D: LIB_250rnd_7_62x54R_maxim {};
	class LIB_250Rnd_792x57_sS: LIB_250Rnd_792x57 {};
	class LIB_250Rnd_792x57_SMK: LIB_250Rnd_792x57 {};
	class LIB_63rnd_DT: VehicleMagazine
		nameSound = "MachineGun";
	class LIB_150rnd_MG34: VehicleMagazine
		nameSound = "MachineGun";
	class LIB_250Rnd_M1919A4: VehicleMagazine
		nameSound = "MachineGun";
	class LIB_FAKE_SHELL: VehicleMagazine
		nameSound = "cannon";
	class LIB_2000Rnd_MG131_FW190: VehicleMagazine {};
	class LIB_500Rnd_MG151_FW190: VehicleMagazine
		nameSound = "MachineGun";
	class LIB_500Rnd_MG151_JU87: LIB_500Rnd_MG151_FW190 {};
	class LIB_2000Rnd_MG81_JU87: VehicleMagazine
		nameSound = "";
	class LIB_1000Rnd_M2_P39: VehicleMagazine {};
	class LIB_30Rnd_M4_P39: VehicleMagazine {};
	class LIB_450Rnd_ShKAS_PE2: VehicleMagazine {};
	class LIB_150Rnd_UBK_PE2: VehicleMagazine {};
	class LIB_1500Rnd_UBT_PE2: LIB_150Rnd_UBK_PE2
		nameSound = "";
	class LIB_4000Rnd_M2_P47: VehicleMagazine {};
	class LIB_Bomb_VehicleMagazine_base: VehicleMagazine
		nameSound = "Bombs";
	class LIB_1Rnd_SC50: LIB_Bomb_VehicleMagazine_base {};
	class LIB_1Rnd_FAB250: LIB_Bomb_VehicleMagazine_base {};
	class LIB_1Rnd_SC250: LIB_Bomb_VehicleMagazine_base {};
	class LIB_1Rnd_US_500lb: LIB_Bomb_VehicleMagazine_base {};
	class LIB_1Rnd_FAB500: LIB_Bomb_VehicleMagazine_base {};
	class LIB_1Rnd_SC500: LIB_Bomb_VehicleMagazine_base {};
	class LIB_6Rnd_M8_P47: VehicleMagazine
		nameSound = "rockets";
	class LIB_8Rnd_82mmHE_BM37: VehicleMagazine
		nameSound = "heat";
	class ARTY_LIB_8Rnd_82mmHE_BM37: VehicleMagazine
		nameSound = "heat";
	class LIB_1rnd_82mmHE_BM37: LIB_8Rnd_82mmHE_BM37 {};
	class LIB_8Rnd_81mmHE_GRWR34: LIB_8Rnd_82mmHE_BM37 {};
	class ARTY_LIB_8Rnd_81mmHE_GRWR34: ARTY_LIB_8Rnd_82mmHE_BM37 {};
	class LIB_1rnd_81mmHE_GRWR34: LIB_8Rnd_81mmHE_GRWR34 {};
	class LIB_82mm_BM37_SmokeShell: 8Rnd_82mm_Mo_Smoke_white
		nameSound = "heat";
	class LIB_81mm_GRWR34_SmokeShell: 8Rnd_82mm_Mo_Smoke_white
		nameSound = "heat";
	class LIB_16Rnd_BM13: VehicleMagazine
		nameSound = "rockets";
	class LIB_80x_SprGr_FlaK_38: VehicleMagazine
		nameSound = "cannon";
	class LIB_5x_61k: VehicleMagazine
		nameSound = "Magazine";
	class LIB_5x_61kAP: LIB_5x_61k {};
	class LIB_20x_SprGr_FlaK_38: VehicleMagazine
		nameSound = "cannon";
	class LIB_20x_SprGr_FlaK_30: LIB_20x_SprGr_FlaK_38 {};
	class LIB_AP_VehicleMagazine_base: VehicleMagazine
		nameSound = "cannon";
	class LIB_40x_BR350B_ZiS3_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_BR471_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_12x_BR471_AP: LIB_BR471_AP {};
	class LIB_M61_M1_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_30x_M61_M1_AP: LIB_M61_M1_AP {};
	class LIB_PzGr39_KWK40_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_30x_PzGr39_KWK40_AP: LIB_PzGr39_KWK40_AP {};
	class LIB_40x_PzGr39_Pak40_AP: LIB_PzGr39_KWK40_AP {};
	class LIB_15x_PzGr39_StuK40_AP: LIB_PzGr39_KWK40_AP {};
	class LIB_PzGr3942_KwK42_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_40x_PzGr3942_KwK42_AP: LIB_PzGr3942_KwK42_AP {};
	class LIB_PzGr43_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_30x_PzGr43_AP: LIB_PzGr43_AP {};
	class LIB_PzGr39_KwK36_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_30x_PzGr39_KwK36_AP: LIB_PzGr39_KwK36_AP {};
	class LIB_BR350B_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_40x_BR350B_AP: LIB_BR350B_AP {};
	class LIB_BR365_AP: LIB_AP_VehicleMagazine_base {};
	class LIB_14x_BR365_AP: LIB_BR365_AP {};
	class LIB_15x_BR365_AP: LIB_BR365_AP {};
	class LIB_APCR_VehicleMagazine_base: VehicleMagazine
		nameSound = "cannon";
	class LIB_10x_BR350P_ZiS3_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_T45_M1_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_14x_T45_M1_APCR: LIB_T45_M1_APCR {};
	class LIB_PzGr40_KWK40_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_10x_PzGr40_KWK40_APCR: LIB_PzGr40_KWK40_APCR {};
	class LIB_10x_PzGr40_Pak40_APCR: LIB_PzGr40_KWK40_APCR {};
	class LIB_5x_PzGr40_StuK40_APCR: LIB_PzGr40_KWK40_APCR {};
	class LIB_PzGr4042_KwK42_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_9x_PzGr4042_KwK42_APCR: LIB_PzGr4042_KwK42_APCR {};
	class LIB_PzGr40_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_10x_PzGr40_APCR: LIB_PzGr40_APCR {};
	class LIB_PzGr40_KwK36_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_12x_PzGr40_KwK36_APCR: LIB_PzGr40_KwK36_APCR {};
	class LIB_BR350P_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_10x_BR350P_APCR: LIB_BR350P_APCR {};
	class LIB_BR365P_APCR: LIB_APCR_VehicleMagazine_base {};
	class LIB_5x_BR365P_APCR: LIB_BR365P_APCR {};
	class LIB_8x_BR365P_APCR: LIB_BR365P_APCR {};
	class LIB_HE_VehicleMagazine_base: VehicleMagazine
		nameSound = "cannon";
	class LIB_50x_OF350_ZiS3_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_OF471_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_16x_OF471_HE: LIB_OF471_HE {};
	class LIB_M42A1_M1_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_60x_M42A1_M1_HE: LIB_M42A1_M1_HE {};
	class LIB_SprGr34_KWK40_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_60x_SprGr34_KWK40_HE: LIB_SprGr34_KWK40_HE {};
	class LIB_50x_SprGr34_Pak40_HE: LIB_SprGr34_KWK40_HE {};
	class LIB_30x_SprGr34_StuK40_HE: LIB_SprGr34_KWK40_HE {};
	class LIB_SprGr42_KwK42_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_30x_SprGr42_KwK42_HE: LIB_SprGr42_KwK42_HE {};
	class LIB_SprGr39_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_40x_SprGr39_HE: LIB_SprGr39_HE {};
	class LIB_SprGr_KwK36_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_50x_SprGr_KwK36_HE: LIB_SprGr_KwK36_HE {};
	class LIB_OF350_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_50x_OF350_HE: LIB_OF350_HE {};
	class LIB_O365_HE: LIB_HE_VehicleMagazine_base {};
	class LIB_36x_O365_HE: LIB_O365_HE {};
	class LIB_25x_O365_HE: LIB_O365_HE {};
	class LIB_Mine_Magazine: CA_Magazine
		nameSoundWeapon = "mine";
		nameSound = "mine";
	class LIB_TMI_42_MINE_mag: LIB_Mine_Magazine {};
	class LIB_SMI_35_1_MINE_mag: LIB_Mine_Magazine {};
	class LIB_pomzec_MINE_mag: LIB_Mine_Magazine
	class LIB_SMI_35_MINE_mag: LIB_Mine_Magazine {};
	class LIB_STMI_MINE_mag: LIB_Mine_Magazine
	class LIB_shumine_42_MINE_mag: LIB_Mine_Magazine
	class LIB_Ladung_Small_MINE_mag: LIB_Mine_Magazine
	class LIB_Ladung_Big_MINE_mag: LIB_Mine_Magazine {};
	class LIB_M3_MINE_mag: LIB_Mine_Magazine {};
	class LIB_PMD6_MINE_mag: LIB_Mine_Magazine
	class LIB_TM44_MINE_mag: LIB_Mine_Magazine {};
	class LIB_TROTIL_MINE_mag: LIB_Mine_Magazine {};
	class LIB_US_M1A1_ATMINE_mag: LIB_Mine_Magazine {};
	class LIB_US_M3_MINE_mag: LIB_Mine_Magazine {};
	class LIB_US_TNT_4pound_mag: LIB_Mine_Magazine {};
	class TimeBomb: CA_Magazine
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
	class Mine: TimeBomb
		nameSoundWeapon = "mine";
		nameSound = "mine";
	class MineE: TimeBomb
		nameSoundWeapon = "mine";
		nameSound = "mine";
	class PipeBomb: TimeBomb
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
	class LIB_PP_MINE_mag: LIB_Mine_Magazine {};
	class LIB_PM_MINE_mag: LIB_Mine_Magazine {};
	class LIB_PM_Provod_50: LIB_Mine_Magazine
	class LIB_PM_Provod_75: LIB_PM_Provod_50 {};
	class LIB_PM_Provod_100: LIB_PM_Provod_50 {};
	class LIB_Ladung_PM_MINE_mag: LIB_Mine_Magazine
	class LIB_US_BM10_PM_mag: LIB_Mine_Magazine
	class LIB_MARKER_MINE_mag: LIB_Mine_Magazine
class Mode_SemiAuto
class Mode_Burst: Mode_SemiAuto
class Mode_FullAuto: Mode_SemiAuto
class CfgWeapons
	class Default
		nameSound = "";
	class PistolCore: Default
	class RifleCore: Default
	class MGunCore: Default
	class LauncherCore: Default
	class GrenadeCore: Default
	class CannonCore: Default
	class FakeWeapon: MGunCore
	class DetectorCore: Default
	class RocketPods: LauncherCore
		nameSound = "rockets";
	class MGun: MGunCore
		nameSound = "mgun";
	class M2: MGun {};
	class LMG_RCWS: MGun
	class LMG_65mm_body: LMG_RCWS
	class LMG_M200: LMG_RCWS {};
	class LMG_M200_body: LMG_M200
	class LMG_Minigun: LMG_RCWS
	class LMG_Minigun_heli: LMG_Minigun
	class HMG_127: LMG_RCWS
	class HMG_127_APC: HMG_127 {};
	class HMG_127_UGV: HMG_127 {};
	class HMG_01: HMG_127
	class HMG_static: HMG_01
	class HMG_M2: HMG_01
	class HMG_NSVT: HMG_127 {};
	class SmokeLauncher: MGun
	class FlareLauncher: SmokeLauncher
	class CMFlareLauncher: SmokeLauncher
	class M134_minigun: MGunCore
	class mortar_82mm: CannonCore
		nameSound = "CannonCore";
	class MissileLauncher: LauncherCore
		nameSound = "MissileLauncher";
	class missiles_DAGR: RocketPods
	class missiles_DAR: RocketPods
	class GMG_F: MGun {};
	class GMG_20mm: GMG_F
	class GMG_40mm: GMG_F
	class Laserdesignator_mounted: Default {};
	class autocannon_Base_F: CannonCore
		nameSound = "cannon";
	class autocannon_40mm_CTWS: autocannon_Base_F
	class autocannon_30mm_CTWS: autocannon_Base_F
	class gatling_20mm: CannonCore
		nameSound = "cannon";
	class gatling_30mm: CannonCore
		nameSound = "cannon";
	class missiles_ASRAAM: MissileLauncher
	class missiles_SCALPEL: RocketPods
		nameSound = "MissileLauncher";
	class missiles_titan: MissileLauncher
	class rockets_Skyfire: RocketPods
	class LMG_Minigun2: LMG_Minigun {};
	class LMG_Minigun_Transport: LMG_Minigun {};
	class LMG_Minigun_Transport2: LMG_Minigun_Transport {};
	class SEARCHLIGHT: MGun {};
	class cannon_120mm: CannonCore
		nameSound = "cannon";
	class cannon_125mm: CannonCore
		nameSound = "cannon";
	class cannon_105mm: CannonCore
		nameSound = "cannon";
	class gatling_25mm: CannonCore
		nameSound = "cannon";
	class autocannon_35mm: CannonCore
		nameSound = "cannon";
	class mortar_155mm_AMOS: CannonCore
		nameSound = "cannon";
	class missiles_Zephyr: MissileLauncher
	class missiles_titan_static: missiles_titan {};
	class GBU12BombLauncher: RocketPods
		nameSound = "";
	class GBU12BombLauncher_Plane_Fighter_03_F: GBU12BombLauncher {};
	class Mk82BombLauncher: RocketPods
		nameSound = "";
	class rockets_230mm_GAT: RocketPods
	class LMG_coax: LMG_RCWS
	class autocannon_30mm: autocannon_30mm_CTWS
	class cannon_120mm_long: cannon_120mm {};
	class Twin_Cannon_20mm: gatling_20mm {};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
		nameSound = "cannon";
	class Missile_AA_04_Plane_CAS_01_F: RocketPods
		nameSound = "MissileLauncher";
	class Missile_AGM_02_Plane_CAS_01_F: MissileLauncher
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	class Rocket_04_AP_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F {};
	class Bomb_04_Plane_CAS_01_F: RocketPods
		nameSound = "";
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
		nameSound = "cannon";
	class Missile_AA_03_Plane_CAS_02_F: Missile_AA_04_Plane_CAS_01_F {};
	class Missile_AGM_01_Plane_CAS_02_F: Missile_AGM_02_Plane_CAS_01_F {};
	class Rocket_03_HE_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F {};
	class Rocket_03_AP_Plane_CAS_02_F: Rocket_04_AP_Plane_CAS_01_F {};
	class Bomb_03_Plane_CAS_02_F: Bomb_04_Plane_CAS_01_F {};
	class HMG_127_MBT: HMG_127_APC {};
	class Launcher: LauncherCore
		nameSound = "atlauncher";
	class Launcher_Base_F: Launcher
	class GrenadeLauncher: Default
	class UGL_F: GrenadeLauncher
	class Rifle: RifleCore
		nameSound = "rifle";
	class Rifle_Base_F: Rifle {};
	class Rifle_Short_Base_F: Rifle_Base_F {};
	class Rifle_Long_Base_F: Rifle_Base_F {};
	class HandGunBase: Rifle
		nameSound = "sidearm";
	class Pistol: PistolCore
		nameSound = "Pistol";
	class Pistol_Base_F: Pistol
	class Throw: GrenadeLauncher
	class Put: Default
	class CarHorn: Default
	class BikeHorn: CarHorn
	class TruckHorn: CarHorn
	class TruckHorn2: CarHorn
	class TruckHorn3: CarHorn
	class SportCarHorn: CarHorn
	class MiniCarHorn: CarHorn
	class FakeHorn: CarHorn {};
	class ItemCore: Default
	class ItemWatch: ItemCore {};
	class ItemCompass: ItemCore {};
	class ItemGPS: ItemCore {};
	class ItemRadio: ItemCore {};
	class ItemMap: ItemCore {};
	class MineDetector: DetectorCore {};
	class Binocular: Default
		nameSound = "binoculars";
	class Rangefinder: Binocular {};
	class NVGoggles: Binocular
		nameSound = "nvgoggles";
	class NVGoggles_OPFOR: NVGoggles {};
	class NVGoggles_INDEP: NVGoggles {};
	class Integrated_NVG_F: NVGoggles {};
	class Integrated_NVG_TI_0_F: NVGoggles {};
	class Integrated_NVG_TI_1_F: NVGoggles {};
	class Laserdesignator: Binocular {};
	class Laserdesignator_02: Laserdesignator {};
	class Laserdesignator_03: Laserdesignator {};
	class InventoryItem_Base_F
	class InventoryBreathingBombItem_Base_F: InventoryItem_Base_F
	class InventoryFinsItem_Base_F: InventoryItem_Base_F
	class InventoryFirstAidKitItem_Base_F: InventoryItem_Base_F
	class InventoryFlashLightItem_Base_F: InventoryItem_Base_F
	class InventoryOpticsItem_Base_F: InventoryItem_Base_F
	class MedikitItem: InventoryItem_Base_F
	class ToolKitItem: InventoryItem_Base_F
	class UniformItem: InventoryItem_Base_F
	class VestItem: InventoryItem_Base_F
	class BinocularItem: InventoryItem_Base_F
	class HMDItem: InventoryItem_Base_F
	class RadioItem: InventoryItem_Base_F
	class GoggleItem: InventoryItem_Base_F
	class ScubaItem: InventoryItem_Base_F
	class FirstAidKit: ItemCore {};
	class Medikit: ItemCore {};
	class ToolKit: ItemCore {};
	class launch_NLAW_F: Launcher_Base_F
	class launch_RPG32_F: Launcher_Base_F
	class launch_Titan_base: Launcher_Base_F
		nameSound = "aalauncher";
	class launch_Titan_short_base: launch_Titan_base {};
	class launch_B_Titan_F: launch_Titan_base {};
	class launch_I_Titan_F: launch_Titan_base {};
	class launch_O_Titan_F: launch_Titan_base {};
	class launch_Titan_F: launch_Titan_base {};
	class launch_B_Titan_short_F: launch_Titan_short_base {};
	class launch_I_Titan_short_F: launch_Titan_short_base {};
	class launch_O_Titan_short_F: launch_Titan_short_base {};
	class launch_Titan_short_F: launch_Titan_short_base {};
	class DMR_01_base_F: Rifle_Long_Base_F
	class srifle_DMR_01_F: DMR_01_base_F {};
	class srifle_DMR_01_ACO_F: srifle_DMR_01_F {};
	class srifle_DMR_01_MRCO_F: srifle_DMR_01_F {};
	class srifle_DMR_01_SOS_F: srifle_DMR_01_F {};
	class srifle_DMR_01_DMS_F: srifle_DMR_01_F {};
	class srifle_DMR_01_DMS_snds_F: srifle_DMR_01_F {};
	class srifle_DMR_01_ARCO_F: srifle_DMR_01_F {};
	class EBR_base_F: Rifle_Long_Base_F
	class srifle_EBR_F: EBR_base_F {};
	class srifle_EBR_ACO_F: srifle_EBR_F {};
	class srifle_EBR_MRCO_pointer_F: srifle_EBR_F {};
	class srifle_EBR_ARCO_pointer_F: srifle_EBR_F {};
	class srifle_EBR_SOS_F: srifle_EBR_F {};
	class srifle_EBR_ARCO_pointer_snds_F: srifle_EBR_F {};
	class srifle_EBR_DMS_F: srifle_EBR_F {};
	class srifle_EBR_Hamr_pointer_F: srifle_EBR_F {};
	class srifle_EBR_DMS_pointer_snds_F: srifle_EBR_F {};
	class GM6_base_F: Rifle_Long_Base_F
	class srifle_GM6_F: GM6_base_F
	class srifle_GM6_SOS_F: srifle_GM6_F {};
	class srifle_GM6_LRPS_F: srifle_GM6_F {};
	class srifle_GM6_camo_F: srifle_GM6_F {};
	class srifle_GM6_camo_SOS_F: srifle_GM6_camo_F {};
	class srifle_GM6_camo_LRPS_F: srifle_GM6_camo_F {};
	class LRR_base_F: Rifle_Long_Base_F
	class srifle_LRR_F: LRR_base_F
	class srifle_LRR_SOS_F: srifle_LRR_F {};
	class srifle_LRR_LRPS_F: srifle_LRR_F {};
	class srifle_LRR_camo_F: srifle_LRR_F {};
	class srifle_LRR_camo_SOS_F: srifle_LRR_camo_F {};
	class srifle_LRR_camo_LRPS_F: srifle_LRR_camo_F {};
	class LMG_Mk200_F: Rifle_Long_Base_F
		nameSound = "Mgun";
	class LMG_Mk200_MRCO_F: LMG_Mk200_F {};
	class LMG_Mk200_pointer_F: LMG_Mk200_F {};
	class LMG_Zafir_F: Rifle_Long_Base_F
		nameSound = "Mgun";
	class LMG_Zafir_pointer_F: LMG_Zafir_F {};
	class LMG_Zafir_ARCO_F: LMG_Zafir_F {};
	class hgun_ACPC2_F: Pistol_Base_F
	class hgun_ACPC2_snds_F: hgun_ACPC2_F {};
	class hgun_P07_F: Pistol_Base_F
	class hgun_P07_snds_F: hgun_P07_F {};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	class hgun_Pistol_heavy_01_snds_F: hgun_Pistol_heavy_01_F {};
	class hgun_Pistol_heavy_01_MRD_F: hgun_Pistol_heavy_01_F {};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	class hgun_Pistol_heavy_02_Yorris_F: hgun_Pistol_heavy_02_F {};
	class hgun_Rook40_F: Pistol_Base_F
	class hgun_Rook40_snds_F: hgun_Rook40_F {};
	class arifle_Katiba_Base_F: Rifle_Base_F
	class arifle_Katiba_F: arifle_Katiba_Base_F {};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F {};
	class arifle_Katiba_GL_F: arifle_Katiba_Base_F {};
	class arifle_Katiba_C_ACO_pointer_F: arifle_Katiba_C_F {};
	class arifle_Katiba_C_ACO_F: arifle_Katiba_C_F {};
	class arifle_Katiba_ACO_F: arifle_Katiba_F {};
	class arifle_Katiba_pointer_F: arifle_Katiba_F {};
	class arifle_Katiba_ACO_pointer_F: arifle_Katiba_F {};
	class arifle_Katiba_ARCO_F: arifle_Katiba_F {};
	class arifle_Katiba_ARCO_pointer_F: arifle_Katiba_F {};
	class arifle_Katiba_GL_ACO_F: arifle_Katiba_GL_F {};
	class arifle_Katiba_GL_ARCO_pointer_F: arifle_Katiba_GL_F {};
	class arifle_Katiba_GL_ACO_pointer_F: arifle_Katiba_GL_F {};
	class arifle_Katiba_GL_Nstalker_pointer_F: arifle_Katiba_GL_F {};
	class arifle_Katiba_GL_ACO_pointer_snds_F: arifle_Katiba_GL_F {};
	class arifle_Katiba_C_ACO_pointer_snds_F: arifle_Katiba_C_F {};
	class arifle_Katiba_ACO_pointer_snds_F: arifle_Katiba_F {};
	class arifle_Katiba_ARCO_pointer_snds_F: arifle_Katiba_F {};
	class mk20_base_F: Rifle_Base_F
	class arifle_Mk20_F: mk20_base_F {};
	class arifle_Mk20_plain_F: arifle_Mk20_F {};
	class arifle_Mk20C_F: mk20_base_F {};
	class arifle_Mk20C_plain_F: arifle_Mk20C_F {};
	class arifle_Mk20_GL_F: mk20_base_F {};
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F {};
	class arifle_Mk20C_ACO_F: arifle_Mk20C_F {};
	class arifle_Mk20C_ACO_pointer_F: arifle_Mk20C_F {};
	class arifle_Mk20_pointer_F: arifle_Mk20_F {};
	class arifle_Mk20_Holo_F: arifle_Mk20_F {};
	class arifle_Mk20_ACO_F: arifle_Mk20_F {};
	class arifle_Mk20_ACO_pointer_F: arifle_Mk20_F {};
	class arifle_Mk20_MRCO_F: arifle_Mk20_F {};
	class arifle_Mk20_MRCO_plain_F: arifle_Mk20_plain_F {};
	class arifle_Mk20_MRCO_pointer_F: arifle_Mk20_F {};
	class arifle_Mk20_GL_MRCO_pointer_F: arifle_Mk20_GL_F {};
	class arifle_Mk20_GL_ACO_F: arifle_Mk20_GL_F {};
	class arifle_MX_Base_F: Rifle_Base_F
	class arifle_MXC_F: arifle_MX_Base_F
	class arifle_MX_F: arifle_MX_Base_F {};
	class arifle_MX_GL_F: arifle_MX_Base_F {};
	class arifle_MX_SW_F: arifle_MX_Base_F
		nameSound = "Mgun";
	class arifle_MXM_F: arifle_MX_Base_F {};
	class arifle_MX_pointer_F: arifle_MX_F {};
	class arifle_MX_Holo_pointer_F: arifle_MX_F {};
	class arifle_MX_Hamr_pointer_F: arifle_MX_F {};
	class arifle_MX_ACO_pointer_F: arifle_MX_F {};
	class arifle_MX_ACO_F: arifle_MX_F {};
	class arifle_MX_GL_ACO_F: arifle_MX_GL_F {};
	class arifle_MX_GL_ACO_pointer_F: arifle_MX_GL_F {};
	class arifle_MX_GL_Hamr_pointer_F: arifle_MX_GL_F {};
	class arifle_MXC_Holo_F: arifle_MXC_F {};
	class arifle_MXC_Holo_pointer_F: arifle_MXC_F {};
	class arifle_MX_SW_pointer_F: arifle_MX_SW_F {};
	class arifle_MX_SW_Hamr_pointer_F: arifle_MX_SW_F {};
	class arifle_MXM_Hamr_pointer_F: arifle_MXM_F {};
	class arifle_MXC_ACO_F: arifle_MXC_F {};
	class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F {};
	class arifle_MXC_SOS_point_snds_F: arifle_MXC_F {};
	class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F {};
	class arifle_MXC_ACO_pointer_F: arifle_MXC_F {};
	class arifle_MX_ACO_pointer_snds_F: arifle_MX_F {};
	class arifle_MX_RCO_pointer_snds_F: arifle_MX_F {};
	class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F {};
	class arifle_MXM_SOS_pointer_F: arifle_MXM_F {};
	class arifle_MXM_RCO_pointer_snds_F: arifle_MXM_F {};
	class arifle_MXM_DMS_F: arifle_MXM_F {};
	class arifle_MXC_Black_F: arifle_MXC_F {};
	class arifle_MX_Black_F: arifle_MX_F {};
	class arifle_MX_GL_Black_F: arifle_MX_GL_F {};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F {};
	class arifle_MXM_Black_F: arifle_MXM_F {};
	class arifle_MX_GL_Black_Hamr_pointer_F: arifle_MX_GL_Black_F {};
	class arifle_MX_Black_Hamr_pointer_F: arifle_MX_Black_F {};
	class arifle_MX_SW_Black_Hamr_pointer_F: arifle_MX_SW_Black_F {};
	class SDAR_base_F: Rifle_Base_F
	class arifle_SDAR_F: SDAR_base_F {};
	class Tavor_base_F: Rifle_Base_F
	class arifle_TRG21_F: Tavor_base_F {};
	class arifle_TRG20_F: Tavor_base_F {};
	class arifle_TRG21_GL_F: arifle_TRG21_F {};
	class arifle_TRG20_Holo_F: arifle_TRG20_F {};
	class arifle_TRG20_ACO_pointer_F: arifle_TRG20_F {};
	class arifle_TRG20_ACO_Flash_F: arifle_TRG20_F {};
	class arifle_TRG20_ACO_F: arifle_TRG20_F {};
	class arifle_TRG21_ACO_pointer_F: arifle_TRG21_F {};
	class arifle_TRG21_ARCO_pointer_F: arifle_TRG21_F {};
	class arifle_TRG21_MRCO_F: arifle_TRG21_F {};
	class arifle_TRG21_GL_MRCO_F: arifle_TRG21_GL_F {};
	class arifle_TRG21_GL_ACO_pointer_F: arifle_TRG21_GL_F {};
	class pdw2000_base_F: Rifle_Short_Base_F
	class hgun_PDW2000_F: pdw2000_base_F {};
	class hgun_PDW2000_snds_F: hgun_PDW2000_F {};
	class hgun_PDW2000_Holo_F: hgun_PDW2000_F {};
	class hgun_PDW2000_Holo_snds_F: hgun_PDW2000_F {};
	class SMG_01_Base: Rifle_Short_Base_F
	class SMG_01_F: SMG_01_Base {};
	class SMG_01_Holo_F: SMG_01_F {};
	class SMG_01_Holo_pointer_snds_F: SMG_01_F {};
	class SMG_01_ACO_F: SMG_01_F {};
	class SMG_02_base_F: Rifle_Short_Base_F
	class SMG_02_F: SMG_02_base_F {};
	class SMG_02_ACO_F: SMG_02_F {};
	class SMG_02_ARCO_pointg_F: SMG_02_F {};
	class Uniform_Base: ItemCore {};
	class Vest_Camo_Base: ItemCore {};
	class Vest_NoCamo_Base: ItemCore {};
	class HeadgearItem: InventoryItem_Base_F
	class InventoryUavTerminalItem_Base_F: InventoryItem_Base_F
	class UavTerminal_base: ItemCore {};
	class B_UavTerminal: UavTerminal_base {};
	class O_UavTerminal: UavTerminal_base {};
	class I_UavTerminal: UavTerminal_base {};
	class FakeWeapon_moduleTracers_F: LMG_Mk200_F {};
	class hgun_Pistol_Signal_F: Pistol_Base_F
	class DMR_02_base_F: Rifle_Long_Base_F
	class DMR_03_base_F: Rifle_Long_Base_F
	class DMR_04_base_F: Rifle_Long_Base_F
	class DMR_05_base_F: Rifle_Long_Base_F
	class DMR_06_base_F: Rifle_Long_Base_F
	class MMG_01_base_F: Rifle_Long_Base_F
	class MMG_02_base_F: Rifle_Long_Base_F
	class InventoryUnderItem_Base_F: InventoryItem_Base_F
	class bipod_01_F_snd: ItemCore
	class bipod_01_F_blk: bipod_01_F_snd {};
	class bipod_01_F_mtp: bipod_01_F_snd {};
	class bipod_02_F_blk: bipod_01_F_snd
	class bipod_02_F_tan: bipod_02_F_blk {};
	class bipod_02_F_hex: bipod_02_F_blk {};
	class bipod_03_F_blk: bipod_01_F_snd
	class bipod_03_F_oli: bipod_03_F_blk {};
	class srifle_DMR_01_DMS_BI_F: srifle_DMR_01_DMS_F {};
	class srifle_DMR_01_DMS_snds_BI_F: srifle_DMR_01_DMS_snds_F {};
	class srifle_DMR_02_F: DMR_02_base_F {};
	class srifle_DMR_02_camo_F: srifle_DMR_02_F {};
	class srifle_DMR_02_sniper_F: srifle_DMR_02_F {};
	class srifle_DMR_02_ACO_F: srifle_DMR_02_F {};
	class srifle_DMR_02_MRCO_F: srifle_DMR_02_F {};
	class srifle_DMR_02_SOS_F: srifle_DMR_02_F {};
	class srifle_DMR_02_DMS_F: srifle_DMR_02_F {};
	class srifle_DMR_02_sniper_AMS_LP_S_F: srifle_DMR_02_sniper_F {};
	class srifle_DMR_02_camo_AMS_LP_F: srifle_DMR_02_camo_F {};
	class srifle_DMR_02_ARCO_F: srifle_DMR_02_F {};
	class srifle_DMR_03_F: DMR_03_base_F {};
	class srifle_DMR_03_khaki_F: srifle_DMR_03_F {};
	class srifle_DMR_03_tan_F: srifle_DMR_03_F {};
	class srifle_DMR_03_multicam_F: srifle_DMR_03_F {};
	class srifle_DMR_03_woodland_F: srifle_DMR_03_F {};
	class srifle_DMR_03_ACO_F: srifle_DMR_03_F {};
	class srifle_DMR_03_MRCO_F: srifle_DMR_03_F {};
	class srifle_DMR_03_SOS_F: srifle_DMR_03_F {};
	class srifle_DMR_03_DMS_F: srifle_DMR_03_F {};
	class srifle_DMR_03_tan_AMS_LP_F: srifle_DMR_03_tan_F {};
	class srifle_DMR_03_DMS_snds_F: srifle_DMR_03_F {};
	class srifle_DMR_03_ARCO_F: srifle_DMR_03_F {};
	class srifle_DMR_03_AMS_F: srifle_DMR_03_F {};
	class srifle_DMR_04_F: DMR_04_base_F {};
	class srifle_DMR_04_Tan_F: srifle_DMR_04_F {};
	class srifle_DMR_04_ACO_F: srifle_DMR_04_F {};
	class srifle_DMR_04_MRCO_F: srifle_DMR_04_F {};
	class srifle_DMR_04_SOS_F: srifle_DMR_04_F {};
	class srifle_DMR_04_DMS_F: srifle_DMR_04_F {};
	class srifle_DMR_04_ARCO_F: srifle_DMR_04_F {};
	class srifle_DMR_04_NS_LP_F: srifle_DMR_04_F {};
	class srifle_DMR_05_blk_F: DMR_05_base_F {};
	class srifle_DMR_05_hex_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_tan_f: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_ACO_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_MRCO_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_SOS_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_DMS_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_KHS_LP_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_DMS_snds_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_05_ARCO_F: srifle_DMR_05_blk_F {};
	class srifle_DMR_06_camo_F: DMR_06_base_F {};
	class srifle_DMR_06_olive_F: srifle_DMR_06_camo_F {};
	class srifle_DMR_06_camo_khs_F: srifle_DMR_06_camo_F {};
	class srifle_EBR_MRCO_LP_BI_F: srifle_EBR_F {};
	class LMG_Mk200_LP_BI_F: LMG_Mk200_pointer_F {};
	class LMG_Mk200_BI_F: LMG_Mk200_F {};
	class MMG_01_hex_F: MMG_01_base_F {};
	class MMG_01_tan_F: MMG_01_hex_F {};
	class MMG_01_hex_ARCO_LP_F: MMG_01_hex_F {};
	class MMG_02_camo_F: MMG_02_base_F {};
	class MMG_02_black_F: MMG_02_camo_F {};
	class MMG_02_sand_F: MMG_02_camo_F {};
	class MMG_02_sand_RCO_LP_F: MMG_02_sand_F {};
	class MMG_02_black_RCO_BI_F: MMG_02_black_F {};
	class arifle_MXM_DMS_LP_BI_snds_F: arifle_MXM_F {};
	class arifle_MXM_Hamr_LP_BI_F: arifle_MXM_Hamr_pointer_F {};
	class missiles_Jian: Missile_AGM_01_Plane_CAS_02_F {};
	class HMG_127_LSV_01: HMG_static {};
	class MMG_02_vehicle: LMG_RCWS
	class gatling_20mm_VTOL_01: gatling_20mm
	class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS {};
	class cannon_105mm_VTOL_01: cannon_105mm {};
	class gatling_30mm_VTOL_02: gatling_30mm {};
	class O_NVGoggles_hex_F: NVGoggles {};
	class O_NVGoggles_urb_F: O_NVGoggles_hex_F {};
	class O_NVGoggles_ghex_F: O_NVGoggles_hex_F {};
	class NVGoggles_tna_F: NVGoggles {};
	class NVGogglesB_blk_F: NVGoggles {};
	class NVGogglesB_grn_F: NVGoggles {};
	class NVGogglesB_gry_F: NVGoggles {};
	class Laserdesignator_01_khk_F: Laserdesignator {};
	class Laserdesignator_02_ghex_F: Laserdesignator_02 {};
	class MuzzleSlot {};
	class arifle_MX_khk_F: arifle_MX_Black_F {};
	class arifle_MX_khk_ACO_Pointer_F: arifle_MX_khk_F {};
	class arifle_MX_khk_Holo_Pointer_F: arifle_MX_khk_F {};
	class arifle_MX_khk_Hamr_Pointer_F: arifle_MX_khk_F {};
	class arifle_MX_khk_Hamr_Pointer_Snds_F: arifle_MX_khk_F {};
	class arifle_MX_khk_Pointer_F: arifle_MX_khk_F {};
	class arifle_MX_khk_ACO_Pointer_Snds_F: arifle_MX_khk_F {};
	class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F {};
	class arifle_MX_GL_khk_ACO_F: arifle_MX_GL_khk_F {};
	class arifle_MX_GL_khk_Hamr_Pointer_F: arifle_MX_GL_khk_F {};
	class arifle_MX_GL_khk_Holo_Pointer_Snds_F: arifle_MX_GL_khk_F {};
	class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F {};
	class arifle_MX_SW_khk_Pointer_F: arifle_MX_SW_khk_F {};
	class arifle_MXC_khk_F: arifle_MXC_Black_F {};
	class arifle_MXC_khk_Holo_Pointer_F: arifle_MXC_khk_F {};
	class arifle_MXC_khk_ACO_F: arifle_MXC_khk_F {};
	class arifle_MXC_khk_ACO_Pointer_Snds_F: arifle_MXC_khk_F {};
	class arifle_MXM_khk_F: arifle_MXM_Black_F {};
	class arifle_MXM_khk_MOS_Pointer_Bipod_F: arifle_MXM_khk_F {};
	class srifle_LRR_tna_F: srifle_LRR_camo_F {};
	class srifle_LRR_tna_LRPS_F: srifle_LRR_tna_F {};
	class srifle_GM6_ghex_F: srifle_GM6_F {};
	class srifle_GM6_ghex_LRPS_F: srifle_GM6_ghex_F {};
	class hgun_P07_khk_F: hgun_P07_F {};
	class hgun_P07_khk_Snds_F: hgun_P07_khk_F {};
	class bipod_01_F_khk: bipod_01_F_snd {};
	class launch_RPG32_ghex_F: launch_RPG32_F {};
	class launch_RPG7_F: Launcher_Base_F
	class launch_B_Titan_tna_F: launch_B_Titan_F {};
	class launch_B_Titan_short_tna_F: launch_B_Titan_short_F {};
	class launch_O_Titan_ghex_F: launch_O_Titan_F {};
	class launch_O_Titan_short_ghex_F: launch_O_Titan_short_F {};
	class DMR_07_base_F: Rifle_Long_Base_F
	class srifle_DMR_07_blk_F: DMR_07_base_F {};
	class srifle_DMR_07_hex_F: DMR_07_base_F {};
	class srifle_DMR_07_ghex_F: DMR_07_base_F {};
	class srifle_DMR_07_blk_DMS_F: srifle_DMR_07_blk_F {};
	class srifle_DMR_07_blk_DMS_Snds_F: srifle_DMR_07_blk_F {};
	class LMG_03_base_F: Rifle_Long_Base_F
	class LMG_03_F: LMG_03_base_F {};
	class hgun_Pistol_01_F: Pistol_Base_F
	class arifle_AK12_base_F: Rifle_Base_F
	class arifle_AK12_F: arifle_AK12_base_F {};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F {};
	class arifle_AKM_base_F: Rifle_Base_F
	class arifle_AKM_F: arifle_AKM_base_F {};
	class arifle_AKM_FL_F: arifle_AKM_F {};
	class arifle_AKS_base_F: Rifle_Base_F
	class arifle_AKS_F: arifle_AKS_base_F {};
	class arifle_ARX_base_F: Rifle_Base_F
	class arifle_ARX_blk_F: arifle_ARX_base_F {};
	class arifle_ARX_ghex_F: arifle_ARX_base_F {};
	class arifle_ARX_hex_F: arifle_ARX_base_F {};
	class arifle_ARX_hex_ARCO_Pointer_Snds_F: arifle_ARX_hex_F {};
	class arifle_ARX_ghex_ARCO_Pointer_Snds_F: arifle_ARX_ghex_F {};
	class arifle_ARX_hex_ACO_Pointer_Snds_F: arifle_ARX_hex_F {};
	class arifle_ARX_ghex_ACO_Pointer_Snds_F: arifle_ARX_ghex_F {};
	class arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_hex_F {};
	class arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_ghex_F {};
	class arifle_ARX_Viper_F: arifle_ARX_ghex_F {};
	class arifle_ARX_Viper_hex_F: arifle_ARX_hex_F {};
	class arifle_CTAR_base_F: Rifle_Base_F
	class arifle_CTAR_blk_F: arifle_CTAR_base_F {};
	class arifle_CTAR_hex_F: arifle_CTAR_base_F {};
	class arifle_CTAR_ghex_F: arifle_CTAR_base_F {};
	class arifle_CTAR_GL_base_F: arifle_CTAR_base_F
	class arifle_CTAR_GL_blk_F: arifle_CTAR_GL_base_F {};
	class arifle_CTAR_GL_hex_F: arifle_CTAR_GL_base_F {};
	class arifle_CTAR_GL_ghex_F: arifle_CTAR_GL_base_F {};
	class arifle_CTAR_blk_ACO_Pointer_F: arifle_CTAR_blk_F {};
	class arifle_CTAR_blk_Pointer_F: arifle_CTAR_blk_F {};
	class arifle_CTAR_blk_ACO_F: arifle_CTAR_blk_F {};
	class arifle_CTAR_GL_blk_ACO_F: arifle_CTAR_GL_blk_F {};
	class arifle_CTAR_blk_ARCO_Pointer_F: arifle_CTAR_blk_F {};
	class arifle_CTAR_blk_ACO_Pointer_Snds_F: arifle_CTAR_blk_F {};
	class arifle_CTAR_GL_blk_ACO_Pointer_Snds_F: arifle_CTAR_GL_blk_F {};
	class arifle_CTAR_blk_ARCO_Pointer_Snds_F: arifle_CTAR_blk_F {};
	class arifle_CTAR_blk_ARCO_F: arifle_CTAR_blk_F {};
	class arifle_CTARS_base_F: Rifle_Base_F
	class arifle_CTARS_blk_F: arifle_CTARS_base_F {};
	class arifle_CTARS_hex_F: arifle_CTARS_base_F {};
	class arifle_CTARS_ghex_F: arifle_CTARS_base_F {};
	class arifle_CTARS_blk_Pointer_F: arifle_CTARS_blk_F {};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {};
	class arifle_SPAR_01_blk_ERCO_Pointer_F: arifle_SPAR_01_blk_F {};
	class arifle_SPAR_01_blk_ACO_Pointer_F: arifle_SPAR_01_blk_F {};
	class arifle_SPAR_01_GL_blk_ACO_Pointer_F: arifle_SPAR_01_GL_blk_F {};
	class arifle_SPAR_01_GL_blk_ERCO_Pointer_F: arifle_SPAR_01_GL_blk_F {};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F {};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F {};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F {};
	class arifle_SPAR_02_blk_Pointer_F: arifle_SPAR_02_blk_F {};
	class arifle_SPAR_02_blk_ERCO_Pointer_F: arifle_SPAR_02_blk_F {};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F {};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F {};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F {};
	class arifle_SPAR_03_blk_MOS_Pointer_Bipod_F: arifle_SPAR_03_blk_F {};
	class SMG_05_base_F: Rifle_Short_Base_F
	class SMG_05_F: SMG_05_base_F {};
	class LIB_M1918A2_BAR_Bipod: ItemCore
	class LIB_LAUNCHER: Launcher_Base_F {};
	class LIB_Binocular_base: Binocular
	class LIB_Binocular_GER: LIB_Binocular_base {};
	class LIB_Binocular_PL: LIB_Binocular_GER {};
	class LIB_Binocular_SU: LIB_Binocular_base {};
	class LIB_Binocular_US: LIB_Binocular_SU {};
	class LIB_PISTOL: Pistol_Base_F
	class LIB_P38: LIB_PISTOL
	class LIB_M1908: LIB_P38 {};
	class LIB_TT33: LIB_PISTOL
	class LIB_M1895: LIB_PISTOL
	class LIB_Colt_M1911: LIB_PISTOL
	class LIB_FLARE_PISTOL: LIB_PISTOL
	class LIB_SMG: Rifle_Short_Base_F {};
	class LIB_MP40: LIB_SMG
	class LIB_PPSh41_m: LIB_SMG
	class LIB_PPSh41_d: LIB_PPSh41_m {};
	class LIB_M1A1_Thompson: LIB_SMG
	class LIB_RIFLE: Rifle_Base_F {};
	class LIB_K98: LIB_RIFLE
	class LIB_M9130: LIB_RIFLE
	class LIB_M38: LIB_M9130 {};
	class LIB_M44: LIB_M9130 {};
	class LIB_MP44: LIB_RIFLE
	class LIB_SVT_40: LIB_RIFLE
	class LIB_G43: LIB_RIFLE
	class LIB_M1_Garand: LIB_RIFLE
	class LIB_M1_Carbine: LIB_RIFLE
	class LIB_LMG: Rifle_Long_Base_F
	class LIB_DP28: LIB_LMG
	class LIB_DT: LIB_LMG
	class LIB_DT_OPTIC: LIB_DT
	class LIB_MG42: LIB_LMG
	class LIB_M1918A2_BAR: LIB_LMG
	class LIB_SRIFLE: Rifle_Long_Base_F
		nameSound = "SniperRifle";
	class LIB_K98ZF39: LIB_SRIFLE
	class LIB_M9130PU: LIB_SRIFLE
	class LIB_M1903A4_Springfield: LIB_SRIFLE
	class LIB_PzFaust_30m: LIB_LAUNCHER
	class LIB_PzFaust_30m_used: LIB_PzFaust_30m {};
	class LIB_RPzB: LIB_LAUNCHER
	class LIB_M1A1_Bazooka: LIB_LAUNCHER
	class LIB_cannon_reloading: CannonCore {};
	class LIB_cannon_empty: LIB_cannon_reloading {};
	class LIB_OpelBlitzHorn: TruckHorn
	class LIB_MLMG_base: MGun
	class LIB_M2: LIB_MLMG_base
	class LIB_MLMG42: LIB_MLMG_base
	class LIB_MG42_Tripod: LIB_MLMG42 {};
	class LIB_MG42_Veh: LIB_MG42_Tripod {};
	class LIB_Maxim_M30: LIB_MLMG_base
	class LIB_TankMGun_base: MGun
	class LIB_DT29: LIB_TankMGun_base
	class LIB_DT29_kurs: LIB_DT29 {};
	class LIB_DT29_back: LIB_DT29_kurs {};
	class LIB_MG34: LIB_TankMGun_base
	class LIB_MG34_kurs: LIB_MG34 {};
	class LIB_M1919A4: LIB_TankMGun_base
	class LIB_M1919A4_kurs: LIB_M1919A4 {};
	class LIB_PlaneMGun_base: MGun
	class LIB_2xMG131_FW190: LIB_PlaneMGun_base
	class LIB_MG81_Ju87: LIB_PlaneMGun_base
	class LIB_4xM2_P39: LIB_PlaneMGun_base
	class LIB_ShKAS_PE2: LIB_PlaneMGun_base
	class LIB_UBK_PE2: LIB_PlaneMGun_base
	class LIB_UBT_PE2: LIB_UBK_PE2 {};
	class LIB_8xM2_P47: LIB_PlaneMGun_base
	class LIB_PlaneCannon_base: CannonCore
		nameSound = "cannon";
	class LIB_2xMG151_FW190: LIB_PlaneCannon_base
	class LIB_2xMG151_JU87: LIB_PlaneCannon_base
	class LIB_M4_P39: LIB_PlaneCannon_base
	class LIB_Bomb_Mount_base: RocketPods
		nameSound = "Bombs";
	class LIB_FAB250_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_SC50_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_SC250_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_SC500_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_US_500lb_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_M8_Launcher_P47: RocketPods
	class LIB_MortarCannon_base: CannonCore
		nameSound = "veh_StaticMortar";
	class LIB_BM37: LIB_MortarCannon_base {};
	class LIB_GRWR34: LIB_MortarCannon_base {};
	class LIB_BM13: RocketPods
	class LIB_AntiAirCannon_base: CannonCore
		nameSound = "cannon";
	class LIB_FlaK_38_X4: LIB_AntiAirCannon_base {};
	class LIB_61k: LIB_AntiAirCannon_base {};
	class LIB_FlaK_38: LIB_AntiAirCannon_base {};
	class LIB_FlaK_30: LIB_FlaK_38 {};
	class LIB_CannonCore: CannonCore
	class LIB_TankAPCannon_base: LIB_CannonCore {};
	class LIB_StaticGunAPCannon_base: LIB_TankAPCannon_base {};
	class LIB_ZIS3_AP: LIB_StaticGunAPCannon_base
	class LIB_Pak40_AP: LIB_StaticGunAPCannon_base
	class LIB_D25T_AP: LIB_TankAPCannon_base
	class LIB_M3_L40_AP: LIB_TankAPCannon_base
	class LIB_KwK40_L48_AP: LIB_TankAPCannon_base
	class LIB_StuK40_L48_AP: LIB_KwK40_L48_AP {};
	class LIB_KwK42_L70_AP: LIB_TankAPCannon_base
	class LIB_KwK43_L71_AP: LIB_TankAPCannon_base
		nameSound = "cannon";
	class LIB_KwK36_L56_AP: LIB_TankAPCannon_base
		nameSound = "cannon";
	class LIB_F34_AP: LIB_TankAPCannon_base
		nameSound = "cannon";
	class LIB_ZIS_S_53_AP: LIB_TankAPCannon_base
	class LIB_D_5S_AP: LIB_ZIS_S_53_AP {};
	class LIB_TankAPCRCannon_base: LIB_CannonCore {};
	class LIB_StaticGunAPCRCannon_base: LIB_TankAPCRCannon_base {};
	class LIB_ZIS3_APCR: LIB_StaticGunAPCRCannon_base
	class LIB_Pak40_APCR: LIB_StaticGunAPCRCannon_base
	class LIB_M3_L40_APCR: LIB_TankAPCRCannon_base
	class LIB_KwK40_L48_APCR: LIB_TankAPCRCannon_base
	class LIB_StuK40_L48_APCR: LIB_KwK40_L48_APCR {};
	class LIB_KwK42_L70_APCR: LIB_TankAPCRCannon_base
	class LIB_KwK43_L71_APCR: LIB_TankAPCRCannon_base
		nameSound = "cannon";
	class LIB_KwK36_L56_APCR: LIB_TankAPCRCannon_base
		nameSound = "cannon";
	class LIB_F34_APCR: LIB_TankAPCRCannon_base
		nameSound = "cannon";
	class LIB_ZIS_S_53_APCR: LIB_TankAPCRCannon_base
	class LIB_D_5S_APCR: LIB_ZIS_S_53_APCR {};
	class LIB_TankHECannon_base: LIB_CannonCore {};
	class LIB_StaticGunHECannon_base: LIB_TankHECannon_base {};
	class LIB_ZIS3_HE: LIB_StaticGunHECannon_base
	class LIB_Pak40_HE: LIB_StaticGunHECannon_base
	class LIB_D25T_HE: LIB_TankHECannon_base
	class LIB_M3_L40_HE: LIB_TankHECannon_base
	class LIB_KwK40_L48_HE: LIB_TankHECannon_base
	class LIB_StuK40_L48_HE: LIB_KwK40_L48_HE {};
	class LIB_KwK42_L70_HE: LIB_TankHECannon_base
	class LIB_KwK43_L71_HE: LIB_TankHECannon_base
		nameSound = "cannon";
	class LIB_KwK36_L56_HE: LIB_TankHECannon_base
		nameSound = "cannon";
	class LIB_F34_HE: LIB_TankHECannon_base
		nameSound = "cannon";
	class LIB_ZIS_S_53_HE: LIB_TankHECannon_base
	class LIB_D_5S_HE: LIB_ZIS_S_53_HE {};
	class LIB_NotLoadedCannon_base: CannonCore {};
	class LIB_ZIS3_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_Pak40_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_D25T_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_M3_L40_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_KwK40_L48_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_StuK40_L48_not_loaded: LIB_KwK40_L48_not_loaded {};
	class LIB_KwK42_L70_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_KwK43_L71_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_F34_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_KwK36_L56_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_ZIS_S_53_not_loaded: LIB_NotLoadedCannon_base {};
	class LIB_D_5S_not_loaded: LIB_ZIS_S_53_not_loaded {};
	class LIB_TankCannon_base: LIB_CannonCore
		nameSound = "cannon";
	class LIB_StaticGunCannon_base: LIB_TankCannon_base {};
	class LIB_ZIS3: LIB_StaticGunCannon_base
	class LIB_Pak40: LIB_StaticGunCannon_base
	class LIB_D25T: LIB_TankCannon_base
	class LIB_M3_L40: LIB_TankCannon_base
	class LIB_KwK40_L48: LIB_TankCannon_base
	class LIB_StuK40_L48: LIB_KwK40_L48 {};
	class LIB_KwK42_L70: LIB_TankCannon_base
	class LIB_KwK43_L71: LIB_TankCannon_base
	class LIB_KwK36_L56: LIB_TankCannon_base
	class LIB_F34: LIB_TankCannon_base
	class LIB_ZIS_S_53: LIB_TankCannon_base
	class LIB_D_5S: LIB_ZIS_S_53 {};
	class LIB_ItemCore: ItemCore
	class LIB_EXP: InventoryItem_Base_F {};
	class LIB_ToolKit: ToolKit {};
	class LIB_W: LIB_ToolKit {};
	class TimeBomb: Default {};
	class Mine: TimeBomb
		nameSound = "mine";
	class MineE: Mine {};
	class PipeBomb: Put
		nameSound = "satchelcharge";
class CfgVehicles
	class All
		nameSound = "veh_unknown_s";
	class Logic: All
		nameSound = "unknown";
	class AllVehicles: All
		nameSound = "unknown";
	class Land: AllVehicles
		nameSound = "unknown";
	class LandVehicle: Land
	class Car: LandVehicle
		class Sounds: Sounds
			class Movement: Movement
		nameSound = "veh_vehicle_car_s";
	class Motorcycle: LandVehicle
		nameSound = "veh_car";
	class Bicycle: Motorcycle {};
	class Tank: LandVehicle
		class Sounds: Sounds
			class Movement: Movement
		nameSound = "veh_vehicle_tank_s";
	class APC: Tank
		nameSound = "veh_apc";
	class Man: Land
		class SoundGear
		nameSound = "veh_infantry_s";
	class Animal: Man
		nameSound = "veh_animal";
	class Air: AllVehicles
		nameSound = "veh_aircraft";
	class Helicopter: Air
		class Sounds: Sounds
			class Movement: Movement
		nameSound = "veh_air_helicopter_s";
	class Plane: Air
		class Sounds: Sounds
			class Movement: Movement
		nameSound = "veh_air_plane_s";
	class Ship: AllVehicles
		class Sounds: Sounds
			class Movement: Movement
		nameSound = "veh_ship_s";
	class SmallShip: Ship
		nameSound = "veh_ship_attackBoat_s";
	class BigShip: Ship
		nameSound = "veh_ship_attackBoat_s";
	class Truck: Car
		nameSound = "veh_truck";
	class ParachuteBase: Helicopter
		nameSound = "veh_air_parachute_s";
	class LaserTarget: All
		nameSound = "obj_LaserTarget";
	class NVTarget: All
		nameSound = "obj_LaserTarget";
	class ArtilleryTarget: All
		nameSound = "";
	class ArtilleryTargetW: ArtilleryTarget {};
	class ArtilleryTargetE: ArtilleryTarget {};
	class SuppressTarget: LaserTarget
		nameSound = "";
	class PaperCar: Car {};
	class FireSectorTarget: All
		nameSound = "";
	class Static: All
		nameSound = "obj_object";
	class Rope: All {};
	class Fortress: Static
		nameSound = "obj_Bunker";
	class Building: Static
		nameSound = "obj_building";
	class NonStrategic: Building {};
	class HeliH: NonStrategic {};
	class Strategic: Building {};
	class FlagCarrierCore: Strategic {};
	class Thing: All
		nameSound = "obj_object";
	class ThingEffect: Thing {};
	class ThingEffectLight: ThingEffect {};
	class ThingEffectFeather: ThingEffectLight {};
	class FxExploArmor1: ThingEffect {};
	class FxExploArmor2: ThingEffect {};
	class FxExploArmor3: ThingEffect {};
	class FxExploArmor4: ThingEffect {};
	class FxCartridge: ThingEffect {};
	class WindAnomaly: All {};
	class Tracked_APC: Tank {};
	class Wheeled_APC: Car {};
	class Bus: Car {};
	class Tractor: Car {};
	class StaticWeapon: LandVehicle
		nameSound = "veh_static_s";
	class StaticMGWeapon: StaticWeapon
		nameSound = "veh_static_MG_s";
	class StaticATWeapon: StaticWeapon {};
	class StaticAAWeapon: StaticWeapon {};
	class StaticCannon: StaticWeapon {};
	class StaticGrenadeLauncher: StaticWeapon
		nameSound = "veh_static_GL_s";
	class StaticMortar: StaticWeapon
		nameSound = "veh_static_mortar_s";
	class StaticSEARCHLight: StaticWeapon {};
	class GunShip: Helicopter {};
	class TransportHelicopter: Helicopter {};
	class UAV: Plane
		nameSound = "veh_air_UAV_s";
	class CAManBase: Man
	class Civilian: CAManBase
		nameSound = "veh_infantry_civilian_s";
	class B_soldier_AR_F: B_Soldier_02_f
		nameSound = "veh_infantry_MG_s";
	class B_Soldier_SL_F: B_Soldier_03_f {};
	class B_Soldier_TL_F: B_Soldier_03_f {};
	class B_soldier_M_F: B_Soldier_base_F {};
	class B_soldier_LAT_F: B_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class B_medic_F: B_Soldier_02_f
		nameSound = "veh_infantry_medic_s";
	class B_soldier_repair_F: B_Soldier_base_F {};
	class B_soldier_exp_F: B_Soldier_base_F {};
	class B_Helipilot_F: B_Soldier_04_f
		nameSound = "veh_infantry_pilot_s";
	class B_Soldier_A_F: B_Soldier_base_F {};
	class B_soldier_AT_F: B_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class B_soldier_AA_F: B_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class B_engineer_F: B_Soldier_03_f {};
	class B_crew_F: B_Soldier_03_f {};
	class B_officer_F: B_Soldier_base_F
		nameSound = "veh_infantry_officer_s";
	class B_Competitor_F: B_RangeMaster_F {};
	class B_Pilot_F: B_Soldier_05_f
		nameSound = "veh_infantry_pilot_s";
	class B_helicrew_F: B_Helipilot_F {};
	class B_soldier_PG_F: B_Soldier_base_F {};
	class B_soldier_UAV_F: B_Soldier_base_F {};
	class B_Soldier_universal_F: B_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class B_Survivor_F: B_Soldier_F {};
	class B_Soldier_unarmed_F: B_Soldier_F {};
	class B_Soldier_diver_base_F: B_Soldier_base_F
		nameSound = "veh_infantry_diver_s";
	class B_diver_F: B_Soldier_diver_base_F {};
	class B_diver_TL_F: B_Soldier_diver_base_F {};
	class B_diver_exp_F: B_Soldier_diver_base_F {};
	class B_Soldier_recon_base: B_Soldier_base_F
		nameSound = "veh_infantry_SF_s";
	class B_recon_F: B_Soldier_recon_base {};
	class B_recon_LAT_F: B_Soldier_recon_base {};
	class B_recon_exp_F: B_Soldier_recon_base {};
	class B_recon_medic_F: B_Soldier_recon_base {};
	class B_recon_TL_F: B_Soldier_recon_base {};
	class B_recon_M_F: B_Soldier_recon_base {};
	class B_recon_JTAC_F: B_Soldier_recon_base {};
	class B_Soldier_sniper_base_F: B_Soldier_base_F {};
	class B_spotter_F: B_Soldier_sniper_base_F
		nameSound = "veh_infantry_SF_s";
	class B_sniper_F: B_Soldier_sniper_base_F
		nameSound = "veh_infantry_sniper_s";
	class B_Story_SF_Captain_F: B_Soldier_02_f {};
	class B_Story_Protagonist_F: B_Soldier_02_f {};
	class B_Story_Engineer_F: B_Soldier_base_F {};
	class B_Story_Colonel_F: B_Soldier_base_F {};
	class B_Story_Pilot_F: B_Soldier_base_F {};
	class B_Story_Tank_Commander_F: B_Soldier_base_F {};
	class b_soldier_survival_F: B_Soldier_base_F
		nameSound = "veh_infantry_diver_s";
	class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f {};
	class B_CTRG_soldier_M_medic_F: B_Soldier_03_f
		nameSound = "veh_infantry_sniper_s";
	class B_CTRG_soldier_AR_A_F: B_Soldier_03_f
		nameSound = "veh_infantry_MG_s";
	class B_Soldier_support_base_F: B_Soldier_base_F {};
	class B_soldier_AAR_F: B_Soldier_support_base_F {};
	class B_soldier_AAT_F: B_Soldier_support_base_F {};
	class B_soldier_AAA_F: B_soldier_AAT_F {};
	class B_support_MG_F: B_Soldier_support_base_F {};
	class B_support_GMG_F: B_Soldier_support_base_F {};
	class B_support_Mort_F: B_Soldier_support_base_F {};
	class B_support_AMG_F: B_Soldier_support_base_F {};
	class B_support_AMort_F: B_Soldier_support_base_F {};
	class C_man_1_1_F: C_man_1
		nameSound = "veh_infantry_civilian_s";
	class C_man_1_2_F: C_man_1_1_F {};
	class C_man_1_3_F: C_man_1_1_F {};
	class C_man_polo_1_F: C_man_1 {};
	class C_man_polo_1_F_afro: C_man_polo_1_F {};
	class C_man_polo_1_F_euro: C_man_polo_1_F {};
	class C_man_polo_1_F_asia: C_man_polo_1_F {};
	class C_man_polo_2_F: C_man_polo_1_F {};
	class C_man_polo_2_F_afro: C_man_polo_2_F {};
	class C_man_polo_2_F_euro: C_man_polo_2_F {};
	class C_man_polo_2_F_asia: C_man_polo_2_F {};
	class C_man_polo_3_F: C_man_polo_1_F {};
	class C_man_polo_3_F_afro: C_man_polo_3_F {};
	class C_man_polo_3_F_euro: C_man_polo_3_F {};
	class C_man_polo_3_F_asia: C_man_polo_3_F {};
	class C_man_polo_4_F: C_man_polo_1_F {};
	class C_man_polo_4_F_afro: C_man_polo_4_F {};
	class C_man_polo_4_F_euro: C_man_polo_4_F {};
	class C_man_polo_4_F_asia: C_man_polo_4_F {};
	class C_man_polo_5_F: C_man_polo_1_F {};
	class C_man_polo_5_F_afro: C_man_polo_5_F {};
	class C_man_polo_5_F_euro: C_man_polo_5_F {};
	class C_man_polo_5_F_asia: C_man_polo_5_F {};
	class C_man_polo_6_F: C_man_polo_1_F {};
	class C_man_polo_6_F_afro: C_man_polo_6_F {};
	class C_man_polo_6_F_euro: C_man_polo_6_F {};
	class C_man_polo_6_F_asia: C_man_polo_6_F {};
	class C_man_p_fugitive_F: C_man_1 {};
	class C_man_p_fugitive_F_afro: C_man_p_fugitive_F {};
	class C_man_p_fugitive_F_euro: C_man_p_fugitive_F {};
	class C_man_p_fugitive_F_asia: C_man_p_fugitive_F {};
	class C_man_p_beggar_F: C_man_p_fugitive_F {};
	class C_man_p_beggar_F_afro: C_man_p_beggar_F {};
	class C_man_p_beggar_F_euro: C_man_p_beggar_F {};
	class C_man_p_beggar_F_asia: C_man_p_beggar_F {};
	class C_man_w_worker_F: C_man_1 {};
	class C_scientist_F: C_man_w_worker_F {};
	class C_man_hunter_1_F: C_man_1 {};
	class C_man_p_shorts_1_F: C_man_1 {};
	class C_man_p_shorts_1_F_afro: C_man_p_shorts_1_F {};
	class C_man_p_shorts_1_F_euro: C_man_p_shorts_1_F {};
	class C_man_p_shorts_1_F_asia: C_man_p_shorts_1_F {};
	class C_man_shorts_1_F: C_man_p_shorts_1_F {};
	class C_man_shorts_1_F_afro: C_man_shorts_1_F {};
	class C_man_shorts_1_F_euro: C_man_shorts_1_F {};
	class C_man_shorts_1_F_asia: C_man_shorts_1_F {};
	class C_man_shorts_2_F: C_man_p_shorts_1_F {};
	class C_man_shorts_2_F_afro: C_man_shorts_2_F {};
	class C_man_shorts_2_F_euro: C_man_shorts_2_F {};
	class C_man_shorts_2_F_asia: C_man_shorts_2_F {};
	class C_man_shorts_3_F: C_man_p_shorts_1_F {};
	class C_man_shorts_3_F_afro: C_man_shorts_3_F {};
	class C_man_shorts_3_F_euro: C_man_shorts_3_F {};
	class C_man_shorts_3_F_asia: C_man_shorts_3_F {};
	class C_man_shorts_4_F: C_man_p_shorts_1_F {};
	class C_man_shorts_4_F_afro: C_man_shorts_4_F {};
	class C_man_shorts_4_F_euro: C_man_shorts_4_F {};
	class C_man_shorts_4_F_asia: C_man_shorts_4_F {};
	class C_man_pilot_F: C_man_1 {};
	class C_journalist_F: C_man_1 {};
	class C_Orestes: C_man_1 {};
	class C_Nikos: C_Orestes {};
	class C_Nikos_aged: C_Nikos {};
	class I_G_Soldier_base_F: SoldierGB {};
	class I_G_Soldier_F: I_G_Soldier_base_F {};
	class I_G_Soldier_lite_F: I_G_Soldier_base_F {};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F {};
	class I_G_Soldier_TL_F: I_G_Soldier_base_F {};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
		nameSound = "veh_infantry_MG_s";
	class I_G_medic_F: I_G_Soldier_base_F
		nameSound = "veh_infantry_medic_s";
	class I_G_engineer_F: I_G_Soldier_base_F {};
	class I_G_Soldier_exp_F: I_G_Soldier_base_F {};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F {};
	class I_G_Soldier_M_F: I_G_Soldier_base_F {};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class I_G_Soldier_A_F: I_G_Soldier_base_F {};
	class I_G_officer_F: I_G_Soldier_base_F
		nameSound = "veh_infantry_officer_s";
	class B_G_Soldier_F: I_G_Soldier_F {};
	class O_G_Soldier_F: I_G_Soldier_F {};
	class B_G_Soldier_lite_F: I_G_Soldier_lite_F {};
	class O_G_Soldier_lite_F: I_G_Soldier_lite_F {};
	class B_G_Soldier_SL_F: I_G_Soldier_SL_F {};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F {};
	class B_G_Soldier_TL_F: I_G_Soldier_TL_F {};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F {};
	class B_G_Soldier_AR_F: I_G_Soldier_AR_F {};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F {};
	class B_G_medic_F: I_G_medic_F {};
	class O_G_medic_F: I_G_medic_F {};
	class B_G_engineer_F: I_G_engineer_F {};
	class O_G_engineer_F: I_G_engineer_F {};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F {};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F {};
	class B_G_Soldier_GL_F: I_G_Soldier_GL_F {};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F {};
	class B_G_Soldier_M_F: I_G_Soldier_M_F {};
	class O_G_Soldier_M_F: I_G_Soldier_M_F {};
	class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F {};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F {};
	class B_G_Soldier_A_F: I_G_Soldier_A_F {};
	class O_G_Soldier_A_F: I_G_Soldier_A_F {};
	class B_G_officer_F: I_G_officer_F {};
	class O_G_officer_F: I_G_officer_F {};
	class I_G_Soldier_unarmed_F: I_G_Soldier_F {};
	class B_G_Soldier_unarmed_F: B_G_Soldier_F {};
	class O_G_Soldier_unarmed_F: O_G_Soldier_F {};
	class I_G_Survivor_F: I_G_Soldier_F {};
	class B_G_Survivor_F: B_G_Soldier_F {};
	class O_G_Survivor_F: O_G_Soldier_F {};
	class B_G_Soldier_universal_F: B_G_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class O_G_Soldier_universal_F: O_G_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class I_G_Soldier_universal_F: I_G_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class I_G_Story_Protagonist_F: B_G_Soldier_F {};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F {};
	class I_G_resistanceLeader_F: I_G_Story_Protagonist_F {};
	class I_G_resistanceCommander_F: I_G_Story_Protagonist_F {};
	class I_Soldier_base_F: SoldierGB {};
	class I_Soldier_02_F: I_Soldier_base_F {};
	class I_Soldier_03_F: I_Soldier_base_F {};
	class I_Soldier_04_F: I_Soldier_base_F {};
	class I_soldier_F: I_Soldier_base_F
		nameSound = "veh_infantry_s";
	class I_Soldier_lite_F: I_Soldier_02_F {};
	class I_Soldier_A_F: I_Soldier_02_F {};
	class I_Soldier_GL_F: I_Soldier_base_F {};
	class I_Soldier_AR_F: I_Soldier_02_F
		nameSound = "veh_infantry_MG_s";
	class I_Soldier_SL_F: I_Soldier_02_F {};
	class I_Soldier_TL_F: I_Soldier_base_F {};
	class I_Soldier_M_F: I_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class I_Soldier_LAT_F: I_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class I_Soldier_AT_F: I_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class I_Soldier_AA_F: I_Soldier_02_F
		nameSound = "veh_infantry_AT_s";
	class I_medic_F: I_Soldier_02_F
		nameSound = "veh_infantry_medic_s";
	class I_Soldier_repair_F: I_Soldier_02_F {};
	class I_Soldier_exp_F: I_Soldier_02_F {};
	class I_engineer_F: I_Soldier_base_F {};
	class I_crew_F: I_Soldier_base_F {};
	class I_helipilot_F: I_Soldier_03_F
		nameSound = "veh_infantry_pilot_s";
	class I_pilot_F: I_Soldier_04_F
		nameSound = "veh_infantry_pilot_s";
	class I_helicrew_F: I_helipilot_F {};
	class I_officer_F: I_Soldier_base_F
		nameSound = "veh_infantry_officer_s";
	class I_Story_Colonel_F: I_officer_F {};
	class I_soldier_UAV_F: I_Soldier_base_F {};
	class I_Soldier_universal_F: I_soldier_F
		nameSound = "veh_infantry_medic_s";
	class I_Survivor_F: I_soldier_F {};
	class I_Soldier_unarmed_F: I_soldier_F {};
	class I_Soldier_diver_base_F: I_Soldier_base_F
		nameSound = "veh_infantry_diver_s";
	class I_diver_F: I_Soldier_diver_base_F {};
	class I_diver_exp_F: I_Soldier_diver_base_F {};
	class I_diver_TL_F: I_Soldier_diver_base_F {};
	class I_Soldier_sniper_base_F: I_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class I_Spotter_F: I_Soldier_sniper_base_F
		nameSound = "veh_infantry_SF_s";
	class I_Sniper_F: I_Soldier_sniper_base_F {};
	class I_Soldier_support_base_F: I_Soldier_base_F {};
	class I_Soldier_AAR_F: I_Soldier_support_base_F {};
	class I_Soldier_AAT_F: I_Soldier_support_base_F {};
	class I_Soldier_AAA_F: I_Soldier_AAT_F {};
	class I_support_MG_F: I_Soldier_support_base_F {};
	class I_support_GMG_F: I_Soldier_support_base_F {};
	class I_support_Mort_F: I_Soldier_support_base_F {};
	class I_support_AMG_F: I_Soldier_support_base_F {};
	class I_support_AMort_F: I_Soldier_support_base_F {};
	class O_Soldier_base_F: SoldierEB {};
	class O_Soldier_02_F: O_Soldier_base_F {};
	class O_Soldier_F: O_Soldier_base_F {};
	class O_officer_F: O_Soldier_base_F
		nameSound = "veh_infantry_officer_s";
	class O_Soldier_lite_F: O_Soldier_base_F {};
	class O_Soldier_GL_F: O_Soldier_base_F {};
	class O_Soldier_AR_F: O_Soldier_base_F
		nameSound = "veh_infantry_MG_s";
	class O_Soldier_SL_F: O_Soldier_base_F {};
	class O_Soldier_TL_F: O_Soldier_base_F {};
	class O_soldier_M_F: O_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class O_Soldier_LAT_F: O_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class O_medic_F: O_Soldier_base_F
		nameSound = "veh_infantry_medic_s";
	class O_soldier_repair_F: O_Soldier_base_F {};
	class O_soldier_exp_F: O_Soldier_base_F {};
	class O_helipilot_F: O_Soldier_02_F
		nameSound = "veh_infantry_pilot_s";
	class O_Soldier_A_F: O_Soldier_base_F {};
	class O_Soldier_AT_F: O_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class O_Soldier_AA_F: O_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class O_engineer_F: O_Soldier_base_F {};
	class O_crew_F: O_Soldier_base_F {};
	class O_Pilot_F: O_helipilot_F {};
	class O_helicrew_F: O_helipilot_F {};
	class O_soldier_PG_F: O_Soldier_base_F {};
	class O_Story_Colonel_F: O_Soldier_base_F {};
	class O_Story_CEO_F: O_Soldier_base_F {};
	class O_soldier_UAV_F: O_Soldier_base_F {};
	class O_Soldier_universal_F: O_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class O_Survivor_F: O_Soldier_F {};
	class O_Soldier_unarmed_F: O_Soldier_F {};
	class O_Soldier_diver_base_F: O_Soldier_base_F
		nameSound = "veh_infantry_diver_s";
	class O_diver_F: O_Soldier_diver_base_F {};
	class O_diver_TL_F: O_Soldier_diver_base_F {};
	class O_diver_exp_F: O_Soldier_diver_base_F {};
	class O_Soldier_sniper_base_F: O_Soldier_base_F {};
	class O_spotter_F: O_Soldier_sniper_base_F
		nameSound = "veh_infantry_SF_s";
	class O_sniper_F: O_Soldier_sniper_base_F
		nameSound = "veh_infantry_sniper_s";
	class O_Soldier_recon_base: O_Soldier_base_F
		nameSound = "veh_infantry_SF_s";
	class O_recon_F: O_Soldier_recon_base {};
	class O_recon_M_F: O_Soldier_recon_base
		nameSound = "veh_infantry_sniper_s";
	class O_recon_LAT_F: O_Soldier_recon_base {};
	class O_recon_medic_F: O_Soldier_recon_base {};
	class O_recon_exp_F: O_Soldier_recon_base {};
	class O_recon_JTAC_F: O_Soldier_recon_base {};
	class O_recon_TL_F: O_Soldier_recon_base {};
	class O_Soldier_support_base_F: O_Soldier_base_F {};
	class O_Soldier_AAR_F: O_Soldier_support_base_F {};
	class O_Soldier_AAT_F: O_Soldier_support_base_F {};
	class O_Soldier_AAA_F: O_Soldier_AAT_F {};
	class O_support_MG_F: O_Soldier_support_base_F {};
	class O_support_GMG_F: O_Soldier_support_base_F {};
	class O_support_Mort_F: O_Soldier_support_base_F {};
	class O_support_AMG_F: O_Soldier_support_base_F {};
	class O_support_AMort_F: O_Soldier_support_base_F {};
	class O_Soldier_Urban_base: O_Soldier_base_F {};
	class O_soldierU_F: O_Soldier_Urban_base {};
	class O_soldierU_AR_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_MG_s";
	class O_soldierU_AAR_F: O_Soldier_Urban_base {};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_AT_s";
	class O_soldierU_AT_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_AT_s";
	class O_soldierU_AAT_F: O_Soldier_Urban_base {};
	class O_soldierU_AA_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_AT_s";
	class O_soldierU_AAA_F: O_Soldier_Urban_base {};
	class O_soldierU_TL_F: O_Soldier_Urban_base {};
	class O_SoldierU_SL_F: O_Soldier_Urban_base {};
	class O_soldierU_medic_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_medic_s";
	class O_soldierU_repair_F: O_Soldier_Urban_base {};
	class O_soldierU_exp_F: O_Soldier_Urban_base {};
	class O_engineer_U_F: O_Soldier_Urban_base {};
	class O_soldierU_M_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_sniper_s";
	class O_soldierU_A_F: O_Soldier_Urban_base {};
	class O_SoldierU_GL_F: O_Soldier_Urban_base {};
	class O_SoldierU_unarmed_F: O_soldierU_F {};
	class C_Driver_1_F: C_man_1 {};
	class C_Driver_2_F: C_Driver_1_F {};
	class C_Driver_3_F: C_Driver_1_F {};
	class C_Driver_4_F: C_Driver_1_F {};
	class C_Driver_1_random_base_F: C_Driver_1_F {};
	class C_Driver_1_black_F: C_Driver_1_random_base_F {};
	class C_Driver_1_blue_F: C_Driver_1_random_base_F {};
	class C_Driver_1_green_F: C_Driver_1_random_base_F {};
	class C_Driver_1_red_F: C_Driver_1_random_base_F {};
	class C_Driver_1_white_F: C_Driver_1_random_base_F {};
	class C_Driver_1_yellow_F: C_Driver_1_random_base_F {};
	class C_Driver_1_orange_F: C_Driver_1_random_base_F {};
	class C_Marshal_F: B_RangeMaster_F
		nameSound = "veh_infantry_civilian_s";
	class B_Soldier_VR_F: B_Soldier_base_F {};
	class O_Soldier_VR_F: O_Soldier_base_F {};
	class I_Soldier_VR_F: I_Soldier_base_F {};
	class C_Soldier_VR_F: C_man_1 {};
	class B_Protagonist_VR_F: B_Soldier_base_F {};
	class O_Protagonist_VR_F: O_Soldier_base_F {};
	class I_Protagonist_VR_F: I_Soldier_base_F {};
	class B_ghillie_base_F: B_Soldier_sniper_base_F
		nameSound = "veh_infantry_sniper_s";
	class B_ghillie_lsh_F: B_ghillie_base_F {};
	class B_ghillie_sard_F: B_ghillie_base_F {};
	class B_ghillie_ard_F: B_ghillie_base_F {};
	class O_ghillie_base_F: O_Soldier_sniper_base_F
		nameSound = "veh_infantry_sniper_s";
	class O_ghillie_lsh_F: O_ghillie_base_F {};
	class O_ghillie_sard_F: O_ghillie_base_F {};
	class O_ghillie_ard_F: O_ghillie_base_F {};
	class I_ghillie_base_F: I_Soldier_sniper_base_F {};
	class I_ghillie_lsh_F: I_ghillie_base_F {};
	class I_ghillie_sard_F: I_ghillie_base_F {};
	class I_ghillie_ard_F: I_ghillie_base_F {};
	class B_Sharpshooter_F: B_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class B_Recon_Sharpshooter_F: B_Soldier_recon_base
		nameSound = "veh_infantry_sniper_s";
	class B_CTRG_Sharphooter_F: B_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class B_HeavyGunner_F: B_Soldier_base_F
		nameSound = "veh_infantry_MG_s";
	class O_Sharpshooter_F: O_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_sniper_s";
	class O_Pathfinder_F: O_Soldier_recon_base
		nameSound = "veh_infantry_sniper_s";
	class O_HeavyGunner_F: O_Soldier_base_F
		nameSound = "veh_infantry_MG_s";
	class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
		nameSound = "veh_infantry_MG_s";
	class I_G_Sharpshooter_F: I_G_Soldier_base_F
		nameSound = "veh_infantry_sniper_s";
	class B_G_Sharpshooter_F: I_G_Sharpshooter_F {};
	class O_G_Sharpshooter_F: I_G_Sharpshooter_F {};
	class Item_U_C_Scientist: Item_Base_F {};
	class Item_U_C_Journalist: Item_Base_F {};
	class Item_U_IG_Guerrilla_6_1: Item_Base_F {};
	class Item_U_BG_Guerrilla_6_1: Item_Base_F {};
	class Item_U_OG_Guerrilla_6_1: Item_Base_F {};
	class Vest_V_Press_F: Vest_Base_F {};
	class Sound: All {};
	class Sound_Stream: Sound
	class Sound_Alarm: Sound
	class Sound_Alarm2: Sound
	class Sound_Fire: Sound
	class Sound_SmokeWreck1: Sound
	class Sound_SparklesWreck1: Sound
	class Sound_SparklesWreck2: Sound
	class Sound_BattlefieldExplosions: Sound
	class Sound_BattlefieldFirefight: Sound
	class Weapon_Bag_Base: Bag_Base {};
	class HMG_01_base_F: StaticMGWeapon
	class B_HMG_01_F: HMG_01_base_F {};
	class O_HMG_01_F: HMG_01_base_F {};
	class I_HMG_01_F: HMG_01_base_F {};
	class HMG_01_high_base_F: HMG_01_base_F {};
	class B_HMG_01_high_F: HMG_01_high_base_F {};
	class O_HMG_01_high_F: HMG_01_high_base_F {};
	class I_HMG_01_high_F: HMG_01_high_base_F {};
	class HMG_01_A_base_F: HMG_01_base_F {};
	class B_HMG_01_A_F: HMG_01_A_base_F {};
	class O_HMG_01_A_F: HMG_01_A_base_F {};
	class I_HMG_01_A_F: HMG_01_A_base_F {};
	class GMG_TriPod: StaticGrenadeLauncher {};
	class GMG_01_base_F: GMG_TriPod
	class B_GMG_01_F: GMG_01_base_F {};
	class O_GMG_01_F: GMG_01_base_F {};
	class I_GMG_01_F: GMG_01_base_F {};
	class GMG_01_high_base_F: GMG_01_base_F {};
	class B_GMG_01_high_F: GMG_01_high_base_F {};
	class O_GMG_01_high_F: GMG_01_high_base_F {};
	class I_GMG_01_high_F: GMG_01_high_base_F {};
	class GMG_01_A_base_F: GMG_01_base_F {};
	class B_GMG_01_A_F: GMG_01_A_base_F {};
	class O_GMG_01_A_F: GMG_01_A_base_F {};
	class I_GMG_01_A_F: GMG_01_A_base_F {};
	class B_HMG_01_support_F: Bag_Base {};
	class O_HMG_01_support_F: B_HMG_01_support_F {};
	class I_HMG_01_support_F: B_HMG_01_support_F {};
	class B_HMG_01_support_high_F: B_HMG_01_support_F {};
	class O_HMG_01_support_high_F: B_HMG_01_support_high_F {};
	class I_HMG_01_support_high_F: B_HMG_01_support_high_F {};
	class B_HMG_01_weapon_F: Weapon_Bag_Base {};
	class O_HMG_01_weapon_F: B_HMG_01_weapon_F {};
	class I_HMG_01_weapon_F: B_HMG_01_weapon_F {};
	class B_HMG_01_A_weapon_F: B_HMG_01_weapon_F {};
	class O_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F {};
	class I_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F {};
	class B_GMG_01_weapon_F: B_HMG_01_weapon_F {};
	class O_GMG_01_weapon_F: B_GMG_01_weapon_F {};
	class I_GMG_01_weapon_F: B_GMG_01_weapon_F {};
	class B_GMG_01_A_weapon_F: B_HMG_01_weapon_F {};
	class O_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F {};
	class I_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F {};
	class B_HMG_01_high_weapon_F: B_HMG_01_weapon_F {};
	class O_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F {};
	class I_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F {};
	class B_GMG_01_high_weapon_F: B_HMG_01_high_weapon_F {};
	class O_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F {};
	class I_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F {};
	class Mortar_01_base_F: StaticMortar {};
	class B_Mortar_01_F: Mortar_01_base_F {};
	class O_Mortar_01_F: Mortar_01_base_F {};
	class I_Mortar_01_F: Mortar_01_base_F {};
	class I_G_Mortar_01_F: Mortar_01_base_F {};
	class B_G_Mortar_01_F: I_G_Mortar_01_F {};
	class O_G_Mortar_01_F: I_G_Mortar_01_F {};
	class B_Mortar_01_support_F: Bag_Base {};
	class O_Mortar_01_support_F: B_Mortar_01_support_F {};
	class I_Mortar_01_support_F: B_Mortar_01_support_F {};
	class B_Mortar_01_weapon_F: Weapon_Bag_Base {};
	class O_Mortar_01_weapon_F: B_Mortar_01_weapon_F {};
	class I_Mortar_01_weapon_F: B_Mortar_01_weapon_F {};
	class Helicopter_Base_F: Helicopter {};
	class Helicopter_Base_H: Helicopter_Base_F {};
	class Heli_Light_01_base_F: Helicopter_Base_H
		nameSound = "veh_helicopter";
	class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F {};
	class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
	class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {};
	class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F {};
	class B_Heli_Light_01_armed_F: Heli_Light_01_armed_base_F {};
	class C_Heli_Light_01_civil_F: Heli_Light_01_civil_base_F {};
	class C_Heli_light_01_blue_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_red_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_ion_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_blueLine_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_digital_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_elliptical_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_furious_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_graywatcher_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_jeans_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_light_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_shadow_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_sheriff_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_speedy_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_sunset_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_vrana_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_wasp_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_wave_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_stripped_F: C_Heli_Light_01_civil_F {};
	class C_Heli_light_01_luxe_F: C_Heli_Light_01_civil_F {};
	class B_Heli_Light_01_stripped_F: B_Heli_Light_01_F {};
	class Heli_Light_02_base_F: Helicopter_Base_H
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F {};
	class O_Heli_Light_02_F: Heli_Light_02_base_F {};
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F {};
	class O_Heli_Light_02_v2_F: Heli_Light_02_base_F {};
	class Plane_Base_F: Plane {};
	class ParachuteWest: ParachuteBase {};
	class ParachuteEast: ParachuteBase {};
	class ParachuteG: ParachuteBase {};
	class Parachute: ParachuteWest {};
	class NonSteerable_Parachute_F: Parachute {};
	class Paraglide: ParachuteWest {};
	class Steerable_Parachute_F: Paraglide {};
	class Heli_Attack_01_base_F: Helicopter_Base_F
		nameSound = "veh_air_gunship_s";
	class B_Heli_Attack_01_F: Heli_Attack_01_base_F {};
	class Heli_Attack_02_base_F: Helicopter_Base_F
		nameSound = "veh_air_gunship_s";
	class O_Heli_Attack_02_F: Heli_Attack_02_base_F {};
	class O_Heli_Attack_02_black_F: Heli_Attack_02_base_F {};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	class B_Heli_Transport_01_F: Heli_Transport_01_base_F {};
	class B_Heli_Transport_01_camo_F: B_Heli_Transport_01_F {};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	class I_Heli_Transport_02_F: Heli_Transport_02_base_F {};
	class Parachute_02_base_F: ParachuteBase {};
	class B_Parachute_02_F: Parachute_02_base_F {};
	class O_Parachute_02_F: Parachute_02_base_F {};
	class I_Parachute_02_F: Parachute_02_base_F {};
	class B_B_Parachute_02_F: B_Parachute {};
	class B_O_Parachute_02_F: B_Parachute {};
	class B_I_Parachute_02_F: B_Parachute {};
	class Plane_Fighter_03_base_F: Plane_Base_F
	class I_Plane_Fighter_03_CAS_F: Plane_Fighter_03_base_F {};
	class I_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_CAS_F {};
	class Plane_Fighter_03_wreck_F: PlaneWreck {};
	class Tank_F: Tank
	class Car_F: Car
	class Wheeled_APC_F: Car_F
		nameSound = "veh_vehicle_APC_s";
	class APC_Tracked_01_base_F: Tank_F
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F {};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
		nameSound = "veh_vehicle_APC_s";
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F {};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	class APC_Tracked_02_base_F: Tank_F
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F {};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
		nameSound = "veh_vehicle_APC_s";
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	class MBT_01_base_F: Tank_F
	class B_MBT_01_base_F: MBT_01_base_F {};
	class B_MBT_01_cannon_F: B_MBT_01_base_F {};
	class MBT_01_arty_base_F: MBT_01_base_F
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F {};
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F {};
	class MBT_01_mlrs_base_F: MBT_01_base_F
		nameSound = "veh_vehicle_armor_s";
	class B_MBT_01_mlrs_base_F: MBT_01_mlrs_base_F {};
	class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F {};
	class MBT_02_base_F: Tank_F
	class MBT_02_arty_base_F: MBT_02_base_F
	class O_MBT_02_base_F: MBT_02_base_F {};
	class O_MBT_02_cannon_F: O_MBT_02_base_F {};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F {};
	class O_MBT_02_arty_F: O_MBT_02_arty_base_F {};
	class Ship_F: Ship {};
	class Boat_F: Ship_F {};
	class Boat_Armed_01_base_F: Boat_F
		nameSound = "veh_ship_attackBoat_s";
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F {};
	class B_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F {};
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F {};
	class Rubber_duck_base_F: Boat_F
		nameSound = "veh_ship_boat_s";
	class B_Boat_Transport_01_F: Rubber_duck_base_F {};
	class O_Boat_Transport_01_F: Rubber_duck_base_F {};
	class Rescue_duck_base_F: Rubber_duck_base_F {};
	class B_Lifeboat: Rescue_duck_base_F {};
	class O_Lifeboat: Rescue_duck_base_F {};
	class C_Rubberboat: Rescue_duck_base_F {};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F {};
	class I_Boat_Transport_01_F: Rubber_duck_base_F {};
	class SDV_01_base_F: Boat_F
		nameSound = "veh_ship_submarine_s";
	class B_SDV_01_F: SDV_01_base_F {};
	class O_SDV_01_F: SDV_01_base_F {};
	class I_SDV_01_F: SDV_01_base_F {};
	class Boat_Civil_01_base_F: Ship_F
		nameSound = "veh_ship_boat_s";
	class C_Boat_Civil_01_F: Boat_Civil_01_base_F {};
	class C_Boat_Civil_01_rescue_F: Boat_Civil_01_base_F {};
	class C_Boat_Civil_01_police_F: Boat_Civil_01_base_F {};
	class C_Boat_Civil_04_F: FloatingStructure_F
	class I_G_Boat_Transport_01_F: Rubber_duck_base_F {};
	class B_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F {};
	class O_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F {};
	class B_UAV_AI: B_Helipilot_F {};
	class O_UAV_AI: O_helipilot_F {};
	class I_UAV_AI: O_UAV_AI {};
	class Underwear_F: B_Soldier_F {};
	class Lightning_F: NonStrategic {};
	class Truck_F: Car_F
		nameSound = "veh_vehicle_truck_s";
	class MRAP_01_base_F: Car_F
		nameSound = "veh_vehicle_MRAP_s";
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	class MRAP_01_hmg_base_F: MRAP_01_gmg_base_F {};
	class B_MRAP_01_F: MRAP_01_base_F {};
	class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F {};
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F {};
	class MRAP_02_base_F: Car_F
		nameSound = "veh_vehicle_MRAP_s";
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F {};
	class O_MRAP_02_F: MRAP_02_base_F {};
	class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F {};
	class O_MRAP_02_gmg_F: MRAP_02_gmg_base_F {};
	class Offroad_01_base_F: Car_F
		nameSound = "veh_car";
	class Offroad_01_unarmed_base_F: Offroad_01_base_F {};
	class Offroad_01_civil_base_F: Offroad_01_unarmed_base_F
	class C_Offroad_01_F: Offroad_01_civil_base_F {};
	class Offroad_01_repair_base_F: Offroad_01_base_F {};
	class Offroad_01_repair_military_base_F: Offroad_01_repair_base_F {};
	class C_Offroad_01_repair_F: Offroad_01_repair_base_F {};
	class B_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F {};
	class O_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F {};
	class I_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F {};
	class Offroad_01_military_base_F: Offroad_01_base_F {};
	class I_G_Offroad_01_F: Offroad_01_military_base_F {};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
		nameSound = "veh_vehicle_armedcar_s";
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F {};
	class B_G_Offroad_01_F: I_G_Offroad_01_F {};
	class O_G_Offroad_01_F: I_G_Offroad_01_F {};
	class B_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F {};
	class O_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F {};
	class C_Offroad_01_red_F: C_Offroad_01_F {};
	class C_Offroad_01_sand_F: C_Offroad_01_F {};
	class C_Offroad_01_white_F: C_Offroad_01_F {};
	class C_Offroad_01_blue_F: C_Offroad_01_F {};
	class C_Offroad_01_darkred_F: C_Offroad_01_F {};
	class C_Offroad_01_bluecustom_F: C_Offroad_01_F {};
	class C_Offroad_luxe_F: C_Offroad_01_F {};
	class C_Offroad_default_F: C_Offroad_01_F {};
	class C_Offroad_stripped_F: C_Offroad_01_F {};
	class Quadbike_01_base_F: Car_F
	class C_Quadbike_01_F: Quadbike_01_base_F {};
	class B_Quadbike_01_F: Quadbike_01_base_F {};
	class O_Quadbike_01_F: Quadbike_01_base_F {};
	class I_Quadbike_01_F: Quadbike_01_base_F {};
	class I_G_Quadbike_01_F: Quadbike_01_base_F {};
	class B_G_Quadbike_01_F: I_G_Quadbike_01_F {};
	class O_G_Quadbike_01_F: I_G_Quadbike_01_F {};
	class C_Quadbike_01_black_F: C_Quadbike_01_F {};
	class C_Quadbike_01_blue_F: C_Quadbike_01_F {};
	class C_Quadbike_01_red_F: C_Quadbike_01_F {};
	class C_Quadbike_01_white_F: C_Quadbike_01_F {};
	class MRAP_03_base_F: Car_F
		nameSound = "veh_vehicle_MRAP_s";
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F {};
	class I_MRAP_03_F: MRAP_03_base_F {};
	class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F {};
	class I_MRAP_03_gmg_F: MRAP_03_gmg_base_F {};
	class Truck_01_base_F: Truck_F
	class B_Truck_01_transport_F: Truck_01_base_F {};
	class B_Truck_01_covered_F: B_Truck_01_transport_F {};
	class Truck_02_base_F: Truck_F
	class Truck_02_transport_base_F: Truck_02_base_F {};
	class O_Truck_02_covered_F: Truck_02_base_F {};
	class O_Truck_02_transport_F: Truck_02_transport_base_F {};
	class I_Truck_02_covered_F: Truck_02_base_F {};
	class I_Truck_02_transport_F: Truck_02_transport_base_F {};
	class C_Truck_02_covered_F: Truck_02_base_F {};
	class C_Truck_02_transport_F: Truck_02_transport_base_F {};
	class Hatchback_01_base_F: Car_F
	class C_Hatchback_01_F: Hatchback_01_base_F {};
	class Hatchback_01_sport_base_F: Hatchback_01_base_F
	class C_Hatchback_01_sport_F: Hatchback_01_sport_base_F {};
	class C_Hatchback_01_grey_F: C_Hatchback_01_F {};
	class C_Hatchback_01_green_F: C_Hatchback_01_F {};
	class C_Hatchback_01_blue_F: C_Hatchback_01_F {};
	class C_Hatchback_01_bluecustom_F: C_Hatchback_01_F {};
	class C_Hatchback_01_beigecustom_F: C_Hatchback_01_F {};
	class C_Hatchback_01_yellow_F: C_Hatchback_01_F {};
	class C_Hatchback_01_white_F: C_Hatchback_01_F {};
	class C_Hatchback_01_black_F: C_Hatchback_01_F {};
	class C_Hatchback_01_dark_F: C_Hatchback_01_F {};
	class C_Hatchback_01_sport_red_F: C_Hatchback_01_sport_F {};
	class C_Hatchback_01_sport_blue_F: C_Hatchback_01_sport_F {};
	class C_Hatchback_01_sport_orange_F: C_Hatchback_01_sport_F {};
	class C_Hatchback_01_sport_white_F: C_Hatchback_01_sport_F {};
	class C_Hatchback_01_sport_grey_F: C_Hatchback_01_sport_F {};
	class C_Hatchback_01_sport_green_F: C_Hatchback_01_sport_F {};
	class SUV_01_base_F: Car_F
	class C_SUV_01_F: SUV_01_base_F {};
	class SUV_01_base_red_F: C_SUV_01_F {};
	class SUV_01_base_black_F: C_SUV_01_F {};
	class SUV_01_base_grey_F: C_SUV_01_F {};
	class SUV_01_base_orange_F: C_SUV_01_F {};
	class B_Truck_01_mover_F: B_Truck_01_transport_F {};
	class B_Truck_01_box_F: B_Truck_01_mover_F {};
	class B_Truck_01_Repair_F: B_Truck_01_mover_F {};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F {};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F {};
	class B_Truck_01_medical_F: B_Truck_01_transport_F {};
	class Truck_02_box_base_F: Truck_02_base_F {};
	class Truck_02_medical_base_F: Truck_02_box_base_F {};
	class Truck_02_Ammo_base_F: Truck_02_base_F {};
	class Truck_02_fuel_base_F: Truck_02_base_F {};
	class O_Truck_02_box_F: Truck_02_box_base_F {};
	class O_Truck_02_medical_F: Truck_02_medical_base_F {};
	class O_Truck_02_Ammo_F: Truck_02_Ammo_base_F {};
	class O_Truck_02_fuel_F: Truck_02_fuel_base_F {};
	class I_Truck_02_ammo_F: Truck_02_Ammo_base_F {};
	class I_Truck_02_box_F: Truck_02_box_base_F {};
	class I_Truck_02_medical_F: Truck_02_medical_base_F {};
	class I_Truck_02_fuel_F: Truck_02_fuel_base_F {};
	class C_Truck_02_fuel_F: Truck_02_fuel_base_F {};
	class C_Truck_02_box_F: Truck_02_box_base_F {};
	class Van_01_base_F: Truck_F
	class Van_01_transport_base_F: Van_01_base_F {};
	class Van_01_box_base_F: Van_01_base_F {};
	class Van_01_fuel_base_F: Van_01_base_F {};
	class C_Van_01_transport_F: Van_01_transport_base_F {};
	class I_G_Van_01_transport_F: Van_01_transport_base_F {};
	class C_Van_01_box_F: Van_01_box_base_F {};
	class C_Van_01_fuel_F: Van_01_fuel_base_F {};
	class I_G_Van_01_fuel_F: Van_01_fuel_base_F {};
	class B_G_Van_01_transport_F: I_G_Van_01_transport_F {};
	class O_G_Van_01_transport_F: I_G_Van_01_transport_F {};
	class B_G_Van_01_fuel_F: I_G_Van_01_fuel_F {};
	class O_G_Van_01_fuel_F: I_G_Van_01_fuel_F {};
	class C_Van_01_transport_white_F: C_Van_01_transport_F {};
	class C_Van_01_transport_red_F: C_Van_01_transport_F {};
	class C_Van_01_box_white_F: C_Van_01_box_F {};
	class C_Van_01_box_red_F: C_Van_01_box_F {};
	class C_Van_01_fuel_white_F: C_Van_01_fuel_F {};
	class C_Van_01_fuel_red_F: C_Van_01_fuel_F {};
	class C_Van_01_fuel_white_v2_F: C_Van_01_fuel_F {};
	class C_Van_01_fuel_red_v2_F: C_Van_01_fuel_F {};
	class AA_01_base_F: StaticMGWeapon
		nameSound = "veh_static_AA_s";
	class B_static_AA_F: AA_01_base_F {};
	class O_static_AA_F: AA_01_base_F {};
	class I_static_AA_F: AA_01_base_F {};
	class B_AA_01_weapon_F: Weapon_Bag_Base {};
	class O_AA_01_weapon_F: Weapon_Bag_Base {};
	class I_AA_01_weapon_F: Weapon_Bag_Base {};
	class AT_01_base_F: StaticMGWeapon
		nameSound = "veh_static_AT_s";
	class B_static_AT_F: AT_01_base_F {};
	class O_static_AT_F: AT_01_base_F {};
	class I_static_AT_F: AT_01_base_F {};
	class B_AT_01_weapon_F: Weapon_Bag_Base {};
	class O_AT_01_weapon_F: Weapon_Bag_Base {};
	class I_AT_01_weapon_F: Weapon_Bag_Base {};
	class Wreck_base_F: Wreck_Base {};
	class UWreck_base_F: Wreck_base_F {};
	class Scrapyard_base_F: NonStrategic {};
	class Heli_light_03_base_F: Helicopter_Base_F
	class I_Heli_light_03_F: Heli_light_03_base_F
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F {};
	class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F {};
	class I_Heli_light_03_base_F: Heli_light_03_base_F {};
	class I_Heli_light_03_unarmed_base_F: Heli_light_03_unarmed_base_F {};
	class Plane_CAS_01_base_F: Plane_Base_F
	class B_Plane_CAS_01_F: Plane_CAS_01_base_F {};
	class Plane_CAS_02_base_F: Plane_Base_F
	class O_Plane_CAS_02_F: Plane_CAS_02_base_F {};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F {};
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F {};
	class APC_Tracked_03_base_F: Tank_F
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F {};
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {};
	class MBT_03_base_F: Tank_F
	class I_MBT_03_base_F: MBT_03_base_F {};
	class I_MBT_03_cannon_F: I_MBT_03_base_F {};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F {};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	class Submarine_01_F: FloatingStructure_F {};
	class UAV_01_base_F: Helicopter_Base_F
		nameSound = "veh_air_UAV_s";
	class B_UAV_01_F: UAV_01_base_F {};
	class O_UAV_01_F: UAV_01_base_F {};
	class I_UAV_01_F: UAV_01_base_F {};
	class UAV_02_base_F: UAV
	class UAV_02_CAS_base_F: UAV_02_base_F {};
	class B_UAV_02_F: UAV_02_base_F {};
	class O_UAV_02_F: UAV_02_base_F {};
	class I_UAV_02_F: UAV_02_base_F {};
	class B_UAV_02_CAS_F: UAV_02_CAS_base_F {};
	class O_UAV_02_CAS_F: UAV_02_CAS_base_F {};
	class I_UAV_02_CAS_F: UAV_02_CAS_base_F {};
	class UGV_01_base_F: Car_F
		nameSound = "veh_vehicle_UGV_s";
	class UGV_01_rcws_base_F: UGV_01_base_F
	class B_UGV_01_F: UGV_01_base_F {};
	class O_UGV_01_F: UGV_01_base_F {};
	class I_UGV_01_F: UGV_01_base_F {};
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F {};
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F {};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F {};
	class B_UAV_01_backpack_F: Weapon_Bag_Base {};
	class O_UAV_01_backpack_F: B_UAV_01_backpack_F {};
	class I_UAV_01_backpack_F: B_UAV_01_backpack_F {};
	class Truck_03_base_F: Truck_F
	class O_Truck_03_transport_F: Truck_03_base_F {};
	class O_Truck_03_covered_F: Truck_03_base_F {};
	class O_Truck_03_repair_F: Truck_03_base_F {};
	class O_Truck_03_ammo_F: Truck_03_base_F {};
	class O_Truck_03_fuel_F: Truck_03_base_F {};
	class O_Truck_03_medical_F: Truck_03_base_F {};
	class O_Truck_03_device_F: Truck_03_base_F {};
	class SoundFlareLoop_F: Sound
	class Intel_File1_F: Land_File1_F {};
	class Intel_File2_F: Land_File2_F {};
	class Intel_Photos_F: Land_Photos_V3_F {};
	class Lightning1_F: NonStrategic {};
	class Lightning2_F: Lightning1_F {};
	class Respawn_TentDome_F: Land_TentDome_F {};
	class B_Respawn_TentDome_F: B_Carryall_oli {};
	class Respawn_TentA_F: Land_TentA_F {};
	class B_Respawn_TentA_F: B_Carryall_cbr {};
	class Respawn_Sleeping_bag_F: Land_Sleeping_bag_F {};
	class B_Respawn_Sleeping_bag_F: B_FieldPack_oli {};
	class Respawn_Sleeping_bag_blue_F: Land_Sleeping_bag_blue_F {};
	class B_Respawn_Sleeping_bag_blue_F: B_FieldPack_blk {};
	class Respawn_Sleeping_bag_brown_F: Land_Sleeping_bag_brown_F {};
	class B_Respawn_Sleeping_bag_brown_F: B_FieldPack_khk {};
	class VirtualCurator_F: VirtualMan_F {};
	class B_VirtualCurator_F: VirtualCurator_F {};
	class O_VirtualCurator_F: VirtualCurator_F {};
	class I_VirtualCurator_F: VirtualCurator_F {};
	class C_VirtualCurator_F: VirtualCurator_F {};
	class ModuleAnimalsSeagulls_F: ModuleAnimalsSheep_F
	class ModuleCuratorAddEditableObjects: Module_F {};
	class LogicSectorBase_F: Logic {};
	class LogicSectorPreview100m_F: LogicSectorBase_F {};
	class LogicSectorPreview200m_F: LogicSectorBase_F {};
	class LogicSectorPreview500m_F: LogicSectorBase_F {};
	class LogicSectorUnknown100m_F: LogicSectorBase_F {};
	class LogicSectorUnknown200m_F: LogicSectorBase_F {};
	class LogicSectorUnknown500m_F: LogicSectorBase_F {};
	class LogicSectorEast100m_F: LogicSectorBase_F {};
	class LogicSectorEast200m_F: LogicSectorBase_F {};
	class LogicSectorEast500m_F: LogicSectorBase_F {};
	class LogicSectorWest100m_F: LogicSectorBase_F {};
	class LogicSectorWest200m_F: LogicSectorBase_F {};
	class LogicSectorWest500m_F: LogicSectorBase_F {};
	class LogicSectorGuer100m_F: LogicSectorBase_F {};
	class LogicSectorGuer200m_F: LogicSectorBase_F {};
	class LogicSectorGuer500m_F: LogicSectorBase_F {};
	class LogicSectorCiv100m_F: LogicSectorBase_F {};
	class LogicSectorCiv200m_F: LogicSectorBase_F {};
	class LogicSectorCiv500m_F: LogicSectorBase_F {};
	class Kart_01_Base_F: Car_F
	class C_Kart_01_F_Base: Kart_01_Base_F {};
	class C_Kart_01_F: C_Kart_01_F_Base {};
	class C_Kart_01_Fuel_F: C_Kart_01_F_Base {};
	class C_Kart_01_Blu_F: C_Kart_01_F_Base {};
	class C_Kart_01_Red_F: C_Kart_01_F_Base {};
	class C_Kart_01_Vrana_F: C_Kart_01_F_Base {};
	class C_Kart_01_green_F: C_Kart_01_F_Base {};
	class C_Kart_01_orange_F: C_Kart_01_F_Base {};
	class C_Kart_01_white_F: C_Kart_01_F_Base {};
	class C_Kart_01_yellow_F: C_Kart_01_F_Base {};
	class C_Kart_01_black_F: C_Kart_01_F_Base {};
	class PlasticBarrier_01_red_F: Land_PlasticBarrier_01_F {};
	class PlasticBarrier_01_white_F: Land_PlasticBarrier_01_F {};
	class PlasticBarrier_02_grey_F: Land_PlasticBarrier_02_F {};
	class PlasticBarrier_02_yellow_F: Land_PlasticBarrier_02_F {};
	class PlasticBarrier_03_blue_F: Land_PlasticBarrier_03_F {};
	class PlasticBarrier_03_orange_F: Land_PlasticBarrier_03_F {};
	class Oil_Spill_F: Helper_Base_F {};
	class Flag_Blueking_F: FlagCarrier_Asym {};
	class Flag_Blueking_inverted_F: FlagCarrier_Asym {};
	class Flag_Fuel_F: FlagCarrier_Asym {};
	class Flag_Fuel_inverted_F: FlagCarrier_Asym {};
	class Flag_Burstkoke_F: FlagCarrier_Asym {};
	class Flag_Burstkoke_inverted_F: FlagCarrier_Asym {};
	class Flag_Redburger_F: FlagCarrier_Asym {};
	class Flag_Redstone_F: FlagCarrier_Asym {};
	class Flag_Suatmm_F: FlagCarrier_Asym {};
	class SignAd_Sponsor_Blueking_F: SignAd_Sponsor_F {};
	class SignAd_Sponsor_Fuel_white_F: SignAd_Sponsor_F {};
	class SignAd_Sponsor_Fuel_green_F: SignAd_Sponsor_F {};
	class SignAd_Sponsor_Burstkoke_F: SignAd_Sponsor_F {};
	class SignAd_Sponsor_Redburger_F: SignAd_Sponsor_F {};
	class SignAd_Sponsor_Redstone_F: SignAd_Sponsor_F {};
	class SignAd_Sponsor_Suatmm_F: SignAd_Sponsor_F {};
	class SignAd_SponsorS_Blueking_F: SignAd_SponsorS_F {};
	class SignAd_SponsorS_Fuel_white_F: SignAd_SponsorS_F {};
	class SignAd_SponsorS_Fuel_green_F: SignAd_SponsorS_F {};
	class SignAd_SponsorS_Burstkoke_F: SignAd_SponsorS_F {};
	class SignAd_SponsorS_Redburger_F: SignAd_SponsorS_F {};
	class SignAd_SponsorS_Redstone_F: SignAd_SponsorS_F {};
	class SignAd_SponsorS_Suatmm_F: SignAd_SponsorS_F {};
	class Weapon_hgun_Pistol_Signal_F: Pistol_Base_F {};
	class Item_U_C_Driver_1: Item_Base_F {};
	class Item_U_C_Driver_2: Item_Base_F {};
	class Item_U_C_Driver_3: Item_Base_F {};
	class Item_U_C_Driver_4: Item_Base_F {};
	class Item_U_C_Driver_1_black: Item_Base_F {};
	class Item_U_C_Driver_1_blue: Item_Base_F {};
	class Item_U_C_Driver_1_green: Item_Base_F {};
	class Item_U_C_Driver_1_red: Item_Base_F {};
	class Item_U_C_Driver_1_white: Item_Base_F {};
	class Item_U_C_Driver_1_yellow: Item_Base_F {};
	class Item_U_C_Driver_1_orange: Item_Base_F {};
	class Item_U_Marshal: Item_Base_F {};
	class Headgear_H_RacingHelmet_1_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_2_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_3_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_4_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_black_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_blue_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_green_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_red_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_white_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_yellow_F: Headgear_Base_F {};
	class Headgear_H_RacingHelmet_1_orange_F: Headgear_Base_F {};
	class Headgear_H_Cap_marshal: Headgear_Base_F {};
	class Simulation_Fatal: Sound
	class Simulation_Restart: Sound
	class Topic_Deselection: Sound
	class Topic_Done: Sound
	class Topic_Selection: Sound
	class Topic_Trigger: Sound
	class TyreBarrier_01_black_F: Land_TyreBarrier_01_F {};
	class TyreBarrier_01_white_F: Land_TyreBarrier_01_F {};
	class SportItems_base_F: Items_base_F
	class KartSteertingWheel_01_black_F: Land_KartSteertingWheel_01_F {};
	class KartSteertingWheel_01_blue_F: Land_KartSteertingWheel_01_F {};
	class KartSteertingWheel_01_green_F: Land_KartSteertingWheel_01_F {};
	class KartSteertingWheel_01_orange_F: Land_KartSteertingWheel_01_F {};
	class KartSteertingWheel_01_red_F: Land_KartSteertingWheel_01_F {};
	class KartSteertingWheel_01_white_F: Land_KartSteertingWheel_01_F {};
	class KartSteertingWheel_01_yellow_F: Land_KartSteertingWheel_01_F {};
	class UserTexture_1x2_F: NonStrategic {};
	class TargetBootcamp_base_F: TargetP_Inf_F {};
	class TargetBootcampHumanSimple_F: TargetBootcamp_base_F {};
	class TargetBootcampHuman_F: TargetBootcampHumanSimple_F {};
	class VR_Block_base_F: House_F {};
	class VR_CoverObject_base_F: House_F {};
	class VR_Helper_base_F: NonStrategic {};
	class VR_3DSelector_01_default_F: VR_Helper_base_F {};
	class VR_3DSelector_01_incomplete_F: VR_3DSelector_01_default_F {};
	class VR_3DSelector_01_complete_F: VR_3DSelector_01_default_F {};
	class VR_3DSelector_01_exit_F: VR_3DSelector_01_default_F {};
	class VR_Area_01_circle_4_grey_F: VR_Helper_base_F {};
	class VR_Area_01_circle_4_yellow_F: VR_Area_01_circle_4_grey_F {};
	class VR_Area_01_square_1x1_grey_F: VR_Helper_base_F {};
	class VR_Area_01_square_2x2_grey_F: VR_Area_01_square_1x1_grey_F {};
	class VR_Area_01_square_4x4_grey_F: VR_Area_01_square_1x1_grey_F {};
	class VR_Area_01_square_1x1_yellow_F: VR_Area_01_square_1x1_grey_F {};
	class VR_Area_01_square_2x2_yellow_F: VR_Area_01_square_1x1_yellow_F {};
	class VR_Area_01_square_4x4_yellow_F: VR_Area_01_square_1x1_yellow_F {};
	class VR_Billboard_01_F: VR_Helper_base_F {};
	class VR_GroundIcon_01_F: VR_Helper_base_F {};
	class VR_Sector_01_60deg_50_grey_F: VR_Helper_base_F {};
	class VR_Sector_01_60deg_50_red_F: VR_Sector_01_60deg_50_grey_F {};
	class FIA_Box_Base_F: ReammoBox_F {};
	class Box_FIA_Wps_F: FIA_Box_Base_F {};
	class Box_FIA_Ammo_F: FIA_Box_Base_F {};
	class Box_FIA_Support_F: FIA_Box_Base_F {};
	class GasTank_base_F: Constructions_base_F {};
	class GasTank_01_base_F: GasTank_base_F {};
	class ToolTrolley_base_F: Constructions_base_F {};
	class PalletTrolley_01_base_F: ThingX {};
	class OfficeTable_01_new_F: Land_OfficeTable_01_F {};
	class OfficeTable_01_old_F: Land_OfficeTable_01_F {};
	class Windsock_01_F: NonStrategic {};
	class Cargo10_base_F: Cargo_base_F {};
	class Machine_base_F: ThingX {};
	class WaterPump_01_forest_F: Land_WaterPump_01_F {};
	class WaterPump_01_sand_F: Land_WaterPump_01_F {};
	class AirIntakePlug_base_F: Items_base_F {};
	class HelicopterWheels_01_base_F: Items_base_F {};
	class PortableHelipadLight_01_blue_F: Land_PortableHelipadLight_01_F {};
	class PortableHelipadLight_01_red_F: Land_PortableHelipadLight_01_F {};
	class PortableHelipadLight_01_white_F: Land_PortableHelipadLight_01_F {};
	class PortableHelipadLight_01_green_F: Land_PortableHelipadLight_01_F {};
	class PortableHelipadLight_01_yellow_F: Land_PortableHelipadLight_01_F {};
	class Fridge_01_closed_F: Land_Fridge_01_F {};
	class Fridge_01_open_F: Land_Fridge_01_F {};
	class MetalCase_01_base_F: Items_base_F {};
	class PlasticCase_01_base_F: Items_base_F {};
	class Slingload_base_F: ReammoBox_F {};
	class StorageBladder_base_F: NonStrategic {};
	class StorageBladder_01_fuel_forest_F: Land_StorageBladder_01_F {};
	class StorageBladder_01_fuel_sand_F: Land_StorageBladder_01_F {};
	class StorageBladder_02_water_forest_F: Land_StorageBladder_02_F {};
	class StorageBladder_02_water_sand_F: Land_StorageBladder_02_F {};
	class ContainmentArea_base_F: NonStrategic {};
	class ContainmentArea_01_forest_F: Land_ContainmentArea_01_F {};
	class ContainmentArea_01_sand_F: Land_ContainmentArea_01_F {};
	class ContainmentArea_02_forest_F: Land_ContainmentArea_02_F {};
	class ContainmentArea_02_sand_F: Land_ContainmentArea_02_F {};
	class CargoNet_01_base_F: Slingload_base_F {};
	class CargoNet_01_ammo_base_F: CargoNet_01_base_F {};
	class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {};
	class O_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {};
	class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F {};
	class CargoNet_01_box_F: CargoNet_01_base_F {};
	class CargoNet_01_barrels_F: CargoNet_01_base_F {};
	class FlexibleTank_base_F: ThingX {};
	class FlexibleTank_01_forest_F: Land_FlexibleTank_01_F {};
	class FlexibleTank_01_sand_F: Land_FlexibleTank_01_F {};
	class Slingload_01_Base_F: Slingload_base_F {};
	class B_Slingload_01_Ammo_F: Slingload_01_Base_F {};
	class B_Slingload_01_Cargo_F: Slingload_01_Base_F {};
	class B_Slingload_01_Fuel_F: Slingload_01_Base_F {};
	class B_Slingload_01_Medevac_F: Slingload_01_Base_F {};
	class B_Slingload_01_Repair_F: Slingload_01_Base_F {};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F {};
	class Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F
	class B_Heli_Transport_03_unarmed_F: Heli_Transport_03_unarmed_base_F {};
	class B_Heli_Transport_03_black_F: B_Heli_Transport_03_F {};
	class B_Heli_Transport_03_unarmed_green_F: B_Heli_Transport_03_unarmed_F {};
	class B_Heli_Transport_03_base_F: Heli_Transport_03_base_F {};
	class B_Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F {};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	class O_Heli_Transport_04_F: Heli_Transport_04_base_F {};
	class O_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F {};
	class O_Heli_Transport_04_bench_F: Heli_Transport_04_base_F {};
	class O_Heli_Transport_04_box_F: Heli_Transport_04_base_F {};
	class O_Heli_Transport_04_covered_F: Heli_Transport_04_base_F
	class O_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F {};
	class O_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F {};
	class O_Heli_Transport_04_repair_F: Heli_Transport_04_base_F {};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon {};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F {};
	class O_Heli_Transport_04_black_F: O_Heli_Transport_04_F {};
	class O_Heli_Transport_04_ammo_black_F: O_Heli_Transport_04_ammo_F {};
	class O_Heli_Transport_04_bench_black_F: O_Heli_Transport_04_bench_F {};
	class O_Heli_Transport_04_box_black_F: O_Heli_Transport_04_box_F {};
	class O_Heli_Transport_04_covered_black_F: O_Heli_Transport_04_covered_F {};
	class O_Heli_Transport_04_fuel_black_F: O_Heli_Transport_04_fuel_F {};
	class O_Heli_Transport_04_medevac_black_F: O_Heli_Transport_04_medevac_F {};
	class O_Heli_Transport_04_repair_black_F: O_Heli_Transport_04_repair_F {};
	class Static_Designator_01_base_F: StaticWeapon
	class B_Static_Designator_01_F: Static_Designator_01_base_F {};
	class B_Static_Designator_01_weapon_F: Weapon_Bag_Base {};
	class Static_Designator_02_base_F: StaticWeapon
	class O_Static_Designator_02_F: Static_Designator_02_base_F {};
	class O_Static_Designator_02_weapon_F: Weapon_Bag_Base {};
	class Balloon_01_air_NoPop_F: Land_Balloon_01_air_F {};
	class Balloon_01_water_NoPop_F: Land_Balloon_01_water_F {};
	class Flag_FD_Purple_F: FlagCarrier {};
	class TargetP_Inf4_F: TargetP_Inf_F {};
	class TargetP_Inf4_NoPop_F: TargetP_Inf4_F {};
	class TargetP_Inf4_Acc1_F: TargetP_Inf4_F {};
	class TargetP_Inf4_Acc1_NoPop_F: TargetP_Inf4_Acc1_F {};
	class TargetP_Inf4_Acc2_F: TargetP_Inf4_F {};
	class TargetP_Inf4_Acc2_NoPop_F: TargetP_Inf4_Acc2_F {};
	class Target_PopUp4_Moving_F: TargetP_Inf4_F {};
	class Target_PopUp4_Moving_NoPop_F: Target_PopUp4_Moving_F {};
	class Target_PopUp4_Moving_Acc1_F: Target_PopUp4_Moving_F {};
	class Target_PopUp4_Moving_Acc1_NoPop_F: Target_PopUp4_Moving_Acc1_F {};
	class Target_PopUp4_Moving_Acc2_F: Target_PopUp4_Moving_F {};
	class Target_PopUp4_Moving_Acc2_NoPop_F: Target_PopUp4_Moving_Acc2_F {};
	class Target_PopUp4_Moving_90deg_F: TargetP_Inf4_F {};
	class Target_PopUp4_Moving_90deg_NoPop_F: Target_PopUp4_Moving_90deg_F {};
	class Target_PopUp4_Moving_90deg_Acc1_F: Target_PopUp4_Moving_90deg_F {};
	class Target_PopUp4_Moving_90deg_Acc1_NoPop_F: Target_PopUp4_Moving_90deg_Acc1_F {};
	class Target_PopUp4_Moving_90deg_Acc2_F: Target_PopUp4_Moving_90deg_F {};
	class Target_PopUp4_Moving_90deg_Acc2_NoPop_F: Target_PopUp4_Moving_90deg_Acc2_F {};
	class TargetP_HVT1_F: TargetP_Inf_F {};
	class TargetP_HVT1_NoPop_F: TargetP_HVT1_F {};
	class Target_PopUp_HVT1_Moving_F: TargetP_HVT1_F {};
	class Target_PopUp_HVT1_Moving_NoPop_F: Target_PopUp_HVT1_Moving_F {};
	class Target_PopUp_HVT1_Moving_90deg_F: TargetP_HVT1_F {};
	class Target_PopUp_HVT1_Moving_90deg_NoPop_F: Target_PopUp_HVT1_Moving_90deg_F {};
	class TargetP_HVT2_F: TargetP_Inf_F {};
	class TargetP_HVT2_NoPop_F: TargetP_HVT2_F {};
	class Target_PopUp_HVT2_Moving_F: TargetP_HVT2_F {};
	class Target_PopUp_HVT2_Moving_NoPop_F: Target_PopUp_HVT2_Moving_F {};
	class Target_PopUp_HVT2_Moving_90deg_F: TargetP_HVT2_F {};
	class Target_PopUp_HVT2_Moving_90deg_NoPop_F: Target_PopUp_HVT2_Moving_90deg_F {};
	class Target_Swivel_01_base_F: NonStrategic {};
	class Target_Swivel_01_NoPop_F: Land_Target_Swivel_01_F {};
	class Target_Swivel_01_ground_F: Target_Swivel_01_base_F {};
	class Target_Swivel_01_ground_NoPop_F: Target_Swivel_01_ground_F {};
	class Target_Swivel_01_left_F: Land_Target_Swivel_01_F {};
	class Target_Swivel_01_left_NoPop_F: Target_Swivel_01_left_F {};
	class Target_Swivel_01_right_F: Land_Target_Swivel_01_F {};
	class Target_Swivel_01_right_NoPop_F: Target_Swivel_01_right_F {};
	class ShootingMat_01_Olive_F: Land_ShootingMat_01_base_F {};
	class ShootingMat_01_Khaki_F: Land_ShootingMat_01_base_F {};
	class ShootingMat_01_OPFOR_F: Land_ShootingMat_01_base_F {};
	class ShootingMat_01_folded_Olive_F: Land_ShootingMat_01_folded_base_F {};
	class ShootingMat_01_folded_Khaki_F: Land_ShootingMat_01_folded_base_F {};
	class ShootingMat_01_folded_OPFOR_F: Land_ShootingMat_01_folded_base_F {};
	class VR_Shape_base_F: House_F {};
	class TargetBaseX: ThingX
	class Land_VR_Target_MBT_01_cannon_F: TargetBase
	class Land_VR_Target_MRAP_01_F: TargetBase
	class Land_VR_Target_APC_Wheeled_01_F: TargetBase
	class FxCartridge_338_Ball: FxCartridge {};
	class FxCartridge_338_NM_Ball: FxCartridge {};
	class FxCartridge_127x54_APDS: FxCartridge {};
	class FxCartridge_93x64_Ball: FxCartridge {};
	class Weapon_srifle_DMR_02_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_02_camo_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_02_sniper_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_03_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_03_khaki_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_03_tan_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_03_multicam_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_03_woodland_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_04_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_04_Tan_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_05_blk_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_05_hex_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_05_tan_f: Weapon_Base_F {};
	class Weapon_srifle_DMR_06_camo_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_06_olive_F: Weapon_Base_F {};
	class Weapon_MMG_01_hex_F: Weapon_Base_F {};
	class Weapon_MMG_01_tan_F: Weapon_Base_F {};
	class Weapon_MMG_02_camo_F: Weapon_Base_F {};
	class Weapon_MMG_02_black_F: Weapon_Base_F {};
	class Weapon_MMG_02_sand_F: Weapon_Base_F {};
	class Item_muzzle_snds_338_black: Item_Base_F {};
	class Item_muzzle_snds_338_green: Item_Base_F {};
	class Item_muzzle_snds_338_sand: Item_Base_F {};
	class Item_muzzle_snds_93mmg: Item_Base_F {};
	class Item_muzzle_snds_93mmg_tan: Item_Base_F {};
	class Item_optic_AMS: Item_Base_F {};
	class Item_optic_AMS_khk: Item_Base_F {};
	class Item_optic_AMS_snd: Item_Base_F {};
	class Item_optic_KHS_blk: Item_Base_F {};
	class Item_optic_KHS_tan: Item_Base_F {};
	class Item_optic_KHS_hex: Item_Base_F {};
	class Item_optic_KHS_old: Item_Base_F {};
	class Item_Laserdesignator_02: Item_Base_F {};
	class Item_Laserdesignator_03: Item_Base_F {};
	class Item_bipod_01_F_snd: Item_Base_F {};
	class Item_bipod_01_F_blk: Item_Base_F {};
	class Item_bipod_01_F_mtp: Item_Base_F {};
	class Item_bipod_02_F_blk: Item_Base_F {};
	class Item_bipod_02_F_tan: Item_Base_F {};
	class Item_bipod_02_F_hex: Item_Base_F {};
	class Item_bipod_03_F_blk: Item_Base_F {};
	class Item_bipod_03_F_oli: Item_Base_F {};
	class Item_U_B_FullGhillie_lsh: Item_Base_F {};
	class Item_U_B_FullGhillie_sard: Item_Base_F {};
	class Item_U_B_FullGhillie_ard: Item_Base_F {};
	class Item_U_O_FullGhillie_lsh: Item_Base_F {};
	class Item_U_O_FullGhillie_sard: Item_Base_F {};
	class Item_U_O_FullGhillie_ard: Item_Base_F {};
	class Item_U_I_FullGhillie_lsh: Item_Base_F {};
	class Item_U_I_FullGhillie_sard: Item_Base_F {};
	class Item_U_I_FullGhillie_ard: Item_Base_F {};
	class Vest_V_PlateCarrierGL_rgr: Vest_Base_F {};
	class Vest_V_PlateCarrierGL_blk: Vest_Base_F {};
	class Vest_V_PlateCarrierGL_mtp: Vest_Base_F {};
	class Vest_V_PlateCarrierSpec_rgr: Vest_Base_F {};
	class Vest_V_PlateCarrierSpec_blk: Vest_Base_F {};
	class Vest_V_PlateCarrierSpec_mtp: Vest_Base_F {};
	class Vest_V_PlateCarrierIAGL_dgtl: Vest_Base_F {};
	class Vest_V_PlateCarrierIAGL_oli: Vest_Base_F {};
	class VirtualSpectator_F: VirtualMan_F {};
	class Sphere_3DEN: NonStrategic {};
	class SphereNoGround_3DEN: Sphere_3DEN {};
	class AbandonedBoats_base_F: Wreck_base_F {};
	class LSV_01_base_F: Car_F
	class LSV_01_armed_base_F: LSV_01_base_F
		nameSound = "veh_vehicle_armedcar_s";
	class LSV_01_unarmed_base_F: LSV_01_base_F {};
	class LSV_01_light_base_F: LSV_01_base_F {};
	class B_T_LSV_01_armed_F: LSV_01_armed_base_F {};
	class B_T_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_F {};
	class B_T_LSV_01_unarmed_F: LSV_01_unarmed_base_F {};
	class B_T_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_F {};
	class B_LSV_01_armed_F: LSV_01_armed_base_F {};
	class B_LSV_01_unarmed_F: LSV_01_unarmed_base_F {};
	class B_CTRG_LSV_01_light_F: LSV_01_light_base_F {};
	class B_LSV_01_armed_black_F: B_LSV_01_armed_F {};
	class B_LSV_01_armed_olive_F: B_LSV_01_armed_F {};
	class B_LSV_01_armed_sand_F: B_LSV_01_armed_F {};
	class B_LSV_01_unarmed_black_F: B_LSV_01_unarmed_F {};
	class B_LSV_01_unarmed_olive_F: B_LSV_01_unarmed_F {};
	class B_LSV_01_unarmed_sand_F: B_LSV_01_unarmed_F {};
	class B_T_LSV_01_armed_black_F: B_T_LSV_01_armed_F {};
	class B_T_LSV_01_armed_olive_F: B_T_LSV_01_armed_F {};
	class B_T_LSV_01_armed_sand_F: B_T_LSV_01_armed_F {};
	class B_T_LSV_01_unarmed_black_F: B_T_LSV_01_unarmed_F {};
	class B_T_LSV_01_unarmed_olive_F: B_T_LSV_01_unarmed_F {};
	class B_T_LSV_01_unarmed_sand_F: B_T_LSV_01_unarmed_F {};
	class LSV_02_base_F: Car_F
	class LSV_02_armed_base_F: LSV_02_base_F
		nameSound = "veh_vehicle_armedcar_s";
	class LSV_02_unarmed_base_F: LSV_02_base_F {};
	class O_T_LSV_02_armed_F: LSV_02_armed_base_F {};
	class O_T_LSV_02_armed_viper_F: O_T_LSV_02_armed_F {};
	class O_T_LSV_02_unarmed_F: LSV_02_unarmed_base_F {};
	class O_T_LSV_02_unarmed_viper_F: O_T_LSV_02_unarmed_F {};
	class O_LSV_02_armed_F: LSV_02_armed_base_F {};
	class O_LSV_02_armed_viper_F: O_LSV_02_armed_F {};
	class O_LSV_02_unarmed_F: LSV_02_unarmed_base_F {};
	class O_LSV_02_unarmed_viper_F: O_LSV_02_unarmed_F {};
	class O_T_LSV_02_armed_black_F: O_T_LSV_02_armed_F {};
	class O_T_LSV_02_armed_ghex_F: O_T_LSV_02_armed_F {};
	class O_T_LSV_02_armed_arid_F: O_T_LSV_02_armed_F {};
	class O_T_LSV_02_unarmed_black_F: O_T_LSV_02_unarmed_F {};
	class O_T_LSV_02_unarmed_ghex_F: O_T_LSV_02_unarmed_F {};
	class O_T_LSV_02_unarmed_arid_F: O_T_LSV_02_unarmed_F {};
	class O_LSV_02_armed_black_F: O_LSV_02_armed_F {};
	class O_LSV_02_armed_ghex_F: O_LSV_02_armed_F {};
	class O_LSV_02_armed_arid_F: O_LSV_02_armed_F {};
	class O_LSV_02_unarmed_black_F: O_LSV_02_unarmed_F {};
	class O_LSV_02_unarmed_ghex_F: O_LSV_02_unarmed_F {};
	class O_LSV_02_unarmed_arid_F: O_LSV_02_unarmed_F {};
	class B_T_MRAP_01_F: B_MRAP_01_F {};
	class B_T_MRAP_01_gmg_F: B_MRAP_01_gmg_F {};
	class B_T_MRAP_01_hmg_F: B_MRAP_01_hmg_F {};
	class O_T_MRAP_02_ghex_F: MRAP_02_base_F {};
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F {};
	class O_T_MRAP_02_gmg_ghex_F: MRAP_02_gmg_base_F {};
	class B_GEN_Offroad_01_gen_F: Offroad_01_civil_base_F {};
	class Offroad_02_base_F: Car_F
	class Offroad_02_unarmed_base_F: Offroad_02_base_F {};
	class C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F {};
	class C_Offroad_02_unarmed_black_F: C_Offroad_02_unarmed_F {};
	class C_Offroad_02_unarmed_blue_F: C_Offroad_02_unarmed_F {};
	class C_Offroad_02_unarmed_green_F: C_Offroad_02_unarmed_F {};
	class C_Offroad_02_unarmed_orange_F: C_Offroad_02_unarmed_F {};
	class C_Offroad_02_unarmed_red_F: C_Offroad_02_unarmed_F {};
	class C_Offroad_02_unarmed_white_F: C_Offroad_02_unarmed_F {};
	class I_C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F {};
	class I_C_Offroad_02_unarmed_brown_F: I_C_Offroad_02_unarmed_F {};
	class I_C_Offroad_02_unarmed_olive_F: I_C_Offroad_02_unarmed_F {};
	class O_T_Quadbike_01_ghex_F: Quadbike_01_base_F {};
	class B_T_Quadbike_01_F: Quadbike_01_base_F {};
	class B_T_Truck_01_mover_F: B_Truck_01_mover_F {};
	class B_T_Truck_01_ammo_F: B_Truck_01_ammo_F {};
	class B_T_Truck_01_box_F: B_Truck_01_box_F {};
	class B_T_Truck_01_fuel_F: B_Truck_01_fuel_F {};
	class B_T_Truck_01_medical_F: B_Truck_01_medical_F {};
	class B_T_Truck_01_Repair_F: B_Truck_01_Repair_F {};
	class B_T_Truck_01_transport_F: B_Truck_01_transport_F {};
	class B_T_Truck_01_covered_F: B_Truck_01_covered_F {};
	class O_T_Truck_03_transport_ghex_F: O_Truck_03_transport_F {};
	class O_T_Truck_03_covered_ghex_F: O_Truck_03_covered_F {};
	class O_T_Truck_03_repair_ghex_F: O_Truck_03_repair_F {};
	class O_T_Truck_03_ammo_ghex_F: O_Truck_03_ammo_F {};
	class O_T_Truck_03_fuel_ghex_F: O_Truck_03_fuel_F {};
	class O_T_Truck_03_medical_ghex_F: O_Truck_03_medical_F {};
	class O_T_Truck_03_device_ghex_F: O_Truck_03_device_F {};
	class O_T_UGV_01_ghex_F: UGV_01_base_F {};
	class O_T_UGV_01_rcws_ghex_F: UGV_01_rcws_base_F {};
	class I_C_Van_01_transport_F: Van_01_transport_base_F {};
	class I_C_Van_01_transport_brown_F: I_C_Van_01_transport_F {};
	class I_C_Van_01_transport_olive_F: I_C_Van_01_transport_F {};
	class B_T_Static_AA_F: B_static_AA_F {};
	class B_T_Static_AT_F: B_static_AT_F {};
	class B_T_GMG_01_F: B_GMG_01_F {};
	class B_T_HMG_01_F: B_HMG_01_F {};
	class B_T_Mortar_01_F: B_Mortar_01_F {};
	class B_Bergen_Base_F: Bag_Base {};
	class B_Bergen_mcamo_F: B_Bergen_Base_F {};
	class B_Bergen_dgtl_F: B_Bergen_Base_F {};
	class B_Bergen_hex_F: B_Bergen_Base_F {};
	class B_Bergen_tna_F: B_Bergen_Base_F {};
	class B_AssaultPack_tna_F: B_AssaultPack_Base {};
	class B_Carryall_ghex_F: B_Carryall_Base {};
	class B_FieldPack_ghex_F: B_FieldPack_Base {};
	class B_ViperHarness_base_F: Bag_Base {};
	class B_ViperHarness_blk_F: B_ViperHarness_base_F {};
	class B_ViperHarness_ghex_F: B_ViperHarness_base_F {};
	class B_ViperHarness_hex_F: B_ViperHarness_base_F {};
	class B_ViperHarness_khk_F: B_ViperHarness_base_F {};
	class B_ViperHarness_oli_F: B_ViperHarness_base_F {};
	class B_ViperLightHarness_base_F: Bag_Base {};
	class B_ViperLightHarness_blk_F: B_ViperLightHarness_base_F {};
	class B_ViperLightHarness_ghex_F: B_ViperLightHarness_base_F {};
	class B_ViperLightHarness_hex_F: B_ViperLightHarness_base_F {};
	class B_ViperLightHarness_khk_F: B_ViperLightHarness_base_F {};
	class B_ViperLightHarness_oli_F: B_ViperLightHarness_base_F {};
	class B_Carryall_oli_BTAmmo_F: B_Carryall_oli {};
	class B_Carryall_oli_BTAAA_F: B_Carryall_oli {};
	class B_Carryall_oli_BTAAT_F: B_Carryall_oli {};
	class B_AssaultPack_tna_BTMedic_F: B_AssaultPack_tna_F {};
	class B_Kitbag_rgr_BTEng_F: B_Kitbag_rgr {};
	class B_Kitbag_rgr_BTExp_F: B_Kitbag_rgr {};
	class B_Kitbag_rgr_BTAA_F: B_Kitbag_rgr {};
	class B_Kitbag_rgr_BTAT_F: B_Kitbag_rgr {};
	class B_AssaultPack_tna_BTRepair_F: B_AssaultPack_tna_F {};
	class B_AssaultPack_rgr_BTLAT_F: B_AssaultPack_rgr {};
	class B_Kitbag_rgr_BTReconExp_F: B_Kitbag_rgr {};
	class B_AssaultPack_rgr_BTReconMedic: B_AssaultPack_rgr {};
	class B_HMG_01_support_grn_F: I_HMG_01_support_F {};
	class B_Mortar_01_support_grn_F: I_Mortar_01_support_F {};
	class B_GMG_01_Weapon_grn_F: I_GMG_01_weapon_F {};
	class B_HMG_01_Weapon_grn_F: I_HMG_01_weapon_F {};
	class B_Mortar_01_Weapon_grn_F: I_Mortar_01_weapon_F {};
	class B_Kitbag_rgr_CTRGExp_F: B_Kitbag_rgr {};
	class B_AssaultPack_rgr_CTRGMedic_F: B_AssaultPack_rgr {};
	class B_AssaultPack_rgr_CTRGLAT_F: B_AssaultPack_rgr {};
	class B_Carryall_ghex_OTAmmo_F: B_Carryall_ghex_F {};
	class B_Carryall_ghex_OTAAR_AAR_F: B_Carryall_ghex_F {};
	class B_Carryall_ghex_OTAAA_F: B_Carryall_ghex_F {};
	class B_Carryall_ghex_OTAAT_F: B_Carryall_ghex_F {};
	class B_FieldPack_ghex_OTMedic_F: B_FieldPack_ghex_F {};
	class B_Carryall_ghex_OTEng_F: B_Carryall_ghex_F {};
	class B_Carryall_ghex_OTExp_F: B_Carryall_ghex_F {};
	class B_FieldPack_ghex_OTAA_F: B_FieldPack_ghex_F {};
	class B_FieldPack_ghex_OTAT_F: B_FieldPack_ghex_F {};
	class B_FieldPack_ghex_OTRepair_F: B_FieldPack_ghex_F {};
	class B_FieldPack_ghex_OTLAT_F: B_FieldPack_ghex_F {};
	class B_Carryall_ghex_OTReconExp_F: B_Carryall_ghex_F {};
	class B_FieldPack_ghex_OTReconMedic_F: B_FieldPack_ghex_F {};
	class B_FieldPack_ghex_OTRPG_AT_F: B_FieldPack_ghex_F {};
	class B_ViperHarness_hex_TL_F: B_ViperHarness_hex_F {};
	class B_ViperHarness_ghex_TL_F: B_ViperHarness_ghex_F {};
	class B_ViperHarness_hex_Exp_F: B_ViperHarness_hex_F {};
	class B_ViperHarness_ghex_Exp_F: B_ViperHarness_ghex_F {};
	class B_ViperHarness_hex_Medic_F: B_ViperHarness_hex_F {};
	class B_ViperHarness_ghex_Medic_F: B_ViperHarness_ghex_F {};
	class B_ViperHarness_hex_M_F: B_ViperHarness_hex_F {};
	class B_ViperHarness_ghex_M_F: B_ViperHarness_ghex_F {};
	class B_ViperHarness_hex_LAT_F: B_ViperHarness_hex_F {};
	class B_ViperHarness_ghex_LAT_F: B_ViperHarness_ghex_F {};
	class B_ViperHarness_hex_JTAC_F: B_ViperHarness_hex_F {};
	class B_ViperHarness_ghex_JTAC_F: B_ViperHarness_ghex_F {};
	class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr {};
	class B_Kitbag_cbr_Para_5_F: B_Kitbag_cbr {};
	class B_Kitbag_rgr_Para_8_F: B_Kitbag_rgr {};
	class B_FieldPack_cb_Bandit_3_F: B_FieldPack_cbr {};
	class B_Kitbag_cbr_Bandit_2_F: B_Kitbag_cbr {};
	class B_FieldPack_khk_Bandit_1_F: B_FieldPack_khk {};
	class B_FieldPack_blk_Bandit_8_F: B_FieldPack_blk {};
	class Box_NATO_Equip_F: ReammoBox_F {};
	class Box_CSAT_Equip_F: Box_NATO_Equip_F {};
	class Box_AAF_Equip_F: Box_NATO_Equip_F {};
	class Box_GEN_Equip_F: Box_NATO_Equip_F {};
	class Box_NATO_Uniforms_F: ReammoBox_F {};
	class Box_CSAT_Uniforms_F: Box_NATO_Uniforms_F {};
	class Box_AAF_Uniforms_F: Box_NATO_Uniforms_F {};
	class Box_T_NATO_Wps_F: Box_NATO_Wps_F {};
	class Box_T_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F {};
	class Box_T_East_Wps_F: Box_East_Wps_F {};
	class Box_T_East_Ammo_F: Box_East_Ammo_F {};
	class Box_T_East_WpsSpecial_F: Box_East_WpsSpecial_F {};
	class Box_Syndicate_Wps_F: ReammoBox_F {};
	class Box_Syndicate_Ammo_F: ReammoBox_F {};
	class Box_Syndicate_WpsLaunch_F: ReammoBox_F {};
	class Box_IED_Exp_F: ReammoBox_F {};
	class C_T_supplyCrate_F: ReammoBox_F {};
	class Weapon_arifle_MX_khk_F: Weapon_Base_F {};
	class Weapon_arifle_MX_GL_khk_F: Weapon_Base_F {};
	class Weapon_arifle_MX_SW_khk_F: Weapon_Base_F {};
	class Weapon_arifle_MXC_khk_F: Weapon_Base_F {};
	class Weapon_arifle_MXM_khk_F: Weapon_Base_F {};
	class Weapon_arifle_AK12_F: Weapon_Base_F {};
	class Weapon_arifle_AK12_GL_F: Weapon_Base_F {};
	class Weapon_arifle_ARX_blk_F: Weapon_Base_F {};
	class Weapon_arifle_ARX_ghex_F: Weapon_Base_F {};
	class Weapon_arifle_ARX_hex_F: Weapon_Base_F {};
	class Weapon_arifle_CTAR_blk_F: Weapon_Base_F {};
	class Weapon_arifle_CTAR_hex_F: Weapon_Base_F {};
	class Weapon_arifle_CTAR_ghex_F: Weapon_Base_F {};
	class Weapon_arifle_CTAR_GL_blk_F: Weapon_Base_F {};
	class Weapon_arifle_CTAR_GL_hex_F: Weapon_Base_F {};
	class Weapon_arifle_CTAR_GL_ghex_F: Weapon_Base_F {};
	class Weapon_arifle_CTARS_blk_F: Weapon_Base_F {};
	class Weapon_arifle_CTARS_hex_F: Weapon_Base_F {};
	class Weapon_arifle_CTARS_ghex_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_07_blk_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_07_hex_F: Weapon_Base_F {};
	class Weapon_srifle_DMR_07_ghex_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_01_blk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_01_khk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_01_snd_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_01_GL_blk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_01_GL_khk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_01_GL_snd_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_02_blk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_02_khk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_02_snd_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_03_blk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_03_khk_F: Weapon_Base_F {};
	class Weapon_arifle_SPAR_03_snd_F: Weapon_Base_F {};
	class Weapon_srifle_LRR_tna_F: Weapon_Base_F {};
	class Weapon_srifle_GM6_ghex_F: Weapon_Base_F {};
	class Weapon_LMG_03_F: Weapon_Base_F {};
	class Weapon_hgun_P07_khk_F: Pistol_Base_F {};
	class Weapon_launch_RPG7_F: Launcher_Base_F {};
	class Weapon_hgun_Pistol_01_F: Pistol_Base_F {};
	class Weapon_arifle_AKM_F: Weapon_Base_F {};
	class Weapon_arifle_AKS_F: Weapon_Base_F {};
	class Weapon_launch_B_Titan_tna_F: Launcher_Base_F {};
	class Weapon_launch_B_Titan_short_tna_F: Launcher_Base_F {};
	class Weapon_launch_O_Titan_ghex_F: Launcher_Base_F {};
	class Weapon_launch_O_Titan_short_ghex_F: Launcher_Base_F {};
	class Weapon_launch_RPG32_ghex_F: Launcher_Base_F {};
	class Weapon_SMG_05_F: Weapon_Base_F {};
	class Item_muzzle_snds_H_khk_F: Item_Base_F {};
	class Item_muzzle_snds_m_khk_F: Item_Base_F {};
	class Item_muzzle_snds_m_snd_F: Item_Base_F {};
	class Item_muzzle_snds_B_khk_F: Item_Base_F {};
	class Item_muzzle_snds_B_snd_F: Item_Base_F {};
	class Item_muzzle_snds_H_MG_blk_F: Item_Base_F {};
	class Item_muzzle_snds_H_MG_khk_F: Item_Base_F {};
	class Item_muzzle_snds_65_TI_blk_F: Item_Base_F {};
	class Item_muzzle_snds_65_TI_hex_F: Item_Base_F {};
	class Item_muzzle_snds_65_TI_ghex_F: Item_Base_F {};
	class Item_muzzle_snds_58_blk_F: Item_Base_F {};
	class Item_muzzle_snds_58_wdm_F: Item_Base_F {};
	class Item_optic_Arco_blk_F: Item_Base_F {};
	class Item_optic_Arco_ghex_F: Item_Base_F {};
	class Item_optic_DMS_ghex_F: Item_Base_F {};
	class Item_optic_ERCO_blk_F: Item_Base_F {};
	class Item_optic_ERCO_khk_F: Item_Base_F {};
	class Item_optic_ERCO_snd_F: Item_Base_F {};
	class Item_optic_Hamr_khk_F: Item_Base_F {};
	class Item_optic_SOS_khk_F: Item_Base_F {};
	class Item_optic_LRPS_tna_F: Item_Base_F {};
	class Item_optic_LRPS_ghex_F: Item_Base_F {};
	class Item_optic_Holosight_blk_F: Item_Base_F {};
	class Item_optic_Holosight_khk_F: Item_Base_F {};
	class Item_optic_Holosight_smg_blk_F: Item_Base_F {};
	class Item_bipod_01_F_khk: Item_Base_F {};
	class Item_Laserdesignator_01_khk_F: Item_Base_F {};
	class Item_Laserdesignator_02_ghex_F: Item_Base_F {};
	class Item_NVGoggles_tna_F: Item_Base_F {};
	class Item_O_NVGoggles_hex_F: Item_Base_F {};
	class Item_O_NVGoggles_urb_F: Item_Base_F {};
	class Item_O_NVGoggles_ghex_F: Item_Base_F {};
	class Item_NVGogglesB_blk_F: Item_Base_F {};
	class Item_NVGogglesB_grn_F: Item_Base_F {};
	class Item_NVGogglesB_gry_F: Item_Base_F {};
	class VTOL_Base_F: Plane_Base_F {};
	class I_C_Heli_Light_01_civil_F: Heli_Light_01_civil_base_F {};
	class B_CTRG_Heli_Transport_01_sand_F: Heli_Transport_01_base_F {};
	class B_CTRG_Heli_Transport_01_tropic_F: Heli_Transport_01_base_F {};
	class Plane_Civil_01_base_F: Plane_Base_F
	class C_Plane_Civil_01_F: Plane_Civil_01_base_F {};
	class C_Plane_Civil_01_racing_F: Plane_Civil_01_base_F {};
	class I_C_Plane_Civil_01_F: Plane_Civil_01_base_F {};
	class UAV_03_base_F: Helicopter_Base_F
		nameSound = "veh_air_UAV_s";
	class B_T_UAV_03_F: UAV_03_base_F {};
	class UAV_04_base_F: UAV
	class O_T_UAV_04_CAS_F: UAV_04_base_F {};
	class VTOL_01_base_F: VTOL_Base_F
	class VTOL_01_armed_base_F: VTOL_01_base_F {};
	class VTOL_01_unarmed_base_F: VTOL_01_base_F {};
	class VTOL_01_infantry_base_F: VTOL_01_unarmed_base_F
	class VTOL_01_vehicle_base_F: VTOL_01_unarmed_base_F {};
	class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F {};
	class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F {};
	class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F {};
	class B_T_VTOL_01_infantry_blue_F: B_T_VTOL_01_infantry_F {};
	class B_T_VTOL_01_infantry_olive_F: B_T_VTOL_01_infantry_F {};
	class B_T_VTOL_01_vehicle_blue_F: B_T_VTOL_01_vehicle_F {};
	class B_T_VTOL_01_vehicle_olive_F: B_T_VTOL_01_vehicle_F {};
	class B_T_VTOL_01_armed_blue_F: B_T_VTOL_01_armed_F {};
	class B_T_VTOL_01_armed_olive_F: B_T_VTOL_01_armed_F {};
	class VTOL_02_base_F: VTOL_Base_F
	class VTOL_02_infantry_base_F: VTOL_02_base_F
	class VTOL_02_vehicle_base_F: VTOL_02_base_F {};
	class O_T_VTOL_02_infantry_F: VTOL_02_infantry_base_F {};
	class O_T_VTOL_02_vehicle_F: VTOL_02_vehicle_base_F {};
	class O_T_VTOL_02_infantry_hex_F: O_T_VTOL_02_infantry_F {};
	class O_T_VTOL_02_infantry_ghex_F: O_T_VTOL_02_infantry_F {};
	class O_T_VTOL_02_infantry_grey_F: O_T_VTOL_02_infantry_F {};
	class O_T_VTOL_02_vehicle_hex_F: O_T_VTOL_02_vehicle_F {};
	class O_T_VTOL_02_vehicle_ghex_F: O_T_VTOL_02_vehicle_F {};
	class O_T_VTOL_02_vehicle_grey_F: O_T_VTOL_02_vehicle_F {};
	class B_T_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F {};
	class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F {};
	class B_T_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F {};
	class O_T_APC_Tracked_02_cannon_ghex_F: O_APC_Tracked_02_cannon_F {};
	class O_T_APC_Tracked_02_AA_ghex_F: O_APC_Tracked_02_AA_F {};
	class B_T_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F {};
	class O_T_APC_Wheeled_02_rcws_ghex_F: O_APC_Wheeled_02_base_F {};
	class B_T_MBT_01_arty_F: B_MBT_01_arty_F {};
	class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F {};
	class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F {};
	class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F {};
	class O_T_MBT_02_cannon_ghex_F: O_MBT_02_cannon_F {};
	class O_T_MBT_02_arty_ghex_F: O_MBT_02_arty_F {};
	class B_T_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F {};
	class O_T_Boat_Armed_01_hmg_F: O_Boat_Armed_01_hmg_F {};
	class O_T_Boat_Transport_01_F: Rubber_duck_base_F {};
	class I_C_Boat_Transport_01_F: Rubber_duck_base_F {};
	class B_T_Boat_Transport_01_F: B_Boat_Transport_01_F {};
	class B_T_Lifeboat: B_Lifeboat {};
	class O_T_Lifeboat: O_Lifeboat {};
	class Boat_Transport_02_base_F: Boat_F
	class B_G_Boat_Transport_02_F: Boat_Transport_02_base_F {};
	class O_G_Boat_Transport_02_F: Boat_Transport_02_base_F {};
	class I_G_Boat_Transport_02_F: Boat_Transport_02_base_F {};
	class I_C_Boat_Transport_02_F: Boat_Transport_02_base_F {};
	class C_Boat_Transport_02_F: Boat_Transport_02_base_F {};
	class Scooter_Transport_01_base_F: Rubber_duck_base_F
	class C_Scooter_Transport_01_F: Scooter_Transport_01_base_F {};
	class I_C_Soldier_base_F: I_G_Soldier_base_F {};
	class I_C_Soldier_Para_1_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Para_2_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Para_3_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_medic_s";
	class I_C_Soldier_Para_4_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_MG_s";
	class I_C_Soldier_Para_5_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class I_C_Soldier_Para_6_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Para_7_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Para_8_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Bandit_1_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_medic_s";
	class I_C_Soldier_Bandit_2_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_AT_s";
	class I_C_Soldier_Bandit_3_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_MG_s";
	class I_C_Soldier_Bandit_4_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Bandit_7_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Bandit_8_F: I_C_Soldier_base_F {};
	class I_C_Soldier_Camo_F: I_C_Soldier_base_F {};
	class I_C_Pilot_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_pilot_s";
	class I_C_Helipilot_F: I_C_Soldier_base_F
		nameSound = "veh_infantry_pilot_s";
	class I_C_Soldier_universal_F: I_C_Soldier_Para_1_F
		nameSound = "veh_infantry_medic_s";
	class I_C_Soldier_base_unarmed_F: I_C_Soldier_Para_1_F {};
	class B_T_Soldier_A_F: B_Soldier_A_F {};
	class B_T_Soldier_AAR_F: B_soldier_AAR_F {};
	class B_T_Support_AMG_F: B_support_AMG_F {};
	class B_T_Support_AMort_F: B_support_AMort_F {};
	class B_T_Soldier_AAA_F: B_soldier_AAA_F {};
	class B_T_Soldier_AAT_F: B_soldier_AAT_F {};
	class B_T_Soldier_AR_F: B_soldier_AR_F {};
	class B_T_Medic_F: B_medic_F {};
	class B_T_Crew_F: B_crew_F {};
	class B_T_Engineer_F: B_engineer_F {};
	class B_T_Soldier_Exp_F: B_soldier_exp_F {};
	class B_T_Soldier_GL_F: B_Soldier_GL_F {};
	class B_T_Support_GMG_F: B_support_GMG_F {};
	class B_T_Support_MG_F: B_support_MG_F {};
	class B_T_Support_Mort_F: B_support_Mort_F {};
	class B_T_Helicrew_F: B_helicrew_F {};
	class B_T_Helipilot_F: B_Helipilot_F {};
	class B_T_soldier_M_F: B_soldier_M_F {};
	class B_T_Soldier_AA_F: B_soldier_AA_F {};
	class B_T_Soldier_AT_F: B_soldier_AT_F {};
	class B_T_Officer_F: B_officer_F {};
	class B_T_Soldier_PG_F: B_soldier_PG_F {};
	class B_T_Pilot_F: B_Pilot_F {};
	class B_T_Soldier_Repair_F: B_soldier_repair_F {};
	class B_T_Soldier_F: B_Soldier_F {};
	class B_T_Soldier_LAT_F: B_soldier_LAT_F {};
	class B_T_Soldier_SL_F: B_Soldier_SL_F {};
	class B_T_Soldier_TL_F: B_Soldier_TL_F {};
	class B_T_Soldier_UAV_F: B_soldier_UAV_F {};
	class B_T_Diver_F: B_diver_F {};
	class B_T_Diver_Exp_F: B_diver_exp_F {};
	class B_T_Diver_TL_F: B_diver_TL_F {};
	class B_T_Recon_Exp_F: B_recon_exp_F {};
	class B_T_Recon_JTAC_F: B_recon_JTAC_F {};
	class B_T_Recon_M_F: B_recon_M_F {};
	class B_T_Recon_Medic_F: B_recon_medic_F {};
	class B_T_Recon_F: B_recon_F {};
	class B_T_Recon_LAT_F: B_recon_LAT_F {};
	class B_T_Recon_TL_F: B_recon_TL_F {};
	class B_T_Sniper_F: B_sniper_F {};
	class B_T_Spotter_F: B_spotter_F {};
	class B_T_ghillie_tna_F: B_ghillie_base_F {};
	class B_T_Soldier_universal_F: B_T_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class B_T_Soldier_unarmed_F: B_T_Soldier_F {};
	class O_T_Soldier_A_F: O_Soldier_A_F {};
	class O_T_Soldier_AAR_F: O_Soldier_AAR_F {};
	class O_T_Support_AMG_F: O_support_AMG_F {};
	class O_T_Support_AMort_F: O_support_AMort_F {};
	class O_T_Soldier_AAA_F: O_Soldier_AAA_F {};
	class O_T_Soldier_AAT_F: O_Soldier_AAT_F {};
	class O_T_Soldier_AR_F: O_Soldier_AR_F {};
	class O_T_Medic_F: O_medic_F {};
	class O_T_Crew_F: O_crew_F {};
	class O_T_Engineer_F: O_engineer_F {};
	class O_T_Soldier_Exp_F: O_soldier_exp_F {};
	class O_T_Soldier_GL_F: O_Soldier_GL_F {};
	class O_T_Support_GMG_F: O_support_GMG_F {};
	class O_T_Support_MG_F: O_support_MG_F {};
	class O_T_Support_Mort_F: O_support_Mort_F {};
	class O_T_Helicrew_F: O_helicrew_F {};
	class O_T_Helipilot_F: O_helipilot_F {};
	class O_T_Soldier_M_F: O_soldier_M_F {};
	class O_T_Soldier_AA_F: O_Soldier_AA_F {};
	class O_T_Soldier_AT_F: O_Soldier_AT_F {};
	class O_T_Officer_F: O_officer_F {};
	class O_T_Soldier_PG_F: O_soldier_PG_F {};
	class O_T_Pilot_F: O_Pilot_F {};
	class O_T_Soldier_Repair_F: O_soldier_repair_F {};
	class O_T_Soldier_F: O_Soldier_F {};
	class O_T_Soldier_LAT_F: O_Soldier_LAT_F {};
	class O_T_Soldier_SL_F: O_Soldier_SL_F {};
	class O_T_Soldier_TL_F: O_Soldier_TL_F {};
	class O_T_Soldier_UAV_F: O_soldier_UAV_F {};
	class O_T_Diver_F: O_diver_F {};
	class O_T_Diver_Exp_F: O_diver_exp_F {};
	class O_T_Diver_TL_F: O_diver_TL_F {};
	class O_T_Recon_Exp_F: O_recon_exp_F {};
	class O_T_Recon_JTAC_F: O_recon_JTAC_F {};
	class O_T_Recon_M_F: O_recon_M_F {};
	class O_T_Recon_Medic_F: O_recon_medic_F {};
	class O_T_Recon_F: O_recon_F {};
	class O_T_Recon_LAT_F: O_recon_LAT_F {};
	class O_T_Recon_TL_F: O_recon_TL_F {};
	class O_T_Sniper_F: O_sniper_F {};
	class O_T_Spotter_F: O_spotter_F {};
	class O_T_ghillie_tna_F: O_ghillie_base_F {};
	class O_V_Soldier_Viper_F: O_Soldier_base_F {};
	class O_V_Soldier_Viper_hex_F: O_V_Soldier_Viper_F {};
	class O_T_Soldier_universal_F: O_T_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class O_T_Soldier_unarmed_F: O_T_Soldier_F {};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F {};
	class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F {};
	class B_CTRG_Soldier_2_F: B_CTRG_Soldier_base_F {};
	class B_CTRG_Soldier_3_F: B_CTRG_Soldier_base_F {};
	class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F {};
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F {};
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
		nameSound = "veh_infantry_sniper_s";
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F {};
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F {};
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F {};
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F {};
	class B_CTRG_Miller_F: B_CTRG_Soldier_3_F {};
	class B_CTRG_Soldier_urb_1_F: B_CTRG_Soldier_F {};
	class B_CTRG_Soldier_urb_2_F: B_CTRG_Soldier_2_F {};
	class B_CTRG_Soldier_urb_3_F: B_CTRG_Soldier_3_F {};
	class B_CTRG_Soldier_universal_F: B_CTRG_Soldier_tna_F
		nameSound = "veh_infantry_medic_s";
	class O_V_Soldier_base_F: O_Soldier_base_F {};
	class O_V_Soldier_hex_F: O_V_Soldier_base_F {};
	class O_V_Soldier_TL_hex_F: O_V_Soldier_base_F {};
	class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F {};
	class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F
		nameSound = "veh_infantry_medic_s";
	class O_V_Soldier_M_hex_F: O_V_Soldier_base_F {};
	class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F {};
	class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F {};
	class O_V_Soldier_ghex_F: O_V_Soldier_hex_F {};
	class O_V_Soldier_TL_ghex_F: O_V_Soldier_TL_hex_F {};
	class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F {};
	class O_V_Soldier_Medic_ghex_F: O_V_Soldier_Medic_hex_F {};
	class O_V_Soldier_M_ghex_F: O_V_Soldier_M_hex_F {};
	class O_V_Soldier_LAT_ghex_F: O_V_Soldier_LAT_hex_F {};
	class O_V_Soldier_JTAC_ghex_F: O_V_Soldier_JTAC_hex_F {};
	class B_GEN_Soldier_base_F: B_Soldier_F {};
	class B_GEN_Soldier_F: B_GEN_Soldier_base_F {};
	class B_GEN_Commander_F: B_GEN_Soldier_base_F {};
	class B_GEN_Soldier_universal_F: B_GEN_Soldier_F
		nameSound = "veh_infantry_medic_s";
	class Item_U_B_T_Soldier_F: Item_Base_F {};
	class Item_U_B_T_Soldier_AR_F: Item_Base_F {};
	class Item_U_B_T_Soldier_SL_F: Item_Base_F {};
	class Item_U_B_T_Sniper_F: Item_Base_F {};
	class Item_U_B_T_FullGhillie_tna_F: Item_Base_F {};
	class Item_U_B_CTRG_Soldier_F: Item_Base_F {};
	class Item_U_B_CTRG_Soldier_2_F: Item_Base_F {};
	class Item_U_B_CTRG_Soldier_3_F: Item_Base_F {};
	class Item_U_B_GEN_Soldier_F: Item_Base_F {};
	class Item_U_B_GEN_Commander_F: Item_Base_F {};
	class Item_U_O_T_Soldier_F: Item_Base_F {};
	class Item_U_O_T_Officer_F: Item_Base_F {};
	class Item_U_O_T_Sniper_F: Item_Base_F {};
	class Item_U_O_T_FullGhillie_tna_F: Item_Base_F {};
	class Item_U_O_V_Soldier_Viper_F: Item_Base_F {};
	class Item_U_O_V_Soldier_Viper_hex_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Para_1_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Para_2_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Para_3_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Para_4_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Para_5_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Bandit_1_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Bandit_2_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Bandit_3_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Bandit_4_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Bandit_5_F: Item_Base_F {};
	class Item_U_I_C_Soldier_Camo_F: Item_Base_F {};
	class Item_U_C_man_sport_1_F: Item_Base_F {};
	class Item_U_C_man_sport_2_F: Item_Base_F {};
	class Item_U_C_man_sport_3_F: Item_Base_F {};
	class Item_U_C_Man_casual_1_F: Item_Base_F {};
	class Item_U_C_Man_casual_2_F: Item_Base_F {};
	class Item_U_C_Man_casual_3_F: Item_Base_F {};
	class Item_U_C_Man_casual_4_F: Item_Base_F {};
	class Item_U_C_Man_casual_5_F: Item_Base_F {};
	class Item_U_C_Man_casual_6_F: Item_Base_F {};
	class Item_U_B_CTRG_Soldier_urb_1_F: Item_Base_F {};
	class Item_U_B_CTRG_Soldier_urb_2_F: Item_Base_F {};
	class Item_U_B_CTRG_Soldier_urb_3_F: Item_Base_F {};
	class C_man_sport_1_F: C_man_1 {};
	class C_man_sport_1_F_afro: C_man_sport_1_F {};
	class C_man_sport_1_F_euro: C_man_sport_1_F {};
	class C_man_sport_1_F_asia: C_man_sport_1_F {};
	class C_man_sport_1_F_tanoan: C_man_sport_1_F
		nameSound = "veh_infantry_pilot_s";
	class C_man_sport_2_F: C_man_1 {};
	class C_man_sport_2_F_afro: C_man_sport_2_F {};
	class C_man_sport_2_F_euro: C_man_sport_2_F {};
	class C_man_sport_2_F_asia: C_man_sport_2_F {};
	class C_man_sport_2_F_tanoan: C_man_sport_2_F {};
	class C_man_sport_3_F: C_man_1 {};
	class C_man_sport_3_F_afro: C_man_sport_3_F {};
	class C_man_sport_3_F_euro: C_man_sport_3_F {};
	class C_man_sport_3_F_asia: C_man_sport_3_F {};
	class C_man_sport_3_F_tanoan: C_man_sport_3_F {};
	class C_Man_casual_1_F: C_man_1 {};
	class C_Man_casual_1_F_afro: C_Man_casual_1_F {};
	class C_Man_casual_1_F_euro: C_Man_casual_1_F {};
	class C_Man_casual_1_F_asia: C_Man_casual_1_F {};
	class C_Man_casual_1_F_tanoan: C_Man_casual_1_F {};
	class C_Man_casual_2_F: C_Man_casual_1_F {};
	class C_Man_casual_2_F_afro: C_Man_casual_2_F {};
	class C_Man_casual_2_F_euro: C_Man_casual_2_F {};
	class C_Man_casual_2_F_asia: C_Man_casual_2_F {};
	class C_Man_casual_2_F_tanoan: C_Man_casual_2_F {};
	class C_Man_casual_3_F: C_Man_casual_1_F {};
	class C_Man_casual_3_F_afro: C_Man_casual_3_F {};
	class C_Man_casual_3_F_euro: C_Man_casual_3_F {};
	class C_Man_casual_3_F_asia: C_Man_casual_3_F {};
	class C_Man_casual_3_F_tanoan: C_Man_casual_3_F {};
	class C_Man_casual_4_F: C_Man_casual_1_F {};
	class C_Man_casual_4_F_afro: C_Man_casual_4_F {};
	class C_Man_casual_4_F_euro: C_Man_casual_4_F {};
	class C_Man_casual_4_F_asia: C_Man_casual_4_F {};
	class C_Man_casual_4_F_tanoan: C_Man_casual_4_F {};
	class C_Man_casual_5_F: C_Man_casual_4_F {};
	class C_Man_casual_5_F_afro: C_Man_casual_5_F {};
	class C_Man_casual_5_F_euro: C_Man_casual_5_F {};
	class C_Man_casual_5_F_asia: C_Man_casual_5_F {};
	class C_Man_casual_5_F_tanoan: C_Man_casual_5_F {};
	class C_Man_casual_6_F: C_Man_casual_4_F {};
	class C_Man_casual_6_F_afro: C_Man_casual_6_F {};
	class C_Man_casual_6_F_euro: C_Man_casual_6_F {};
	class C_Man_casual_6_F_asia: C_Man_casual_6_F {};
	class C_Man_casual_6_F_tanoan: C_Man_casual_6_F {};
	class C_Man_French_universal_F: C_Man_casual_1_F
		nameSound = "veh_infantry_medic_s";
	class Headgear_H_HelmetB_tna_F: Headgear_Base_F {};
	class Headgear_H_HelmetB_Enh_tna_F: Headgear_Base_F {};
	class Headgear_H_HelmetB_Light_tna_F: Headgear_Base_F {};
	class Headgear_H_HelmetB_TI_tna_F: Headgear_Base_F {};
	class Headgear_H_HelmetSpecO_ghex_F: Headgear_Base_F {};
	class Headgear_H_HelmetCrew_O_ghex_F: Headgear_Base_F {};
	class Headgear_H_HelmetLeaderO_ghex_F: Headgear_Base_F {};
	class Headgear_H_HelmetO_ghex_F: Headgear_Base_F {};
	class Headgear_H_HelmetO_ViperSP_hex_F: Headgear_Base_F {};
	class Headgear_H_HelmetO_ViperSP_ghex_F: Headgear_Base_F {};
	class Headgear_H_Helmet_Skate: Headgear_Base_F {};
	class Headgear_H_MilCap_tna_F: Headgear_Base_F {};
	class Headgear_H_MilCap_ghex_F: Headgear_Base_F {};
	class Headgear_H_Booniehat_tna_F: Headgear_Base_F {};
	class Headgear_H_Beret_gen_F: Headgear_Base_F {};
	class Headgear_H_MilCap_gen_F: Headgear_Base_F {};
	class Vest_V_TacChestrig_grn_F: Vest_Base_F {};
	class Vest_V_TacChestrig_oli_F: Vest_Base_F {};
	class Vest_V_TacChestrig_cbr_F: Vest_Base_F {};
	class Vest_V_PlateCarrier1_tna_F: Vest_Base_F {};
	class Vest_V_PlateCarrierSpec_tna_F: Vest_Base_F {};
	class Vest_V_PlateCarrierGL_tna_F: Vest_Base_F {};
	class Vest_V_HarnessO_ghex_F: Vest_Base_F {};
	class Vest_V_HarnessOGL_ghex_F: Vest_Base_F {};
	class Vest_V_BandollierB_ghex_F: Vest_Base_F {};
	class Vest_V_PlateCarrier1_rgr_noflag_F: Vest_Base_F {};
	class Vest_V_PlateCarrier2_rgr_noflag_F: Vest_Base_F {};
	class Vest_V_TacVest_gen_F: Vest_Base_F {};
	class ProtectionZone_Ep1: House {};
	class Misc_thing: Thing {};
	class Fortress1: Strategic {};
	class FoldChair: Thing {};
	class WoodChair: FoldChair {};
	class Hhedgehog_concrete: Strategic {};
	class Hhedgehog_concreteBig: Hhedgehog_concrete {};
	class Grave: NonStrategic {};
	class Fort_Crate_wood: NonStrategic {};
	class Hedgehog: Strategic {};
	class Park_bench1: WoodChair {};
	class Park_bench2: Park_bench1 {};
	class PaletaBase: NonStrategic {};
	class Paleta1: PaletaBase {};
	class Paleta2: PaletaBase {};
	class Pile_of_wood: Land_Ind_Timbers {};
	class Haystack: Land_Ind_Timbers {};
	class Fence_Ind: Fence {};
	class Fence_Ind_long: Fence_Ind {};
	class Fence_corrugated_plate: Fence_Ind {};
	class Axe_woodblock: Misc_thing {};
	class BarrelHelper: Misc_thing {};
	class BarrelBase: BarrelHelper {};
	class Barrel4: BarrelBase {};
	class Barrel5: BarrelBase {};
	class ClutterCutter_EP1: Thing
		nameSound = "";
	class ClutterCutter_small_EP1: ClutterCutter_EP1 {};
	class ClutterCutter_small_2_EP1: ClutterCutter_EP1 {};
	class FlagPole_EP1: FlagCarrier {};
	class FlagCarrierRedCross_EP1: FlagCarrier {};
	class FlagCarrierWhite_EP1: FlagCarrier {};
	class House_EP1: House {};
	class Fort_StoneWall_EP1: House_EP1 {};
	class Gunrack1: NonStrategic {};
	class Gunrack2: Gunrack1 {};
	class Haystack_small: Misc_thing {};
	class Hedgehog_EP1: Hedgehog {};
	class HeliHEmpty: HeliH
		nameSound = "";
	class InvisibleFence: Fence_Ind {};
	class InvisibleFence2: InvisibleFence {};
	class InvisibleFence3: InvisibleFence {};
	class Small_items: Thing {};
	class Small_Items_EP1: Small_items {};
	class Thing_EP1: Thing {};
	class Notice_board: Misc_thing {};
	class Notice_board_EP1: Notice_board {};
	class Helper_Base_EP1: Sign_circle {};
	class TargetE: TargetBase {};
	class TargetE_EP1: TargetE {};
	class TargetGrenadBase: TargetBase
		nameSound = "veh_tank";
	class TargetGrenade: TargetGrenadBase {};
	class TargetFakeTankBase: TargetGrenade {};
	class TargetFakeTank: TargetFakeTankBase {};
	class TargetFakeTank_Lockable_EP1: TargetFakeTank {};
	class TargetFakeTank_EP1: TargetFakeTank_Lockable_EP1 {};
	class LIB_Logic: Logic {};
	class LIB_Invisible_Target_Base: Strategic {};
	class LIB_Invisible_Target_East_Armored: LIB_Invisible_Target_Base {};
	class LIB_Invisible_Target_West_Armored: LIB_Invisible_Target_Base {};
	class LIB_Invisible_Target_Resist_Armored: LIB_Invisible_Target_Base {};
	class LIB_FlagCarrier: FlagCarrier {};
	class LIB_FlagCarrier_SU: LIB_FlagCarrier {};
	class LIB_FlagCarrier_GER: LIB_FlagCarrier {};
	class LIB_FlagCarrier_USA: LIB_FlagCarrier {};
	class FlagCarrierSU: LIB_FlagCarrier_SU {};
	class FlagCarrierGER: LIB_FlagCarrier_GER {};
	class FlagCarrierUSA: LIB_FlagCarrier_USA {};
	class LIB_StaticMGWeapon_base: StaticMGWeapon
	class StaticCanon: StaticWeapon {};
	class LIB_StaticCanon_base: StaticCanon {};
	class LIB_StaticCannon_base: StaticCannon
		nameSound = "veh_staticCannon";
	class LIB_GER_Soldier_base: B_Soldier_base_F {};
	class LIB_SOV_Soldier_base: O_Soldier_base_F {};
	class LIB_US_Soldier_base: B_Soldier_base_F {};
	class LIB_MG42_Lafette: LIB_StaticMGWeapon_base {};
	class lib_maxim_m30_base: LIB_StaticMGWeapon_base {};
	class LIB_Tank_base: Tank_F
	class LIB_Boat_base: Boat_F {};
	class LIB_LCVP: LIB_Boat_base
	class LIB_Plane_base: Plane_Base_F {};
	class LIB_Zis3_base: LIB_StaticCannon_base {};
	class LIB_Pak40_base: LIB_StaticCannon_base {};
	class LIB_61k_base: LIB_StaticCannon_base {};
	class AlternativeInjurySimulation: Logic {};
	class AmbientCombatManager: Logic {};
	class BattleFieldClearance: Logic {};
	class BIS_animals_Logic: Logic {};
	class BIS_clouds_Logic: Logic {};
	class BIS_SRRS_Logic: Logic {};
	class ConstructionManager: Logic {};
	class FirstAidSystem: Logic {};
	class GarbageCollector: Logic {};
	class SilvieManager: Logic {};
	class StrategicReferenceLayer: Logic {};
	class UAVManager: Logic {};
	class ZoraManager: Logic {};
	class FunctionsManager: Logic {};
	class AliceManager: Logic {};
	class PreloadManager: Logic {};
	class LocationLogic: Logic {};
	class BIS_ARTY_Logic: Logic {};
	class BIS_ARTY_Virtual_Artillery: Logic {};
	class LocationLogicAirport: LocationLogic {};
	class LocationLogicFlat: LocationLogic {};
	class LocationLogicCamp: LocationLogic {};
	class LocationLogicCityCenter: LocationLogic {};
	class LocationLogicCityLink: LocationLogic {};
	class LocationLogicCityFlatArea: LocationLogic {};
	class LocationLogicDepot: LocationLogic {};
	class LocationLogicCity: LocationLogicCityCenter {};
	class LocationLogicOwnerCivilian: LocationLogic {};
	class LocationLogicOwnerEast: LocationLogic {};
	class LocationLogicOwnerWest: LocationLogic {};
	class LocationLogicOwnerResistance: LocationLogic {};
	class LocationLogicStart: LocationLogic {};
	class Alice2Manager: Logic {};
	class GitaManager: Logic {};
	class JukeboxManager: Logic {};
	class BIS_Support: Logic {};
	class UAV_HeliManager: Logic {};
	class WeatherPostprocessManager: Logic {};
	class WeatherParticlesManager: Logic {};
	class SimpleFirstAid: Logic {};
	class ArmoryManager: Logic {};
	class SecOpManager: Logic {};
	class ArmoryMPManager: Logic {};
	class WarfareOA: Logic {};
	class Warfare: Logic {};
	class Hen: Hen_random_F {};
	class Sound_Factory01: Sound
	class Sound_Factory02: Sound
	class Sound_Factory03: Sound
	class Sound_Factory04: Sound
	class Sound_Factory05: Sound
	class Sound_Factory06: Sound
	class Sound_Factory07: Sound
	class Sound_Factory08: Sound
	class Sound_Factory09: Sound
	class Sound_Factory10: Sound
	class Sound_Factory11: Sound
	class Sound_Factory12: Sound
	class Sound_Factory13: Sound
	class Sound_Factory14: Sound
	class Sound_Factory15: Sound
	class Sound_Factory16: Sound
	class Sound_Factory17: Sound
	class Sound_Factory18: Sound
	class Sound_Music: Sound
	class Cow01: Rabbit_F {};
	class Cow01_EP1: Cow01 {};
	class Cow02: Cow01 {};
	class Cow03: Cow01 {};
	class Cow04: Cow01 {};
	class Pastor: Cow01 {};
	class Baseball: Rabbit_F {};
	class Cock: Rabbit_F {};
	class Fin: Rabbit_F {};
	class Goat: Rabbit_F {};
	class Sheep: Rabbit_F {};
	class WildBoar: Rabbit_F {};
	class Goat01_EP1: Goat {};
	class Goat02_EP1: Goat {};
	class RoadBarrier_long: RoadBarrier_F {};
	class RoadCone: RoadCone_F {};
	class LIB_Effect_01: LIB_Logic {};
	class LIB_Effect_02: LIB_Logic {};
	class LIB_Effect_03: LIB_Logic {};
	class LIB_Effect_04: LIB_Logic {};
	class LIB_Effect_05: LIB_Logic {};
	class LIB_Effect_06: LIB_Logic {};
	class LIB_FNC: LIB_Logic {};
	class LIB_Distance: LIB_Logic {};
	class LIB_Advanced_AI_Module: LIB_Logic {};
	class LIB_StaticSearchLight_base: StaticSEARCHLight
		nameSound = "light";
	class LIB_GER_SearchLight: LIB_StaticSearchLight_base {};
	class LIB_SU_SearchLight: LIB_StaticSearchLight_base {};
	class LIB_SearchLight_GER: LIB_GER_SearchLight {};
	class LIB_SearchLight_SU: LIB_SU_SearchLight {};
	class SearchLight_GER: LIB_GER_SearchLight {};
	class SearchLight_SU: LIB_SU_SearchLight {};
	class LIB_MG42_Lafette_trench: LIB_MG42_Lafette {};
	class LIB_MG42_Lafette_low: LIB_MG42_Lafette_trench {};
	class LIB_Maxim_M30_Trench: lib_maxim_m30_base {};
	class LIB_StaticMortar_base: StaticMortar
	class LIB_SU_Mortar_base: LIB_StaticMortar_base {};
	class LIB_GER_Mortar_base: LIB_StaticMortar_base {};
	class LIB_BM37: LIB_SU_Mortar_base {};
	class LIB_GrWr34: LIB_GER_Mortar_base {};
	class LIB_Target: TargetBase {};
	class LIB_Target_Mgun: LIB_Target {};
	class LIB_Target_Stand: LIB_Target {};
	class LIB_Target_Prone: LIB_Target {};
	class LIB_Wreck_Base: Wreck_Base {};
	class LIB_kfz1_Wreck: LIB_Wreck_Base {};
	class Lib_Willys_Wreck: LIB_Wreck_Base {};
	class LIB_OpelBlitz_Wreck: LIB_Wreck_Base {};
	class LIB_OpelBlitz_2_Wreck: LIB_OpelBlitz_Wreck {};
	class LIB_opelblitz_fuel_Wreck: LIB_OpelBlitz_Wreck {};
	class LIB_zis5v_Wreck: LIB_Wreck_Base {};
	class LIB_zis5v_med_Wreck: LIB_zis5v_Wreck {};
	class LIB_zis5v_fuel_Wreck: LIB_zis5v_Wreck {};
	class LIB_zis6_parm_Wreck: LIB_zis5v_Wreck {};
	class LIB_us6_Wreck: LIB_zis5v_Wreck {};
	class LIB_us6_bm13_Wreck: LIB_zis5v_Wreck {};
	class LIB_SdKfz251_Wreck: LIB_Wreck_Base {};
	class LIB_SdKfz251_captured_wreck: LIB_SdKfz251_Wreck {};
	class LIB_T34_76_Wreck: LIB_Wreck_Base {};
	class LIB_SU85_Wreck: LIB_Wreck_Base {};
	class LIB_PzKpfwV_Wreck: LIB_Wreck_Base {};
	class LIB_PzKpfwIV_H_Wreck: LIB_Wreck_Base {};
	class LIB_JS2_43_wreck: LIB_Wreck_Base {};
	class LIB_PzKpfwVI_B_wreck: LIB_Wreck_Base {};
	class LIB_PzKpfwVI_B_camo_wreck: LIB_PzKpfwVI_B_wreck {};
	class LIB_t34_85_wreck: LIB_Wreck_Base {};
	class LIB_StuG_III_G_wreck: LIB_Wreck_Base {};
	class LIB_M4A3_75_wreck: LIB_Wreck_Base {};
	class LIB_Pe2_Wreck: LIB_Wreck_Base {};
	class LIB_Zis3_wreck: LIB_JS2_43_wreck {};
	class LIB_ReammoBox_base: ReammoBox_F
		nameSound = "obj_ammocrate";
	class LIB_4Rnd_Panzerfaust30: LIB_ReammoBox_base {};
	class LIB_4Rnd_RPzB: LIB_ReammoBox_base {};
	class LIB_BasicAmmunitionBox_SU: LIB_ReammoBox_base {};
	class LIB_BasicAmmunitionBox_GER: LIB_ReammoBox_base {};
	class LIB_BasicAmmunitionBox_US: LIB_ReammoBox_base {};
	class LIB_BasicWeaponsBox_SU: LIB_BasicAmmunitionBox_SU {};
	class LIB_BasicWeaponsBox_GER: LIB_BasicAmmunitionBox_GER {};
	class LIB_BasicWeaponsBox_US: LIB_BasicAmmunitionBox_US {};
	class LIB_WeaponsBox_Big_SU: LIB_BasicWeaponsBox_SU {};
	class LIB_Lone_Big_Box: LIB_WeaponsBox_Big_SU {};
	class LIB_WeaponsBox_Big_GER: LIB_BasicWeaponsBox_GER {};
	class LIB_AmmoCrate_Arty_GER: LIB_ReammoBox_base {};
	class LIB_AmmoCrate_Arty_SU: LIB_ReammoBox_base {};
	class LIB_AmmoCrate_Mortar_GER: LIB_ReammoBox_base {};
	class LIB_AmmoCrate_Mortar_SU: LIB_ReammoBox_base {};
	class LIB_AmmoCrates_NoInteractive_Large: Strategic {};
	class B_LIB_AssaultPack_Base: B_AssaultPack_Base {};
	class B_LIB_BasicBag: B_LIB_AssaultPack_Base {};
	class BasicBag: B_LIB_BasicBag {};
	class B_LIB_GER_Bag: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_GrenadesBag: B_LIB_GER_Bag {};
	class GerBag_gr: B_LIB_GER_GrenadesBag {};
	class B_LIB_GER_K89AmmoBag: B_LIB_GER_Bag {};
	class GerBag_K98: B_LIB_GER_K89AmmoBag {};
	class B_LIB_GER_MGAmmoBag: B_LIB_GER_Bag {};
	class GerBag_MG: B_LIB_GER_MGAmmoBag {};
	class B_LIB_GER_MineBag: B_LIB_GER_Bag {};
	class GerBag_sap: B_LIB_GER_MineBag {};
	class B_LIB_GER_ExplosivesBag: B_LIB_GER_Bag {};
	class GerBag_sap2: B_LIB_GER_ExplosivesBag {};
	class B_LIB_SOV_Bag: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_GrenadesBag: B_LIB_SOV_Bag {};
	class RusBag_gr: B_LIB_SOV_GrenadesBag {};
	class B_LIB_SOV_PPShAmmoBag: B_LIB_SOV_Bag {};
	class RusBag_ppsh: B_LIB_SOV_PPShAmmoBag {};
	class B_LIB_SOV_MinesBag: B_LIB_SOV_Bag {};
	class RusBag_sap: B_LIB_SOV_MinesBag {};
	class B_LIB_SOV_ExplosivesBag: B_LIB_SOV_Bag {};
	class RusBag_sap2: B_LIB_SOV_ExplosivesBag {};
	class B_LIB_SOV_MosinAmmoBag: B_LIB_SOV_Bag {};
	class RusBag_mos: B_LIB_SOV_MosinAmmoBag {};
	class B_LIB_SOV_DPAmmoBag: B_LIB_SOV_Bag {};
	class RusBag_DP: B_LIB_SOV_DPAmmoBag {};
	class B_LIB_US_Bag: B_LIB_AssaultPack_Base {};
	class LIB_Backpack_us: B_LIB_US_Bag {};
	class B_LIB_US_BARBag: B_LIB_US_Bag {};
	class LIB_Backpack_US_BAR: B_LIB_US_BARBag {};
	class B_LIB_US_BazBag: B_LIB_US_Bag {};
	class LIB_Backpack_US_Baz: B_LIB_US_BazBag {};
	class B_LIB_US_MineBag: B_LIB_US_Bag {};
	class LIB_Backpack_US_Mine: B_LIB_US_MineBag {};
	class B_LIB_FunkBag: B_LIB_AssaultPack_Base {};
	class FunkBag: B_LIB_FunkBag {};
	class B_LIB_FunkBag_Empty: B_LIB_FunkBag {};
	class B_LIB_RadioBag: B_LIB_AssaultPack_Base {};
	class RadioBag: B_LIB_RadioBag {};
	class B_LIB_RadioBag_Empty: B_LIB_RadioBag {};
	class LIB_Tripod_Bag: B_LIB_AssaultPack_Base {};
	class LIB_Weapon_Bag_Base: Weapon_Bag_Base {};
	class LIB_BM37_Bag: LIB_Tripod_Bag {};
	class LIB_BM37_Bar: LIB_Weapon_Bag_Base {};
	class LIB_GrWr34_Bag: LIB_Tripod_Bag {};
	class LIB_GrWr34_Bar: LIB_Weapon_Bag_Base {};
	class LIB_MG42_Bag: LIB_Weapon_Bag_Base {};
	class LIB_MG42_Tripod_Disasm: LIB_Tripod_Bag {};
	class LIB_Maxim_Bag: LIB_Tripod_Bag {};
	class LIB_Maxim_Bar: LIB_Weapon_Bag_Base {};
	class LIB_Pistol_Base_F: Pistol_Base_F {};
	class LIB_Weapon_Base_F: Weapon_Base_F {};
	class LIB_Launcher_Base_F: Launcher_Base_F {};
	class Headgear_H_LIB_Headgear_Base: Headgear_Base_F {};
	class Headgear_H_LIB_SOV_RA_PrivateCap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_SOV_RA_OfficerCap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_SOV_RA_Helmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_SOV_TankHelmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_SOV_PilotHelmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_HelmetCamo: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_Helmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_OfficerCap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_Cap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_LW_PilotHelmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_TankOfficerCap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_TankPrivateCap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_GER_SPGPrivateCap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_WP_Helmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_WP_Helmet_camo: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_WP_Helmet_med: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_WP_Cap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_US_Helmet: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_US_Helmet_Net: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_US_Helmet_Med: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_US_Helmet_Cap: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_US_Helmet_First_lieutenant: Headgear_H_LIB_Headgear_Base {};
	class Headgear_H_LIB_US_Helmet_Second_lieutenant: Headgear_H_LIB_Headgear_Base {};
	class Uniform_U_LIB_BasicBody: Item_U_BasicBody {};
	class Uniform_U_LIB_SOV_Strelok: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Strelokart: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Tank_private_field: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Starshina: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Efreitor: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Sergeant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Sergeant_inset_pocket: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Stsergeant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Leutenant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Pilot: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Leutenant_inset_pocket: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Artleutenant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Stleutenant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Kapitan: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Razvedchik_am: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Razvedchik_lis: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Razvedchik_mix: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Sniper: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Tank_ryadovoi: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Tank_sergeant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Tank_leutenant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_SOV_Tank_kapitan: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Soldier_camo: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Pionier: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_LW_pilot: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Officer_camo: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Funker: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Schutze: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Art_schutze: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Oberschutze: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Gefreiter: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Unterofficer: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Art_unterofficer: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Recruit: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Medic: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Leutnant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Art_leutnant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Oberleutnant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Hauptmann: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Oberst: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Scharfschutze: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_MG_schutze: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Tank_crew_private: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Tank_crew_unterofficer: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Tank_crew_leutnant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Spg_crew_private: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Spg_crew_unterofficer: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_GER_Spg_crew_leutnant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_WP_Soldier_camo_1: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_WP_Soldier_camo_2: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_WP_Soldier_camo_3: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Private: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Private_1st: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Corp: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Sergant: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Snipe: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Eng: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Med: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Off: Uniform_U_LIB_BasicBody {};
	class Uniform_U_LIB_US_Cap: Uniform_U_LIB_BasicBody {};
	class Vest_V_LIB_Vest_Base: Vest_Base_F {};
	class Vest_V_LIB_SOV_IShBrVestMG: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_IShBrVestPPShMag: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_IShBrVestPPShDisc: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_OfficerVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_SniperVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_Belt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_TankOfficerSet: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_PPShBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_MosinBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_SVTBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RA_MGBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RAZV_SVTBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RAZV_OfficerVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RAZV_MGBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_SOV_RAZV_PPShBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_VestMP40: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_VestSTG: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_VestKar98: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_VestG43: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_SniperBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_VestMG: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_VestUnterofficer: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_FieldOfficer: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_OfficerVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_OfficerBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_PrivateBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_GER_TankPrivateBelt: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_MP40Vest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_STGVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_Kar98Vest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_G43Vest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_SniperBela: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_MGVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_WP_OfficerVest: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Bar: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Asst_MG: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Carbine: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Carbine_eng: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Carbine_nco: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Garand: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Grenadier: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Medic: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Thompson: Vest_V_LIB_Vest_Base {};
	class Vest_V_LIB_US_Vest_Thompson_nco: Vest_V_LIB_Vest_Base {};
	class Weapon_LIB_P38: LIB_Pistol_Base_F {};
	class Weapon_LIB_Colt_M1911: LIB_Pistol_Base_F {};
	class Weapon_LIB_M1908: LIB_Pistol_Base_F {};
	class Weapon_LIB_TT33: LIB_Pistol_Base_F {};
	class Weapon_LIB_M1895: LIB_Pistol_Base_F {};
	class Weapon_LIB_FLARE_PISTOL: LIB_Pistol_Base_F {};
	class Weapon_LIB_MP40: LIB_Weapon_Base_F {};
	class Weapon_LIB_PPSh41_m: LIB_Weapon_Base_F {};
	class Weapon_LIB_PPSh41_d: LIB_Weapon_Base_F {};
	class Weapon_LIB_M1A1_Thompson: LIB_Weapon_Base_F {};
	class Weapon_LIB_DP28: LIB_Weapon_Base_F {};
	class Weapon_LIB_DT: LIB_Weapon_Base_F {};
	class Weapon_LIB_DT_OPTIC: LIB_Weapon_Base_F {};
	class Weapon_LIB_MG42: LIB_Weapon_Base_F {};
	class Weapon_LIB_M1918A2_BAR: LIB_Weapon_Base_F {};
	class Weapon_LIB_K98: LIB_Weapon_Base_F {};
	class Weapon_LIB_M9130: LIB_Weapon_Base_F {};
	class Weapon_LIB_M38: LIB_Weapon_Base_F {};
	class Weapon_LIB_M44: LIB_Weapon_Base_F {};
	class Weapon_LIB_MP44: LIB_Weapon_Base_F {};
	class Weapon_LIB_SVT_40: LIB_Weapon_Base_F {};
	class Weapon_LIB_G43: LIB_Weapon_Base_F {};
	class Weapon_LIB_M1_Garand: LIB_Weapon_Base_F {};
	class Weapon_LIB_M1_Carbine: LIB_Weapon_Base_F {};
	class Weapon_LIB_K98ZF39: LIB_Weapon_Base_F {};
	class Weapon_LIB_M9130PU: LIB_Weapon_Base_F {};
	class Weapon_LIB_M1903A4_Springfield: LIB_Weapon_Base_F {};
	class Weapon_LIB_PzFaust_30m: LIB_Launcher_Base_F {};
	class Weapon_LIB_PzFaust_30m_used: LIB_Launcher_Base_F {};
	class Weapon_LIB_RPzB: LIB_Launcher_Base_F {};
	class Weapon_LIB_M1A1_Bazooka: LIB_Launcher_Base_F {};
	class Item_LIB_Binocular_GER: Item_Binocular {};
	class Item_LIB_Binocular_PL: Item_Binocular {};
	class Item_LIB_Binocular_SU: Item_Binocular {};
	class Item_LIB_Binocular_US: Item_Binocular {};
	class Item_LIB_ACC_M44_Bayo: Item_muzzle_snds_H {};
	class Fuel_can: Misc_thing {};
	class WW2_ProtectionZone_Invisible: ProtectionZone_Ep1 {};
	class LIB_ProtectionZone_Invisible: WW2_ProtectionZone_Invisible {};
	class Fort_RazorWire: NonStrategic {};
	class Shed: Strategic {};
	class Trench_Big1: Shed
		namesound = "obj_bunker";
	class Trench_Small1: Trench_Big1 {};
	class Trench_Single1: Trench_Big1 {};
	class Trench_Mg1: Trench_Big1 {};
	class Trench_Mg2: Trench_Big1 {};
	class Trench_Mortar: Trench_Big1 {};
	class Trench_Gun1: Trench_Big1 {};
	class Trench_Tank1: Trench_Big1 {};
	class WW2_Fortification_Trench_Bridge: Trench_Big1 {};
	class WW2_Fortification_Trench_Corner_x1: Trench_Big1 {};
	class WW2_Fortification_Trench_Corner_x2: Trench_Big1 {};
	class WW2_Fortification_Trench_Corner_90: Trench_Big1 {};
	class WW2_Fortification_Trench_Bunker_FFP: Trench_Big1 {};
	class WW2_Fortification_Trench_Bunker_FFP_Doors: WW2_Fortification_Trench_Bunker_FFP {};
	class WW2_Fortification_Trench_Bunker_Big: Trench_Big1 {};
	class WW2_Fortification_Trench_Bunker_Big_Doors: WW2_Fortification_Trench_Bunker_Big {};
	class WW2_Fortification_Trench_Long_x3: Trench_Big1 {};
	class WW2_Fortification_Trench_Wide: Trench_Big1 {};
	class WW2_Fortification_Trench_Wall: Trench_Big1 {};
	class WW2_Fortification_Pillbox_Small: Trench_Big1 {};
	class FxCartridge_Small_2: FxCartridge_Small {};
	class FxCartridge_792: FxCartridge {};
	class LIB_Sound_Alarm: Sound
	class LIB_Armor_Damage_System_Logic: LIB_Logic {};
	class LIB_House_Fire_System_Logic: LIB_Logic {};
	class WW2_bunker: House_Small
		nameSound = "obj_Bunker";
	class WW2_NonStrategic: NonStrategic
		nameSound = "obj_object";
	class LIB_GER_soldier_camo_MP40: LIB_GER_Soldier_base {};
	class LIB_GER_soldier_camo_MP40_with_grenades: LIB_GER_soldier_camo_MP40 {};
	class LIB_GER_soldier_camo_K98: LIB_GER_soldier_camo_MP40 {};
	class LIB_GER_soldier_camo_K98_with_grenades: LIB_GER_soldier_camo_K98 {};
	class LIB_GER_soldier_MP40: LIB_GER_Soldier_base {};
	class LIB_GER_soldier_K98: LIB_GER_Soldier_base {};
	class LIB_GER_inf_officer_0: LIB_GER_Soldier_base {};
	class LIB_GER_inf_officer_1: LIB_GER_inf_officer_0 {};
	class LIB_GER_soldier_camo_base: LIB_GER_Soldier_base {};
	class LIB_GER_rifleman: LIB_GER_Soldier_base {};
	class LIB_GER_recruit: LIB_GER_Soldier_base {};
	class LIB_GER_unequip: LIB_GER_recruit {};
	class LIB_GER_ober_rifleman: LIB_GER_rifleman {};
	class LIB_GER_mgunner: LIB_GER_rifleman {};
	class LIB_GER_stggunner: LIB_GER_mgunner {};
	class LIB_GER_AT_soldier: LIB_GER_mgunner {};
	class LIB_GER_AT_grenadier: LIB_GER_rifleman {};
	class LIB_GER_smgunner: LIB_GER_Soldier_base {};
	class LIB_GER_unterofficer: LIB_GER_Soldier_base {};
	class LIB_GER_lieutenant: LIB_GER_Soldier_base {};
	class LIB_GER_ober_lieutenant: LIB_GER_lieutenant {};
	class LIB_GER_hauptmann: LIB_GER_lieutenant {};
	class LIB_GER_oberst: LIB_GER_lieutenant {};
	class LIB_GER_scout_rifleman: LIB_GER_soldier_camo_base {};
	class LIB_GER_scout_ober_rifleman: LIB_GER_scout_rifleman {};
	class LIB_GER_scout_mgunner: LIB_GER_soldier_camo_base {};
	class LIB_GER_scout_smgunner: LIB_GER_soldier_camo_base {};
	class LIB_GER_scout_unterofficer: LIB_GER_scout_smgunner {};
	class LIB_GER_scout_lieutenant: LIB_GER_scout_smgunner {};
	class LIB_GER_scout_sniper: LIB_GER_soldier_camo_base {};
	class LIB_GER_medic: LIB_GER_Soldier_base {};
	class LIB_GER_radioman: LIB_GER_soldier_camo_base {};
	class LIB_GER_sapper: LIB_GER_Soldier_base {};
	class LIB_GER_sapper_gefr: LIB_GER_soldier_camo_base {};
	class LIB_GER_gun_crew: LIB_GER_rifleman {};
	class LIB_GER_gun_unterofficer: LIB_GER_unterofficer {};
	class LIB_GER_gun_lieutenant: LIB_GER_lieutenant {};
	class LIB_GER_tank_crew_base: LIB_GER_Soldier_base {};
	class LIB_GER_tank_crew: LIB_GER_tank_crew_base {};
	class LIB_GER_tank_unterofficer: LIB_GER_tank_crew {};
	class LIB_GER_tank_lieutenant: LIB_GER_tank_unterofficer {};
	class LIB_GER_spg_crew: LIB_GER_tank_crew {};
	class LIB_GER_tank_officer: LIB_GER_tank_lieutenant {};
	class LIB_GER_spg_unterofficer: LIB_GER_tank_unterofficer {};
	class LIB_GER_spg_lieutenant: LIB_GER_tank_lieutenant {};
	class LIB_GER_pilot: LIB_GER_Soldier_base {};
	class LIB_GER_rifleman_ADS: LIB_GER_rifleman {};
	class B_LIB_GER_A_frame: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_A_frame_AT: B_LIB_GER_A_frame {};
	class B_LIB_GER_A_frame_Gef: B_LIB_GER_A_frame {};
	class B_LIB_GER_Radio: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_Backpack: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_SapperBackpack: B_LIB_GER_Backpack {};
	class B_LIB_GER_SapperBackpack2: B_LIB_GER_SapperBackpack {};
	class B_LIB_GER_MedicBackpack: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_MedicBackpack_Empty: B_LIB_GER_MedicBackpack {};
	class B_LIB_GER_Tonister34_cowhide: B_LIB_GER_MedicBackpack_Empty {};
	class B_LIB_GER_LW_Paradrop: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_Panzer: B_LIB_AssaultPack_Base {};
	class B_LIB_GER_Panzer_Empty: B_LIB_GER_Panzer {};
	class LIB_WP_base: LIB_GER_soldier_camo_base {};
	class LIB_WP_Strzelec: LIB_WP_base {};
	class LIB_WP_Starszy_strzelec: LIB_WP_Strzelec {};
	class LIB_WP_Mgunner: LIB_WP_Strzelec {};
	class LIB_WP_AT_grenadier: LIB_WP_Strzelec {};
	class LIB_WP_Stggunner: LIB_WP_Strzelec {};
	class LIB_WP_Sierzant: LIB_WP_Strzelec {};
	class LIB_WP_Porucznic: LIB_WP_Strzelec {};
	class LIB_WP_Sniper: LIB_WP_Strzelec {};
	class LIB_WP_Medic: LIB_WP_Strzelec {};
	class LIB_WP_Radioman: LIB_WP_Strzelec {};
	class LIB_WP_Saper: LIB_WP_Strzelec {};
	class LIB_WP_Starszy_saper: LIB_WP_Strzelec {};
	class LIB_WP_Strzelec_ADS: LIB_WP_Strzelec {};
	class LIB_sov_soldier_PPSH41: LIB_SOV_Soldier_base {};
	class LIB_sov_soldier_mosin_rifle_0: LIB_SOV_Soldier_base {};
	class LIB_sov_sergeant_PPSH41_0: LIB_SOV_Soldier_base {};
	class LIB_sov_lieutenant_PPSH41: LIB_SOV_Soldier_base {};
	class LIB_SOV_rifleman: LIB_SOV_Soldier_base {};
	class LIB_SOV_unequip: LIB_SOV_rifleman {};
	class LIB_SOV_smgunner: LIB_SOV_Soldier_base {};
	class LIB_SOV_LC_rifleman: LIB_SOV_rifleman {};
	class LIB_SOV_mgunner: LIB_SOV_Soldier_base {};
	class LIB_SOV_medic: LIB_SOV_mgunner {};
	class LIB_SOV_AT_soldier: LIB_SOV_Soldier_base {};
	class LIB_SOV_AT_grenadier: LIB_SOV_Soldier_base {};
	class LIB_SOV_staff_sergeant: LIB_SOV_Soldier_base {};
	class LIB_SOV_sergeant: LIB_SOV_Soldier_base {};
	class LIB_SOV_p_officer: LIB_SOV_Soldier_base {};
	class LIB_SOV_lieutenant: LIB_SOV_Soldier_base {};
	class LIB_SOV_first_lieutenant: LIB_SOV_lieutenant {};
	class LIB_SOV_captain: LIB_SOV_lieutenant {};
	class LIB_SOV_scout_rifleman: LIB_SOV_rifleman {};
	class LIB_SOV_scout_smgunner: LIB_SOV_scout_rifleman {};
	class LIB_SOV_scout_mgunner: LIB_SOV_scout_rifleman {};
	class LIB_SOV_scout_sergeant: LIB_SOV_scout_rifleman {};
	class LIB_SOV_scout_p_officer: LIB_SOV_scout_rifleman {};
	class LIB_SOV_scout_lieutenant: LIB_SOV_scout_p_officer {};
	class LIB_SOV_scout_sniper: LIB_SOV_scout_rifleman {};
	class LIB_SOV_operator: LIB_SOV_rifleman {};
	class LIB_SOV_sapper: LIB_SOV_rifleman {};
	class LIB_SOV_assault_smgunner: LIB_SOV_smgunner {};
	class LIB_SOV_assault_mgunner: LIB_SOV_assault_smgunner {};
	class LIB_SOV_assault_sergeant: LIB_SOV_assault_smgunner {};
	class LIB_SOV_tank_crew: LIB_SOV_Soldier_base {};
	class LIB_SOV_tank_sergeant: LIB_SOV_tank_crew {};
	class LIB_sov_tank_crew_lieutenant: LIB_SOV_tank_crew {};
	class LIB_SOV_tank_lieutenant: LIB_SOV_tank_crew {};
	class LIB_SOV_tank_captain: LIB_SOV_tank_lieutenant {};
	class LIB_SOV_tank_overall_crew: LIB_SOV_tank_crew {};
	class LIB_SOV_tank_overall_sergeant: LIB_SOV_tank_overall_crew {};
	class LIB_SOV_tank_overall_lieutenant: LIB_SOV_tank_overall_crew {};
	class LIB_SOV_tank_overall_captain: LIB_SOV_tank_overall_lieutenant {};
	class LIB_SOV_gun_crew: LIB_SOV_rifleman {};
	class LIB_SOV_gun_sergeant: LIB_SOV_sergeant {};
	class LIB_SOV_gun_lieutenant: LIB_SOV_lieutenant {};
	class LIB_SOV_pilot: LIB_SOV_Soldier_base {};
	class LIB_SOV_rifleman_ADS: LIB_SOV_rifleman {};
	class B_LIB_SOV_RA_GasBag: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_RA_Paradrop: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_RA_MedicalBag: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_RA_MedicalBag_Empty: B_LIB_SOV_RA_MedicalBag {};
	class B_LIB_SOV_RA_Radio: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_RA_Rucksack: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_RA_Rucksack_Green: B_LIB_SOV_RA_Rucksack {};
	class B_LIB_SOV_RA_RucksackMines: B_LIB_SOV_RA_Rucksack {};
	class B_LIB_SOV_RA_RucksackMines2: B_LIB_SOV_RA_Rucksack {};
	class B_LIB_SOV_RA_MGAmmoBag: B_LIB_AssaultPack_Base {};
	class B_LIB_SOV_RA_MGAmmoBag_Empty: B_LIB_SOV_RA_MGAmmoBag {};
	class ParachuteC: ParachuteBase {};
	class ParachuteBigBase: ParachuteBase {};
	class ParachuteBigWest: ParachuteBigBase {};
	class ParachuteBigEast: ParachuteBigBase {};
	class ParachuteMediumBase: ParachuteBase {};
	class ParachuteMediumWest: ParachuteMediumBase {};
	class ParachuteMediumEast: ParachuteMediumBase {};
	class LIB_SU_Plane_base: LIB_Plane_base {};
	class LIB_GER_Plane_base: LIB_Plane_base {};
	class LIB_US_Plane_base: LIB_Plane_base {};
	class LIB_PlaneWreck_base: PlaneWreck {};
	class LIB_FW190F8: LIB_GER_Plane_base
		nameSound = "veh_attackAirplane";
	class LIB_FW190F8_W: LIB_FW190F8 {};
	class LIB_FW190F8_MRWreck: LIB_PlaneWreck_base {};
	class LIB_Ju87: LIB_GER_Plane_base
	class LIB_Ju87_MRWreck: LIB_PlaneWreck_base {};
	class LIB_P39: LIB_SU_Plane_base
		nameSound = "veh_attackAirplane";
	class LIB_P39_MRWreck: LIB_PlaneWreck_base {};
	class LIB_Pe2: LIB_SU_Plane_base
	class LIB_Pe2_MRWreck: LIB_PlaneWreck_base {};
	class LIB_FlaK_38_base: LIB_StaticCanon_base {};
	class LIB_FlaK_38: LIB_FlaK_38_base {};
	class LIB_FlaK_30: LIB_FlaK_38 {};
	class LIB_FlaK_38_destruct_chassis: Thing {};
	class LIB_FlaK_38_destruct_basement: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_basement_left: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_basement_right: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_basement_misc_up: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_cannon: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_cannon_base: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_seat: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_shield_left: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_shield_right: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_shield_sight: LIB_FlaK_38_destruct_chassis {};
	class LIB_FlaK_38_destruct_shield_small: LIB_FlaK_38_destruct_chassis {};
	class LIB_Flakvierling_38_base: LIB_StaticCanon_base {};
	class LIB_Flakvierling_38: LIB_Flakvierling_38_base {};
	class LIB_Flakvierling_38_destruct_chassis: Thing {};
	class LIB_Flakvierling_38_destruct_base: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_cannon: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_cannon_base_left: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_cannon_base_right: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_gunner_seat: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_loader_seat: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_left_loader_plate: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Flakvierling_38_destruct_right_loader_plate: LIB_Flakvierling_38_destruct_chassis {};
	class LIB_Armored_Target_Dummy: Tank {};
	class LIB_Tank_Destruct_Tower_base: Car {};
	class LIB_JS2_43: LIB_Tank_base
	class LIB_JS2_43_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_JS2_43_destruct_chassis_1: Thing {};
	class LIB_JS2_43_destruct_chassis_2: LIB_JS2_43_destruct_chassis_1 {};
	class LIB_JS2_43_destruct_chassis_3: LIB_JS2_43_destruct_chassis_1 {};
	class LIB_PzKpfwIV_H_base: LIB_Tank_base
	class LIB_PzKpfwIV_H: LIB_PzKpfwIV_H_base {};
	class LIB_PzKpfwIV_H_destruct_tower: Thing {};
	class LIB_PzKpfwIV_H_destruct_chassis_1: Thing {};
	class LIB_PzKpfwIV_H_destruct_chassis_2: LIB_PzKpfwIV_H_destruct_chassis_1 {};
	class LIB_PzKpfwIV_H_destruct_chassis_3: LIB_PzKpfwIV_H_destruct_chassis_1 {};
	class LIB_PzKpfwIV_H_destruct_chassis_4: LIB_PzKpfwIV_H_destruct_chassis_1 {};
	class LIB_PzKpfwIV_H_destruct_back_upper_wind: LIB_PzKpfwIV_H_destruct_chassis_1 {};
	class LIB_PzKpfwIV_H_destruct_right_upper_wind: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_left_upper_wind: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_left_wind_1: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_left_wind_2: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_left_wind_3: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_left_wind_4: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_left_wind_5: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_right_wind_1: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_right_wind_2: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_right_wind_3: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_right_wind_4: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwIV_H_destruct_right_wind_5: LIB_PzKpfwIV_H_destruct_back_upper_wind {};
	class LIB_PzKpfwV_base: LIB_Tank_base
	class LIB_PzKpfwV_no_lods: LIB_PzKpfwV_base {};
	class LIB_PzKpfwV: LIB_PzKpfwV_base {};
	class LIB_PzKpfwV_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_PzKpfwV_destruct_chassis_1: Thing {};
	class LIB_PzKpfwV_destruct_chassis_2: LIB_PzKpfwV_destruct_chassis_1 {};
	class LIB_PzKpfwV_destruct_chassis_3: LIB_PzKpfwV_destruct_chassis_1 {};
	class LIB_PzKpfwV_destruct_chassis_4: LIB_PzKpfwV_destruct_chassis_1 {};
	class LIB_PzKpfwVI_B_base: LIB_Tank_base
	class LIB_PzKpfwVI_B: LIB_PzKpfwVI_B_base {};
	class LIB_PzKpfwVI_B_camo: LIB_PzKpfwVI_B {};
	class LIB_PzKpfwVI_B_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_PzKpfwVI_B_camo_Destruct_Tower: LIB_PzKpfwVI_B_Destruct_Tower {};
	class LIB_PzKpfwVI_B_destruct_chassis_1: Thing {};
	class LIB_PzKpfwVI_B_destruct_chassis_2: LIB_PzKpfwVI_B_destruct_chassis_1 {};
	class LIB_PzKpfwVI_B_destruct_chassis_3: LIB_PzKpfwVI_B_destruct_chassis_1 {};
	class LIB_PzKpfwVI_B_destruct_chassis_4: LIB_PzKpfwVI_B_destruct_chassis_1 {};
	class LIB_PzKpfwVI_B_kriloL1: LIB_PzKpfwVI_B_destruct_chassis_1 {};
	class LIB_PzKpfwVI_B_kriloL2: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloL3: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloL4: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloL5: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloL6: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloL7: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloP1: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_kriloP2: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_kriloP3: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_kriloP4: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_kriloP5: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_kriloP6: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_kriloP7: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_camo_kriloL1: LIB_PzKpfwVI_B_kriloL1 {};
	class LIB_PzKpfwVI_B_camo_kriloL2: LIB_PzKpfwVI_B_kriloL2 {};
	class LIB_PzKpfwVI_B_camo_kriloL3: LIB_PzKpfwVI_B_kriloL3 {};
	class LIB_PzKpfwVI_B_camo_kriloL4: LIB_PzKpfwVI_B_kriloL4 {};
	class LIB_PzKpfwVI_B_camo_kriloL5: LIB_PzKpfwVI_B_kriloL5 {};
	class LIB_PzKpfwVI_B_camo_kriloL6: LIB_PzKpfwVI_B_kriloL6 {};
	class LIB_PzKpfwVI_B_camo_kriloL7: LIB_PzKpfwVI_B_kriloL7 {};
	class LIB_PzKpfwVI_B_camo_kriloP1: LIB_PzKpfwVI_B_kriloP1 {};
	class LIB_PzKpfwVI_B_camo_kriloP2: LIB_PzKpfwVI_B_kriloP2 {};
	class LIB_PzKpfwVI_B_camo_kriloP3: LIB_PzKpfwVI_B_kriloP3 {};
	class LIB_PzKpfwVI_B_camo_kriloP4: LIB_PzKpfwVI_B_kriloP4 {};
	class LIB_PzKpfwVI_B_camo_kriloP5: LIB_PzKpfwVI_B_kriloP5 {};
	class LIB_PzKpfwVI_B_camo_kriloP6: LIB_PzKpfwVI_B_kriloP6 {};
	class LIB_PzKpfwVI_B_camo_kriloP7: LIB_PzKpfwVI_B_kriloP7 {};
	class LIB_PzKpfwVI_E_base: LIB_Tank_base
	class LIB_PzKpfwVI_E: LIB_PzKpfwVI_E_base {};
	class LIB_PzKpfwVI_E_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_PzKpfwVI_E_destruct_chassis_1: Thing {};
	class LIB_PzKpfwVI_E_destruct_chassis_2: LIB_PzKpfwVI_E_destruct_chassis_1 {};
	class LIB_PzKpfwVI_E_destruct_chassis_3: LIB_PzKpfwVI_E_destruct_chassis_1 {};
	class LIB_PzKpfwVI_E_destruct_chassis_4: LIB_PzKpfwVI_E_destruct_chassis_1 {};
	class LIB_PzKpfwVI_E_destruct_left_wing_0: LIB_PzKpfwVI_E_destruct_chassis_1 {};
	class LIB_PzKpfwVI_E_destruct_left_wing_1: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_left_wing_2: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_left_wing_3: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_left_wing_4: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_left_wing_5: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_right_wing_0: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_right_wing_1: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_right_wing_2: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_right_wing_3: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_right_wing_4: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_PzKpfwVI_E_destruct_right_wing_5: LIB_PzKpfwVI_E_destruct_left_wing_0 {};
	class LIB_StuG_III_G_base: LIB_Tank_base
	class LIB_StuG_III_G: LIB_StuG_III_G_base {};
	class LIB_StuG_III_G_WS: LIB_StuG_III_G {};
	class LIB_StuG_III_G_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_StuG_III_G_destruct_chassis_1: Thing {};
	class LIB_StuG_III_G_destruct_chassis_2: LIB_StuG_III_G_destruct_chassis_1 {};
	class LIB_StuG_III_G_destruct_chassis_3: LIB_StuG_III_G_destruct_chassis_1 {};
	class LIB_StuG_III_G_destruct_chassis_4: LIB_StuG_III_G_destruct_chassis_1 {};
	class LIB_StuG_III_G_destruct_left_wind_1: LIB_StuG_III_G_destruct_chassis_1 {};
	class LIB_StuG_III_G_destruct_left_wind_2: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_StuG_III_G_destruct_left_wind_3: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_StuG_III_G_destruct_left_wind_4: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_StuG_III_G_destruct_right_wind_1: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_StuG_III_G_destruct_right_wind_2: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_StuG_III_G_destruct_right_wind_3: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_StuG_III_G_destruct_right_wind_4: LIB_StuG_III_G_destruct_left_wind_1 {};
	class LIB_T34_76: LIB_Tank_base
	class LIB_T34_76_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_T34_76_destruct_chassis_1: Thing {};
	class LIB_T34_76_destruct_chassis_2: LIB_T34_76_destruct_chassis_1 {};
	class LIB_T34_76_destruct_chassis_3: LIB_T34_76_destruct_chassis_1 {};
	class LIB_T34_85: LIB_Tank_base
	class LIB_T34_85_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_T34_85_destruct_chassis_1: Thing {};
	class LIB_T34_85_destruct_chassis_2: LIB_T34_85_destruct_chassis_1 {};
	class LIB_T34_85_destruct_chassis_3: LIB_T34_85_destruct_chassis_1 {};
	class LIB_Car_base: Car_F
	class LIB_Truck_base: Truck_F
	class LIB_Static_zis6_radar: Strategic {};
	class LIB_Static_opelblitz_radio: LIB_Static_zis6_radar {};
	class LIB_Kfz1_base: LIB_Car_base
	class LIB_Kfz1: LIB_Kfz1_base {};
	class LIB_Kfz1_MG42: LIB_Kfz1_base {};
	class LIB_kfz1_destruct_back_left_door: Thing {};
	class LIB_kfz1_destruct_back_left_wing: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_back_right_door: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_back_right_wing: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_backdoor: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_front_left_door: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_front_left_wing: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_front_right_door: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_front_right_wing: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_stepney: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_wheel: LIB_kfz1_destruct_back_left_door {};
	class LIB_kfz1_destruct_windshield: LIB_kfz1_destruct_back_left_door {};
	class LIB_opelblitz_base: LIB_Truck_base
		nameSound = "veh_truck";
	class LIB_opelblitz_open_y_camo: LIB_opelblitz_base {};
	class LIB_opelblitz_open_g_camo: LIB_opelblitz_open_y_camo {};
	class LIB_opelblitz_tent_y_camo: LIB_opelblitz_open_y_camo {};
	class LIB_opelblitz_fuel: LIB_opelblitz_base
		nameSound = "veh_supportTruck";
	class LIB_opelblitz_ambulance: LIB_opelblitz_base
		nameSound = "veh_supportTruck";
	class LIB_opelblitz_parm: LIB_opelblitz_base
		nameSound = "veh_supportTruck";
	class LIB_opelblitz_ammo: LIB_opelblitz_open_y_camo
		nameSound = "veh_supportTruck";
	class LIB_opelblitz_destruct_left_door: Thing {};
	class LIB_opelblitz_destruct_left_wing: LIB_opelblitz_destruct_left_door {};
	class LIB_opelblitz_destruct_right_door: LIB_opelblitz_destruct_left_door {};
	class LIB_opelblitz_destruct_right_wing: LIB_opelblitz_destruct_left_door {};
	class LIB_opelblitz_destruct_front_wheel: LIB_opelblitz_destruct_left_door {};
	class LIB_opelblitz_destruct_back_wheel: LIB_opelblitz_destruct_left_door {};
	class LIB_opelblitz_destruct_doorzad: LIB_opelblitz_destruct_left_door {};
	class LIB_Scout_M3_base: LIB_Truck_base
		nameSound = "veh_apc";
	class LIB_Scout_M3: LIB_Scout_M3_base {};
	class LIB_Scout_M3_FFV: LIB_Scout_M3_base {};
	class LIB_US_Scout_M3: LIB_Scout_M3_base {};
	class LIB_US_Scout_M3_FFV: LIB_Scout_M3_FFV {};
	class LIB_Scout_m3_destruct_left_wing: Thing {};
	class LIB_Scout_m3_destruct_right_wing: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_wheel_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_wheel_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_shield: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_hood_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_hood_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_door_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_door_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_bumper_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_Scout_m3_destruct_bumper_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_left_wing: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_right_wing: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_wheel_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_wheel_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_shield: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_hood_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_hood_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_door_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_door_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_bumper_1: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_Scout_m3_destruct_bumper_2: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_m3a1_destruct_left_wing: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US_m3a1_destruct_right_wing: LIB_Scout_m3_destruct_left_wing {};
	class LIB_US6_base: LIB_Truck_base
		nameSound = "veh_truck";
	class LIB_US6_Unarmed_base: LIB_US6_base {};
	class LIB_US6_Open: LIB_US6_Unarmed_base {};
	class LIB_US6_Tent: LIB_US6_Unarmed_base {};
	class LIB_US6_Tent_Cargo: LIB_US6_Unarmed_base {};
	class LIB_US6_Open_Cargo: LIB_US6_Tent_Cargo {};
	class LIB_US6_Ammo: LIB_US6_Open_Cargo
		nameSound = "veh_supportTruck";
	class LIB_US6_BM13: LIB_US6_base
	class LIB_US_GMC_Open: LIB_US6_Open {};
	class LIB_US_GMC_Tent: LIB_US6_Tent {};
	class LIB_US_GMC_Ammo: LIB_US6_Ammo {};
	class LIB_US_GMC_Ambulance: LIB_US6_Tent {};
	class LIB_US_GMC_Parm: LIB_US6_Tent {};
	class LIB_US_GMC_Fuel: LIB_US6_Tent {};
	class LIB_us6_destruct_left_door_b: Thing {};
	class LIB_us6_destruct_left_door_g: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_left_wing_b: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_left_wing_g: LIB_us6_destruct_left_wing_b {};
	class LIB_us6_destruct_right_door_b: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_right_door_g: LIB_us6_destruct_right_door_b {};
	class LIB_us6_destruct_right_wing_b: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_right_wing_g: LIB_us6_destruct_right_wing_b {};
	class LIB_us6_destruct_front_wheel: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_back_wheel: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_doorzad_b: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_doorzad_g: LIB_us6_destruct_doorzad_b {};
	class LIB_us6_destruct_rear_left_wing_g: LIB_us6_destruct_left_door_b {};
	class LIB_us6_destruct_rear_right_wing_g: LIB_us6_destruct_left_door_b {};
	class LIB_gmc353_destruct_left_wing: Thing {};
	class LIB_gmc353_destruct_right_wing: LIB_gmc353_destruct_left_wing {};
	class LIB_gmc353_destruct_front_wheel: LIB_gmc353_destruct_left_wing {};
	class LIB_gmc353_destruct_rear_wheel: LIB_gmc353_destruct_left_wing {};
	class LIB_gmc353_destruct_back_bort: LIB_gmc353_destruct_left_wing {};
	class LIB_Willys_MB_base: LIB_Car_base
	class LIB_Willys_MB: LIB_Willys_MB_base {};
	class LIB_US_Willys_MB: LIB_Willys_MB_base {};
	class LIB_willys_mb_destruct_left_wing: Thing {};
	class LIB_willys_mb_destruct_right_wing: LIB_willys_mb_destruct_left_wing {};
	class LIB_willys_mb_destruct_wheel: LIB_willys_mb_destruct_left_wing {};
	class LIB_willys_mb_destruct_shield: LIB_willys_mb_destruct_left_wing {};
	class LIB_willys_mb_destruct_canister: LIB_willys_mb_destruct_left_wing {};
	class LIB_zis5v_base: LIB_Truck_base
		nameSound = "veh_truck";
	class LIB_zis5v: LIB_zis5v_base {};
	class LIB_zis5v_med: LIB_zis5v_base
		nameSound = "veh_supportTruck";
	class LIB_zis6_parm: LIB_zis5v_base
		nameSound = "veh_supportTruck";
	class LIB_zis5v_fuel: LIB_zis5v_base
		nameSound = "veh_supportTruck";
	class LIB_zis5v_destruct_left_door: Thing {};
	class LIB_zis5v_destruct_left_wing: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_right_door: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_right_wing: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_front_wheel: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_back_wheel: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_hl: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_doorzad: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_rear_left_wing: LIB_zis5v_destruct_left_door {};
	class LIB_zis5v_destruct_rear_right_wing: LIB_zis5v_destruct_left_door {};
	class LIB_zis6_destruct_front_right_wing: LIB_zis5v_destruct_left_door {};
	class LIB_zis6_destruct_front_left_wing: LIB_zis5v_destruct_left_door {};
	class LIB_zis6_destruct_right_door: LIB_zis5v_destruct_left_door {};
	class LIB_zis6_destruct_left_door: LIB_zis5v_destruct_left_door {};
	class LIB_Wheeled_APC_base: Wheeled_APC_F
	class LIB_SdKfz251_base: LIB_Wheeled_APC_base
		nameSound = "veh_apc";
	class LIB_SdKfz251: LIB_SdKfz251_base {};
	class LIB_SdKfz251_FFV: LIB_SdKfz251 {};
	class LIB_SdKfz251_captured: LIB_SdKfz251 {};
	class LIB_SdKfz251_captured_FFV: LIB_SdKfz251_FFV {};
	class LIB_Sdkfz250_destruct_left_door: Thing {};
	class LIB_Sdkfz250_destruct_left_wing: LIB_Sdkfz250_destruct_left_door {};
	class LIB_Sdkfz250_destruct_right_door: LIB_Sdkfz250_destruct_left_door {};
	class LIB_Sdkfz250_destruct_right_wing: LIB_Sdkfz250_destruct_left_door {};
	class LIB_Sdkfz250_destruct_front_wheel: LIB_Sdkfz250_destruct_left_door {};
	class LIB_SdKfz_7_base: LIB_SdKfz251_base {};
	class LIB_SdKfz_7: LIB_SdKfz_7_base {};
	class LIB_SdKfz_7_AA: LIB_SdKfz_7_base {};
	class lib_sdkfz_7_destruct_left_wing: Thing {};
	class lib_sdkfz_7_destruct_right_wing: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_right_side: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_left_side: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_back_side: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_windshield: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_left_hood: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_right_hood: lib_sdkfz_7_destruct_left_wing {};
	class lib_sdkfz_7_destruct_front_wheel: lib_sdkfz_7_destruct_left_wing {};
	class LIB_MinesFunc: LIB_Logic {};
	class LIB_Main_Obj: Fortress1
		nameSound = "mine";
	class LIB_MINE_marker: LIB_Main_Obj {};
	class LIB_Mine_Ammo_Box_Ger: LIB_ReammoBox_base {};
	class LIB_Mine_Ammo_Box_Su: LIB_ReammoBox_base {};
	class LIB_Mine_AmmoBox_US: LIB_ReammoBox_base {};
	class LIB_smi_35_1_geom: LIB_Main_Obj {};
	class LIB_smi_35_geom: LIB_Main_Obj {};
	class LIB_pomzec_geom: LIB_Main_Obj {};
	class LIB_stmi_geom: LIB_Main_Obj {};
	class LIB_shumine42_geom: LIB_Main_Obj {};
	class LIB_MINE_PP_obj: LIB_Main_Obj {};
	class LIB_MINE_TMI42_Field_70x30: LIB_Main_Obj {};
	class LIB_MINE_TM44_Field_70x30: LIB_MINE_TMI42_Field_70x30 {};
	class LIB_MINE_TMI42_Field_30x30: LIB_MINE_TMI42_Field_70x30 {};
	class LIB_MINE_TM44_Field_30x30: LIB_MINE_TM44_Field_70x30 {};
	class LIB_MINE_US_M1A1_ATMINE_Field_30x30: LIB_MINE_TMI42_Field_30x30 {};
	class LIB_MINE_TMI_42_obj: LIB_Main_Obj {};
	class LIB_MINE_TM_44_obj: LIB_Main_Obj {};
	class LIB_MINE_pomzec_obj: LIB_Main_Obj {};
	class LIB_MINE_SMi35_1_obj: LIB_Main_Obj {};
	class LIB_MINE_SMi35_obj: LIB_Main_Obj {};
	class LIB_MINE_StMi_obj: LIB_Main_Obj {};
	class LIB_MINE_shumine42_obj: LIB_Main_Obj {};
	class LIB_MINE_Ladung_Small_obj: LIB_Main_Obj {};
	class LIB_MINE_Ladung_Big_obj: LIB_Main_Obj {};
	class LIB_MINE_Ladung_PM_obj: LIB_Main_Obj {};
	class LIB_MINE_PM_obj: LIB_Main_Obj {};
	class LIB_MINE_M3_obj: LIB_Main_Obj {};
	class LIB_MINE_PMD6_obj: LIB_Main_Obj {};
	class LIB_MINE_TROTIL_obj: LIB_Main_Obj {};
	class LIB_MINE_US_M1A1_ATMINE_obj: LIB_Main_Obj {};
	class LIB_MINE_US_M3_obj: LIB_Main_Obj {};
	class LIB_MINE_US_TNT_4pound_obj: LIB_Main_Obj {};
	class LIB_MINE_US_BM10_PM_obj: LIB_Main_Obj {};
	class LIB_MINE_MARKER_obj: LIB_Main_Obj {};
	class LIB_Mine_base: MineBase {};
	class LIB_PP_MINE: LIB_Mine_base {};
	class LIB_TMI_42_MINE: LIB_Mine_base {};
	class LIB_SMI_35_1_MINE: LIB_Mine_base {};
	class LIB_pomzec_MINE: LIB_Mine_base {};
	class LIB_SMI_35_MINE: LIB_Mine_base {};
	class LIB_STMI_MINE: LIB_Mine_base {};
	class LIB_shumine_42_MINE: LIB_Mine_base {};
	class LIB_Ladung_Small_MINE: LIB_Mine_base {};
	class LIB_Ladung_Big_MINE: LIB_Mine_base {};
	class LIB_Ladung_PM_MINE: LIB_Mine_base {};
	class LIB_M3_MINE: LIB_Mine_base {};
	class LIB_PMD6_MINE: LIB_Mine_base {};
	class LIB_TM44_MINE: LIB_Mine_base {};
	class LIB_PM_MINE: LIB_Mine_base {};
	class LIB_TROTIL_MINE: LIB_Mine_base {};
	class LIB_MARKER_MINE: LIB_Mine_base {};
	class LIB_US_M1A1_ATMINE: LIB_Mine_base {};
	class LIB_US_M3_MINE: LIB_Mine_base {};
	class LIB_US_TNT_4pound: LIB_Mine_base {};
	class LIB_US_BM10_PM: LIB_Mine_base {};
	class LIB_improved_explosions_effects: LIB_Logic {};
	class LIB_ArtyFunc: LIB_Logic {};
	class LIB_fake_car1: Bicycle {};
	class LIB_fake_car2: Car {};
	class LIB_US_rifleman: LIB_US_Soldier_base {};
	class LIB_US_driver: LIB_US_rifleman {};
	class LIB_US_FC_rifleman: LIB_US_rifleman {};
	class LIB_US_corporal: LIB_US_rifleman {};
	class LIB_US_smgunner: LIB_US_Soldier_base {};
	class LIB_US_second_lieutenant: LIB_US_Soldier_base {};
	class LIB_US_first_lieutenant: LIB_US_Soldier_base {};
	class LIB_US_captain: LIB_US_Soldier_base {};
	class LIB_US_sniper: LIB_US_Soldier_base {};
	class LIB_US_mgunner: LIB_US_rifleman {};
	class LIB_US_AT_soldier: LIB_US_mgunner {};
	class LIB_US_engineer: LIB_US_Soldier_base {};
	class LIB_US_medic: LIB_US_Soldier_base {};
	class LIB_US_radioman: LIB_US_rifleman {};
	class LIB_US_grenadier: LIB_US_rifleman {};
	class LIB_US_pilot: LIB_US_Soldier_base {};
	class LIB_US_tank_crew: LIB_US_Soldier_base {};
	class LIB_US_tank_sergeant: LIB_US_tank_crew {};
	class LIB_US_tank_second_lieutenant: LIB_US_tank_crew {};
	class LIB_US_rifleman_ADS: LIB_US_rifleman {};
	class LIB_US_Helmet: Thing {};
	class LIB_US_Tank_Helmet: LIB_US_Helmet {};
	class LIB_US_Pilot_Helmet: LIB_US_Tank_Helmet {};
	class B_LIB_US_Backpack: B_LIB_AssaultPack_Base {};
	class B_LIB_US_Backpack_dday: B_LIB_US_Backpack {};
	class B_LIB_US_Backpack_eng: B_LIB_US_Backpack {};
	class B_LIB_US_MedicBackpack: B_LIB_US_Backpack {};
	class B_LIB_US_MedicBackpack_Empty: B_LIB_US_MedicBackpack {};
	class B_LIB_US_RocketBag: B_LIB_AssaultPack_Base {};
	class B_LIB_US_RocketBag_Empty: B_LIB_US_RocketBag {};
	class B_LIB_US_Radio: B_LIB_AssaultPack_Base {};
	class B_LIB_US_Bandoleer: B_LIB_AssaultPack_Base {};
	class B_LIB_US_MGbag: B_LIB_AssaultPack_Base {};
	class B_LIB_US_MGbag_Empty: B_LIB_US_MGbag {};
	class LNRD_Luftwaffe_base: LIB_GER_soldier_camo_base {};
	class LNRD_Luftwaffe_rifleman: LNRD_Luftwaffe_base {};
	class LNRD_Luftwaffe_flaksoldat: LNRD_Luftwaffe_base {};
	class LNRD_Luftwaffe_ober_rifleman: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_mgunner: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_AT_soldier: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_AT_grenadier: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_stggunner: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_smgunner: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_sniper: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_medic: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_radioman: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_rifleman_ADS: LNRD_Luftwaffe_rifleman {};
	class SG_sturmpanzer_base: LIB_GER_tank_crew_base {};
	class SG_sturmpanzer_crew: SG_sturmpanzer_base {};
	class SG_sturmpanzer_unterofficer: SG_sturmpanzer_base {};
	class SG_sturmpanzer_officer: SG_sturmpanzer_base {};
	class SG_sturmtrooper_base: LIB_GER_soldier_camo_base {};
	class SG_sturmtrooper_rifleman: SG_sturmtrooper_base {};
	class SG_sturmtrooper_ober_rifleman: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_mgunner: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_AT_soldier: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_AT_grenadier: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_stggunner: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_smgunner: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_unterofficer: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_lieutenant: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_sniper: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_medic: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_radioman: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_sapper: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_sapper_gefr: SG_sturmtrooper_rifleman {};
	class SG_sturmtrooper_rifleman_ADS: SG_sturmtrooper_rifleman {};
	class LIB_GER_Soldier_camo_MP40_w: LIB_GER_soldier_camo_MP40 {};
	class LIB_GER_Soldier_camo_MP40_with_grenades_w: LIB_GER_soldier_camo_MP40_with_grenades {};
	class LIB_GER_Soldier_camo_K98_w: LIB_GER_soldier_camo_K98 {};
	class LIB_GER_Soldier_camo_K98_with_grenades_w: LIB_GER_soldier_camo_K98_with_grenades {};
	class LIB_GER_Soldier_MP40_w: LIB_GER_soldier_MP40 {};
	class LIB_GER_Soldier_K98_w: LIB_GER_soldier_K98 {};
	class LIB_GER_Inf_officer_0_w: LIB_GER_inf_officer_0 {};
	class LIB_GER_Inf_officer_1_w: LIB_GER_inf_officer_1 {};
	class LIB_GER_Rifleman_w: LIB_GER_rifleman {};
	class LIB_GER_Recruit_w: LIB_GER_recruit {};
	class LIB_GER_Unequip_w: LIB_GER_unequip {};
	class LIB_GER_Ober_rifleman_w: LIB_GER_ober_rifleman {};
	class LIB_GER_Mgunner_w: LIB_GER_mgunner {};
	class LIB_GER_Stggunner_w: LIB_GER_stggunner {};
	class LIB_GER_AT_soldier_w: LIB_GER_AT_soldier {};
	class LIB_GER_AT_grenadier_w: LIB_GER_AT_grenadier {};
	class LIB_GER_Smgunner_w: LIB_GER_smgunner {};
	class LIB_GER_Unterofficer_w: LIB_GER_unterofficer {};
	class LIB_GER_Lieutenant_w: LIB_GER_lieutenant {};
	class LIB_GER_Ober_lieutenant_w: LIB_GER_ober_lieutenant {};
	class LIB_GER_Hauptmann_w: LIB_GER_hauptmann {};
	class LIB_GER_Oberst_w: LIB_GER_oberst {};
	class LIB_GER_Scout_rifleman_w: LIB_GER_scout_rifleman {};
	class LIB_GER_Scout_ober_rifleman_w: LIB_GER_scout_ober_rifleman {};
	class LIB_GER_Scout_mgunner_w: LIB_GER_scout_mgunner {};
	class LIB_GER_Scout_smgunner_w: LIB_GER_scout_smgunner {};
	class LIB_GER_Scout_unterofficer_w: LIB_GER_scout_unterofficer {};
	class LIB_GER_Scout_lieutenant_w: LIB_GER_scout_lieutenant {};
	class LIB_GER_Scout_sniper_w: LIB_GER_scout_sniper {};
	class LIB_GER_Medic_w: LIB_GER_medic {};
	class LIB_GER_Radioman_w: LIB_GER_radioman {};
	class LIB_GER_Sapper_w: LIB_GER_sapper {};
	class LIB_GER_Sapper_gefr_w: LIB_GER_sapper_gefr {};
	class LIB_GER_Gun_crew_w: LIB_GER_gun_crew {};
	class LIB_GER_Gun_unterofficer_w: LIB_GER_gun_unterofficer {};
	class LIB_GER_Gun_lieutenant_w: LIB_GER_gun_lieutenant {};
	class LIB_GER_Tank_crew_w: LIB_GER_tank_crew {};
	class LIB_GER_Tank_unterofficer_w: LIB_GER_tank_unterofficer {};
	class LIB_GER_Tank_lieutenant_w: LIB_GER_tank_lieutenant {};
	class LIB_GER_Spg_crew_w: LIB_GER_spg_crew {};
	class LIB_GER_Tank_officer_w: LIB_GER_tank_officer {};
	class LIB_GER_Spg_unterofficer_w: LIB_GER_spg_unterofficer {};
	class LIB_GER_Spg_lieutenant_w: LIB_GER_spg_lieutenant {};
	class LIB_GER_Pilot_w: LIB_GER_pilot {};
	class LIB_GER_Rifleman_ADS_w: LIB_GER_rifleman_ADS {};
	class LIB_WP_Strzelec_w: LIB_WP_Strzelec {};
	class LIB_WP_Starszy_strzelec_w: LIB_WP_Starszy_strzelec {};
	class LIB_WP_Mgunner_w: LIB_WP_Mgunner {};
	class LIB_WP_AT_grenadier_w: LIB_WP_AT_grenadier {};
	class LIB_WP_Stggunner_w: LIB_WP_Stggunner {};
	class LIB_WP_Sierzant_w: LIB_WP_Sierzant {};
	class LIB_WP_Porucznic_w: LIB_WP_Porucznic {};
	class LIB_WP_Sniper_w: LIB_WP_Sniper {};
	class LIB_WP_Medic_w: LIB_WP_Medic {};
	class LIB_WP_Radioman_w: LIB_WP_Radioman {};
	class LIB_WP_Saper_w: LIB_WP_Saper {};
	class LIB_WP_Starszy_saper_w: LIB_WP_Starszy_saper {};
	class LIB_WP_Strzelec_ADS_w: LIB_WP_Strzelec_ADS {};
	class LIB_SOV_Soldier_PPSH41_w: LIB_sov_soldier_PPSH41 {};
	class LIB_SOV_Soldier_mosin_rifle_0_w: LIB_sov_soldier_mosin_rifle_0 {};
	class LIB_SOV_Sergeant_PPSH41_0_w: LIB_sov_sergeant_PPSH41_0 {};
	class LIB_SOV_Lieutenant_PPSH41_w: LIB_sov_lieutenant_PPSH41 {};
	class LIB_SOV_Rifleman_w: LIB_SOV_rifleman {};
	class LIB_SOV_Unequip_w: LIB_SOV_unequip {};
	class LIB_SOV_Smgunner_w: LIB_SOV_smgunner {};
	class LIB_SOV_LC_rifleman_w: LIB_SOV_LC_rifleman {};
	class LIB_SOV_Mgunner_w: LIB_SOV_mgunner {};
	class LIB_SOV_Medic_w: LIB_SOV_medic {};
	class LIB_SOV_AT_soldier_w: LIB_SOV_AT_soldier {};
	class LIB_SOV_AT_grenadier_w: LIB_SOV_AT_grenadier {};
	class LIB_SOV_Staff_sergeant_w: LIB_SOV_staff_sergeant {};
	class LIB_SOV_Sergeant_w: LIB_SOV_sergeant {};
	class LIB_SOV_P_officer_w: LIB_SOV_p_officer {};
	class LIB_SOV_Lieutenant_w: LIB_SOV_lieutenant {};
	class LIB_SOV_First_lieutenant_w: LIB_SOV_first_lieutenant {};
	class LIB_SOV_Captain_w: LIB_SOV_captain {};
	class LIB_SOV_Scout_rifleman_w: LIB_SOV_scout_rifleman {};
	class LIB_SOV_Scout_smgunner_w: LIB_SOV_scout_smgunner {};
	class LIB_SOV_Scout_mgunner_w: LIB_SOV_scout_mgunner {};
	class LIB_SOV_Scout_sergeant_w: LIB_SOV_scout_sergeant {};
	class LIB_SOV_Scout_p_officer_w: LIB_SOV_scout_p_officer {};
	class LIB_SOV_Scout_lieutenant_w: LIB_SOV_scout_lieutenant {};
	class LIB_SOV_Scout_sniper_w: LIB_SOV_scout_sniper {};
	class LIB_SOV_Operator_w: LIB_SOV_operator {};
	class LIB_SOV_Sapper_w: LIB_SOV_sapper {};
	class LIB_SOV_Assault_smgunner_w: LIB_SOV_assault_smgunner {};
	class LIB_SOV_Assault_mgunner_w: LIB_SOV_assault_mgunner {};
	class LIB_SOV_Assault_sergeant_w: LIB_SOV_assault_sergeant {};
	class LIB_SOV_Tank_crew_w: LIB_SOV_tank_crew {};
	class LIB_SOV_Tank_sergeant_w: LIB_SOV_tank_sergeant {};
	class LIB_SOV_Tank_crew_lieutenant_w: LIB_sov_tank_crew_lieutenant {};
	class LIB_SOV_Tank_lieutenant_w: LIB_SOV_tank_lieutenant {};
	class LIB_SOV_Tank_captain_w: LIB_SOV_tank_captain {};
	class LIB_SOV_Tank_overall_crew_w: LIB_SOV_tank_overall_crew {};
	class LIB_SOV_Tank_overall_sergeant_w: LIB_SOV_tank_overall_sergeant {};
	class LIB_SOV_Tank_overall_lieutenant_w: LIB_SOV_tank_overall_lieutenant {};
	class LIB_SOV_Tank_overall_captain_w: LIB_SOV_tank_overall_captain {};
	class LIB_SOV_Gun_crew_w: LIB_SOV_gun_crew {};
	class LIB_SOV_Gun_sergeant_w: LIB_SOV_gun_sergeant {};
	class LIB_SOV_Gun_lieutenant_w: LIB_SOV_gun_lieutenant {};
	class LIB_SOV_Pilot_w: LIB_SOV_pilot {};
	class LIB_SOV_Rifleman_ADS_w: LIB_SOV_rifleman_ADS {};
	class LIB_US_Rifleman_w: LIB_US_rifleman {};
	class LIB_US_Driver_w: LIB_US_driver {};
	class LIB_US_FC_rifleman_w: LIB_US_FC_rifleman {};
	class LIB_US_Corporal_w: LIB_US_corporal {};
	class LIB_US_Smgunner_w: LIB_US_smgunner {};
	class LIB_US_Second_lieutenant_w: LIB_US_second_lieutenant {};
	class LIB_US_First_lieutenant_w: LIB_US_first_lieutenant {};
	class LIB_US_Captain_w: LIB_US_captain {};
	class LIB_US_Sniper_w: LIB_US_sniper {};
	class LIB_US_Mgunner_w: LIB_US_mgunner {};
	class LIB_US_AT_soldier_w: LIB_US_AT_soldier {};
	class LIB_US_Engineer_w: LIB_US_engineer {};
	class LIB_US_Medic_w: LIB_US_medic {};
	class LIB_US_Radioman_w: LIB_US_radioman {};
	class LIB_US_Grenadier_w: LIB_US_grenadier {};
	class LIB_US_Pilot_w: LIB_US_pilot {};
	class LIB_US_Tank_crew_w: LIB_US_tank_crew {};
	class LIB_US_Tank_sergeant_w: LIB_US_tank_sergeant {};
	class LIB_US_Tank_second_lieutenant_w: LIB_US_tank_second_lieutenant {};
	class LIB_US_Rifleman_ADS_w: LIB_US_rifleman_ADS {};
	class LNRD_Luftwaffe_Rifleman_w: LNRD_Luftwaffe_rifleman {};
	class LNRD_Luftwaffe_Flaksoldat_w: LNRD_Luftwaffe_flaksoldat {};
	class LNRD_Luftwaffe_Ober_rifleman_w: LNRD_Luftwaffe_ober_rifleman {};
	class LNRD_Luftwaffe_Mgunner_w: LNRD_Luftwaffe_mgunner {};
	class LNRD_Luftwaffe_AT_soldier_w: LNRD_Luftwaffe_AT_soldier {};
	class LNRD_Luftwaffe_AT_grenadier_w: LNRD_Luftwaffe_AT_grenadier {};
	class LNRD_Luftwaffe_Stggunner_w: LNRD_Luftwaffe_stggunner {};
	class LNRD_Luftwaffe_Smgunner_w: LNRD_Luftwaffe_smgunner {};
	class LNRD_Luftwaffe_Sniper_w: LNRD_Luftwaffe_sniper {};
	class LNRD_Luftwaffe_Medic_w: LNRD_Luftwaffe_medic {};
	class LNRD_Luftwaffe_Radioman_w: LNRD_Luftwaffe_radioman {};
	class LNRD_Luftwaffe_Rifleman_ADS_w: LNRD_Luftwaffe_rifleman_ADS {};
	class SG_Sturmpanzer_Crew_w: SG_sturmpanzer_crew {};
	class SG_Sturmpanzer_Unterofficer_w: SG_sturmpanzer_unterofficer {};
	class SG_Sturmpanzer_Officer_w: SG_sturmpanzer_officer {};
	class SG_Sturmtrooper_Rifleman_w: SG_sturmtrooper_rifleman {};
	class SG_Sturmtrooper_Ober_rifleman_w: SG_sturmtrooper_ober_rifleman {};
	class SG_Sturmtrooper_Mgunner_w: SG_sturmtrooper_mgunner {};
	class SG_Sturmtrooper_AT_soldier_w: SG_sturmtrooper_AT_soldier {};
	class SG_Sturmtrooper_AT_grenadier_w: SG_sturmtrooper_AT_grenadier {};
	class SG_Sturmtrooper_Stggunner_w: SG_sturmtrooper_stggunner {};
	class SG_Sturmtrooper_Smgunner_w: SG_sturmtrooper_smgunner {};
	class SG_Sturmtrooper_Unterofficer_w: SG_sturmtrooper_unterofficer {};
	class SG_Sturmtrooper_Lieutenant_w: SG_sturmtrooper_lieutenant {};
	class SG_Sturmtrooper_Sniper_w: SG_sturmtrooper_sniper {};
	class SG_Sturmtrooper_Medic_w: SG_sturmtrooper_medic {};
	class SG_Sturmtrooper_Radioman_w: SG_sturmtrooper_radioman {};
	class SG_Sturmtrooper_Sapper_w: SG_sturmtrooper_sapper {};
	class SG_Sturmtrooper_Sapper_gefr_w: SG_sturmtrooper_sapper_gefr {};
	class SG_Sturmtrooper_Rifleman_ADS_w: SG_sturmtrooper_rifleman_ADS {};
	class LIB_Li2: LIB_SU_Plane_base
	class LIB_Li2_MRWreck: LIB_PlaneWreck_base {};
	class LIB_P47: LIB_US_Plane_base
		nameSound = "veh_attackAirplane";
	class LIB_P47_MRWreck: LIB_PlaneWreck_base {};
	class LIB_Zis3: LIB_Zis3_base {};
	class LIB_Zis_3_destruct_gun: Thing {};
	class LIB_Zis_3_destruct_chassis: Thing {};
	class LIB_Zis_3_destruct_turret: LIB_Zis_3_destruct_chassis {};
	class LIB_Zis_3_destruct_LStand: LIB_Zis_3_destruct_chassis {};
	class LIB_Zis_3_destruct_RStand: LIB_Zis_3_destruct_chassis {};
	class LIB_Zis_3_destruct_wheel: LIB_Zis_3_destruct_chassis {};
	class LIB_Zis_3_destruct_shield: LIB_Zis_3_destruct_chassis {};
	class LIB_M4A3_75: LIB_Tank_base
	class LIB_M4A3_75_Tubes: LIB_M4A3_75 {};
	class LIB_M4A2_SOV: LIB_M4A3_75
	class LIB_M4A3_75_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_M4A2_SOV_Destruct_Tower: LIB_M4A3_75_Destruct_Tower {};
	class LIB_M4A3_75_destruct_chassis_1: Thing {};
	class LIB_M4A3_75_destruct_chassis_2: LIB_M4A3_75_destruct_chassis_1 {};
	class LIB_M4A3_75_destruct_chassis_3: LIB_M4A3_75_destruct_chassis_1 {};
	class LIB_M4A3_75_destruct_chassis_4: LIB_M4A3_75_destruct_chassis_1 {};
	class LIB_M4A3_75_back_motor_tube: LIB_M4A3_75_destruct_chassis_1 {};
	class LIB_M4A3_75_top_motor_tube: LIB_M4A3_75_back_motor_tube {};
	class LIB_M4A2_SOV_destruct_chassis_1: LIB_M4A3_75_destruct_chassis_1 {};
	class LIB_M4A2_SOV_destruct_chassis_2: LIB_M4A2_SOV_destruct_chassis_1 {};
	class LIB_M4A2_SOV_destruct_chassis_3: LIB_M4A2_SOV_destruct_chassis_1 {};
	class LIB_M4A2_SOV_destruct_chassis_4: LIB_M4A2_SOV_destruct_chassis_1 {};
	class LIB_SU85: LIB_Tank_base
	class LIB_SU85_Destruct_Tower: LIB_Tank_Destruct_Tower_base {};
	class LIB_SU85_destruct_chassis_1: Thing {};
	class LIB_SU85_destruct_chassis_2: LIB_SU85_destruct_chassis_1 {};
	class LIB_SU85_destruct_chassis_3: LIB_SU85_destruct_chassis_1 {};
	class LIB_US_M3_Halftrack: LIB_SdKfz251_base {};
	class LIB_SOV_M3_Halftrack: LIB_US_M3_Halftrack {};
	class B_LIB_GER_Radio_ACRE2: B_LIB_GER_Radio {};
	class B_LIB_SOV_RA_Radio_ACRE2: B_LIB_SOV_RA_Radio {};
	class B_LIB_US_Radio_ACRE2: B_LIB_US_Radio {};
	class LIB_61k: LIB_61k_base {};
	class LIB_61k_destruct_gun: Thing {};
	class LIB_61k_destruct_chassis: Thing {};
	class LIB_61k_destruct_turret: LIB_61k_destruct_chassis {};
	class LIB_61k_destruct_LStop: LIB_61k_destruct_chassis {};
	class LIB_61k_destruct_RStop: LIB_61k_destruct_chassis {};
	class LIB_61k_destruct_wheel: LIB_61k_destruct_chassis {};
	class LIB_61k_destruct_weapon_holder: LIB_61k_destruct_chassis {};
	class LIB_Pak40: LIB_Pak40_base {};
	class LIB_Pak40_g: LIB_Pak40 {};
	class LIB_Pak40_destruct_gun: Thing {};
	class LIB_Pak40_destruct_chassis: Thing {};
	class LIB_Pak40_destruct_turret: LIB_Pak40_destruct_chassis {};
	class LIB_Pak40_destruct_LStand: LIB_Pak40_destruct_chassis {};
	class LIB_Pak40_destruct_RStand: LIB_Pak40_destruct_chassis {};
	class LIB_Pak40_destruct_wheel: LIB_Pak40_destruct_chassis {};
	class LIB_Pak40_destruct_shield: LIB_Pak40_destruct_chassis {};
