_starTick = diag_tickTime;

startLoadingScreen [""];

_fnc_configParser = compile preprocessFileLineNumbers "ConfigParser.sqf";

_myInitString = format ["A3_FX_Sorted_Inherited.cpp"];
"ConfigDumpFileIO" callExtension ("open:" + _myInitString);

//[configFile/"CfgMovesBasic",true] call _fnc_configParser;

[configFile/"CfgCoreData",true] call _fnc_configParser;
[configFile/"CfgCloudlets",true] call _fnc_configParser;
[configFile/"WeaponFireGun",true] call _fnc_configParser;
[configFile/"WeaponFireMGun",true] call _fnc_configParser;
[configFile/"WeaponCloudsGun",true] call _fnc_configParser;
[configFile/"WeaponCloudsMGun",true] call _fnc_configParser;
[configFile/"CfgLights",true] call _fnc_configParser;
[configFile/"MachineGunEject",true] call _fnc_configParser;
[configFile/"MachineGunCartridge",true] call _fnc_configParser;
[configFile/"MachineGunCartridge1",true] call _fnc_configParser;
[configFile/"MachineGunCartridge2",true] call _fnc_configParser;
[configFile/"MachineGunCloud",true] call _fnc_configParser;
[configFile/"RifleAssaultCloud",true] call _fnc_configParser;
[configFile/"SniperCloud",true] call _fnc_configParser;
[configFile/"CaselessAmmoCloud",true] call _fnc_configParser;
[configFile/"PistolCloud",true] call _fnc_configParser;
[configFile/"GrenadeLauncherCloud",true] call _fnc_configParser;
[configFile/"FlareTest",true] call _fnc_configParser;
[configFile/"CounterMeasureFlare",true] call _fnc_configParser;
[configFile/"CounterMeasureChaff",true] call _fnc_configParser;
[configFile/"FlareShell",true] call _fnc_configParser;
[configFile/"MissileManualEffects",true] call _fnc_configParser;
[configFile/"MissileEffects",true] call _fnc_configParser;
[configFile/"MachineGun1",true] call _fnc_configParser;
[configFile/"MachineGun2",true] call _fnc_configParser;
[configFile/"AutoCannonFired",true] call _fnc_configParser;
[configFile/"35mmFlakFlash",true] call _fnc_configParser;
[configFile/"MissileDAR1",true] call _fnc_configParser;
[configFile/"CannonFiredBC",true] call _fnc_configParser;
[configFile/"ArtilleryFired1",true] call _fnc_configParser;
[configFile/"ArtilleryFiredL",true] call _fnc_configParser;
[configFile/"ArtilleryFiredR",true] call _fnc_configParser;
[configFile/"MLRSFired",true] call _fnc_configParser;
[configFile/"MortarFired",true] call _fnc_configParser;
[configFile/"Missile0",true] call _fnc_configParser;
[configFile/"Missile1",true] call _fnc_configParser;
[configFile/"Missile2",true] call _fnc_configParser;
[configFile/"Missile3",true] call _fnc_configParser;
[configFile/"Missile4",true] call _fnc_configParser;
[configFile/"Missile5",true] call _fnc_configParser;
[configFile/"SmokeTrailEffectMain1",true] call _fnc_configParser;
[configFile/"SmokeTrailEffectMain2",true] call _fnc_configParser;
[configFile/"WPTrailEffectMain2",true] call _fnc_configParser;
[configFile/"ImpactEffectsBig",true] call _fnc_configParser;
[configFile/"ImpactEffectsStandard",true] call _fnc_configParser;
[configFile/"ImpactEffectsMedium",true] call _fnc_configParser;
[configFile/"GrenadeCrater",true] call _fnc_configParser;
[configFile/"IEDMineBigExplosion",true] call _fnc_configParser;
[configFile/"IEDMineBigGarbageCrater",true] call _fnc_configParser;
[configFile/"IEDMineFlame",true] call _fnc_configParser;
[configFile/"IEDMineBigLandCrater",true] call _fnc_configParser;
[configFile/"IEDMineSmallExplosion",true] call _fnc_configParser;
[configFile/"IEDMineSmallGarbageCrater",true] call _fnc_configParser;
[configFile/"IEDMineSmallLandCrater",true] call _fnc_configParser;
[configFile/"MortarCrater",true] call _fnc_configParser;
[configFile/"ArtyShellCrater",true] call _fnc_configParser;
[configFile/"SecondaryCrater",true] call _fnc_configParser;
[configFile/"ExploAmmoCrater",true] call _fnc_configParser;
[configFile/"ShotUnderwater",true] call _fnc_configParser;
[configFile/"AmmoUnderwater",true] call _fnc_configParser;
[configFile/"AmmoClassic",true] call _fnc_configParser;
[configFile/"ArtilleryTrails",true] call _fnc_configParser;
[configFile/"BCImpactEffectsSmall",true] call _fnc_configParser;
[configFile/"BCImpactEffectsHardGround",true] call _fnc_configParser;
[configFile/"BCImpactConcrete",true] call _fnc_configParser;
[configFile/"BCImpactConcrete_50cal",true] call _fnc_configParser;
[configFile/"BCImpactConcrete_20mm",true] call _fnc_configParser;
[configFile/"BCImpactConcrete_30mm",true] call _fnc_configParser;
[configFile/"BCImpactConcrete_30mmHE",true] call _fnc_configParser;
[configFile/"BCImpactDirt_50cal",true] call _fnc_configParser;
[configFile/"BCImpactDirt_20mm",true] call _fnc_configParser;
[configFile/"BCImpactDirt_30mm",true] call _fnc_configParser;
[configFile/"BCImpactDirt_30mmHE",true] call _fnc_configParser;
[configFile/"BCImpactDirt_35mmHE",true] call _fnc_configParser;
[configFile/"BCImpactDirt_30mmHE_Gatling",true] call _fnc_configParser;
[configFile/"BCImpactConcrete_120mm",true] call _fnc_configParser;
[configFile/"BCImpactConcrete_120mmHE",true] call _fnc_configParser;
[configFile/"BCImpactDirt_120mm",true] call _fnc_configParser;
[configFile/"BCImpactDirt_120mmHE",true] call _fnc_configParser;
[configFile/"ImpactEffectsSmall",true] call _fnc_configParser;
[configFile/"ImpactEffectsHardGround",true] call _fnc_configParser;
[configFile/"ImpactEffectsSea",true] call _fnc_configParser;
[configFile/"ImpactEffectsSeaMen",true] call _fnc_configParser;
[configFile/"ImpactEffectsAir",true] call _fnc_configParser;
[configFile/"ImpactEffectsWater",true] call _fnc_configParser;
[configFile/"ImpactEffectsWaterBig",true] call _fnc_configParser;
[configFile/"ImpactEffectsWaterRocket",true] call _fnc_configParser;
[configFile/"ImpactEffectsWaterHE",true] call _fnc_configParser;
[configFile/"ImpactEffectsWaterExplosion",true] call _fnc_configParser;
[configFile/"ImpactEffectsDeepWaterExplosion",true] call _fnc_configParser;
[configFile/"ImpactMetal",true] call _fnc_configParser;
[configFile/"ImpactMetalSabotSmall",true] call _fnc_configParser;
[configFile/"ImpactMetalSabotBig",true] call _fnc_configParser;
[configFile/"ImpactEffectsGroundSabot",true] call _fnc_configParser;
[configFile/"ImpactEffectsGroundSabotBig",true] call _fnc_configParser;
[configFile/"ImpactConcreteSabot",true] call _fnc_configParser;
[configFile/"ImpactConcreteSabotSmall",true] call _fnc_configParser;
[configFile/"ImpactGlass",true] call _fnc_configParser;
[configFile/"ImpactGlassThin",true] call _fnc_configParser;
[configFile/"ImpactWood",true] call _fnc_configParser;
[configFile/"ImpactPlaster",true] call _fnc_configParser;
[configFile/"ImpactPlastic",true] call _fnc_configParser;
[configFile/"ImpactRubber",true] call _fnc_configParser;
[configFile/"ImpactConcrete",true] call _fnc_configParser;
[configFile/"ImpactLeaves",true] call _fnc_configParser;
[configFile/"ImpactLeavesGreen",true] call _fnc_configParser;
[configFile/"ImpactLeavesDead",true] call _fnc_configParser;
[configFile/"ImpactLeavesGreenBig",true] call _fnc_configParser;
[configFile/"ImpactLeavesPalm",true] call _fnc_configParser;
[configFile/"ImpactLeavesPine",true] call _fnc_configParser;
[configFile/"ExplosionEffectsWater",true] call _fnc_configParser;
[configFile/"CannonFire",true] call _fnc_configParser;
[configFile/"HeavyCaliber",true] call _fnc_configParser;
[configFile/"RocketBackEffectsNLAW",true] call _fnc_configParser;
[configFile/"RocketBackEffectsRPG",true] call _fnc_configParser;
[configFile/"RocketBackEffectsRPGNT",true] call _fnc_configParser;
[configFile/"RocketBackEffectsStaticRPG",true] call _fnc_configParser;
[configFile/"SencondaryExplosion",true] call _fnc_configParser;
[configFile/"MineNondirectionalCrater",true] call _fnc_configParser;
[configFile/"MineNondirectionalCraterSmall",true] call _fnc_configParser;
[configFile/"MineNondirectionalExplosion",true] call _fnc_configParser;
[configFile/"MineNondirectionalExplosionSmall",true] call _fnc_configParser;
[configFile/"MineUnderwaterExplosion",true] call _fnc_configParser;
[configFile/"MineUnderwaterABExplosion",true] call _fnc_configParser;
[configFile/"MineUnderwaterPDMExplosion",true] call _fnc_configParser;
[configFile/"WPExplosion",true] call _fnc_configParser;
[configFile/"ExplosionEffects",true] call _fnc_configParser;
[configFile/"BasicAmmoExplosion",true] call _fnc_configParser;
[configFile/"AmmoBulletEffect",true] call _fnc_configParser;
[configFile/"MineExplosion",true] call _fnc_configParser;
[configFile/"ATMineExplosion",true] call _fnc_configParser;
[configFile/"MineCrater",true] call _fnc_configParser;
[configFile/"ATMineCrater",true] call _fnc_configParser;
[configFile/"BoundingMineExplosion",true] call _fnc_configParser;
[configFile/"BoundingMineCrater",true] call _fnc_configParser;
[configFile/"MineJumpEffect",true] call _fnc_configParser;
[configFile/"DirectionalMineExplosion",true] call _fnc_configParser;
[configFile/"DirectionalMineExplosionBig",true] call _fnc_configParser;
[configFile/"DirectionalMineCrater",true] call _fnc_configParser;
[configFile/"HERocketExplosion",true] call _fnc_configParser;
[configFile/"HEShellExplosion",true] call _fnc_configParser;
[configFile/"HEShellCrater",true] call _fnc_configParser;
[configFile/"ArtyShellExplosion",true] call _fnc_configParser;
[configFile/"HelicopterExplosionEffects",true] call _fnc_configParser;
[configFile/"HelicopterExplosionEffects2",true] call _fnc_configParser;
[configFile/"ExplosionSparksLight",true] call _fnc_configParser;
[configFile/"Fireball_Glow",true] call _fnc_configParser;
[configFile/"CannonMuzzleFlash",true] call _fnc_configParser;
[configFile/"SmokeTrail_Blastcore1",true] call _fnc_configParser;
[configFile/"SmokeTrail_Blastcore3",true] call _fnc_configParser;
[configFile/"Blastcore_Vehicle_Explosion_Emit",true] call _fnc_configParser;
[configFile/"Blastcore_Vehicle_Explosion_Sparks",true] call _fnc_configParser;
[configFile/"SmokeTrail_Blastcore2",true] call _fnc_configParser;
[configFile/"Smoke_Trail_TankRound_EmitterLink_Small",true] call _fnc_configParser;
[configFile/"Smoke_Trail_TankRound_EmitterLink_BaseSmoke",true] call _fnc_configParser;
[configFile/"Smoke_Trail_TankRound_EmitterLink",true] call _fnc_configParser;
[configFile/"Blastcore_Smoke_TankRound_01_Link",true] call _fnc_configParser;
[configFile/"Smoke_Trail_TankRound_EmitterLink_02",true] call _fnc_configParser;
[configFile/"Blastcore_TankRound_SmokeTrail",true] call _fnc_configParser;
[configFile/"Smoke_Trail_TankRoundConcrete_EmitterLink",true] call _fnc_configParser;
[configFile/"Blastcore_Smoke_TankRoundConcrete_01_Link",true] call _fnc_configParser;
[configFile/"Smoke_Trail_TankRoundConcrete_EmitterLink_02",true] call _fnc_configParser;
[configFile/"Blastcore_TankRoundConcrete_SmokeTrail",true] call _fnc_configParser;
[configFile/"SmokeTrail_BlastcoreBulletRound_Ground",true] call _fnc_configParser;
[configFile/"SmokeTrail_BlastcoreBulletRound_Ground2",true] call _fnc_configParser;
[configFile/"SmokeTrail_BlastcoreHeavyBulletRound_Ground",true] call _fnc_configParser;
[configFile/"Grenade_Link1",true] call _fnc_configParser;
[configFile/"Grenade_Link2",true] call _fnc_configParser;
[configFile/"SmokeTrail_BlastcoreHeavyBulletRound_Ground2",true] call _fnc_configParser;
[configFile/"bullet_Concrete",true] call _fnc_configParser;
[configFile/"50cal_Concrete",true] call _fnc_configParser;
[configFile/"Smoke_Trail_Rocket_EmitterLink",true] call _fnc_configParser;
[configFile/"Blastcore_Artillery_Explosion_EmitterLink",true] call _fnc_configParser;
[configFile/"Blastcore_Artillery_ExplosionSmoke_EmitterLink",true] call _fnc_configParser;
[configFile/"Smoke_Trail_Artillery_EmitterLink",true] call _fnc_configParser;
[configFile/"Blastcore_Smoke_Artillery_01_Link",true] call _fnc_configParser;
[configFile/"Smoke_Trail_Artillery_EmitterLink_02",true] call _fnc_configParser;
[configFile/"Blastcore_Artillery_SmokeTrail",true] call _fnc_configParser;
[configFile/"flakcasingmoke",true] call _fnc_configParser;
[configFile/"Blastcore_Shockwave_Large_Dust",true] call _fnc_configParser;
[configFile/"Blastcore_Blood_01",true] call _fnc_configParser;
[configFile/"Blastcore_Blood_02",true] call _fnc_configParser;
[configFile/"AA_Explode_Smoke",true] call _fnc_configParser;
[configFile/"DirtTrail_Blastcore1",true] call _fnc_configParser;
[configFile/"DirtTrail_Blastcore2",true] call _fnc_configParser;
[configFile/"RockBackfireLight",true] call _fnc_configParser;
[configFile/"CMeasuresFlareLight",true] call _fnc_configParser;
[configFile/"ExplosionShardsFire",true] call _fnc_configParser;
[configFile/"Flamelight",true] call _fnc_configParser;
[configFile/"VehicleExplosionEffectsBig",true] call _fnc_configParser;
[configFile/"VehicleExplosionEffects",true] call _fnc_configParser;
[configFile/"RocketExplosion",true] call _fnc_configParser;
[configFile/"Demo_Charge_Explode",true] call _fnc_configParser;
[configFile/"Demo_Charge_Smoke",true] call _fnc_configParser;
[configFile/"M136_Explode",true] call _fnc_configParser;
[configFile/"M136_Smoke",true] call _fnc_configParser;
[configFile/"GrenadeExplosion",true] call _fnc_configParser;
[configFile/"80mm_Explode",true] call _fnc_configParser;
[configFile/"MortarExplosion",true] call _fnc_configParser;
[configFile/"155mm_Explode",true] call _fnc_configParser;
[configFile/"MGunSmoke",true] call _fnc_configParser;
[configFile/"ExhaustsEffect",true] call _fnc_configParser;
[configFile/"ExhaustEffectOffroad",true] call _fnc_configParser;
[configFile/"ExhaustEffectStrider",true] call _fnc_configParser;
[configFile/"ExhaustsEffectFBoat",true] call _fnc_configParser;
[configFile/"ExhaustsEffectBig",true] call _fnc_configParser;
[configFile/"ExhaustsEffectAMV",true] call _fnc_configParser;
[configFile/"ExhaustEffectTractor",true] call _fnc_configParser;
[configFile/"ExhaustEffectHEMTT",true] call _fnc_configParser;
[configFile/"ExhaustEffectHTruck",true] call _fnc_configParser;
[configFile/"ExhaustEffectIfrit",true] call _fnc_configParser;
[configFile/"ExhaustEffectHeli",true] call _fnc_configParser;
[configFile/"ExhaustsEffectHeliMed",true] call _fnc_configParser;
[configFile/"ExhaustsEffectHeliBig",true] call _fnc_configParser;
[configFile/"ExhaustsEffectPlane",true] call _fnc_configParser;
[configFile/"ExhaustsEffectPlaneBig",true] call _fnc_configParser;
[configFile/"ExhaustEffectOnWater",true] call _fnc_configParser;
[configFile/"ExhaustEffectBigOnWater",true] call _fnc_configParser;
[configFile/"LDustEffects",true] call _fnc_configParser;
[configFile/"RDustEffects",true] call _fnc_configParser;
[configFile/"DustEffectBottom",true] call _fnc_configParser;
[configFile/"LDustEffectsMan",true] call _fnc_configParser;
[configFile/"RDustEffectsMan",true] call _fnc_configParser;
[configFile/"LSandEffects",true] call _fnc_configParser;
[configFile/"RSandEffects",true] call _fnc_configParser;
[configFile/"LSandEffectsBig",true] call _fnc_configParser;
[configFile/"RSandEffectsBig",true] call _fnc_configParser;
[configFile/"LDirtEffects",true] call _fnc_configParser;
[configFile/"RDirtEffects",true] call _fnc_configParser;
[configFile/"LDirtEffectsBig",true] call _fnc_configParser;
[configFile/"RDirtEffectsBig",true] call _fnc_configParser;
[configFile/"LGrassEffects",true] call _fnc_configParser;
[configFile/"RGrassEffects",true] call _fnc_configParser;
[configFile/"LGrassEffectsBig",true] call _fnc_configParser;
[configFile/"RGrassEffectsBig",true] call _fnc_configParser;
[configFile/"LGrassDryEffects",true] call _fnc_configParser;
[configFile/"RGrassDryEffects",true] call _fnc_configParser;
[configFile/"LGrassEffectsDryBig",true] call _fnc_configParser;
[configFile/"RGrassEffectsDryBig",true] call _fnc_configParser;
[configFile/"LStonesEffects",true] call _fnc_configParser;
[configFile/"RStonesEffects",true] call _fnc_configParser;
[configFile/"LStonesEffectsBig",true] call _fnc_configParser;
[configFile/"RStonesEffectsBig",true] call _fnc_configParser;
[configFile/"PersonDust",true] call _fnc_configParser;
[configFile/"RFastWaterEffects",true] call _fnc_configParser;
[configFile/"LFastWaterEffects",true] call _fnc_configParser;
[configFile/"RWaterEffects",true] call _fnc_configParser;
[configFile/"LWaterEffects",true] call _fnc_configParser;
[configFile/"REngEffects",true] call _fnc_configParser;
[configFile/"LEngEffects",true] call _fnc_configParser;
[configFile/"REngEffectsSmall",true] call _fnc_configParser;
[configFile/"LEngEffectsSmall",true] call _fnc_configParser;
[configFile/"WaterWhirlEffect",true] call _fnc_configParser;
[configFile/"FDustEffects",true] call _fnc_configParser;
[configFile/"HeliDust",true] call _fnc_configParser;
[configFile/"HeliWater",true] call _fnc_configParser;
[configFile/"DamageSmokeHeli",true] call _fnc_configParser;
[configFile/"DamageSmokePlane",true] call _fnc_configParser;
[configFile/"SmallFire",true] call _fnc_configParser;
[configFile/"SmallFireBarrel",true] call _fnc_configParser;
[configFile/"ChemlightLight_green",true] call _fnc_configParser;
[configFile/"ChemlightLight_red",true] call _fnc_configParser;
[configFile/"ChemlightLight_yellow",true] call _fnc_configParser;
[configFile/"ChemlightLight_blue",true] call _fnc_configParser;
[configFile/"ScudEffect",true] call _fnc_configParser;
[configFile/"AirDestructionEffects",true] call _fnc_configParser;
[configFile/"AircraftDebris",true] call _fnc_configParser;
[configFile/"AircraftDebris2",true] call _fnc_configParser;
[configFile/"AircraftFireball",true] call _fnc_configParser;
[configFile/"155mm_Smoke",true] call _fnc_configParser;
[configFile/"80mm_Smoke",true] call _fnc_configParser;
[configFile/"MK82_Smoke",true] call _fnc_configParser;
[configFile/"ATMissileExplosion",true] call _fnc_configParser;
[configFile/"ATMissileCrater",true] call _fnc_configParser;
[configFile/"HERocketCrater",true] call _fnc_configParser;
[configFile/"AAMissileExplosion",true] call _fnc_configParser;
[configFile/"AAMissileCrater",true] call _fnc_configParser;
[configFile/"ATRocketExplosion",true] call _fnc_configParser;
[configFile/"ATRocketCrater{};",true] call _fnc_configParser;
[configFile/"BombExplosion",true] call _fnc_configParser;
[configFile/"BombCrater",true] call _fnc_configParser;
[configFile/"AA_Explode",true] call _fnc_configParser;
[configFile/"AA_Smoke",true] call _fnc_configParser;
[configFile/"Hellfire_Smoke",true] call _fnc_configParser;
[configFile/"30mmSmoke",true] call _fnc_configParser;
[configFile/"Hellfire_Explode",true] call _fnc_configParser;
[configFile/"SABOT_Explode",true] call _fnc_configParser;
[configFile/"SABOT_Smoke",true] call _fnc_configParser;
[configFile/"MK82_Explode",true] call _fnc_configParser;
[configFile/"HERound_Emitter",true] call _fnc_configParser;
[configFile/"hellfire_explosiontrail",true] call _fnc_configParser;
[configFile/"M136_explosiontrail",true] call _fnc_configParser;
[configFile/"Hellfire_SmokeTrail_01",true] call _fnc_configParser;
[configFile/"Demo_Charge_Explosion_Emitter",true] call _fnc_configParser;
[configFile/"mk82_explosiontrail",true] call _fnc_configParser;
[configFile/"FuelTruck_ExplosionLink",true] call _fnc_configParser;
[configFile/"FuelTruck_FireLight",true] call _fnc_configParser;
[configFile/"AmmoTruck_ExplosionLink",true] call _fnc_configParser;
[configFile/"MLRS_Explode",true] call _fnc_configParser;
[configFile/"HERoundExplosion",true] call _fnc_configParser;
[configFile/"25mm_Explode",true] call _fnc_configParser;
[configFile/"ExploAmmoExplosion",true] call _fnc_configParser;
[configFile/"30mmExplode",true] call _fnc_configParser;
[configFile/"30mmExplode_Gatling",true] call _fnc_configParser;
[configFile/"120mm_HE",true] call _fnc_configParser;
[configFile/"BlastcoreImpactEffectsBlood",true] call _fnc_configParser;
[configFile/"ImpactEffectsBlood",true] call _fnc_configParser;
[configFile/"collisionEffect",true] call _fnc_configParser;
[configFile/"FireDamage",true] call _fnc_configParser;
[configFile/"EmptyEffect",true] call _fnc_configParser;
[configFile/"ScubaEffect",true] call _fnc_configParser;
[configFile/"WingVortices",true] call _fnc_configParser;
[configFile/"BodyVortices",true] call _fnc_configParser;
[configFile/"BulletBubbles",true] call _fnc_configParser;
[configFile/"ImpactUnderwater",true] call _fnc_configParser;
[configFile/"SmokeCS",true] call _fnc_configParser;
[configFile/"SmokeTrail_SmokeCS",true] call _fnc_configParser;
[configFile/"Blastcore_Smoke_Rocket_01_Link",true] call _fnc_configParser;
[configFile/"Smoke_Trail_Rocket_EmitterLink_02",true] call _fnc_configParser;
[configFile/"Blastcore_Rocket_SmokeTrail",true] call _fnc_configParser;
[configFile/"40mm_HE_Explode",true] call _fnc_configParser;
[configFile/"SmokeShellWhiteEffect",true] call _fnc_configParser;
[configFile/"SmokeShellWhiteSmall",true] call _fnc_configParser;
[configFile/"IncinerateShell",true] call _fnc_configParser;

[configFile/"CfgAmmo"/"MissileBase",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"BulletBase",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_127x33_Ball",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_127x99_Ball",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_127x108_Ball",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_127x108_APDS",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_20mm",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_30mm_AP",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_30mm_APFSDS",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Sh_120mm_APFSDS",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"FlareBase",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"F_40mm_White",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"FuelExplosion",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"FuelExplosionBig",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"HelicopterExploSmall",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"HelicopterExploBig",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_19mm_HE",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_30mm_HE",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Gatling_30mm_HE_Plane_CAS_01_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_25mm",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"B_35mm_AA",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Sh_120mm_HE",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Sh_125mm_HEAT",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Sh_105mm_HEAT_MP",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"rhs_ammo_3of26",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Sh_155mm_AMOS",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Sh_82mm_AMOS",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_PG_AT",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_AT",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Rocket_04_HE_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Rocket_04_AP_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Rocket_03_AP_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Rocket_03_HE_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"R_80mm_HE",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"rhs_ammo_Hydra_HE",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_RPG32_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_RPG32_AA_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"R_PG32V_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"R_TBG32V_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_NLAW_AT_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_Scalpel_AT",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Missile_AGM_02_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_Titan_AA",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_Air_AA",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Missile_AGM_01_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Missile_AA_04_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Missile_AA_03_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_Titan_AT",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"M_Titan_AP",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Bo_GBU12_LGB",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Bomb_04_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Bomb_03_F",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Bo_Mk82",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"R_230mm_HE",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"R_230mm_fly",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"Mo_cluster_AP",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"SatchelCharge_Remote_Ammo",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"DemoCharge_Remote_Ammo",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"rhs_ammo_Hellfire_AT",true] call _fnc_configParser;
[configFile/"CfgAmmo"/"rhs_ammo_agm65",true] call _fnc_configParser;

[configFile/"cfgWeapons"/"Default",true] call _fnc_configParser;
[configFile/"cfgWeapons"/"Rifle_Base_F",true] call _fnc_configParser;
[configFile/"cfgWeapons"/"autocannon_35mm",true] call _fnc_configParser;
[configFile/"cfgWeapons"/"cannon_120mm",true] call _fnc_configParser;

[configFile/"CfgVehicles"/"car",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"tank",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"B_Truck_01_fuel_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"B_Truck_01_ammo_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Truck_02_fuel_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"Truck_02_Ammo_base_F",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"CraterLong",true] call _fnc_configParser;
[configFile/"CfgVehicles"/"CraterLong_small",true] call _fnc_configParser;

"ConfigDumpFileIO" callExtension "close:yes";

endLoadingScreen;

_endTick = diag_tickTime;

diag_log["Runtime: ",(_endTick - _starTick)];

endMission "END1";