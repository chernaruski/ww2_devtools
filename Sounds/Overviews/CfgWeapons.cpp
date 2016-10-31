/*
	sound[] =
	soundBegin[] =
	soundBeginWater[] =
	soundBurst =
	soundClosure[] =
	soundContinuous =
	soundEnd[] =
	soundLoop[] =
	sounds[] =
	weaponSoundEffect =
		bullet1[] =
		bullet10[] =
		bullet11[] =
		bullet12[] =
		bullet2[] =
		bullet3[] =
		bullet4[] =
		bullet5[] =
		bullet6[] =
		bullet7[] =
		bullet8[] =
		bullet9[] =
		changeFiremodeSound[] =
		drySound[] =
		lockedTargetSound[] =
		lockingTargetSound[] =
		reloadMagazineSound[] =
		reloadSound[] =
		sound[] =
		soundBegin[] =
		soundBeginWater[] =
		soundBipodDeploy[] =
		soundBipodDown[] =
		soundBipodFold[] =
		soundBipodUp[] =
		soundBullet[] =
		soundBurst =
		soundClosure[] =
		soundContinuous =
		soundEnd[] =
		soundFly[] =
		soundLoop[] =
		sounds[] =
		soundServo[] =
		weaponSoundEffect =
			begin1[] =
			begin2[] =
			begin3[] =
			changeFiremodeSound[] =
			closure1[] =
			closure2[] =
			drySound[] =
			lockedTargetSound[] =
			lockingTargetSound[] =
			reloadMagazineSound[] =
			reloadSound[] =
			sound[] =
			soundBegin[] =
			soundBipodDown[] =
			soundBipodUp[] =
			soundBurst =
			soundClosure[] =
			soundContinuous =
			soundFly[] =
			sounds[] =
			soundServo[] =
			SoundSetShot[] =
			soundsetshot[] =
			soundSetShot[] =
			weaponSoundEffect =
				begin1[] =
				begin2[] =
				begin3[] =
				beginwater1[] =
				beginwater2[] =
				beginwater3[] =
				closure1[] =
				closure2[] =
				closure3[] =
				closure4[] =
				drySound[] =
				reloadMagazineSound[] =
				soundBegin[] =
				soundBeginWater[] =
				soundClosure[] =
				sounds[] =
				soundSet =
				soundSetShot[] =
				SoundSetShot[] =
				soundsetshot[] =
				weaponSoundEffect =
					begin1[] =
					begin2[] =
					begin3[] =
					frequency =
					sound[] =
					soundBegin[] =
					soundSetShot[] =
					soundsetshot[] =
					volume =
						frequency =
						sound[] =
						volume =

*/
class Mode_SemiAuto
{
	sound[] = {"",10,1};
	soundBegin[] = {"sound",1};
	soundBeginWater[] = {"sound",1};
	soundClosure[] = {"sound",1};
	soundEnd[] = {};
	soundLoop[] = {};
	soundContinuous = 0;
	weaponSoundEffect = "";
	sounds[] = {"StandardSound","SilencedSound"};
	soundBurst = 0;
};
class Mode_Burst: Mode_SemiAuto
{
	sound[] = {"",10,1};
	soundLoop[] = {"sound",1};
	soundEnd[] = {"sound",1};
	soundBurst = 0;
};
class Mode_FullAuto: Mode_SemiAuto
{
	sound[] = {"",10,1};
	soundEnd[] = {"sound",1};
	soundContinuous = 0;
	soundBurst = 0;
};
class CfgWeapons
{
	class Default
	{
		sound[] = {"",1,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {"sound",1};
		soundLoop[] = {"sound",1};
		soundContinuous = 0;
		weaponSoundEffect = "";
		soundBurst = 1;
		drySound[] = {"",1,1};
		reloadSound[] = {"",1,1};
		changeFiremodeSound[] = {"",1,1};
		reloadMagazineSound[] = {"",1,1};
		emptySound[] = {"",1,1};
		soundBullet[] = {"emptySound",1};
		lockingTargetSound[] = {"",0.000316228,2};
		lockedTargetSound[] = {"",0.000316228,6};
	};
	class PistolCore: Default {};
	class RifleCore: Default {};
	class MGunCore: Default {};
	class LauncherCore: Default {};
	class GrenadeCore: Default {};
	class CannonCore: Default {};
	class FakeWeapon: MGunCore
	{
		sound[] = {};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"",0.000316228,1};
			soundBegin[] = {"begin1",1};
			closure1[] = {"",1,1,10};
			closure2[] = {"",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
	};
	class DetectorCore: Default {};
	class RocketPods: LauncherCore {};
	class MGun: MGunCore
	{
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10,1,20};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",1.58489,1,2100};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",1.58489,1,2100};
			begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",1.58489,1,2100};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"};
		};
		soundContinuous = 0;
	};
	class M2: MGun {};

	class LMG_RCWS: MGun
	{
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.562341,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.562341,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_02",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_03",1,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				soundsetshot[] = {"LMG65mmTurret_Shot_SoundSet","LMG65mmTurret_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class LMG_65mm_body: LMG_RCWS
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.562341,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.562341,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				soundsetshot[] = {"LMG65mmBody_Shot_SoundSet","LMG65mmBody_Tail_SoundSet"};
			};
		};
	};
	class LMG_M200: LMG_RCWS {};
	class LMG_M200_body: LMG_M200
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.562341,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.562341,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				soundsetshot[] = {"LMG65mmBody_Shot_SoundSet","LMG65mmBody_Tail_SoundSet"};
			};
		};
	};
	class LMG_Minigun: LMG_RCWS
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_01",1,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_02",1,1.1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_03",1,0.9,2000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.316228,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundsetshot[] = {"LMGMinigun65mm_Shot_SoundSet","LMGMinigun65mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
		};
		class close: manual
		{
			soundBurst = 0;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry.wav",1,1,10};
	};
	class LMG_Minigun_heli: LMG_Minigun
	{
		class manual: manual
		{
			soundContinuous = 0;
		};
		class close: manual
		{
			soundBurst = 0;
		};
	};
	class LMG_coax: LMG_RCWS
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.562341,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.562341,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_01",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_02",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_03",1,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				soundsetshot[] = {"LMGCoax762mm_Shot_SoundSet","LMGCoax762mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class MMG_02_vehicle: LMG_RCWS
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_dry",0.316228,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_reload",1,1,10};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_01",0.446684,1,10};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_02",0.446684,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_01",1.25893,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_02",1.25893,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_03",1.25893,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"MMG_SPMG_shot_SoundSet","MMG_SPMG_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_01",1,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_02",1,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_03",1,1,300};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_interior",1,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class HMG_127: LMG_RCWS
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01",1.58489,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02",1.58489,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03",1.58489,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.630957,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.630957,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundsetshot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_dry",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_reload",1,1,10};
	};
	class HMG_127_APC: HMG_127 {};
	class HMG_127_UGV: HMG_127 {};
	class HMG_01: HMG_127
	{
		class close: manual
		{
			soundBurst = 0;
		};
	};
	class HMG_static: HMG_01
	{
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_01",1.77828,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_02",1.77828,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_03",1.77828,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.630957,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.630957,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundsetshot[] = {"HMG127mm_static_shot_SoundSet","HMG127mm_static_tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_dry",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_reload",1,1,10};
	};
	class HMG_M2: HMG_01
	{
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
				reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_reload",1,1,10};
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
	};
	class HMG_NSVT: HMG_127 {};

	class SmokeLauncher: MGun
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.562341,1,200};
			begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.562341,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			class SoundTails
			{
				class TailInterior
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_interior",2.23872,1,200};
					frequency = 1;
					volume = "interior";
				};
				class TailTrees
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_trees",1,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_forest",1,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailMeadows
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_meadows",1,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_houses",1,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
			};
		};
	};
	class FlareLauncher: SmokeLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\sounds_f\weapons\Flare_Gun\flaregun_1",0.562341,1,200};
			soundBegin[] = {"begin1",1};
		};
	};
	class CMFlareLauncher: SmokeLauncher
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
		};
		class AIBurst: Burst
		{
			soundBurst = 0;
		};
	};

	class M134_minigun: MGunCore
	{
		class LowROF: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.98107,1,1300,{2,36879}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
		};
		class HighROF: LowROF
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",2.51189,1,1500,{2,36879}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
		};
		class close: HighROF
		{
			soundBurst = 0;
		};
		class medium: LowROF
		{
			soundBurst = 0;
		};
	};

	class mortar_82mm: CannonCore
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
		soundServo[] = {"",0.0001,1};
		class Single1: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			soundServo[] = {"",0.0001,1};
		};
		class Burst1: Mode_Burst
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			soundServo[] = {"",0.0001,1};
			soundBurst = 0;
		};
	};
	class mortar_155mm_AMOS: CannonCore
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
			soundBegin[] = {"begin1",1};
			SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
		};
		reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.6228,1,15};
		class Single1: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
		};
		class Burst1: Mode_Burst
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			soundBurst = 0;
		};
	};

	class MissileLauncher: LauncherCore {};

	class missiles_ASRAAM: MissileLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			soundsetshot[] = {"RocketsHeavy_Shot_SoundSet"};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	class missiles_titan: MissileLauncher
	{
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",0.891251,1,10};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.41254,1,1100};
			soundBegin[] = {"begin1",1};
			soundSetShot[] = {"Static_Launcher_Titan_ATAA_Shot_SoundSet","Static_Launcher_Titan_ATAA_Tail_SoundSet"};
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1,1.1,700};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",0.562341,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",0.562341,2.5};
	};
	class missiles_Zephyr: MissileLauncher
	{
		sounds[] = {"StandardSound"};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.51189,1,1100};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.562341,1.1,700};
	};
	class Missile_AGM_02_Plane_CAS_01_F: MissileLauncher
	{
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.77828,1,3500};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.99526,1,1700};
	};

	class missiles_DAGR: RocketPods
	{
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
		class Far_AI: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.77828,1.2,1600};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"RocketsLight_Shot_SoundSet"};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.2,700};
		};
		class Burst: RocketPods
		{
			soundContinuous = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.77828,1.2,1600};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"RocketsLight_Shot_SoundSet"};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.77828,1.2,700};
		};
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.2,700};
	};
	class missiles_DAR: RocketPods
	{
		class Far_AI: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"RocketsLight_Shot_SoundSet"};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.12202,1.2,700};
		};
		class Burst: RocketPods
		{
			soundContinuous = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"RocketsLight_Shot_SoundSet"};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.77828,1.2,700};
		};
	};
	class missiles_SCALPEL: RocketPods
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	class rockets_Skyfire: RocketPods
	{
		class Far_AI: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1,1100};
				soundBegin[] = {"begin1",1};
				soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		};
		class Burst: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1,1100};
				soundBegin[] = {"begin1",1};
				soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.9,700};
			soundContinuous = 0;
		};
	};
	class rockets_230mm_GAT: RocketPods
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.77828,1,1500};
			soundBegin[] = {"begin1",1};
		};
		class Close: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.77828,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundBurst = 0;
		};
	};
	class Missile_AA_04_Plane_CAS_01_F: RocketPods
	{
		lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3",1,1,2000};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.77828,1,1500};
	};
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	{
		class Far_AI: RocketPods
		{
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_2",1.99526,1,3500};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.99526,1,1700};
		};
		class Burst: RocketPods
		{
			soundContinuous = 0;
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.562341,1.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.58489,1.2,1700};
		};
	};

	class GBU12BombLauncher: RocketPods {};
	class Mk82BombLauncher: RocketPods {};

	class GMG_F: MGun {};
	class GMG_20mm: GMG_F
	{
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_reload",1,1,10};
		class manual: GMG_F
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.12202,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.12202,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.12202,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				soundSetShot[] = {"GMG20mm_Shot_SoundSet","GMG20mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_dry",1,1,10};
	};
	class GMG_40mm: GMG_F
	{
		class manual: GMG_F
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.12202,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.12202,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.12202,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				soundSetShot[] = {"GMG40mm_Shot_SoundSet","GMG40mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};

	class Laserdesignator_mounted: Default {};

	class autocannon_Base_F: CannonCore
	{
		sound[] = {"A3\sounds_f\dummysound",2.51189,1,1800};
		soundContinuous = 0;
		class player: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.99526,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.99526,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.99526,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
			};
			soundContinuous = 0;
		};
	};
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundsetshot[] = {"Autocannon40mm_Shot_SoundSet","Autocannon40mm_Tail_SoundSet"};
				};
			};
		};
		class AP: autocannon_Base_F
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundsetshot[] = {"Autocannon40mm_Shot_SoundSet","Autocannon40mm_Tail_SoundSet"};
				};
			};
		};
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class close: close
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class short: short
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class medium: medium
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class far: far
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
		};
		class AP: autocannon_Base_F
		{
			class player: player
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class close: close
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class short: short
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class medium: medium
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
			class far: far
			{
				class StandardSound
				{
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
				};
			};
		};
	};
	class autocannon_30mm: autocannon_30mm_CTWS
	{
		class HE: HE
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class close: close
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class short: short
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class medium: medium
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class far: far
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
		};
		class AP: AP
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class close: close
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class short: short
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class medium: medium
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
			class far: far
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
		};
	};
	class autocannon_35mm: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_01",1.77828,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_02",1.77828,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_03",1.77828,1,2000};
				soundBegin[] = {"begin1",33,"begin2",33,"begin3",33};
				soundsetshot[] = {"Autocannon35mm_Shot_SoundSet","Autocannon35mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 1;
		};
		class short: close
		{
			soundBurst = 0;
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.62341,1,1500,{25704,32159}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_epc\weapons\cas_02_cannon",1.77828,1,3800};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
		};
	};

	class gatling_20mm: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst",3.98107,1,1300,{2,35740}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			soundBurst = 0;
		};
	};
	class gatling_25mm: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
		};
	};
	class gatling_30mm: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",5.62341,1,1500,{2,45447}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
		};
	};

	class SEARCHLIGHT: MGun {};

	class cannon_120mm: CannonCore
	{
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",3.16228,1,50};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.16228,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon120mm_Shot_SoundSet","Cannon120mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
		};
	};
	class cannon_125mm: CannonCore
	{
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",2.23872,1,50};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\varsuk_125mm_distant",3.16228,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon125mm_Shot_SoundSet","Cannon125mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
		};
	};
	class cannon_105mm: CannonCore
	{
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",3.16228,1,50};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.16228,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
			};
			soundContinuous = 0;
		};
	};


	class Launcher: LauncherCore {};
	class Launcher_Base_F: Launcher
	{
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1,1,800};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.316228,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,20};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};
	};

	class GrenadeLauncher: Default {};
	class UGL_F: GrenadeLauncher
	{
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.316228,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.562341,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.562341,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
		};
	};

	class Rifle: RifleCore
	{
		soundContinuous = 0;
		sound[] = {};
	};
	class Rifle_Base_F: Rifle {};
	class Rifle_Short_Base_F: Rifle_Base_F {};
	class Rifle_Long_Base_F: Rifle_Base_F {};
	class Pistol: PistolCore
	{
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class Pistol_Base_F: Pistol
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.562341,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.562341,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.562341,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.562341,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.562341,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.562341,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.562341,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.562341,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.562341,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.562341,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.562341,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.562341,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};

	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
			sound[] = {"",0.000316228,1};
			reloadSound[] = {"",0.000316228,1};
		};
	};
	class Put: Default
	{
		class PutMuzzle: Default
		{
			sound[] = {"",0.000316228,1};
			reloadSound[] = {"",0.000316228,1};
		};
	};

	class CarHorn: Default
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1,1,200};
		sounds[] = {"StandardSound"};
	};
	class BikeHorn: CarHorn
	{
		drySound[] = {"",1,1,200};
	};
	class TruckHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1,1,200};
	};
	class TruckHorn2: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1,1,250};
	};
	class TruckHorn3: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1,1,300};
	};
	class SportCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1,1,150};
	};
	class MiniCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1,1,100};
	};
	class FakeHorn: CarHorn {};

	class MineDetector: DetectorCore {};

	class Binocular: Default
	{
		sound[] = {"",0,1};
	};
	class Rangefinder: Binocular {};
	class NVGoggles: Binocular {};
	class NVGoggles_OPFOR: NVGoggles {};
	class NVGoggles_INDEP: NVGoggles {};
	class Integrated_NVG_F: NVGoggles {};
	class Integrated_NVG_TI_0_F: NVGoggles {};
	class Integrated_NVG_TI_1_F: NVGoggles {};
	class Laserdesignator: Binocular {};

	class launch_NLAW_F: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.99526,1,1800};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet","Launcher_NLAW_Tail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.177828,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.562341,1.5,700};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",0.316228,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",0.316228,2.5};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.562341,1,20};
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"Launcher_RPG32_Shot_SoundSet","Launcher_RPG32_Tail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
	};
	class launch_Titan_base: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",3.16228,1,2000};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"Launcher_Titan_Shot_SoundSet","Launcher_Titan_Tail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",0.158489,1,18};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",1,1,20};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",0.630957,1.5,300};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",0.316228,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",0.316228,2.5};
	};
	class launch_Titan_short_base: launch_Titan_base {};
	class launch_Titan_F: launch_Titan_base {};
	class launch_Titan_short_F: launch_Titan_short_base {};
	class launch_RPG7_F: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"Launcher_RPG7_Shot_SoundSet","Launcher_RPG7_Tail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
	};

	class DMR_01_base_F: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",0.251189,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",0.316228,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_01",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_02",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_03",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.99526,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"DMR01_Shot_SoundSet","DMR01_Tail_SoundSet","DMR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"DMR01_silencerShot_SoundSet","DMR01_silencerTail_SoundSet","DMR01_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_01",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_02",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_03",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"DMR01_Shot_SoundSet","DMR01_Tail_SoundSet","DMR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"DMR01_silencerShot_SoundSet","DMR01_silencerTail_SoundSet","DMR01_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_dry",0.630957,1,30};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_firemode",0.251189,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_reload",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.562341,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.562341,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.58489,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundSetShot[] = {"Mk18_Shot_SoundSet","Mk18_tail_SoundSet","Mk18_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.562341,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.562341,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.58489,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundSetShot[] = {"Mk18_Shot_SoundSet","Mk18_tail_SoundSet","Mk18_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1.99526,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.794328,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.794328,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.794328,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.794328,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",0.562341,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload",1,1,10};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.707946,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.707946,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		class Single: Mode_SemiAuto
		{
			soundContinuous = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",0.398107,1,40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",0.398107,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_01",7.94328,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_02",7.94328,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.99526,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundSetShot[] = {"GM6Lynx_Shot_SoundSet","GM6Lynx_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
			};
		};
	};
	class srifle_GM6_F: GM6_base_F
	{
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.891251,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.891251,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.891251,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.891251,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",0.501187,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",1,1,10};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.707946,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.707946,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		class Single: Mode_SemiAuto
		{
			soundContinuous = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.99526,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
			};
		};
	};
	class srifle_LRR_F: LRR_base_F
	{
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",0.446684,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Reload_Mk200",1,1,10};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.251189,1,10};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.251189,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_01",1.77828,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_02",1.77828,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_03",1.77828,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.891251,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.891251,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.891251,1,200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Mk200_silencerShot_SoundSet","Mk200_silencerTail_SoundSet","Mk200_silencerInteriorTail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.794328,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.794328,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.794328,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.794328,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.794328,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.794328,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.794328,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.794328,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\dry_Zafir",0.446684,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\reload_zafir",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\firemode_Zafir",0.251189,1,5};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.707946,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.707946,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_01",1.77828,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_02",1.77828,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_03",1.77828,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
				soundSetShot[] = {"Zafir_Shot_SoundSet","Zafir_Tail_SoundSet","Zafir_InteriorTail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_01",1.77828,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_02",1.77828,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_03",1.77828,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
				soundSetShot[] = {"Zafir_Shot_SoundSet","Zafir_Tail_SoundSet","Zafir_InteriorTail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\dry_Acpc2",0.398107,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\reload_ACPC2",1,1,30};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Closure_ACPC2_01",0.125893,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Closure_ACPC2_02",0.125893,1.1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_01",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_02",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_03",2.51189,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_interior",1.41254,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"ACPC2_Shot_SoundSet","ACPC2_Tail_SoundSet","ACPC2_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_short_01",0.562341,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_short_02",0.562341,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_short_03",0.562341,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"ACPC2_silencerShot_SoundSet","ACPC2_silencerTail_SoundSet","ACPC2_silencerInteriorTail_SoundSet"};
			};
		};
		bullet1[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",0.398107,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.223872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.223872,1.2,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.98107,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.98107,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.98107,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"P07_Shot_SoundSet","P07_Tail_SoundSet","P07_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01",0.562341,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02",0.562341,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03",0.562341,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"P07_silencerShot_SoundSet","P07_silencerTail_SoundSet","P07_silencerInteriorTail_SoundSet"};
			};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.398107,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.562341,1,30};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01",0.316228,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02",0.316228,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_01",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_02",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_03",2.51189,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.41254,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"4Five_Shot_SoundSet","4Five_Tail_SoundSet","4Five_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"4Five_silencerShot_SoundSet","4Five_silencerTail_SoundSet","4Five_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",0.398107,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",0.562341,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_01",0.199526,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_02",0.199526,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_01",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_02",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_03",3.16228,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior",1.41254,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Zubr_Shot_SoundSet","Zubr_Tail_SoundSet","Zubr_InteriorTail_SoundSet"};
			};
		};
		bullet1[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet2[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet3[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet4[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet5[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet6[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet7[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet8[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet9[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet10[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet11[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet12[] = {"A3\sounds_f\dummysound",1,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.223872,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.158489,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.158489,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.16228,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.16228,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.16228,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.41254,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Rook40_Shot_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.562341,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.562341,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.562341,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rook40_silencerShot_SoundSet","Rook40_silencerTail_SoundSet","Rook40_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.177828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.177828,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Katiba_Shot_SoundSet","Katiba_Tail_SoundSet","Katiba_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Katiba_silencerShot_SoundSet","Katiba_silencerTail_SoundSet","Katiba_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",0.794328,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Katiba_Shot_SoundSet","Katiba_Tail_SoundSet","Katiba_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",1.58489,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Katiba_silencerShot_SoundSet","Katiba_silencerTail_SoundSet","Katiba_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",0.794328,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",0.794328,1,10};
		};
		soundBullet[] = {"caseless",1};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
	};
	class mk20_base_F: Rifle_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.794328,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.794328,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.794328,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.794328,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.794328,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.794328,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.794328,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.794328,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.316228,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.51189,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.251189,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.51189,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
		};
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",0.316228,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",0.316228,1.1,10};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_01",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_02",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_03",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.794328,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.316228,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.316228,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSet = "";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_01",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_02",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_03",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",1.58489,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.794328,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class GL_3GL_F: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
		};
		soundBullet[] = {"caseless",1};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.177828,1,5};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.177828,1,5};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class Single: Mode_SemiAuto
		{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.316228,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.316228,1.1,10};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_01",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_02",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_03",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.794328,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class manual: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.316228,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.316228,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_01",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_02",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_03",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",1.58489,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.794328,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\Dry_SDAR",0.398107,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\reload_sdar",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\firemode_SDAR",0.251189,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",0.501187,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",3.16228,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
				beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
				beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
				soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
				SoundSetShot[] = {"SDAR_Shot_SoundSet","SDAR_Tail_SoundSet","SDAR_InteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",0.501187,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",3.16228,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
				beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
				beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
				soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
				SoundSetShot[] = {"SDAR_Shot_SoundSet","SDAR_Tail_SoundSet","SDAR_InteriorTail_SoundSet"};
			};
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",0.501187,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",3.16228,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
				beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
				beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
				soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
				SoundSetShot[] = {"SDAR_Shot_SoundSet","SDAR_Tail_SoundSet","SDAR_InteriorTail_SoundSet"};
			};
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",0.398107,1,15};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\firemode_TRG20",0.177828,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Reload_TRG20",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02",0.501187,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01",1.99526,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02",1.99526,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03",1.99526,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"TRG20_Shot_SoundSet","TRG20_Tail_SoundSet","TRG20_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet","TRG20_silencerTail_SoundSet","TRG20_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",0.501187,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01",1.99526,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02",1.99526,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03",1.99526,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.58489,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"TRG20_Shot_SoundSet","TRG20_Tail_SoundSet","TRG20_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet","TRG20_silencerTail_SoundSet","TRG20_silencerInteriorTail_SoundSet"};
			};
		};
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.794328,1,10};
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Dry_pdw2000",0.1,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Firemode_pdw2000",0.251189,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Reload_pdw2000",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.25893,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.25893,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.58489,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGPDW2000_Shot_SoundSet","SMGPDW2000_Tail_SoundSet","SMGPDW2000_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGPDW2000_silencerShot_SoundSet","SMGPDW2000_silencerTail_SoundSet","SMGPDW2000_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.25893,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.25893,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.58489,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGPDW2000_Shot_SoundSet","SMGPDW2000_Tail_SoundSet","SMGPDW2000_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGPDW2000_silencerShot_SoundSet","SMGPDW2000_silencerTail_SoundSet","SMGPDW2000_silencerInteriorTail_SoundSet"};
			};
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.25893,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.25893,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.58489,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGPDW2000_Shot_SoundSet","SMGPDW2000_Tail_SoundSet","SMGPDW2000_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGPDW2000_silencerShot_SoundSet","SMGPDW2000_silencerTail_SoundSet","SMGPDW2000_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.562341,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.562341,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.562341,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.562341,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.501187,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.251189,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.562341,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.562341,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.562341,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.501187,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.501187,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.501187,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.501187,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Dry_Sting",0.251189,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting",0.251189,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGSting_silencerShot_SoundSet","SMGSting_silencerTail_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGSting_silencerShot_SoundSet","SMGSting_silencerTail_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SMGSting_silencerShot_SoundSet","SMGSting_silencerTail_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_dry",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_firemode",0.562341,1,5};
	};
	class SMG_05_F: SMG_05_base_F {};

	class hgun_Pistol_Signal_F: Pistol_Base_F
	{
		drySound[] = {"A3\sounds_f\weapons\other\dry1",0.398107,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_reload",0.562341,1,30};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",1.03514,1,10};
				closure2[] = {"",1.03514,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_1",1,1,700};
				begin2[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_2",1,1,700};
				begin3[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_3",1,1,700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_01",1,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_02",1,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_tail_SoundSet","DMR02_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",5.01187,1,2200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02",5.01187,1,2200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03",5.01187,1,2200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_interior",2.23872,1,2200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_trees",2.23872,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_forest",2.23872,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_meadows",2.23872,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_houses",2.23872,1,2200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR02_silencerShot_SoundSet","DMR02_silencerTail_SoundSet","DMR02_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_short_01",1,1,500};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_short_02",1,1,500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_interior",1,1,500};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_trees",1,1,500};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_forest",1,1,500};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_meadows",1,1,500};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_houses",1,1,500};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",0.251189,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_reload",1,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_Shot_SoundSet","DMR03_tail_SoundSet","DMR03_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_01",1.77828,1,1800};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_02",1.77828,1,1800};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_03",1.77828,1,1800};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior",1.99526,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",0.707946,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_02",0.707946,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_03",0.707946,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_interior",1.99526,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_Shot_SoundSet","DMR03_tail_SoundSet","DMR03_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_01",1.77828,1,1800};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_02",1.77828,1,1800};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_03",1.77828,1,1800};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior",1.99526,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_interior",1.99526,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Safety_02",0.112202,1,5};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Dry",0.251189,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_reload",1,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Closure_01",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR04_Shot_SoundSet","DMR04_tail_SoundSet","DMR04_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_interior",1.41254,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","StandardSound"};
		};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Dry",0.112202,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_reload",0.251189,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_01",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_01",2.51189,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_02",2.51189,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_03",2.51189,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_interior",1.41254,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1,1,300};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_01",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_02",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_01",2.51189,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_02",2.51189,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_03",2.51189,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_interior",1.41254,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1,1,300};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Safety",0.112202,1,5};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Dry",0.251189,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",0.251189,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
		};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Safety",0.251189,1,5};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_dry",0.251189,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",1,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01",0.630957,1,10};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02",0.630957,1,10};
				closure3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03",0.630957,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MMG01_Shot_SoundSet","MMG01_Tail_SoundSet","MMG01_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01",1.58489,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02",1.58489,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03",1.58489,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_interior",1.41254,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"MMG01_silencerShot_SoundSet","MMG01_silencerTail_SoundSet","MMG01_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1.58489,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1.58489,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1.58489,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.41254,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01",0.630957,1,10};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02",0.630957,1,10};
				closure3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03",0.630957,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MMG01_Shot_SoundSet","MMG01_Tail_SoundSet","MMG01_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01",1,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02",1,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_interior",1.41254,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"MMG01_silencerShot_SoundSet","MMG01_silencerTail_SoundSet","MMG01_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1,1,200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1,1,200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1,1,200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.41254,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			soundContinuous = 0;
			soundBurst = 0;
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Dry",0.446684,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\firemode_TRG20",0.316228,1,5};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_01",0.446684,1,10};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_02",0.446684,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MMG02_Shot_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_01",1.25893,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_02",1.25893,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_03",1.25893,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"MMG02_silencerShot_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_01",1,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_02",1,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_03",1,1,300};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_interior",1,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_forest",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_houses",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_meadows",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_trees",1,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			soundContinuous = 0;
			soundBurst = 0;
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_reload",0.501187,1,10};
	};

	class bipod_01_F_snd: ItemCore
	{
		class ItemInfo: InventoryUnderItem_Base_F
		{
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.707946,1,20};
		};
	};
	class bipod_02_F_blk: bipod_01_F_snd
	{
		class ItemInfo: ItemInfo
		{
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_down",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_up",0.707946,1,20};
		};
	};
	class bipod_03_F_blk: bipod_01_F_snd
	{
		class ItemInfo: ItemInfo
		{
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",0.707946,1,20};
		};
	};


	class gatling_20mm_VTOL_01: gatling_20mm
	{
		class manual: manual
		{
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_Exp\arsenal\vehicle_weapons\gatling_20mm\20mm_01_burst",3.16228,1,1500,{6924,24260}};
				soundBegin[] = {"begin1",1};
			};
		};
	};
	class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS {};
	class cannon_105mm_VTOL_01: cannon_105mm {};
	class gatling_30mm_VTOL_02: gatling_30mm {};

	class DMR_07_base_F: Rifle_Long_Base_F
	{
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_firemode",0.177828,1,5};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR07_Shot_SoundSet","DMR07_Tail_SoundSet","DMR07_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"DMR07_silencerShot_SoundSet","DMR07_silencerTail_SoundSet","DMR07_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10};
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		class FullAutoSlow: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			soundContinuous = 0;
			soundBurst = 0;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAutoFast: FullAutoSlow
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_dry",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_firemode",0.316228,1,5};
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",0.398107,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.223872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.223872,1.2,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.98107,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.98107,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.98107,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Makarov_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01",0.562341,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02",0.562341,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03",0.562341,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Makarov_silencerShot_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"};
			};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};

	class arifle_AK12_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_dry",0.177828,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode",0.316228,1,5};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_UGL_reload",1,1,10};
		};
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK47_silencerShot_SoundSet","AK47_silencerTail_SoundSet","AK47_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK47_silencerShot_SoundSet","AK47_silencerTail_SoundSet","AK47_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry",0.177828,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode",0.177828,1,5};
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK74_silencerShot_SoundSet","AK74_silencerTail_SoundSet","AK74_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK74_silencerShot_SoundSet","AK74_silencerTail_SoundSet","AK74_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.177828,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.177828,1,5};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Type115_silencerShot_SoundSet","Type115_silencerTail_SoundSet","Type115_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Type115_silencerShot_SoundSet","Type115_silencerTail_SoundSet","Type115_silencerInteriorTail_SoundSet"};
			};
		};
		class Secondary: Rifle_Base_F
		{
			soundContinuous = 0;
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
				};
			};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_reload",1,1,10};
			changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
	};
	class arifle_CTAR_GL_base_F: arifle_CTAR_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_UGL_reload",1,1,10};
		};
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
	};
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",1,1,10};
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_dry",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_firemode",0.177828,1,5};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR_17_Shot_SoundSet","SPAR_17_Tail_SoundSet","SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR_17_silencerShot_SoundSet","SPAR_17_silencerTail_SoundSet","SPAR_17_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR_17_Shot_SoundSet","SPAR_17_Tail_SoundSet","SPAR_17_interiorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR_17_silencerShot_SoundSet","SPAR_17_silencerTail_SoundSet","SPAR_17_silencerInteriorTail_SoundSet"};
			};
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_dry",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_firemode",0.251189,1,5};
	};




	class LIB_M1918A2_BAR_Bipod: ItemCore
	{
		class ItemInfo: InventoryUnderItem_Base_F
		{
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.707946,1,20};
		};
	};

	class LIB_LAUNCHER: Launcher_Base_F {};
	class LIB_PzFaust_30m: LIB_LAUNCHER
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32.wss",4,1,3000};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"LIB_LAUNCHER_SHOT_SOUNDSET","LIB_ROCKETLAUNCHER_TAIL_SOUNDSET"};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_ReloadMagazine.wss",0.562341,1,50};
	};
	class LIB_RPzB: LIB_LAUNCHER
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Launchers_s\RPzB\RPzB_Shot.wss",3,1,3000};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"LIB_LAUNCHER_SHOT_SOUNDSET","LIB_ROCKETLAUNCHER_TAIL_SOUNDSET"};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_ReloadMagazine.wss",0.562341,1,50};
	};
	class LIB_M1A1_Bazooka: LIB_LAUNCHER
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Shot.wss",4,1,3000};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"LIB_LAUNCHER_SHOT_SOUNDSET","LIB_ROCKETLAUNCHER_TAIL_SOUNDSET"};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_ReloadMagazine.wss",0.562341,1,50};
	};

	class LIB_Binocular_base: Binocular
	{
		sounds[] = {"StandardSound"};
	};
	class LIB_Binocular_GER: LIB_Binocular_base {};
	class LIB_Binocular_PL: LIB_Binocular_GER {};
	class LIB_Binocular_SU: LIB_Binocular_base {};
	class LIB_Binocular_US: LIB_Binocular_SU {};

	class LIB_PISTOL: Pistol_Base_F
	{
		bullet1[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_04.wss",0.177828,1,30};
		bullet2[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_03.wss",0.177828,1,30};
		bullet3[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_02.wss",0.177828,1,30};
		bullet4[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_01.wss",0.177828,1,30};
		bullet5[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_01.wss",0.316228,1,25};
		bullet6[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_02.wss",0.316228,1,25};
		bullet7[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_03.wss",0.316228,1,25};
		bullet8[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_04.wss",0.316228,1,25};
		bullet9[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_01.wss",0.177828,1,25};
		bullet10[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_02.wss",0.177828,1,25};
		bullet11[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_03.wss",0.177828,1,25};
		bullet12[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_04.wss",0.177828,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class LIB_P38: LIB_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_ReloadMagazine.wss",0.562341,1,30};
	};
	class LIB_M1908: LIB_P38 {};
	class LIB_TT33: LIB_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_ReloadMagazine.wss",0.562341,1,30};
	};
	class LIB_M1895: LIB_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\M1895\M1895_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18.wss",1.25,1,250};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19.wss",1.25,1,250};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11.wss",1.25,1,250};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				weaponSoundEffect = "IF_DefaultRifle_snds";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\M1895\M1895_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\M1895\M1895_ReloadMagazine.wss",0.501187,1,10};
	};
	class LIB_Colt_M1911: LIB_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\Colt\Colt_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_ReloadMagazine.wss",0.562341,1,30};
	};
	class LIB_FLARE_PISTOL: LIB_PISTOL
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class LIB_SMG: Rifle_Short_Base_F {};
	class LIB_MP40: LIB_SMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_1.wss",2,1,15};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_2.wss",2,1,15};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_ReloadMagazine.wss",0.562341,1,30};
	};
	class LIB_PPSh41_m: LIB_SMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\PPSh41\PPSh41_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\PPSh41\PPSh41_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\PPSh41\PPSh41_ReloadMagazine.wss",0.562341,1,30};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2.wss",0.177828,1,5};
	};
	class LIB_PPSh41_d: LIB_PPSh41_m {};
	class LIB_M1A1_Thompson: LIB_SMG
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Shot.wss",1.25893,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",2,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior.wss",1.05849,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Shot.wss",1.25893,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",2,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior.wss",1.05849,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_ReloadMagazine.wss",0.562341,1,30};
	};

	class LIB_RIFLE: Rifle_Base_F {};
	class LIB_K98: LIB_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\K98\K98_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "IF_DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.16228,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.16228,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\1903A1_reload_noscope",0.8,1,10};
	};
	class LIB_M9130: LIB_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\M9130\M9130_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.16228,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.16228,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"RU_RIFLE_MOSIN_SHOT_SOUNDSET","RU_RIFLE_MOSIN_TAIL_SOUNDSET"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18.wss",0.794328,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19.wss",0.794328,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11.wss",0.794328,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				weaponSoundEffect = "IF_DefaultRifle_snds";
				soundSetShot[] = {"RU_RIFLE_MOSIN_SHOT_SOUNDSET","RU_RIFLE_MOSIN_TAIL_SOUNDSET"};
			};
		};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\1903A1_reload_noscope",0.8,1,10};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_mosin\ru_rifle_mosin_shot_dry.wav","db-7",1,10};
	};
	class LIB_M38: LIB_M9130 {};
	class LIB_M44: LIB_M9130 {};
	class LIB_MP44: LIB_RIFLE
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2.5,1,15};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_5.wss",2.5,1,15};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_ReloadMagazine.wss",0.562341,1,30};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2.wss",0.177828,1,5};
	};
	class LIB_SVT_40: LIB_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {};
				soundBegin[] = {};
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				soundSetShot[] = {"RU_RIFLE_SVT_SHOT","RU_RIFLE_SVT_TAIL"};
				weaponSoundEffect = "";
			};
		};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_dry.wav","db-7",1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\SVT40\Svt40_ReloadMagazine.wss",0.562341,1,30};
		reloadSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\SVT40\Svt40_Shot.wss",1,1,1000};
	};
	class LIB_G43: LIB_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",5,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_Dry.wss",1.1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_ReloadMagazine.wss",0.562341,1,30};
		reloadSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_Shot.wss",1,1,20};
	};
	class LIB_M1_Garand: LIB_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {};
				soundBegin[] = {};
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				soundSetShot[] = {"us_rifle_m1garand_SHOT","LIB_RIFLE_TAIL_SOUNDSET"};
				weaponSoundEffect = "";
			};
		};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_dry.wav","db-7",1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Garand\Garand_ReloadMagazine.wss",0.562341,1,30};
	};
	class LIB_M1_Carbine: LIB_RIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Carbine\M1_Carbine_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",2,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",2,1,10};
				weaponSoundEffect = "IF_DefaultRifle";
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Carbine\M1carbine_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Carbine\M1_Carbine_ReloadMagazine.wss",0.562341,1,30};
	};

	class LIB_LMG: Rifle_Long_Base_F
	{
		bullet1[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",0.177828,1,15};
		bullet2[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_03.wss",0.177828,1,15};
		bullet3[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_02.wss",0.177828,1,15};
		bullet4[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",0.177828,1,15};
		bullet5[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_01.wss",0.316228,1,15};
		bullet6[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_02.wss",0.316228,1,15};
		bullet7[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_03.wss",0.316228,1,15};
		bullet8[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_04.wss",0.316228,1,15};
		bullet9[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_01.wss",0.177828,1,15};
		bullet10[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_02.wss",0.177828,1,15};
		bullet11[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_03.wss",0.177828,1,15};
		bullet12[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_04.wss",0.177828,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class LIB_DP28: LIB_LMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",1.41254,1,1000};
				begin2[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",1.41254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior.wss",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_1.wss",2.7,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3.wss",2.7,1,10};
				closure3[] = {"A3\sounds_f\weapons\closure\sfx1.wss",2.7,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_ReloadMagazine.wss",0.562341,1,30};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down.wss","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up.wss","db-3",1,20};
	};
	class LIB_DT: LIB_LMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",1.41254,1,1000};
				begin2[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",1.41254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior.wss",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses.wss",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_1.wss",2.7,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3.wss",2.7,1,10};
				closure3[] = {"A3\sounds_f\weapons\closure\sfx1.wss",2.7,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_ReloadMagazine.wss",0.562341,1,30};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down.wss","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up.wss","db-3",1,20};
	};
	class LIB_DT_OPTIC: LIB_DT
	{
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down.wss","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up.wss","db-3",1,20};
	};
	class LIB_MG42: LIB_LMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\MG42\MG42_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses.wss",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior.wss",1.09526,1,1000};
						frequency = 1;
						volume = "interior";
					};
				};
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7.wss",3,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8.wss",3,1,10};
				closure3[] = {"A3\sounds_f\weapons\closure\sfx4.wss",3,1,10};
				closure4[] = {"A3\sounds_f\weapons\closure\sfx1.wss",3,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5,"closure4",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
				soundSetShot[] = {"GER_LMG_MG42_SHOT","GER_LMG_MG42_TAIL"};
			};
		};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_dry.wav","db-7",1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\ger_lmg_mg42\ger_lmg_mg42_reload.wav","db-2",1,30};
		reloadSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\MG42\MG42_ReloadMagazine.wss",1.01158,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down.wss","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up.wss","db-3",1,20};
	};
	class LIB_M1918A2_BAR: LIB_LMG
	{
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Heavy_s\BAR\Bar_Shot.wss",1.25893,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",2,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Heavy_s\BAR\Bar_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Heavy_s\BAR\Bar_ReloadMagazine.wss",0.562341,1,30};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2.wss",0.177828,1,5};
	};

	class LIB_SRIFLE: Rifle_Long_Base_F {};
	class LIB_K98ZF39: LIB_SRIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\K98\K98_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "IF_DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.16228,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.16228,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\K98\K98_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\1903A1_reload_noscope",0.8,1,10};
	};
	class LIB_M9130PU: LIB_SRIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\M9130\M9130_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.16228,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.16228,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"RU_RIFLE_MOSIN_SHOT_SOUNDSET","RU_RIFLE_MOSIN_TAIL_SOUNDSET"};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18.wss",1.7,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19.wss",1.7,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11.wss",1.7,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				weaponSoundEffect = "IF_DefaultRifle_snds";
				soundSetShot[] = {"RU_RIFLE_MOSIN_SHOT_SOUNDSET","RU_RIFLE_MOSIN_TAIL_SOUNDSET"};
			};
		};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\1903A1_reload_noscope",0.8,1,10};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_mosin\ru_rifle_mosin_shot_dry.wav","db-7",1,10};
	};
	class LIB_M1903A4_Springfield: LIB_SRIFLE
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\SniperRifles_s\Springfield\Springfield_Shot.wss",1,1,1000};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "IF_DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.16228,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.16228,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		drySound[] = {"\WW2\Assets_s\Weapons\SniperRifles_s\Springfield\Springfield_Dry.wss",1,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\1903A1_reload_noscope",0.8,1,10};
	};

	class LIB_cannon_reloading: CannonCore {};
	class LIB_cannon_empty: LIB_cannon_reloading {};
	class LIB_OpelBlitzHorn: TruckHorn
	{
		drySound[] = {"\WW2\Assets_s\Vehicles\Trucks_s\Opelblitz\Opelblitz_Horn.wss",1.58,1,400};
	};

	class LIB_MLMG_base: MGun
	{
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
		};
		class close: manual
		{
			soundBurst = 0;
		};
		bullet1[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet2[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_03.wss",1,1,15};
		bullet3[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_02.wss",1,1,15};
		bullet4[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet5[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_01.wss",1,1,15};
		bullet6[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_02.wss",1,1,15};
		bullet7[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_03.wss",1,1,15};
		bullet8[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_04.wss",1,1,15};
		bullet9[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_01.wss",1,1,15};
		bullet10[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_02.wss",1,1,15};
		bullet11[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_03.wss",1,1,15};
		bullet12[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_04.wss",1,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class LIB_M2: LIB_MLMG_base
	{
		class manual: manual
		{
			drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"};
			};
		};
	};
	class LIB_MLMG42: LIB_MLMG_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"GER_LMG_MG42_SHOT","GER_LMG_MG42_TAIL"};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_dry.wav","db-7",1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\ger_lmg_mg42\ger_lmg_mg42_reload.wav","db-2",1,30};
	};
	class LIB_MG42_Tripod: LIB_MLMG42 {};
	class LIB_MG42_Veh: LIB_MG42_Tripod {};
	class LIB_Maxim_M30: LIB_MLMG_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_Sample_1.wss",1,1,1000};
				begin2[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_Sample_2.wss",1,1,1000};
				begin3[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_Sample_3.wss",1,1,1000};
				soundBegin[] = {"begin1",0.3,"begin2",0.4,"begin3",0.7};
				weaponSoundEffect = "IF_DefaultRifle";
			};
		};
		reloadMagazineSound[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_ReloadMagazine.wss",1,1,35};
	};

	class LIB_TankMGun_base: MGun
	{
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1.wss",1,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2.wss",1,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3.wss",1,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4.wss",1,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1.wss",1,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2.wss",1,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3.wss",1,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4.wss",1,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1.wss",1,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2.wss",1,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3.wss",1,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4.wss",1,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class LIB_DT29: LIB_TankMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",2,1,2000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7.wss",1.77828,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8.wss",1.77828,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
	};
	class LIB_DT29_kurs: LIB_DT29 {};
	class LIB_DT29_back: LIB_DT29_kurs {};
	class LIB_MG34: LIB_TankMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\MG34\MG34_Shot.wss",2,1,2000};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7.wss",1.77828,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8.wss",1.77828,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
	};
	class LIB_MG34_kurs: LIB_MG34 {};
	class LIB_M1919A4: LIB_TankMGun_base
	{
		class manual: manual
		{
			drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"};
				closure1[] = {"\A3\sounds_f\weapons\closure\sfx7.wss",1.7782,1,40};
				closure2[] = {"\A3\sounds_f\weapons\closure\sfx8.wss",1.7782,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
		};
		bullet1[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet2[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_03.wss",1,1,15};
		bullet3[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_02.wss",1,1,15};
		bullet4[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet5[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_01.wss",1,1,15};
		bullet6[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_02.wss",1,1,15};
		bullet7[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_03.wss",1,1,15};
		bullet8[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_04.wss",1,1,15};
		bullet9[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_01.wss",1,1,15};
		bullet10[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_02.wss",1,1,15};
		bullet11[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_03.wss",1,1,15};
		bullet12[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_04.wss",1,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class LIB_M1919A4_kurs: LIB_M1919A4 {};

	class LIB_PlaneMGun_base: MGun
	{
		class close: manual
		{
			soundBurst = 0;
		};
	};
	class LIB_2xMG131_FW190: LIB_PlaneMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
		};
	};
	class LIB_MG81_Ju87: LIB_PlaneMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
		};
	};
	class LIB_4xM2_P39: LIB_PlaneMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
		};
	};
	class LIB_ShKAS_PE2: LIB_PlaneMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
		};
	};
	class LIB_UBK_PE2: LIB_PlaneMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
		};
	};
	class LIB_UBT_PE2: LIB_UBK_PE2 {};
	class LIB_8xM2_P47: LIB_PlaneMGun_base
	{
		class manual: manual
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
			};
		};
	};

	class LIB_PlaneCannon_base: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"LIB_PlaneWeapon_HMG_SoundSet"};
			};
		};
		class close: manual
		{
			soundBurst = 0;
		};
	};
	class LIB_2xMG151_FW190: LIB_PlaneCannon_base
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
			};
		};
	};
	class LIB_2xMG151_JU87: LIB_PlaneCannon_base
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
			};
		};
	};
	class LIB_M4_P39: LIB_PlaneCannon_base
	{
		class manual: manual
		{
			class StandardSound
			{
				soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
			};
			soundBurst = 1;
		};
	};

	class LIB_Bomb_Mount_base: RocketPods
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Planes_s\Bomb_Mount_Shot.wss",1,1,500};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"\ww2_ca\sounds\weapons\cannon\rocket_fly_x2.wss",1,2,900};
		};
	};
	class LIB_FAB250_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_SC50_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_SC250_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_SC500_Bomb_Mount: LIB_Bomb_Mount_base {};
	class LIB_US_500lb_Bomb_Mount: LIB_Bomb_Mount_base {};

	class LIB_M8_Launcher_P47: RocketPods
	{
		class Far_AI: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.58489,1.2,1700};
		};
		class Burst: RocketPods
		{
			soundContinuous = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.58489,1.2,1700};
		};
	};

	class LIB_MortarCannon_base: CannonCore
	{
		class Single1: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\Weapons\cannon\mortar1_fire.wss",1,1,500};
				soundBegin[] = {"begin1",1};
			};
		};
		class Burst1: Mode_Burst
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\Weapons\cannon\mortar1_fire.wss",1,1,500};
				soundBegin[] = {"begin1",1};
			};
		};
		reloadSound[] = {"\ww2_ca\sounds\Weapons\cannon\mortar_load.wss",1.12202,1,12};
	};
	class LIB_BM37: LIB_MortarCannon_base {};
	class LIB_GRWR34: LIB_MortarCannon_base {};

	class LIB_BM13: RocketPods
	{
		class Close: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Weapons\Misc_s\Mortars_Bm37\Bm37_Shot.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\ww2_ca\sounds\weapons\cannon\rocket_fly1.wss",1,1.5,700};
			soundBurst = 0;
		};
		drySound[] = {"\ww2_ca\sounds\weapons\cannon\Javelin_dry_v1.wss",1,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3.wss",1,1,20};
	};

	class LIB_AntiAirCannon_base: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"Autocannon35mm_Shot_SoundSet","Autocannon35mm_Tail_SoundSet"};
			};
		};
		class close: manual
		{
			soundBurst = 0;
		};
	};
	class LIB_FlaK_38_X4: LIB_AntiAirCannon_base {};
	class LIB_61k: LIB_AntiAirCannon_base {};
	class LIB_FlaK_38: LIB_AntiAirCannon_base {};
	class LIB_FlaK_30: LIB_FlaK_38 {};

	class LIB_CannonCore: CannonCore
	{
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
		};
	};
	class LIB_TankAPCannon_base: LIB_CannonCore {};
	class LIB_StaticGunAPCannon_base: LIB_TankAPCannon_base {};
	class LIB_ZIS3_AP: LIB_StaticGunAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_Pak40_AP: LIB_StaticGunAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_D25T_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_Cannon.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload.wss",1,1,20};
		};
	};
	class LIB_M3_L40_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_Cannon.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_7sec_Reload_2.wss",1,1,20};
		};
	};
	class LIB_KwK40_L48_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwIV_H\PzKpfwIV_H_Cannon_2.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_StuK40_L48_AP: LIB_KwK40_L48_AP {};
	class LIB_KwK42_L70_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwV\PzKpfwV_Cannon.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_KwK43_L71_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_Cannon_2a.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_7sec_Reload.wss",1,1,20};
		};
	};
	class LIB_KwK36_L56_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Cannon_Vol_Up.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",1,1,20};
		};
	};
	class LIB_F34_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_ZIS_S_53_AP: LIB_TankAPCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_D_5S_AP: LIB_ZIS_S_53_AP {};
	class LIB_TankAPCRCannon_base: LIB_CannonCore {};
	class LIB_StaticGunAPCRCannon_base: LIB_TankAPCRCannon_base {};
	class LIB_ZIS3_APCR: LIB_StaticGunAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_Pak40_APCR: LIB_StaticGunAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_M3_L40_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_Cannon.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_7sec_Reload_2.wss",1,1,20};
		};
	};
	class LIB_KwK40_L48_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwIV_H\PzKpfwIV_H_Cannon_2.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_StuK40_L48_APCR: LIB_KwK40_L48_APCR {};
	class LIB_KwK42_L70_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwV\PzKpfwV_Cannon.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_KwK43_L71_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_Cannon_2a.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_7sec_Reload.wss",1,1,20};
		};
	};
	class LIB_KwK36_L56_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Cannon_Vol_Up.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",1,1,20};
		};
	};
	class LIB_F34_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_ZIS_S_53_APCR: LIB_TankAPCRCannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_D_5S_APCR: LIB_ZIS_S_53_APCR {};
	class LIB_TankHECannon_base: LIB_CannonCore {};
	class LIB_StaticGunHECannon_base: LIB_TankHECannon_base {};
	class LIB_ZIS3_HE: LIB_StaticGunHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_Pak40_HE: LIB_StaticGunHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_D25T_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_Cannon.wss",3.5,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload.wss",1,1,20};
		};
	};
	class LIB_M3_L40_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_Cannon.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_7sec_Reload_2.wss",1,1,20};
		};
	};
	class LIB_KwK40_L48_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwIV_H\PzKpfwIV_H_Cannon_2.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_StuK40_L48_HE: LIB_KwK40_L48_HE {};
	class LIB_KwK42_L70_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwV\PzKpfwV_Cannon.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_KwK43_L71_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_Cannon_2a.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_7sec_Reload.wss",1,1,20};
		};
	};
	class LIB_KwK36_L56_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Cannon_Vol_Up.wss",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",1,1,20};
		};
	};
	class LIB_F34_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_ZIS_S_53_HE: LIB_TankHECannon_base
	{
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
		};
	};
	class LIB_D_5S_HE: LIB_ZIS_S_53_HE {};
	class LIB_TankCannon_base: LIB_CannonCore {};
	class LIB_StaticGunCannon_base: LIB_TankCannon_base {};
	class LIB_ZIS3: LIB_StaticGunCannon_base
	{
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_Pak40: LIB_StaticGunCannon_base
	{
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_D25T: LIB_TankCannon_base
	{
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_24sec_Reload.wss",1,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_M3_L40: LIB_TankCannon_base
	{
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload.wss",1,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_KwK40_L48: LIB_TankCannon_base
	{
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_StuK40_L48: LIB_KwK40_L48 {};
	class LIB_KwK42_L70: LIB_TankCannon_base
	{
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_KwK43_L71: LIB_TankCannon_base
	{
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Cannon120mm_Shot_SoundSet","Cannon120mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_KwK36_L56: LIB_TankCannon_base
	{
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Cannon120mm_Shot_SoundSet","Cannon120mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_F34: LIB_TankCannon_base
	{
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_ZIS_S_53: LIB_TankCannon_base
	{
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		class player: player
		{
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
			};
		};
	};
	class LIB_D_5S: LIB_ZIS_S_53 {};

	class LIB_ToolKit: ToolKit {};
	class LIB_W: LIB_ToolKit {};

	class TimeBomb: Default {};
	class Mine: TimeBomb
	{
		sound[] = {"\WW2\Assets_s\Weapons\Explosions_s\Big_01_A.wss",31.6228,1,1000};
	};
	class MineE: Mine {};
	class PipeBomb: Put
	{
		sound[] = {"",0.000316228,1,10};
	};
};
/*
	sound[] = {"",10,1};
	soundBegin[] = {"sound",1};
	soundBeginWater[] = {"sound",1};
	soundBurst = 0;
	soundClosure[] = {"sound",1};
	soundContinuous = 0;
	soundEnd[] = {"sound",1};
	soundEnd[] = {};
	soundLoop[] = {"sound",1};
	soundLoop[] = {};
	sounds[] = {"StandardSound","SilencedSound"};
	weaponSoundEffect = "";
		bullet1[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",0.177828,1,15};
		bullet1[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet1[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_04.wss",0.177828,1,30};
		bullet1[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1.wss",1,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.794328,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.891251,1,25};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet1[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.562341,1,15};
		bullet1[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet10[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_02.wss",0.177828,1,15};
		bullet10[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_02.wss",1,1,15};
		bullet10[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_02.wss",0.177828,1,25};
		bullet10[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2.wss",1,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.794328,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.562341,1,15};
		bullet10[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_02.wss",1,1,15};
		bullet11[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_03.wss",0.177828,1,15};
		bullet11[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_03.wss",1,1,15};
		bullet11[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_03.wss",0.177828,1,25};
		bullet11[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3.wss",1,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.794328,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.562341,1,15};
		bullet11[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_03.wss",1,1,15};
		bullet12[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_04.wss",0.177828,1,15};
		bullet12[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_04.wss",1,1,15};
		bullet12[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_04.wss",0.177828,1,25};
		bullet12[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4.wss",1,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.794328,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.562341,1,15};
		bullet12[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_04.wss",1,1,15};
		bullet2[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_03.wss",0.177828,1,15};
		bullet2[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_03.wss",1,1,15};
		bullet2[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_03.wss",0.177828,1,30};
		bullet2[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2.wss",1,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.794328,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.891251,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.562341,1,15};
		bullet2[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_03.wss",1,1,15};
		bullet3[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_02.wss",0.177828,1,15};
		bullet3[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_02.wss",1,1,15};
		bullet3[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_02.wss",0.177828,1,30};
		bullet3[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3.wss",1,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.794328,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.891251,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.562341,1,15};
		bullet3[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_02.wss",1,1,15};
		bullet4[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",0.177828,1,15};
		bullet4[] = {"\WW2_CA\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet4[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_metal_01.wss",0.177828,1,30};
		bullet4[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4.wss",1,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.794328,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.891251,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.562341,1,15};
		bullet4[] = {"ww2_ca\sounds\weapons\shells\big_shell_metal_01.wss",1,1,15};
		bullet5[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_01.wss",0.316228,1,15};
		bullet5[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_01.wss",1,1,15};
		bullet5[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_01.wss",0.316228,1,25};
		bullet5[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1.wss",1,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.562341,1,15};
		bullet5[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_01.wss",1,1,15};
		bullet6[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_02.wss",0.316228,1,15};
		bullet6[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_02.wss",1,1,15};
		bullet6[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_02.wss",0.316228,1,25};
		bullet6[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2.wss",1,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.501187,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.562341,1,15};
		bullet6[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_02.wss",1,1,15};
		bullet7[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_03.wss",0.316228,1,15};
		bullet7[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_03.wss",1,1,15};
		bullet7[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_03.wss",0.316228,1,25};
		bullet7[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3.wss",1,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.501187,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.562341,1,15};
		bullet7[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_03.wss",1,1,15};
		bullet8[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_04.wss",0.316228,1,15};
		bullet8[] = {"\WW2_CA\sounds\weapons\shells\big_shell_dirt_04.wss",1,1,15};
		bullet8[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_dirt_04.wss",0.316228,1,25};
		bullet8[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4.wss",1,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.501187,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.562341,1,15};
		bullet8[] = {"ww2_ca\sounds\weapons\shells\big_shell_dirt_04.wss",1,1,15};
		bullet9[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_01.wss",0.177828,1,15};
		bullet9[] = {"\WW2_CA\sounds\weapons\shells\big_shell_soft_01.wss",1,1,15};
		bullet9[] = {"\WW2_CA\sounds\weapons\shells\pistols_shell_soft_01.wss",0.177828,1,25};
		bullet9[] = {"A3\sounds_f\dummysound",1,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1.wss",1,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.794328,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.562341,1,15};
		bullet9[] = {"ww2_ca\sounds\weapons\shells\big_shell_soft_01.wss",1,1,15};
		changeFiremodeSound[] = {"",1,1};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",0.316228,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_firemode",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\firemode_Zafir",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\firemode_SDAR",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\firemode_TRG20",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\firemode_TRG20",0.316228,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Firemode_pdw2000",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.316228,1,5};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.562341,1,20};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.177828,1,5};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2.wss",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_firemode",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_firemode",0.316228,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode",0.316228,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_firemode",0.251189,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_firemode",0.177828,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_firemode",0.562341,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Safety_02",0.112202,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Safety",0.112202,1,5};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Safety",0.251189,1,5};
		drySound[] = {"",1,1,200};
		drySound[] = {"",1,1};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_mosin\ru_rifle_mosin_shot_dry.wav","db-7",1,10};
		drySound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_dry.wav","db-7",1,10};
		drySound[] = {"\WW2\Assets_s\Vehicles\Trucks_s\Opelblitz\Opelblitz_Horn.wss",1.58,1,400};
		drySound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Heavy_s\BAR\Bar_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\PPSh41\PPSh41_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\M1895\M1895_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_Dry.wss",1.1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\K98\K98_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Carbine\M1carbine_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_Dry.wss",1,1,10};
		drySound[] = {"\WW2\Assets_s\Weapons\SniperRifles_s\Springfield\Springfield_Dry.wss",1,1,10};
		drySound[] = {"\ww2_ca\sounds\weapons\cannon\Javelin_dry_v1.wss",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.177828,1,15};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.446684,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",0.158489,1,18};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",0.251189,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",0.562341,1,15};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",0.501187,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_dry",0.630957,1,30};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",0.446684,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\dry_Zafir",0.446684,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.398107,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\dry_Acpc2",0.398107,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",0.398107,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.223872,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",0.398107,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.316228,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\Dry_SDAR",0.398107,1,15};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",0.398107,1,15};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Dry_pdw2000",0.1,1,20};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Dry_Sting",0.251189,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.501187,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.562341,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_dry",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_dry",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_dry",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry.wav",1,1,10};
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1,1,150};
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1,1,100};
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1,1,200};
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1,1,200};
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1,1,250};
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1,1,300};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
		drySound[] = {"A3\sounds_f\weapons\other\dry1",0.398107,1,20};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.316228,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_dry",0.316228,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_dry",0.562341,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_dry",0.177828,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry",0.177828,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.177828,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_dry",0.562341,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_dry",0.562341,1,10};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_dry",0.562341,1,10};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",0.251189,1,20};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Dry",0.251189,1,20};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Dry",0.112202,1,20};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Dry",0.251189,1,20};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_dry",0.251189,1,20};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Dry",0.446684,1,10};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",0.177828,1,10};
		lockedTargetSound[] = {"",0.000316228,6};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",0.316228,2.5};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",0.316228,2.5};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",0.562341,2.5};
		lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
		lockingTargetSound[] = {"",0.000316228,2};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",0.316228,1};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",0.316228,1};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",0.562341,1};
		lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		reloadMagazineSound[] = {"",1,1};
		reloadMagazineSound[] = {"\WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\ger_lmg_mg42\ger_lmg_mg42_reload.wav","db-2",1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_ReloadMagazine.wss",1,1,35};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_ReloadMagazine.wss",0.562341,1,50};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Heavy_s\BAR\Bar_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\PPSh41\PPSh41_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\M1895\M1895_ReloadMagazine.wss",0.501187,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\BoltAction\1903A1_reload_noscope",0.8,1,10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Carbine\M1_Carbine_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Garand\Garand_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\SVT40\Svt40_ReloadMagazine.wss",0.562341,1,30};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Reload_Mk200",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\reload_zafir",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.562341,1,30};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\reload_ACPC2",1,1,30};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\reload_sdar",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Reload_TRG20",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Reload_pdw2000",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.562341,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",0.891251,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_reload",1,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3.wss",1,1,20};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_reload",0.562341,1,30};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_reload",0.251189,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",0.251189,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_reload",1,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_reload",0.501187,1,10};
		reloadSound[] = {"",1,1};
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_24sec_Reload.wss",1,1,20};
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload.wss",1,1,20};
		reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",5,1,20};
		reloadSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\MG42\MG42_ReloadMagazine.wss",1.01158,1,20};
		reloadSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_Shot.wss",1,1,20};
		reloadSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\SVT40\Svt40_Shot.wss",1,1,1000};
		reloadSound[] = {"\ww2_ca\sounds\Weapons\cannon\mortar_load.wss",1.12202,1,12};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",2.23872,1,50};
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",3.16228,1,50};
		reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.6228,1,15};
		reloadSound[] = {"WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload",5,1,20};
		sound[] = {"",0,1};
		sound[] = {"",0.000316228,1,10};
		sound[] = {"",1,1};
		sound[] = {"\WW2\Assets_s\Weapons\Explosions_s\Big_01_A.wss",31.6228,1,1000};
		sound[] = {"A3\sounds_f\dummysound",2.51189,1,1800};
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1,1,800};
		sound[] = {};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.707946,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down.wss","db-3",1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up.wss","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		soundBullet[] = {"caseless",1};
		soundBurst = 1;
		soundClosure[] = {"sound",1};
		soundContinuous = 0;
		soundEnd[] = {"sound",1};
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.2,700};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.562341,1.5,700};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.316228,1.5,900};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",0.630957,1.5,300};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1,1.1,700};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.562341,1.1,700};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.77828,1,1500};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.99526,1,1700};
		soundLoop[] = {"sound",1};
		sounds[] = {"StandardSound"};
		soundServo[] = {"",0.0001,1};
		weaponSoundEffect = "";
			begin1[] = {"",0.000316228,1};
			begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.562341,1,200};
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.41254,1,1100};
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",1.58489,1,2100};
			begin1[] = {"A3\sounds_f\weapons\Flare_Gun\flaregun_1",0.562341,1,200};
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.51189,1,1100};
			begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.77828,1,1500};
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.77828,1,3500};
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3",1,1,2000};
			begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.562341,1,200};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",1.58489,1,2100};
			begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",1.58489,1,2100};
			changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
			closure1[] = {"",1,1,10};
			closure2[] = {"",1,1,10};
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
			drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.562341,1.5};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",0.794328,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.794328,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_UGL_reload",1,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_UGL_reload",1,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",1,1,10};
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_reload",1,1,10};
			reloadSound[] = {"",0.000316228,1};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_7sec_Reload.wss",1,1,20};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_7sec_Reload_2.wss",1,1,20};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_7sec_Reload.wss",1,1,20};
			reloadSound[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_8sec_Reload.wss",1,1,20};
			reloadSound[] = {"\ww2_ca\sounds\weapons\cannon\gun120reload.wss",1,1,20};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			sound[] = {"",0.000316228,1};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBegin[] = {"begin1",1};
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",0.707946,1,20};
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.707946,1,20};
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_down",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.707946,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_up",0.707946,1,20};
			soundBurst = 0;
			soundBurst = 1;
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundContinuous = 0;
			soundContinuous = 1;
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.58489,1.2,1700};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.2,700};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.12202,1.2,700};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.77828,1.2,700};
			soundFly[] = {"\ww2_ca\sounds\weapons\cannon\rocket_fly_x2.wss",1,2,900};
			soundFly[] = {"\ww2_ca\sounds\weapons\cannon\rocket_fly1.wss",1,1.5,700};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.9,700};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.58489,1.2,1700};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.77828,1.2,700};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.99526,1,1700};
			sounds[] = {"StandardSound","SilencedSound"};
			sounds[] = {"StandardSound","StandardSound"};
			sounds[] = {"StandardSound"};
			soundServo[] = {"",0.0001,1};
			SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
			soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"};
			SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
			soundsetshot[] = {"RocketsHeavy_Shot_SoundSet"};
			soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
			soundSetShot[] = {"Static_Launcher_Titan_ATAA_Shot_SoundSet","Static_Launcher_Titan_ATAA_Tail_SoundSet"};
			weaponSoundEffect = "DefaultRifle";
				begin1[] = {"\WW2\Assets_s\Vehicles\Planes_s\Bomb_Mount_Shot.wss",1,1,500};
				begin1[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_Sample_1.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_Cannon.wss",1,1,2000};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\JS2_43\JS2_43_Cannon.wss",3.5,1,2000};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\M4A3_75\M4A3_75_Cannon.wss",1,1,1500};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwIV_H\PzKpfwIV_H_Cannon_2.wss",1,1,1500};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwIV_H\PzKpfwIV_H_Cannon_2.wss",1,1,2000};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwV\PzKpfwV_Cannon.wss",1,1,1500};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_B\New\PzKpfwVI_B_Cannon_2a.wss",1,1,2000};
				begin1[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Cannon_Vol_Up.wss",1,1,2000};
				begin1[] = {"\WW2\Assets_s\Weapons\Launchers_s\Bazooka\Bazooka_Shot.wss",4,1,3000};
				begin1[] = {"\WW2\Assets_s\Weapons\Launchers_s\RPzB\RPzB_Shot.wss",3,1,3000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Heavy_s\BAR\Bar_Shot.wss",1.25893,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",1.41254,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",2,1,2000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\MG34\MG34_Shot.wss",2,1,2000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\MG42\MG42_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\PPSh41\PPSh41_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Shot.wss",1.25893,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Misc_s\Mortars_Bm37\Bm37_Shot.wss",1,1,1500};
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\Colt\Colt_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\M1895\M1895_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\P38\P38_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Pistols_s\TT33\TT33_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\G43\G43_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\K98\K98_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\M1_Carbine\M1_Carbine_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\M9130\M9130_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\Rifles_s\MP44\MP44_Shot.wss",1,1,1000};
				begin1[] = {"\WW2\Assets_s\Weapons\SniperRifles_s\Springfield\Springfield_Shot.wss",1,1,1000};
				begin1[] = {"\ww2_ca\sounds\weapons\cannon\gun120.wss",1,1,1500};
				begin1[] = {"\ww2_ca\sounds\Weapons\cannon\mortar1_fire.wss",1,1,500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.99526,1,1800};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.99526,1,1500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",3.16228,1,2000};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_01",3.98107,1,2000};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_01",7.94328,1,2200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_01",2.51189,1,2200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.98107,1,2000};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_01",1.77828,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.891251,1,200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_01",1.77828,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_01",2.51189,1,1400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1,1,600};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_01",2.51189,1,1400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_short_01",0.562341,1,600};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.98107,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01",0.562341,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.16228,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.562341,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_01",3.16228,1,1400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",3.16228,1,1800};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",0.794328,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_01",2.51189,1,1400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_01",1,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_01",3.16228,1,1800};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.794328,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",3.16228,1,1400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01",1.99526,1,1400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.25893,1,1000};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.891251,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",0.891251,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_01",2.81838,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_01",0.891251,1,400};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.81838,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.12202,1,1200};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_01",1.77828,1,2100};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_01",1.77828,1,2000};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.16228,1,1500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.16228,1,1500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\varsuk_125mm_distant",3.16228,1,1500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.99526,1,1500};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst",3.98107,1,1300,{2,35740}};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.62341,1,1500,{25704,32159}};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",5.62341,1,1500,{2,45447}};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",2.51189,1,1500,{2,36879}};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.98107,1,1300,{2,36879}};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01",1.58489,1,2100};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1,1,2100};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01",1,1,2100};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_01",1,1,2100};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_01",1,1,2000};
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.99526,1,1500};
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				begin1[] = {"A3\Sounds_F\weapons\Launcher\rpg32.wss",4,1,3000};
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1,1,2000};
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1,1100};
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.77828,1.2,1600};
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
				begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.77828,1,1500};
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18.wss",0.794328,1,300};
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18.wss",1.25,1,250};
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18.wss",1.7,1,300};
				begin1[] = {"A3\Sounds_F_epc\weapons\cas_02_cannon",1.77828,1,3800};
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_2",1.99526,1,3500};
				begin1[] = {"A3\Sounds_F_Exp\arsenal\vehicle_weapons\gatling_20mm\20mm_01_burst",3.16228,1,1500,{6924,24260}};
				begin1[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_1",1,1,700};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",5.01187,1,2200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_short_01",1,1,500};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_01",1.77828,1,1800};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",0.707946,1,400};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",1,1,400};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",1.58489,1,300};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_01",2.51189,1,1200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1,1,300};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",1,1,400};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01",1,1,1200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01",1.58489,1,1200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1,1,200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1.58489,1,400};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_01",1.25893,1,1200};
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_01",1,1,300};
				begin1[] = {};
				begin2[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_Sample_2.wss",1,1,1000};
				begin2[] = {"\WW2\Assets_s\Weapons\MachineGun_Light\DP28\Dp27_Shot.wss",1.41254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_02",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_short_02",7.94328,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_short_02",2.51189,1,2200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_02",1.77828,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.891251,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_02",1.77828,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_02",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_02",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_short_02",0.562341,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.98107,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02",0.562341,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.16228,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.562341,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_02",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_02",2.51189,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_02",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_02",3.16228,1,1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.794328,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",3.16228,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02",1.99526,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.25893,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_02",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_02",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.12202,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_02",1.77828,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_02",1.77828,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.99526,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02",1.58489,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_02",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_02",1,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_02",1,1.1,2000};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19.wss",0.794328,1,300};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19.wss",1.25,1,250};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19.wss",1.7,1,300};
				begin2[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_2",1,1,700};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02",5.01187,1,2200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_short_02",1,1,500};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_02",1.77828,1,1800};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_02",0.707946,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_02",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",1.58489,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_02",2.51189,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02",1,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02",1.58489,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1,1,200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1.58489,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_02",1.25893,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_02",1,1,300};
				begin3[] = {"\WW2\Assets_s\Vehicles\StaticWeapons_s\Maxim_M30\Maxim_M30_Sample_3.wss",1,1,1000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_short_03",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_03",1.77828,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.891251,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_short_03",1.77828,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_03",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_03",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_short_03",0.562341,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.98107,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03",0.562341,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.16228,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.562341,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_short_03",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_short_03",2.51189,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_short_03",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_03",3.16228,1,1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.794328,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",3.16228,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03",1.99526,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_short_03",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_short_03",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.12202,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_03",1.77828,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_03",1.77828,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.99526,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03",1.58489,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_03",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_03",1,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_03",1,0.9,2000};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11.wss",0.794328,1,300};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11.wss",1.25,1,250};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11.wss",1.7,1,300};
				begin3[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_3",1,1,700};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03",5.01187,1,2200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_short_03",1.77828,1,1800};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_03",0.707946,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_03",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",1.58489,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_short_03",2.51189,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03",1,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03",1.58489,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1,1,200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1.58489,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_03",1.25893,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_03",1,1,300};
				beginwater1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",1,1,400};
				beginwater2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",1,1,400};
				beginwater3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",1,1,400};
				closure1[] = {"",1.03514,1,10};
				closure1[] = {"\A3\sounds_f\weapons\closure\sfx7.wss",1.7782,1,40};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.398107,1.2,30};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",0.398107,1,40};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.562341,1,30};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.251189,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01",0.316228,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Closure_ACPC2_01",0.125893,1,30};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.223872,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.158489,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_01",0.199526,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.177828,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",0.562341,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.251189,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.316228,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",0.316228,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",0.501187,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",0.501187,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01",0.501187,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",0.562341,1,10};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				closure1[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_1",4,1,10};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_1.wss",2,1,15};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_1.wss",2.7,1,10};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2,1,10};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_4.wss",2.5,1,15};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",2,1,10};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.16228,1,300};
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",5,1,10};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.630957,1,20};
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.562341,1,40};
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7.wss",1.77828,1,40};
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7.wss",3,1,10};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_01",1,1,30};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01",0.398107,1,30};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Closure_01",0.398107,1,30};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_01",0.398107,1,30};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01",0.630957,1,10};
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_01",0.446684,1,10};
				closure1[] = {};
				closure2[] = {"",1.03514,1.1,10};
				closure2[] = {"\A3\sounds_f\weapons\closure\sfx8.wss",1.7782,1,40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.398107,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",0.398107,1,40};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1.77828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.562341,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02",0.316228,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Closure_ACPC2_02",0.125893,1.1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.223872,1.2,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.158489,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Closure_Zubr_02",0.199526,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.177828,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.251189,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.316228,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",0.316228,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",0.562341,1.1,10};
				closure2[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_2",4,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_2.wss",2,1,15};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3.wss",2.7,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_5.wss",2.5,1,15};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",2,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",2,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.16228,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",5,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.630957,1.2,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.562341,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8.wss",1.77828,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8.wss",3,1,10};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.316228,1,20};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_02",1,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Closure_02",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Closure_02",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02",0.630957,1,10};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_02",0.446684,1,10};
				closure2[] = {};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.251189,1,10};
				closure3[] = {"A3\sounds_f\vehicles\armor\noises\closure_tank_cannon_3",4,1,10};
				closure3[] = {"A3\sounds_f\weapons\closure\sfx1.wss",2.7,1,10};
				closure3[] = {"A3\sounds_f\weapons\closure\sfx4.wss",3,1,10};
				closure3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03",0.630957,1,10};
				closure4[] = {"A3\sounds_f\weapons\closure\sfx1.wss",3,1,10};
				drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1,1,10};
				reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_reload",1,1,10};
				soundBegin[] = {"begin1",0.3,"begin2",0.4,"begin3",0.7};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				soundBegin[] = {"begin1",1};
				soundBegin[] = {"begin1",33,"begin2",33,"begin3",33};
				soundBegin[] = {};
				soundBeginWater[] = {"beginwater1",0.33,"beginwater2",0.33,"beginwater3",0.34};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.33};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
				soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5,"closure4",0.5};
				soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundClosure[] = {"closure1",1};
				soundClosure[] = {};
				sounds[] = {"StandardSound"};
				soundSet = "";
				soundSetShot[] = {"4Five_Shot_SoundSet","4Five_Tail_SoundSet","4Five_InteriorTail_SoundSet"};
				SoundSetShot[] = {"4Five_silencerShot_SoundSet","4Five_silencerTail_SoundSet","4Five_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"ACPC2_Shot_SoundSet","ACPC2_Tail_SoundSet","ACPC2_InteriorTail_SoundSet"};
				SoundSetShot[] = {"ACPC2_silencerShot_SoundSet","ACPC2_silencerTail_SoundSet","ACPC2_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
				SoundSetShot[] = {"AK47_silencerShot_SoundSet","AK47_silencerTail_SoundSet","AK47_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
				SoundSetShot[] = {"AK74_silencerShot_SoundSet","AK74_silencerTail_SoundSet","AK74_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				soundsetshot[] = {"Autocannon35mm_Shot_SoundSet","Autocannon35mm_Tail_SoundSet"};
				soundSetShot[] = {"Autocannon35mm_Shot_SoundSet","Autocannon35mm_Tail_SoundSet"};
				soundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				SoundSetShot[] = {"Cannon105mm_Shot_SoundSet","Cannon105mm_Tail_SoundSet"};
				SoundSetShot[] = {"Cannon120mm_Shot_SoundSet","Cannon120mm_Tail_SoundSet"};
				SoundSetShot[] = {"Cannon125mm_Shot_SoundSet","Cannon125mm_Tail_SoundSet"};
				SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
				soundsetshot[] = {"DMR01_Shot_SoundSet","DMR01_Tail_SoundSet","DMR01_InteriorTail_SoundSet"};
				soundsetshot[] = {"DMR01_silencerShot_SoundSet","DMR01_silencerTail_SoundSet","DMR01_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_tail_SoundSet","DMR02_InteriorTail_SoundSet"};
				SoundSetShot[] = {"DMR02_silencerShot_SoundSet","DMR02_silencerTail_SoundSet","DMR02_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"DMR03_Shot_SoundSet","DMR03_tail_SoundSet","DMR03_InteriorTail_SoundSet"};
				SoundSetShot[] = {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"DMR04_Shot_SoundSet","DMR04_tail_SoundSet","DMR04_InteriorTail_SoundSet"};
				soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
				SoundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
				SoundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"DMR07_Shot_SoundSet","DMR07_Tail_SoundSet","DMR07_InteriorTail_SoundSet"};
				SoundSetShot[] = {"DMR07_silencerShot_SoundSet","DMR07_silencerTail_SoundSet","DMR07_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"GER_LMG_MG42_SHOT","GER_LMG_MG42_TAIL"};
				soundSetShot[] = {"GM6Lynx_Shot_SoundSet","GM6Lynx_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
				soundSetShot[] = {"GMG20mm_Shot_SoundSet","GMG20mm_Tail_SoundSet"};
				soundSetShot[] = {"GMG40mm_Shot_SoundSet","GMG40mm_Tail_SoundSet"};
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"};
				soundsetshot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
				soundSetShot[] = {"HMG127mm_shot_SoundSet","HMG127mm_tail_SoundSet"};
				soundsetshot[] = {"HMG127mm_static_shot_SoundSet","HMG127mm_static_tail_SoundSet"};
				soundSetShot[] = {"Katiba_Shot_SoundSet","Katiba_Tail_SoundSet","Katiba_InteriorTail_SoundSet"};
				soundSetShot[] = {"Katiba_silencerShot_SoundSet","Katiba_silencerTail_SoundSet","Katiba_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet","Launcher_NLAW_Tail_SoundSet"};
				soundSetShot[] = {"Launcher_RPG32_Shot_SoundSet","Launcher_RPG32_Tail_SoundSet"};
				soundSetShot[] = {"Launcher_RPG7_Shot_SoundSet","Launcher_RPG7_Tail_SoundSet"};
				soundSetShot[] = {"Launcher_Titan_Shot_SoundSet","Launcher_Titan_Tail_SoundSet"};
				soundSetShot[] = {"LIB_LAUNCHER_SHOT_SOUNDSET","LIB_ROCKETLAUNCHER_TAIL_SOUNDSET"};
				soundSetShot[] = {"LIB_PlaneWeapon_HMG_SoundSet"};
				soundsetshot[] = {"LMG65mmBody_Shot_SoundSet","LMG65mmBody_Tail_SoundSet"};
				soundsetshot[] = {"LMG65mmTurret_Shot_SoundSet","LMG65mmTurret_Tail_SoundSet"};
				soundsetshot[] = {"LMGCoax762mm_Shot_SoundSet","LMGCoax762mm_Tail_SoundSet"};
				soundsetshot[] = {"LMGMinigun65mm_Shot_SoundSet","LMGMinigun65mm_Tail_SoundSet"};
				soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
				soundSetShot[] = {"Makarov_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
				soundSetShot[] = {"Makarov_silencerShot_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"Mk18_Shot_SoundSet","Mk18_tail_SoundSet","Mk18_InteriorTail_SoundSet"};
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
				SoundSetShot[] = {"Mk200_silencerShot_SoundSet","Mk200_silencerTail_SoundSet","Mk200_silencerInteriorTail_SoundSet"};
				soundsetshot[] = {"MMG_SPMG_shot_SoundSet","MMG_SPMG_tail_SoundSet"};
				soundSetShot[] = {"MMG01_Shot_SoundSet","MMG01_Tail_SoundSet","MMG01_InteriorTail_SoundSet"};
				SoundSetShot[] = {"MMG01_silencerShot_SoundSet","MMG01_silencerTail_SoundSet","MMG01_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"MMG02_Shot_SoundSet","MMG02_Tail_SoundSet","MMG02_InteriorTail_SoundSet"};
				SoundSetShot[] = {"MMG02_silencerShot_SoundSet","MMG02_silencerTail_SoundSet","MMG02_silencerInteriorTail_SoundSet"};
				SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"P07_Shot_SoundSet","P07_Tail_SoundSet","P07_InteriorTail_SoundSet"};
				SoundSetShot[] = {"P07_silencerShot_SoundSet","P07_silencerTail_SoundSet","P07_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"RocketsLight_Shot_SoundSet"};
				soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"Rook40_Shot_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
				SoundSetShot[] = {"Rook40_silencerShot_SoundSet","Rook40_silencerTail_SoundSet","Rook40_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"RU_RIFLE_MOSIN_SHOT_SOUNDSET","RU_RIFLE_MOSIN_TAIL_SOUNDSET"};
				soundSetShot[] = {"RU_RIFLE_SVT_SHOT","RU_RIFLE_SVT_TAIL"};
				SoundSetShot[] = {"SDAR_Shot_SoundSet","SDAR_Tail_SoundSet","SDAR_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SMGPDW2000_Shot_SoundSet","SMGPDW2000_Tail_SoundSet","SMGPDW2000_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SMGPDW2000_silencerShot_SoundSet","SMGPDW2000_silencerTail_SoundSet","SMGPDW2000_silencerInteriorTail_SoundSet"};
				SoundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SMGSting_silencerShot_SoundSet","SMGSting_silencerTail_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"SPAR_17_Shot_SoundSet","SPAR_17_Tail_SoundSet","SPAR_17_interiorTail_SoundSet"};
				soundSetShot[] = {"SPAR_17_silencerShot_SoundSet","SPAR_17_silencerTail_SoundSet","SPAR_17_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
				SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"TRG20_Shot_SoundSet","TRG20_Tail_SoundSet","TRG20_InteriorTail_SoundSet"};
				soundsetshot[] = {"TRG20_silencerShot_SoundSet","TRG20_silencerTail_SoundSet","TRG20_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
				soundSetShot[] = {"Type115_silencerShot_SoundSet","Type115_silencerTail_SoundSet","Type115_silencerInteriorTail_SoundSet"};
				soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
				soundSetShot[] = {"us_rifle_m1garand_SHOT","LIB_RIFLE_TAIL_SOUNDSET"};
				soundSetShot[] = {"Zafir_Shot_SoundSet","Zafir_Tail_SoundSet","Zafir_InteriorTail_SoundSet"};
				soundSetShot[] = {"Zubr_Shot_SoundSet","Zubr_Tail_SoundSet","Zubr_InteriorTail_SoundSet"};
				weaponSoundEffect = "";
				weaponSoundEffect = "DefaultRifle";
				weaponSoundEffect = "IF_DefaultRifle";
				weaponSoundEffect = "IF_DefaultRifle_snds";
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.99526,1,1500};
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.99526,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.99526,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.99526,1,1500};
					frequency = 1;
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_forest",1,1,200};
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_houses",1,1,200};
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_interior",2.23872,1,200};
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_meadows",1,1,200};
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_trees",1,1,200};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
					soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
					soundSetShot[] = {"Autocannon30mmBody_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmTurret_Tail_SoundSet"};
					soundsetshot[] = {"Autocannon40mm_Shot_SoundSet","Autocannon40mm_Tail_SoundSet"};
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					volume = "(1-interior/1.4)*forest";
					volume = "(1-interior/1.4)*houses";
					volume = "(1-interior/1.4)*trees";
					volume = "interior";
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.99526,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.99526,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",1.99526,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",1,1,2200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.58489,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1.99526,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest.wss",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses.wss",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",1.99526,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior.wss",1.99526,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows.wss",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees.wss",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.99526,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior.wss",1.09526,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.41254,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_forest",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_houses",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_interior",1.41254,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_meadows",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_trees",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_forest",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_houses",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_interior",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_meadows",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\Silencer_Acpc2_tail_trees",1,1,600};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.41254,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_forest",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_houses",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_interior",1.41254,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_meadows",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tail_trees",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",1.58489,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",2.23872,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",1.58489,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Silencer_Mk20_Tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",1.58489,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",1.58489,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.58489,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1,1,1400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.58489,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior.wss",1.05849,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees.wss",1,1,1000};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.58489,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_forest",2.23872,1,2200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_houses",2.23872,1,2200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_interior",2.23872,1,2200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_meadows",2.23872,1,2200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_trees",2.23872,1,2200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_forest",1,1,500};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_houses",1,1,500};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_interior",1,1,500};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_meadows",1,1,500};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_tail_trees",1,1,500};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior",1.99526,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_interior",1.99526,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_forest",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_houses",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_interior",1.41254,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_meadows",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_trees",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_interior",1.41254,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_interior",1.41254,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.41254,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.41254,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1,1,1800};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1,1,400};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_forest",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_houses",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_interior",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_meadows",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_trees",1,1,1200};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_forest",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_houses",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_interior",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_meadows",1,1,300};
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_trees",1,1,300};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						volume = "(1-interior/1.4)*forest";
						volume = "(1-interior/1.4)*houses";
						volume = "(1-interior/1.4)*trees";
						volume = "interior";

*/