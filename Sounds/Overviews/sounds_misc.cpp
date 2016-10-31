class CfgNonAIVehicles
{
	class Bird
	{
		flySound[] = {"",0.0316228,1,1};
		singSound[] = {"",0.0316228,1,1};
	};
	class Insect: Bird
	{
		flySound[] = {"",0.0316228,1,1};
		singSound[] = {"",0.0316228,1,1};
	};
	class SeaGull: Bird
	{
		singSound[] = {"A3\Sounds_F\environment\animals\birds\seagul1",0.891251,1,200};
	};
	class DragonFly: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound",0.000562341,1,1};
	};
	class FireFly: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound",0.000562341,1,1};
	};
	class Cicada: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound",0.000562341,1,1};
	};
	class HouseFly: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound",0.001,1,1};
	};
	class HoneyBee: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound",0.001,1,1};
	};
	class Mosquito: Insect
	{
		flySound[] = {"\A3\sounds_f\dummysound",0.00141254,1,1};
	};
	class Kestrel_Random_F: Bird
	{
		singSound[] = {"A3\sounds_f\dummysound",0.00177828,1,1};
	};
	class Crowe: SeaGull
	{
		singSound[] = {"A3\Animals_F\Seagull\Data\crowe",0.891251,1,200};
	};
	class Eagle_F: Bird
	{
		singSound[] = {"A3\data_f_curator\sound\cfgNonAiVehicles\eagle_f_3",1,1,300};
	};
};
class CfgDestroySounds
{
	tree[] = {"falling_broadleaf_tree_SoundSet"};
	treehard[] = {"falling_broadleaf_tree_SoundSet"};
	treesoft[] = {"falling_broadleaf_tree_SoundSet"};
	bushhard[] = {"",""};
	bushsoft[] = {"",""};
	treeconifer[] = {"falling_broadleaf_tree_SoundSet"};
	treebroadleaf[] = {"falling_broadleaf_tree_SoundSet"};
	treepalm[] = {"falling_palm_tree_SoundSet"};
	shrubconifer[] = {""};
	shrubbroadleaf[] = {""};
};
class CfgDestroy
{
	class BuildingHit
	{
		sound[] = {};
	};
	access = 1;
	class EngineHit
	{
		sound[] = {"A3\sounds_f\dummysound",31.6228,1};
	};
};
class CfgSurfaces
{
	class Default
	{
		files = "default";
		rough = 0.075;
		dust = 0.1;
		lucidity = 1;
		isWater = 0;
		maxSpeedCoef = 1;
		friction = 0.9;
		restitution = 0;
		soundEnviron = "normalExt";
		character = "Empty";
		impact = "default_Mat";
		grassCover = 0;
		surfaceFriction = 2;
		tracksAlpha = 1;
		transparency = -1;
		AIAvoidStance = 0;
	};
	class Water
	{
		files = "more_anim*";
		rough = 0;
		dust = 0;
		lucidity = 1;
		maxSpeedCoef = 1;
		soundEnviron = "water";
		friction = 0.9;
		restitution = 0;
		isWater = 1;
		character = "Empty";
		impact = "hitWater";
		grassCover = 0;
	};
	class SurfRoadDirt: Default
	{
		access = 2;
		files = "surf_roaddirt_*";
		character = "Empty";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.05;
		dust = 0.4;
		lucidity = 0.8;
		maxSpeedCoef = 0.95;
		impact = "hitGroundHard";
		surfaceFriction = 1.8;
	};
	class SurfRoadConcrete: Default
	{
		access = 2;
		files = "surf_roadconcrete_*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "hard_ground";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		impact = "hitGroundHard";
		surfaceFriction = 2;
	};
	class SurfRoadTarmac: Default
	{
		access = 2;
		files = "surf_roadtarmac_*";
		character = "Empty";
		soundEnviron = "tarmac";
		soundHit = "hard_ground";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.02;
		lucidity = 0.5;
		impact = "hitGroundHard";
		surfaceFriction = 2.5;
	};
	class SurfWood: Default
	{
		access = 2;
		files = "surf_wood_*";
		character = "Empty";
		soundEnviron = "wood";
		rough = 0.05;
		dust = 0.01;
		lucidity = 0.7;
	};
	class SurfMetal: Default
	{
		access = 2;
		files = "surf_metal_*";
		character = "Empty";
		soundEnviron = "metal";
		rough = 0.05;
		dust = 0;
		lucidity = 0.7;
		AIAvoidStance = 1;
	};
	class SurfRoofTin: Default
	{
		access = 2;
		files = "surf_rooftin_*";
		character = "Empty";
		soundEnviron = "wavymetal";
		rough = 0.05;
		dust = 0.03;
		lucidity = 0.7;
	};
	class SurfRoofTiles: Default
	{
		access = 2;
		files = "surf_rooftiles_*";
		character = "Empty";
		soundEnviron = "roof_tiles";
		rough = 0.05;
		dust = 0.05;
		lucidity = 0.7;
	};
	class SurfIntWood: Default
	{
		access = 2;
		files = "surfint_wood_*";
		character = "Empty";
		soundEnviron = "int_wood";
		rough = 0.05;
		dust = 0.01;
		lucidity = 0.7;
		AIAvoidStance = 1;
	};
	class SurfIntConcrete: Default
	{
		access = 2;
		files = "surfint_concrete_*";
		character = "Empty";
		soundEnviron = "int_concrete";
		rough = 0.05;
		dust = 0.03;
		lucidity = 0.7;
		AIAvoidStance = 1;
	};
	class SurfIntTiles: Default
	{
		access = 2;
		files = "surfint_tiles_*";
		character = "Empty";
		soundEnviron = "int_tiles";
		rough = 0.05;
		dust = 0;
		lucidity = 0.7;
		AIAvoidStance = 1;
	};
	class SurfIntMetal: Default
	{
		access = 2;
		files = "surfint_metal_*";
		character = "Empty";
		soundEnviron = "int_metal";
		rough = 0.05;
		dust = 0;
		lucidity = 0.7;
		AIAvoidStance = 1;
	};
	class SurfWater: Default
	{
		access = 2;
		files = "surf_water_*";
		character = "Empty";
		soundEnviron = "water";
		friction = 0.9;
		restitution = 0;
		isWater = 1;
		rough = 0.05;
		dust = 0;
		lucidity = 1;
	};
	class TEST_SurfNormal: Default
	{
		access = 2;
		files = "test_surf_normal_*";
		character = "Empty";
		soundEnviron = "normal";
		rough = 0.05;
		dust = 0.1;
		lucidity = 1;
	};
	class GdtStratisConcrete: Default
	{
		access = 2;
		files = "gdt_strconcrete_*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0;
		impact = "hitConcrete";
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisBeach: Default
	{
		access = 2;
		files = "gdt_strbeach_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 1.25;
		grassCover = 0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisDirt: Default
	{
		access = 2;
		files = "gdt_strdirt_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0.03;
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisSeabedCluttered: Default
	{
		access = 2;
		files = "gdt_strseabed_*";
		character = "SeabedClutter";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.75;
		lucidity = 200;
		grassCover = 0.05;
		surfaceFriction = 1.4;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisSeabed: Default
	{
		access = 2;
		files = "gdt_strdeepsea_*";
		character = "Empty";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.75;
		lucidity = 150;
		grassCover = 0;
		surfaceFriction = 1.4;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisDryGrass: Default
	{
		access = 2;
		files = "gdt_strdrygrass_*";
		character = "StratisDryGrassClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.75;
		lucidity = 2;
		grassCover = 0.1;
		impact = "hitGroundSoft";
		surfaceFriction = 1.75;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisGreenGrass: Default
	{
		access = 2;
		files = "gdt_strgreengrass_*";
		character = "StratisGreenGrassClutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.05;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisRocky: Default
	{
		access = 2;
		files = "gdt_strrocky_*";
		character = "StratisRockyClutter";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.12;
		maxSpeedCoef = 0.85;
		dust = 0.4;
		lucidity = 1.5;
		grassCover = 0.02;
		impact = "hitGroundHard";
		surfaceFriction = 1.9;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisThistles: Default
	{
		access = 2;
		files = "gdt_strthistles_*";
		character = "StratisThistlesClutter";
		soundEnviron = "stony";
		soundHit = "soft_ground";
		rough = 0.12;
		maxSpeedCoef = 0.8;
		dust = 0.6;
		lucidity = 3.5;
		grassCover = 0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStratisForestPine: Default
	{
		access = 2;
		files = "gdt_strforest_pine_*";
		character = "StratisForestPineClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.12;
		maxSpeedCoef = 0.8;
		dust = 0.4;
		lucidity = 3.5;
		grassCover = 0.04;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtRubble: Default
	{
		access = 2;
		files = "gdt_rubble_*";
		character = "RubbleClutter";
		soundEnviron = "debris";
		soundHit = "building";
		rough = 0.2;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 3;
		grassCover = 0;
		impact = "hitGroundHard";
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
	class GdtForestPine: Default
	{
		access = 2;
		files = "gdt_forest_pine_*";
		character = "ForestPineClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.12;
		maxSpeedCoef = 0.8;
		dust = 0.4;
		lucidity = 3.5;
		grassCover = 0.04;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtConcrete: Default
	{
		access = 2;
		files = "gdt_concrete_*";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.05;
		lucidity = 0.3;
		grassCover = 0;
		impact = "hitConcrete";
		maxClutterColoringCoef = 1.35;
	};
	class GdtSoil: Default
	{
		access = 2;
		files = "gdt_soil_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0;
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
	class GdtBeach: Default
	{
		access = 2;
		files = "gdt_beach_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.9;
		dust = 0.83;
		lucidity = 1.25;
		grassCover = 0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
	class GdtRock: Default
	{
		access = 2;
		files = "gdt_rock_*";
		character = "Empty";
		soundEnviron = "rock";
		soundHit = "hard_ground";
		rough = 0.2;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0;
		impact = "hitGroundHard";
		surfaceFriction = 1.9;
		maxClutterColoringCoef = 1.35;
	};
	class GdtDead: Default
	{
		access = 2;
		files = "gdt_dead_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		maxSpeedCoef = 1;
		rough = 0.05;
		dust = 0.4;
		lucidity = 0.5;
		grassCover = 0;
		impact = "hitGroundSoft";
		surfaceFriction = 2.5;
		maxClutterColoringCoef = 1.35;
	};
	class GdtDirt: Default
	{
		access = 2;
		files = "gdt_dirt_*";
		character = "GrassDryClutter";
		soundEnviron = "dirt";
		soundHit = "hard_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0.03;
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
	class GdtDesert: Default
	{
		access = 2;
		files = "gdt_desert_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.11;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 2.5;
		grassCover = 0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
	class GdtGrassGreen: Default
	{
		access = 2;
		files = "gdt_grass_green_*";
		character = "GrassGreenClutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.05;
		lucidity = 4;
		grassCover = 0.05;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtGrassDry: Default
	{
		access = 2;
		files = "gdt_dry_grass_*";
		character = "GrassDryClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 2;
		grassCover = 0.1;
		impact = "hitGroundSoft";
		surfaceFriction = 1.75;
		maxClutterColoringCoef = 1.35;
	};
	class GdtGrassWild: Default
	{
		access = 2;
		files = "gdt_wild_grass_*";
		character = "GrassWildClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.9;
		dust = 0.58;
		lucidity = 2.5;
		grassCover = 0.05;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtWeed: Default
	{
		access = 2;
		files = "gdt_weed_*";
		character = "WeedClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.12;
		maxSpeedCoef = 0.9;
		dust = 0.16;
		lucidity = 2;
		grassCover = 0.05;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtWildField: Default
	{
		access = 2;
		files = "gdt_wildfield_*";
		character = "WildFieldClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.9;
		dust = 0.33;
		lucidity = 1.5;
		grassCover = 0.1;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtThorn: Default
	{
		access = 2;
		files = "gdt_thorn_*";
		character = "ThornClutter";
		soundEnviron = "stony";
		soundHit = "hard_ground";
		rough = 0.12;
		maxSpeedCoef = 0.9;
		dust = 0.43;
		lucidity = 3.5;
		grassCover = 0.15;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStony: Default
	{
		access = 2;
		files = "gdt_stony_*";
		character = "StonyClutter";
		soundEnviron = "rock";
		soundHit = "hard_ground";
		rough = 0.12;
		maxSpeedCoef = 0.9;
		dust = 0.33;
		lucidity = 1.5;
		grassCover = 0;
		impact = "hitGroundHard";
		surfaceFriction = 1.9;
		maxClutterColoringCoef = 1.35;
	};
	class GdtStonyThistle: Default
	{
		access = 2;
		files = "gdt_thistle_stony_*";
		character = "StonyThistleClutter";
		soundEnviron = "stony";
		soundHit = "hard_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.42;
		lucidity = 1.5;
		grassCover = 0.03;
		impact = "hitGroundHard";
		surfaceFriction = 1.85;
		maxClutterColoringCoef = 1.35;
	};
	class GdtMud: Default
	{
		access = 2;
		files = "gdt_mud_*";
		character = "MudClutter";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.32;
		lucidity = 1.5;
		grassCover = 0.04;
		impact = "hitGroundHard";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class GdtMarsh: Default
	{
		access = 2;
		files = "gdt_marsh_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.1;
		lucidity = 1.5;
		grassCover = 0;
		surfaceFriction = 1.5;
		maxClutterColoringCoef = 1.35;
	};
	class GdtSeabed: Default
	{
		access = 2;
		files = "gdt_seabed_*";
		character = "SeabedClutter";
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.75;
		lucidity = 200;
		grassCover = 0;
		surfaceFriction = 1.4;
		maxClutterColoringCoef = 1.35;
	};
	class concrete: GdtStratisConcrete
	{
		files = "beton";
		character = "Empty";
		lucidity = 0.3;
	};
	class concrete_out: GdtStratisConcrete
	{
		files = "betonout";
		character = "Empty";
		lucidity = 0.3;
	};
	class concrete_inside: GdtStratisConcrete
	{
		files = "betonin";
		character = "Empty";
		lucidity = 0.3;
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class dirtrunway: GdtStratisDirt
	{
		files = "dirtrunway*";
		maxSpeedCoef = 1;
		rough = 0.04;
		surfaceFriction = 2;
	};
	class road: GdtConcrete
	{
		files = "cesta*";
		character = "Empty";
	};
	class floor: GdtStratisConcrete
	{
		files = "dlazbaout";
		character = "Empty";
	};
	class floor_inside: GdtStratisConcrete
	{
		files = "dlazbain";
		character = "Empty";
		soundEnviron = "int_tiles";
		AIAvoidStance = 1;
	};
	class carpet_inside: GdtConcrete
	{
		files = "dum_mesto_koberec*";
		character = "Empty";
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class carpet: GdtConcrete
	{
		files = "koberec*";
		character = "Empty";
		soundEnviron = "concrete";
	};
	class mud: GdtStratisDirt
	{
		files = "hlina*";
		character = "Empty";
	};
	class concrete_hall: concrete
	{
		files = "chodba_beton*";
		character = "Empty";
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class stones: GdtStony
	{
		files = "kameny*";
		character = "Empty";
	};
	class cardboard: concrete
	{
		files = "lepenka*";
	};
	class lino: concrete
	{
		files = "lino*";
		soundEnviron = "int_concrete";
		AIAvoidStance = 1;
	};
	class steel: GdtStony
	{
		files = "ocel*";
		character = "Empty";
		soundEnviron = "metal";
		AIAvoidStance = 1;
	};
	class trash: GdtRubble
	{
		files = "odpadky*";
		character = "Empty";
	};
	class parquet: concrete
	{
		files = "parkety*";
		soundEnviron = "int_wood";
		AIAvoidStance = 1;
	};
	class sand: GdtStratisBeach
	{
		files = "pisek*";
		character = "Empty";
	};
	class metalPlate: steel
	{
		files = "plech*";
		character = "Empty";
	};
	class woodenFloor: concrete
	{
		files = "podlaha_prkna*";
		character = "Empty";
		soundEnviron = "int_wood";
		AIAvoidStance = 1;
	};
	class planks: GdtStratisThistles
	{
		files = "prknaout";
		character = "Empty";
	};
	class planks_inside: GdtStratisThistles
	{
		files = "prknain";
		soundEnviron = "int_wood";
		character = "Empty";
		AIAvoidStance = 1;
	};
	class grid: steel
	{
		files = "rost*";
		character = "Empty";
	};
	class rubble: GdtRubble
	{
		files = "sterk*";
		character = "Empty";
	};
	class BuildingRubble: GdtRubble
	{
		files = "sutiny*";
		character = "Empty";
	};
	class tiling: concrete
	{
		files = "tasky*";
		soundEnviron = "tiling";
		character = "Empty";
		AIAvoidStance = 1;
	};
	class wavyMetal: steel
	{
		files = "vlnityplech*";
		character = "Empty";
		soundEnviron = "wavymetal";
	};
	class GdtVRsurface01: Default
	{
		access = 2;
		files = "gdt_vr_*";
		character = "Empty";
		soundEnviron = "virtual";
		soundHit = "soft_ground";
		rough = 0.01;
		maxSpeedCoef = 1;
		dust = 0;
		lucidity = 0.3;
		grassCover = 0;
		impact = "hitVirtual";
		maxClutterColoringCoef = 1.35;
	};
	class surf_metal: steel
	{
		files = "surf_metal*";
		soundEnviron = "metal";
		character = "Empty";
	};
	class surf_roadconcrete: GdtConcrete
	{
		files = "surf_roadconcrete*";
		soundEnviron = "concrete";
		character = "Empty";
	};
	class surf_roaddirt: GdtDirt
	{
		files = "surf_roaddirt*";
		soundEnviron = "dirt";
		character = "Empty";
	};
	class surf_roadtarmac: road
	{
		files = "surf_roadtarmac*";
		soundEnviron = "gravel";
		character = "Empty";
	};
	class surf_rooftiles: tiling
	{
		files = "surf_rooftiles*";
		soundEnviron = "tiling";
		character = "Empty";
	};
	class surf_rooftin: tiling
	{
		files = "surf_rooftin*";
		soundEnviron = "int_tiles";
		character = "Empty";
	};
	class surf_wood: GdtForestPine
	{
		files = "surf_wood*";
		soundEnviron = "wood";
		character = "Empty";
	};
	class surfint_concrete: GdtConcrete
	{
		files = "surfint_concrete*";
		soundEnviron = "int_concrete";
		character = "Empty";
		AIAvoidStance = 1;
	};
	class surfint_metal: steel
	{
		files = "surfint_metal*";
		soundEnviron = "int_metal";
		character = "Empty";
	};
	class surfint_tiles: tiling
	{
		files = "surfint_tiles*";
		soundEnviron = "int_tiles";
		character = "Empty";
	};
	class surfint_wood: GdtForestPine
	{
		files = "surfint_wood*";
		soundEnviron = "int_wood";
		character = "Empty";
		AIAvoidStance = 1;
	};
	class road_exp: road
	{
		files = "surface_road*";
	};
	class sand_exp: sand
	{
		files = "surface_sand*";
	};
	class SurfRoadDirt_exp: SurfRoadDirt
	{
		files = "surf_exp_roaddirt_*";
		soundEnviron = "dirt_exp";
		impact = "HitGroundRed";
		dust = 0.2;
	};
	class SurfRoadConcrete_exp: SurfRoadConcrete
	{
		files = "surf_exp_roadconcrete_*";
		soundEnviron = "concrete_exp";
	};
	class SurfRoadTarmac_exp: SurfRoadTarmac
	{
		files = "surf_exp_roadtarmac_*";
		soundEnviron = "asphalt_exp";
	};
	class SurfTrailDirt_exp: Default
	{
		access = 2;
		files = "surf_exp_traildirt_*";
		character = "Empty";
		soundEnviron = "dirt_exp";
		soundHit = "hard_ground";
		rough = 0.05;
		dust = 0.02;
		lucidity = 0.8;
		maxSpeedCoef = 0.95;
		impact = "hitGroundHard";
		surfaceFriction = 1.8;
	};
	class concrete_exp: concrete
	{
		files = "surface_concrete";
		soundEnviron = "concrete_exp";
	};
	class concrete_in_exp: concrete
	{
		files = "surface_concrete_in";
		soundEnviron = "int_concrete_exp";
		AIAvoidStance = 1;
	};
	class concrete_hall_exp: concrete
	{
		files = "surface_concrete_hall";
		soundEnviron = "int_concrete_exp";
	};
	class floor_exp: floor
	{
		files = "surface_floor";
		soundEnviron = "pavement_exp";
	};
	class floor_in_exp: floor
	{
		files = "surface_floor_in";
		soundEnviron = "int_pavement_exp";
		AIAvoidStance = 1;
	};
	class stones_exp: stones
	{
		files = "surface_stones";
		soundEnviron = "stones_exp";
	};
	class planks_in_exp: woodenFloor
	{
		files = "surface_planks_in";
		soundEnviron = "int_solidwood_exp";
		AIAvoidStance = 1;
	};
	class planks_exp: planks
	{
		files = "surface_planks";
		soundEnviron = "softwood_exp";
	};
	class softwood_in_exp: parquet
	{
		files = "surface_parquet";
		soundEnviron = "int_softwood_exp";
		AIAvoidStance = 1;
	};
	class steel_exp: steel
	{
		files = "surface_steel";
		soundEnviron = "steel_exp";
	};
	class metalPlate_exp: metalPlate
	{
		files = "surface_plate";
		soundEnviron = "metalplate_exp";
	};
	class metalPlatePressed_exp: metalPlate
	{
		files = "surface_plate_pressed";
		soundEnviron = "metalplate_exp";
	};
	class metalPlate_in_exp: metalPlate
	{
		files = "surface_plate_in";
		soundEnviron = "int_metalplate_exp";
		AIAvoidStance = 1;
	};
	class grid_exp: grid
	{
		files = "surface_grid";
		soundEnviron = "gridmetal_exp";
	};
	class wavyMetal_exp: wavyMetal
	{
		files = "surface_wavy_metal";
		soundEnviron = "wavymetal_exp";
	};
	class carpet_exp: carpet
	{
		files = "surface_carpet";
		soundEnviron = "int_carpet_exp";
	};
	class carpet_in_exp: carpet_inside
	{
		files = "surface_carpet_in";
		soundEnviron = "int_carpet_exp";
	};
	class mat_in_exp: carpet_inside
	{
		files = "surface_mat_in";
		soundEnviron = "int_mat_exp";
	};
	class mud_exp: mud
	{
		files = "surface_mud";
		soundEnviron = "mud_exp";
	};
	class straw_exp: mud
	{
		files = "surface_straw";
		soundEnviron = "straw_exp";
	};
	class cardboard_exp: cardboard
	{
		files = "surface_cardboard";
		soundEnviron = "dirt_exp";
	};
	class lino_in_exp: lino
	{
		files = "surface_lino_in";
		soundEnviron = "int_lino_exp";
		AIAvoidStance = 1;
	};
	class lino_exp: lino
	{
		files = "surface_lino";
		soundEnviron = "lino_exp";
	};
	class roof_tiles_exp: tiling
	{
		files = "surface_roof_tiles";
		soundEnviron = "rooftiles_exp";
	};
	class trash_exp: trash
	{
		files = "surface_trash*";
	};
	class rubble_exp: rubble
	{
		files = "surface_rubble*";
		soundEnviron = "gravel_exp";
	};
	class BuildingRubble_exp: BuildingRubble
	{
		files = "surface_building_rubble*";
		soundEnviron = "gravel_exp";
	};
	class staszowgrass: Default
	{
		files = "staszowgrass_*";
		rough = 0.2;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "staszowgrassClutter";
		maxSpeedCoef = 0.85;
	};
	class staszowoldgrass: Default
	{
		files = "staszowoldgrass_*";
		rough = 0.3;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "staszowoldgrassClutter";
		maxSpeedCoef = 0.83;
	};
	class staszowoldwheat: Default
	{
		files = "staszowoldwheat_*";
		rough = 0.17;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "staszowoldwheatClutter";
		maxSpeedCoef = 0.83;
	};
	class staszowsand: Default
	{
		files = "staszowsand_*";
		rough = 0.05;
		dust = 0.3;
		soundHit = "soft_ground";
		soundEnviron = "sand";
		character = "staszowsandClutter";
		maxSpeedCoef = 0.85;
	};
	class staszowwheat: Default
	{
		files = "staszowwheat_*";
		rough = 0.25;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "drygrass";
		character = "staszowwheatClutter";
		maxSpeedCoef = 0.85;
	};
	class staszowforest: Default
	{
		files = "staszowforest_*";
		rough = 0.4;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "staszowforestClutter";
		maxSpeedCoef = 0.79;
	};
	class dubokolihagrazy: Default
	{
		files = "dubokolihagrazy_*";
		rough = 0.25;
		dust = 0.1;
		soundHit = "soft_ground";
		soundEnviron = "mud";
		character = "dubokolihagrazyClutter";
		maxSpeedCoef = 0.82;
	};
	class dubokolihaburn: Default
	{
		files = "dubokolihaburn_*";
		rough = 0.15;
		dust = 0.1;
		soundHit = "soft_ground";
		soundEnviron = "drygrass";
		character = "dubokolihaburnClutter";
		maxSpeedCoef = 0.87;
	};
	class staszowswamp: Default
	{
		files = "staszowswamp_*";
		rough = 0.5;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "mud";
		character = "staszowswampClutter";
		maxSpeedCoef = 0.8;
	};
	class staszowambush: Default
	{
		files = "staszowambush_*";
		rough = 0.2;
		dust = 0;
		soundHit = "soft_ground";
		soundEnviron = "mud";
		character = "staszowambushClutter";
		maxSpeedCoef = 0.84;
	};
	class francegrass: Default
	{
		files = "francegrass_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.85;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "francegrassClutter";
	};
	class francepoppy: Default
	{
		files = "francepoppy_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.84;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "francepoppyClutter";
	};
	class franceraps: Default
	{
		files = "franceraps_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.85;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "francerapsClutter";
	};
	class francesand: Default
	{
		files = "francesand_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.84;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "francesandClutter";
	};
	class francetillage: Default
	{
		files = "francetillage_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.83;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "francetillageClutter";
	};
	class franceweed: Default
	{
		files = "franceweed_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.82;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "franceweedClutter";
	};
	class francewheat: Default
	{
		files = "francewheat_*";
		rough = 0.2;
		dust = 0;
		maxSpeedCoef = 0.85;
		soundHit = "soft_ground";
		soundEnviron = "grass";
		character = "francewheatClutter";
	};
};
class CfgEnvSounds
{
	class Default
	{
		sound[] = {"$DEFAULT$",0,1};
		soundNight[] = {"$DEFAULT$",0,1};
		name = "Default";
	};
	class Rain
	{
		sound[] = {"A3\sounds_f\ambient\rain\rain_new_1",0.251189,1,200};
		volume = "rain";
		name = "Rain";
		soundNight[] = {"A3\sounds_f\ambient\rain\rain_new_2",0.316228,1,200};
	};
	class Sea
	{
		sound[] = {"A3\sounds_f\ambient\waves\sea-1-sand-beach-stereo",0.0891251,1,200};
		name = "Sea";
		soundNight[] = {"A3\sounds_f\ambient\waves\sea-1-sand-beach-stereo",0.0707946,1,200};
		volume = "sea*(1-coast)";
	};
	class Meadows
	{
		sound[] = {"A3\Sounds_F\environment\ambient\day_insects_winds5",0.0158489,1};
		name = "Meadow (Insect)";
		volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
		randSamp0[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_01",0.0630957,1,70,0.12,10,25,40};
		randSamp1[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_02",0.0630957,1,100,0.12,15,25,30};
		randSamp2[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_03",0.0630957,1,100,0.12,10,25,40};
		randSamp3[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_04",0.0630957,1,100,0.12,10,25,40};
		randSamp4[] = {"A3\Sounds_F\environment\animals\birds\bird_7",0.0562341,1,100,0.12,10,25,40};
		randSamp5[] = {"A3\Sounds_F\environment\animals\birds\bird_8",0.0316228,1,100,0.1,10,25,40};
		randSamp6[] = {"A3\Sounds_F\environment\animals\insect\fly_4",0.0562341,1,20,0.1,10,25,50};
		randSamp7[] = {"A3\Sounds_F\environment\animals\insect\insect_3",0.0562341,1,20,0.1,10,25,40};
		randSamp8[] = {"A3\Sounds_F\environment\animals\insect\insect_1",0.0562341,1,20,0.1,10,25,40};
		random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class Trees
	{
		name = "Trees";
		sound[] = {"",0.000177828,1};
		volume = "trees*(1-rain)*(1-night)";
	};
	class MeadowsNight
	{
		sound[] = {"A3\Sounds_F\environment\ambient\night_insects_birds_winds1",0.0112202,1};
		name = "Meadow (Insect, Birds)";
		volume = "(1-forest)*(1-houses)*night*(1-sea)";
		randSamp0[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_01",0.1,1,100,0.12,10,25,40};
		randSamp1[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_02",0.1,1,100,0.12,10,35,60};
		randSamp2[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_03",0.1,1,100,0.12,10,25,40};
		randSamp3[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_04",0.1,1,100,0.12,10,25,40};
		randSamp4[] = {"A3\Sounds_F\environment\animals\birds\bird_night_2",0.0562341,1,80,0.12,10,25,40};
		randSamp5[] = {"A3\Sounds_F\environment\animals\birds\bird_night_5",0.0316228,1,80,0.1,10,25,40};
		randSamp6[] = {"A3\Sounds_F\environment\animals\insect\insect_2",0.0562341,1,20,0.1,10,25,50};
		randSamp7[] = {"A3\Sounds_F\environment\animals\insect\insect_3",0.0562341,1,20,0.1,10,25,40};
		randSamp8[] = {"A3\Sounds_F\environment\animals\insect\insect_1",0.0562341,1,20,0.1,10,25,40};
		random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class TreesNight
	{
		name = "Trees (waving slowly in the night)";
		sound[] = {"",0.000177828,1};
		volume = "trees*(1-rain)*night";
	};
	class Hills
	{
		name = "Hills";
		sound[] = {"",0.000177828,1};
		volume = "hills";
	};
	class Wind
	{
		name = "Wind";
		sound[] = {"",0.000177828,1};
		volume = "(1-hills)*windy*0.5";
	};
	class Coast
	{
		name = "Coast";
		sound[] = {"A3\sounds_f\ambient\waves\beach_sand_small_waves1",0.0891251,1,200};
		soundNight[] = {"A3\sounds_f\ambient\waves\beach_sand_small_waves1",0.0562341,1,200};
		volume = "coast";
	};
	class WindSlow
	{
		name = "Wind (Slow)";
		sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow",0.0199526,1};
		volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
	};
	class WindMedium
	{
		name = "Wind (Middle)";
		sound[] = {"A3\sounds_f\ambient\winds\wind-synth-middle",0.0251189,1};
		volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
	};
	class WindFast
	{
		name = "Wind (Fast)";
		sound[] = {"A3\sounds_f\ambient\winds\wind-synth-fast",0.0316228,1};
		volume = "(windy factor[0.66,1])-(night*0.25)";
	};
	class Forest
	{
		name = "Wind (Forest)";
		sound[] = {"A3\Sounds_F\environment\ambient\day_insects_winds5",0.0177828,1};
		volume = "forest*trees*(1-night)";
		randSamp0[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_01",0.1,12,100,0.1,10,25,40};
		randSamp1[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_02",0.1,12,100,0.1,10,35,60};
		randSamp2[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_03",0.1,12,100,0.1,10,25,40};
		randSamp3[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_04",0.1,12,100,0.1,10,25,40};
		randSamp4[] = {"A3\Sounds_F\environment\animals\birds\bird_5",0.0562341,1,100,0.12,10,25,40};
		randSamp5[] = {"A3\Sounds_F\environment\animals\birds\bird_9",0.0562341,1,80,0.1,10,25,40};
		randSamp6[] = {"A3\Sounds_F\environment\animals\insect\fly_3",0.0316228,1,20,0.1,10,25,50};
		randSamp7[] = {"A3\Sounds_F\environment\animals\insect\insect_3",0.0562341,1,40,0.1,10,25,40};
		randSamp8[] = {"A3\Sounds_F\environment\animals\insect\insect_1",0.0562341,1,50,0.1,10,25,40};
		random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class ForestNight
	{
		name = "Wind (Night)";
		sound[] = {"A3\Sounds_F\environment\ambient\night_insects_birds_winds4",0.0112202,1};
		volume = "forest*trees*night";
		randSamp0[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_01",0.1,1,100,0.12,10,25,40};
		randSamp1[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_02",0.1,1,100,0.12,10,35,60};
		randSamp2[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_03",0.1,1,100,0.12,10,25,40};
		randSamp3[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_04",0.1,1,100,0.12,10,25,40};
		randSamp4[] = {"A3\Sounds_F\environment\animals\birds\bird_night_6",0.0562341,1,100,0.12,10,25,40};
		randSamp5[] = {"A3\Sounds_F\environment\animals\birds\bird_night_2",0.0316228,1,70,0.1,10,25,40};
		randSamp6[] = {"A3\Sounds_F\environment\animals\insect\fly_3",0.0562341,1,10,0.1,10,25,50};
		randSamp7[] = {"A3\Sounds_F\environment\animals\insect\insect_3",0.0562341,1,40,0.1,10,25,40};
		randSamp8[] = {"A3\Sounds_F\environment\animals\insect\insect_1",0.0562341,1,30,0.1,10,25,40};
		random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class Houses
	{
		name = "Wind (Day)";
		sound[] = {"A3\Sounds_F\environment\ambient\day_insects_winds4",0.0158489,1};
		volume = "(houses-0.75)*4";
		randSamp0[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_01",0.1,1,100,0.12,10,25,40};
		randSamp1[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_02",0.1,1,100,0.12,10,35,60};
		randSamp2[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_03",0.1,1,100,0.12,10,25,40};
		randSamp3[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_04",0.1,1,100,0.12,10,25,40};
		randSamp4[] = {"A3\Sounds_F\environment\animals\birds\bird_7",0.0562341,1,100,0.12,10,25,40};
		randSamp5[] = {"A3\Sounds_F\environment\animals\birds\bird_8",0.0316228,1,100,0.1,10,25,40};
		randSamp6[] = {"A3\Sounds_F\environment\animals\insect\fly_4",0.0562341,1,15,0.1,10,25,50};
		randSamp7[] = {"A3\Sounds_F\environment\animals\insect\insect_3",0.0562341,1,20,0.1,10,25,40};
		randSamp8[] = {"A3\Sounds_F\environment\animals\insect\insect_1",0.0562341,1,25,0.1,10,25,40};
		random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class HousesNight
	{
		name = "Wind (No, Animals)";
		sound[] = {"A3\Sounds_F\environment\ambient\night_insects_birds_nowinds2",0.0141254,1};
		volume = "(houses-0.75)*4*night";
		randSamp0[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_01",0.1,1,100,0.12,10,25,40};
		randSamp1[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_02",0.1,1,100,0.12,10,35,60};
		randSamp2[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_03",0.1,1,100,0.12,10,25,40};
		randSamp3[] = {"A3\Sounds_F\environment\animals\insect\meadow_single_04",0.1,1,100,0.12,10,25,40};
		randSamp4[] = {"A3\Sounds_F\environment\animals\birds\bird_night_2",0.0562341,1,80,0.12,10,25,40};
		randSamp5[] = {"A3\Sounds_F\environment\animals\birds\bird_night_5",0.0316228,1,80,0.1,10,25,40};
		randSamp6[] = {"A3\Sounds_F\environment\animals\insect\insect_2",0.0562341,1,15,0.1,10,25,50};
		randSamp7[] = {"A3\Sounds_F\environment\animals\insect\insect_3",0.0562341,1,15,0.1,10,25,40};
		randSamp8[] = {"A3\Sounds_F\environment\animals\insect\insect_1",0.0562341,1,30,0.1,10,25,40};
		random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class BattlefieldExplosions
	{
		sound0[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions1",0.316228,1,1000,0.2,5,10,15};
		sound1[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions2",0.316228,1,1000,0.2,5,10,15};
		sound2[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions3",0.316228,1,1000,0.2,5,10,15};
		sound3[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions4",0.316228,1,1000,0.2,5,10,15};
		sound4[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions5",0.316228,1,1000,0.2,5,10,15};
		random[] = {"sound0","sound1","sound2","sound3","sound4"};
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions5",0.316228,1};
	};
	class BattlefieldExplosions1
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions1",0.316228,1};
		titles[] = {};
	};
	class BattlefieldExplosions2
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions2",0.316228,1};
		titles[] = {};
	};
	class BattlefieldExplosions3
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions3",0.316228,1};
		titles[] = {};
	};
	class BattlefieldExplosions4
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions4",0.316228,1};
		titles[] = {};
	};
	class BattlefieldExplosions5
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions5",0.316228,1};
		titles[] = {};
	};
	class BattlefieldFirefight1
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight1",0.316228,1};
		titles[] = {};
	};
	class BattlefieldFirefight2
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight2",0.316228,1};
		titles[] = {};
	};
	class BattlefieldFirefight3
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight3",0.316228,1};
		titles[] = {};
	};
	class BattlefieldFirefight4
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_firefight4",0.316228,1};
		titles[] = {};
	};
	class BattlefieldHeli1
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_heli1",0.316228,1};
		titles[] = {};
	};
	class BattlefieldHeli2
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_heli2",0.316228,1};
		titles[] = {};
	};
	class BattlefieldHeli3
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_heli3",0.316228,1};
		titles[] = {};
	};
	class BattlefieldJet1
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet1",0.316228,1};
		titles[] = {};
	};
	class BattlefieldJet2
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet2",0.316228,1};
		titles[] = {};
	};
	class BattlefieldJet3
	{
		sound[] = {"A3\Sounds_F\environment\ambient\battlefield\battlefield_jet3",0.316228,1};
		titles[] = {};
	};
	class Earthquake_01
	{
		sound[] = {"\a3\Sounds_F\environment\ambient\quakes\earthquake1",3.16228,1};
		name = "Earthquake 1";
		titles[] = {};
	};
	class Earthquake_02
	{
		sound[] = {"\a3\Sounds_F\environment\ambient\quakes\earthquake2",3.16228,1};
		name = "Earthquake 2";
		titles[] = {};
	};
	class Earthquake_03
	{
		sound[] = {"\a3\Sounds_F\environment\ambient\quakes\earthquake3",3.16228,1};
		name = "Earthquake 3";
		titles[] = {};
	};
	class Earthquake_04
	{
		sound[] = {"\a3\Sounds_F\environment\ambient\quakes\earthquake4",3.16228,1};
		name = "Earthquake 4";
		titles[] = {};
	};
	class IFCombat
	{
		name = "(IF) Combat Ambient 1 (1:01)";
		sound[] = {"\WW2\Core_s\Music_s\Amb1.ogg",1,1};
		soundNight[] = {"\WW2\Core_s\Music_s\Amb1.ogg",1,1};
	};
	class IFCombat2
	{
		name = "(IF) Combat Ambient 2 (1:19)";
		sound[] = {"\WW2\Core_s\Music_s\Amb2.ogg",1,1};
		soundNight[] = {"\WW2\Core_s\Music_s\Amb2.ogg",1,1};
	};
	class IFCombat3
	{
		name = "(IF) Combat Ambient 3 (0:49)";
		sound[] = {"\WW2\Core_s\Music_s\Amb3.ogg",1,1};
		soundNight[] = {"\WW2\Core_s\Music_s\Amb3.ogg",1,1};
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather
		{
			class ThunderboltNorm
			{
				soundNear[] = {"",0.316228,1};
				soundFar[] = {"",0.316228,1};
			};
			class ThunderboltHeavy
			{
				soundNear[] = {"",0.316228,1};
				soundFar[] = {"",0.316228,1};
			};
		};
		soundMapSizeCoef = 1;
	};
	class CAWorld: DefaultWorld
	{
		class Weather: Weather
		{
			class ThunderboltNorm
			{
				soundNear[] = {"\A3\Sounds_F\ambient\thunder\thunder_04",2.51189,1};
				soundFar[] = {"\A3\Sounds_F\ambient\thunder\thunder_02",1.99526,1};
			};
			class ThunderboltHeavy
			{
				soundNear[] = {"\A3\Sounds_F\ambient\thunder\thunder_03",3.16228,1};
				soundFar[] = {"\A3\Sounds_F\ambient\thunder\thunder_01",2.51189,1};
			};
		};
		soundMapSizeCoef = 4;
	};
	class Stratis: CAWorld
	{
		soundMapSizeCoef = 4;
	};
	class Altis: CAWorld
	{
		soundMapSizeCoef = 4;
	};
	class VR: CAWorld
	{
		class EnvSounds
		{
			class Default
			{
				sound[] = {"A3\sounds_f_bootcamp\ambient\vr_ambient",0.177828,1,100};
				soundNight[] = {"A3\sounds_f_bootcamp\ambient\vr_ambient",1,1,100};
			};
		};
	};
	class Tanoa: CAWorld
	{
		class EnvSounds: EnvSounds
		{
			soundSetEnvironment[] = {"ForestMorning_SoundSet","ForestAfternoon_SoundSet","ForestNight_SoundSet","HousesDay_SoundSet","HousesNight_SoundSet","MeadowsDay_SoundSet","MeadowsNight_SoundSet","WindForest_Low_SoundSet","WindForest_High_SoundSet","WindMeadows_Low_SoundSet","WindMeadows_High_SoundSet","WindHouses_Low_SoundSet","WindHouses_High_SoundSet","RainForest_Low_SoundSet","RainForest_Medium_SoundSet","RainForest_High_SoundSet","RainMeadows_Low_SoundSet","RainMeadows_Medium_SoundSet","RainMeadows_High_SoundSet","RainHouses_High_SoundSet","Sea_SoundSet","Coast_SoundSet","Wind_Generic_Low_SoundSet","Wind_Generic_High_SoundSet"};
			class CfgEnvSpatialSounds
			{
				class sound_shrub_smallleaves_1
				{
					memPoint = "sound_shrub_smallleaves_1";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_smallleaves_2
				{
					memPoint = "sound_shrub_smallleaves_2";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_smallleaves_3
				{
					memPoint = "sound_shrub_smallleaves_3";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_mediumleaves_1
				{
					memPoint = "sound_shrub_mediumleaves_1";
					soundSets[] = {"Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_bigleaves_1
				{
					memPoint = "sound_shrub_bigleaves_1";
					soundSets[] = {"Rain_PlantC_Light_SoundSet","Rain_PlantC_Medium_SoundSet","Rain_PlantC_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_tree_bigleaves_1
				{
					memPoint = "sound_tree_bigleaves_1";
					soundSets[] = {"Rain_PlantC_Light_SoundSet","Rain_PlantC_Medium_SoundSet","Rain_PlantC_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_smalltree_mediumleaves_1
				{
					memPoint = "sound_smalltree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_smalltree_smallleaves_1
				{
					memPoint = "sound_smalltree_smallleaves_1";
					soundSets[] = {"Rain_SmallTree_Light_SoundSet","Rain_SmallTree_Medium_SoundSet","Rain_SmallTree_Heavy_SoundSet","Wind_LeavesA_Narrow_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_smallleaves_1
				{
					memPoint = "sound_tree_smallleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesA_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_mediumleaves_1
				{
					memPoint = "sound_tree_mediumleaves_1";
					soundSets[] = {"Rain_WideTree_Light_SoundSet","Rain_WideTree_Medium_SoundSet","Rain_WideTree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_widetree_smallleaves_1
				{
					memPoint = "sound_widetree_smallleaves_1";
					soundSets[] = {"Rain_WideTree_Light_SoundSet","Rain_WideTree_Medium_SoundSet","Rain_WideTree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_widetree_mediumleaves_1
				{
					memPoint = "sound_widetree_mediumleaves_1";
					soundSets[] = {"Rain_WideTree_Light_SoundSet","Rain_WideTree_Medium_SoundSet","Rain_WideTree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_watertree_mediumleaves_1
				{
					memPoint = "sound_watertree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_palmleaves_1
				{
					memPoint = "sound_tree_palmleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_rain_metalTin_tiny_1
				{
					memPoint = "sound_rain_metalTin_tiny_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundShader"};
				};
				class sound_rain_metalTin_tiny_2
				{
					memPoint = "sound_rain_metalTin_tiny_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_3
				{
					memPoint = "sound_rain_metalTin_tiny_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_4
				{
					memPoint = "sound_rain_metalTin_tiny_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_5
				{
					memPoint = "sound_rain_metalTin_tiny_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_6
				{
					memPoint = "sound_rain_metalTin_tiny_6";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_7
				{
					memPoint = "sound_rain_metalTin_tiny_7";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_8
				{
					memPoint = "sound_rain_metalTin_tiny_8";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_9
				{
					memPoint = "sound_rain_metalTin_tiny_9";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_10
				{
					memPoint = "sound_rain_metalTin_tiny_10";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_11
				{
					memPoint = "sound_rain_metalTin_tiny_11";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_12
				{
					memPoint = "sound_rain_metalTin_tiny_12";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_13
				{
					memPoint = "sound_rain_metalTin_tiny_13";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_14
				{
					memPoint = "sound_rain_metalTin_tiny_14";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_15
				{
					memPoint = "sound_rain_metalTin_tiny_15";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_16
				{
					memPoint = "sound_rain_metalTin_tiny_16";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_17
				{
					memPoint = "sound_rain_metalTin_tiny_17";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_18
				{
					memPoint = "sound_rain_metalTin_tiny_18";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_19
				{
					memPoint = "sound_rain_metalTin_tiny_19";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_20
				{
					memPoint = "sound_rain_metalTin_tiny_20";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_21
				{
					memPoint = "sound_rain_metalTin_tiny_21";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_22
				{
					memPoint = "sound_rain_metalTin_tiny_22";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_23
				{
					memPoint = "sound_rain_metalTin_tiny_23";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_1
				{
					memPoint = "sound_rain_metalTin_small_1";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_2
				{
					memPoint = "sound_rain_metalTin_small_2";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_3
				{
					memPoint = "sound_rain_metalTin_small_3";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_4
				{
					memPoint = "sound_rain_metalTin_small_4";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_1
				{
					memPoint = "sound_rain_metalTin_small_narrow_1";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_2
				{
					memPoint = "sound_rain_metalTin_small_narrow_2";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_3
				{
					memPoint = "sound_rain_metalTin_small_narrow_3";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_4
				{
					memPoint = "sound_rain_metalTin_small_narrow_4";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_medium_1
				{
					memPoint = "sound_rain_metalTin_medium_1";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_2
				{
					memPoint = "sound_rain_metalTin_medium_2";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_3
				{
					memPoint = "sound_rain_metalTin_medium_3";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_4
				{
					memPoint = "sound_rain_metalTin_medium_4";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_5
				{
					memPoint = "sound_rain_metalTin_medium_5";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_1
				{
					memPoint = "sound_rain_metalTin_medium_narrow_1";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_2
				{
					memPoint = "sound_rain_metalTin_medium_narrow_2";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_3
				{
					memPoint = "sound_rain_metalTin_medium_narrow_3";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_4
				{
					memPoint = "sound_rain_metalTin_medium_narrow_4";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_large_1
				{
					memPoint = "sound_rain_metalTin_large_1";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_2
				{
					memPoint = "sound_rain_metalTin_large_2";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_3
				{
					memPoint = "sound_rain_metalTin_large_3";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_4
				{
					memPoint = "sound_rain_metalTin_large_4";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_1
				{
					memPoint = "sound_rain_metalTin_large_narrow_1";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_2
				{
					memPoint = "sound_rain_metalTin_large_narrow_2";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_3
				{
					memPoint = "sound_rain_metalTin_large_narrow_3";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_4
				{
					memPoint = "sound_rain_metalTin_large_narrow_4";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalPlate_small_1
				{
					memPoint = "sound_rain_metalPlate_small_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_small_2
				{
					memPoint = "sound_rain_metalPlate_small_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_metal_stairs_1
				{
					memPoint = "sound_metal_stairs_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_2
				{
					memPoint = "sound_metal_stairs_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_3
				{
					memPoint = "sound_metal_stairs_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_1
				{
					memPoint = "sound_metal_stairs_solid_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_2
				{
					memPoint = "sound_metal_stairs_solid_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_3
				{
					memPoint = "sound_metal_stairs_solid_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalPlate_medium_1
				{
					memPoint = "sound_rain_metalPlate_medium_1";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_2
				{
					memPoint = "sound_rain_metalPlate_medium_2";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_3
				{
					memPoint = "sound_rain_metalPlate_medium_3";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_4
				{
					memPoint = "sound_rain_metalPlate_medium_4";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_5
				{
					memPoint = "sound_rain_metalPlate_medium_5";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_6
				{
					memPoint = "sound_rain_metalPlate_medium_6";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_1
				{
					memPoint = "sound_rain_metalPlate_large_1";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_2
				{
					memPoint = "sound_rain_metalPlate_large_2";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_gutter_1
				{
					memPoint = "sound_gutter_1";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_2
				{
					memPoint = "sound_gutter_2";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_3
				{
					memPoint = "sound_gutter_3";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_4
				{
					memPoint = "sound_gutter_4";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_5
				{
					memPoint = "sound_gutter_5";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_6
				{
					memPoint = "sound_gutter_6";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_7
				{
					memPoint = "sound_gutter_7";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_8
				{
					memPoint = "sound_gutter_8";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_air_condition_1
				{
					memPoint = "sound_air_condition_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_2
				{
					memPoint = "sound_air_condition_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_3
				{
					memPoint = "sound_air_condition_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_4
				{
					memPoint = "sound_air_condition_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_5
				{
					memPoint = "sound_air_condition_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_electric_box_1
				{
					memPoint = "sound_electric_box_1";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_2
				{
					memPoint = "sound_electric_box_2";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_3
				{
					memPoint = "sound_electric_box_3";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_4
				{
					memPoint = "sound_electric_box_4";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_5
				{
					memPoint = "sound_electric_box_5";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_metal_tension_1
				{
					memPoint = "sound_metal_tension_1";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_2
				{
					memPoint = "sound_metal_tension_2";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_3
				{
					memPoint = "sound_metal_tension_3";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_4
				{
					memPoint = "sound_metal_tension_4";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_5
				{
					memPoint = "sound_metal_tension_5";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_6
				{
					memPoint = "sound_metal_tension_6";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_7
				{
					memPoint = "sound_metal_tension_7";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_8
				{
					memPoint = "sound_metal_tension_8";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_9
				{
					memPoint = "sound_metal_tension_9";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_10
				{
					memPoint = "sound_metal_tension_10";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_11
				{
					memPoint = "sound_metal_tension_11";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_ruins_1
				{
					memPoint = "sound_ruins_1";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_2
				{
					memPoint = "sound_ruins_2";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_3
				{
					memPoint = "sound_ruins_3";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_stone_small_1
				{
					memPoint = "sound_rain_stone_small_1";
					soundSets[] = {"Rock_Debris_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_stone_medium_1
				{
					memPoint = "sound_rain_stone_medium_1";
					soundSets[] = {"Rock_Debris_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_head
				{
					memPoint = "sound_head";
					soundSets[] = {"Forest_Birds_Temp_SoundSet"};
				};
				class sound_clothes_1
				{
					memPoint = "sound_clothes_1";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_clothes_2
				{
					memPoint = "sound_clothes_2";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_net_fence_1
				{
					memPoint = "sound_net_fence_1";
					soundSets[] = {"MetalFenceWind_SoundSet"};
				};
				class sound_shed_1
				{
					memPoint = "sound_shed_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_slum_1
				{
					memPoint = "sound_slum_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
			};
		};
		class Weather: Weather
		{
			class ThunderboltNorm
			{
				soundNear[] = {"",2.51189,1};
				soundFar[] = {"",1.99526,1};
				soundSet[] = {"Thunder_Norm_SoundSet"};
			};
			class ThunderboltHeavy
			{
				soundNear[] = {"",3.16228,1};
				soundFar[] = {"",2.51189,1};
				soundSet[] = {"Thunder_Heavy_SoundSet"};
			};
		};
	};
	class LIBWorld: CAWorld
	{
		class EnvSounds: CfgEnvSounds
		{
			class Default
			{
				sound[] = {"$DEFAULT$",0,1};
				soundNight[] = {"$DEFAULT$",0,1};
			};
			class Rain
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Rain\Rain_Hard.wss",0.177828,1};
				soundNight[] = {"\WW2\Terrains_s\Misc\Ambient_s\Rain\Rain_Hard.wss",1,1};
			};
			class Sea
			{
				sound[] = {"\WW2\Terrains_s\Misc\Enviroment_s\River.wss",0.1,1};
				soundNight[] = {"\WW2\Terrains_s\Misc\Enviroment_s\River.wss",1,1};
			};
			class WindForestHigh
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Forest\Wind_Forest_1.wss",0.0398107,1};
			};
			class WindNoForestHigh
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Forest\Wind_Global_2.wss",0.0398107,1};
			};
			class Forest
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Forest\Forest_Day_2.wss",0.0398107,1};
			};
			class ForestNight
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Forest\Forest_Night_1.wss",0.0562341,1};
			};
			class Houses
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Houses\House_1.wss",0.01,1};
			};
			class Meadows
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Meadows\Wind_Meadow_2.wss",0.0316228,1};
			};
			class MeadowsNight
			{
				sound[] = {"\WW2\Terrains_s\Misc\Ambient_s\Meadows\Wind_Meadow_2.wss",0.0177828,1};
			};
		};
	};
};
class RadioChannels
{
	class GlobalChannel
	{
		level = 1;
		noise = "loop";
		micOuts = "micOuts";
		pauseAfterWord = 0;
		pauseInNumber = 0;
		pauseAfterNumber = 0;
		pauseInUnitList = 0;
		pauseAfterUnitList = 0.05;
	};
	class SideChannel
	{
		level = 2;
		noise = "loop";
		micOuts = "micOuts";
		pauseAfterWord = 0;
		pauseInNumber = 0;
		pauseAfterNumber = 0;
		pauseInUnitList = 0;
		pauseAfterUnitList = 0.05;
	};
	class CommandChannel
	{
		level = 3;
		noise = "loop";
		micOuts = "micOuts";
		pauseAfterWord = 0;
		pauseInNumber = 0;
		pauseAfterNumber = 0;
		pauseInUnitList = 0;
		pauseAfterUnitList = 0.05;
	};
	class GroupChannel
	{
		level = 4;
		noise = "loop";
		micOuts = "micOuts";
		pauseInNumber = 0;
		pauseInUnitList = 0;
		pauseAfterWord = 0.025;
		pauseAfterNumber = 0.025;
		pauseAfterUnitList = 0.025;
		sound3D = 1;
	};
	class VehicleChannel
	{
		level = 5;
		noise = "";
		micOuts = "";
		pauseAfterWord = 0;
		pauseInNumber = 0;
		pauseAfterNumber = 0;
		pauseInUnitList = 0;
		pauseAfterUnitList = 0.05;
	};
	class DirectSpeakingChannel
	{
		level = 0;
		noise = "";
		micOuts = "";
		pauseAfterWord = 0;
		pauseInNumber = 0;
		pauseAfterNumber = 0;
		pauseInUnitList = 0;
		pauseAfterUnitList = 0.05;
		sound3D = 1;
	};
};
class CfgSoundEffects
{
	class WeaponsEffects
	{
		class Default
		{
			distance = 1;
			frequency = 1;
			center[] = {100,800,2000,10000};
			bandwidth[] = {1,1,1,1};
			gain[] = {1,1,1,1};
			threshold = 1;
			ratio = 1;
			attack = 1;
			release = 1;
		};
		class DefaultHandGun
		{
			class Begin: Default
			{
			};
			class Middle: Default
			{
				distance = 30;
				frequency = 0.95;
				gain[] = {1,0.794328,0.501187,0.316228};
				threshold = 0.316228;
				attack = 45;
			};
			class End: Default
			{
				distance = 150;
				frequency = 0.9;
				gain[] = {1,0.562341,0.316228,0.125893};
				threshold = 0.01;
				attack = 0;
			};
		};
		class DefaultRifle
		{
			class Begin: Default
			{
			};
			class Middle: Default
			{
				distance = 100;
				frequency = 0.9;
				gain[] = {1,1,0.398107,0.251189};
				threshold = 0.1;
				ratio = 0.5;
				attack = 40;
			};
			class End: Default
			{
				distance = 200;
				frequency = 0.85;
				gain[] = {1,0.562341,0.125893,0.125893};
				threshold = 0.1;
				ratio = 0.1;
				attack = 0;
			};
		};
		class DefaultExplosion
		{
			class Begin: Default
			{
			};
			class Middle: Default
			{
				distance = 100;
				frequency = 0.95;
				gain[] = {1,1,0.562341,0.354813};
				threshold = 0.1;
				ratio = 0.5;
				attack = 90;
			};
			class End: Default
			{
				distance = 200;
				frequency = 0.9;
				gain[] = {2.51189,1.41254,0.316228,0.125893};
				threshold = 0.1;
				ratio = 0.6;
				attack = 10;
			};
		};
		class IF_DefaultRifle: DefaultRifle
		{
			class Begin: Begin
			{
			};
			class Middle1: Middle
			{
				distance = 200;
				gain[] = {1,1,0.95,0.95};
			};
			class Middle2: Middle
			{
				distance = 400;
				frequency = 0.8;
				gain[] = {1,1,0.9,0.8};
				ratio = 0.25;
				attack = 20;
			};
			class End: End
			{
				distance = 600;
				frequency = 0.7;
				gain[] = {2.5,1.5,0.3,0.2};
				ratio = 0.5;
			};
		};
		class IF_DefaultRifle_snds
		{
			class Begin: Default
			{
				attack = 1;
				bandwidth[] = {1,1,1,1};
				center[] = {100,800,2000,10000};
				distance = 1;
				frequency = 1;
				gain[] = {1,1,1,1};
				ratio = 1;
				release = 1;
				threshold = 1;
			};
			class Middle: Default
			{
				distance = 150;
				frequency = 0.9;
				gain[] = {1,1,0.95,0.95};
				threshold = 0.1;
				ratio = 0.5;
				attack = 40;
			};
			class End: Default
			{
				distance = 250;
				frequency = 0.7;
				gain[] = {1.5,1.6,0.7,0.5};
				threshold = 0.1;
				ratio = 0.5;
				attack = 0;
			};
		};
	};
	class UnderWaterEffects
	{
		class Mono
		{
			distance = 1;
		};
		class Equalizer
		{
			center[] = {100,800,2000,10000};
			bandwidth[] = {2,2,2,2};
			gain[] = {1.41254,1,0.177828,0.125893};
			distance = 3;
		};
	};
	class UnconsciousStateEffect
	{
		class Echo0
		{
			WetDryMix = 0.25;
			Feedback = 0.15;
			Delay = 50;
		};
		class Echo1
		{
			WetDryMix = 0.5;
			Feedback = 0.2;
			Delay = 100;
		};
		class Equalizer0
		{
			center[] = {100,800,2000,10000};
			bandwidth[] = {1,1,1,1};
			gain[] = {1,0.562341,0.316228,0.316228};
		};
		class Equalizer1
		{
			center[] = {100,800,2000,10000};
			bandwidth[] = {2,2,2,2};
			gain[] = {1,0.316228,0.125893,0.125893};
		};
	};
	class AttenuationsEffects
	{
		class UnconsciousState
		{
			class Equalizer0
			{
				center[] = {500,2000,5000,15000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.501187,0.316228,0.199526,0.125893};
			};
			class Equalizer1
			{
				center[] = {1000,2500,10000,20000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.398107,0.251189,0.158489,0.125893};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.2;
				Delay = 600;
			};
		};
		class HouseAttenuation
		{
			class Equalizer0
			{
				center[] = {50,600,2000,6000};
				bandwidth[] = {1,2,2,2};
				gain[] = {0.707946,0.891251,0.562341,0.398107};
			};
			class Equalizer1
			{
				center[] = {60,500,3000,15000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.01;
				Delay = 50;
			};
		};
		class CarAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.630957,0.562341,0.398107,0.316228};
			};
			class Equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.707946,0.501187,0.354813,0.177828};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.1;
				Delay = 50;
			};
		};
		class SemiOpenCarAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {1,1,1,1};
				gain[] = {1,0.891251,0.794328,0.707946};
			};
			class Equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {1,1,1,1};
				gain[] = {1,0.891251,0.794328,0.707946};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.1;
				Delay = 10;
			};
		};
		class SemiOpenCarAttenuation2
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {1,1,1,1};
				gain[] = {1,0.794328,0.630957,0.562341};
			};
			class Equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {1,1,1,1};
				gain[] = {1,0.794328,0.630957,0.562341};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.1;
				Delay = 10;
			};
		};
		class OpenCarAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class Equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class Echo
			{
				WetDryMix = 0;
				Feedback = 0;
				Delay = 1;
			};
		};
		class TankAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,0.707946,0.446684};
			};
			class Equalizer1
			{
				center[] = {50,500,2500,10000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,0.891251,0.562341,0.398107};
			};
			class Echo
			{
				WetDryMix = 0.2;
				Feedback = 0.3;
				Delay = 30;
			};
		};
		class HeliAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.891251,0.891251,0.562341,0.316228};
			};
			class Equalizer1
			{
				center[] = {50,500,2500,10000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.1;
				Delay = 30;
			};
		};
		class OpenHeliAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.891251,0.707946};
			};
			class Equalizer1
			{
				center[] = {100,500,3000,7000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.794328,0.707946};
			};
			class Echo
			{
				WetDryMix = 0.01;
				Feedback = 0.01;
				Delay = 1;
			};
		};
		class SemiOpenHeliAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.630957,0.562341};
			};
			class Equalizer1
			{
				center[] = {100,500,3000,7000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.794328,0.707946};
			};
			class Echo
			{
				WetDryMix = 0.01;
				Feedback = 0.01;
				Delay = 1;
			};
		};
		class HeliAttenuationGunner
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.891251,0.707946};
			};
			class Equalizer1
			{
				center[] = {100,500,3000,7000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.794328,0.707946};
			};
			class Echo
			{
				WetDryMix = 0.01;
				Feedback = 0.01;
				Delay = 1;
			};
		};
		class HeliAttenuationRamp
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.630957,0.562341};
			};
			class Equalizer1
			{
				center[] = {100,500,3000,7000};
				bandwidth[] = {0.5,0.5,0.5,0.5};
				gain[] = {1,1,0.794328,0.707946};
			};
			class Echo
			{
				WetDryMix = 0.01;
				Feedback = 0.01;
				Delay = 1;
			};
		};
		class PlaneAttenuation
		{
			class Equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.891251,0.891251,0.562341,0.316228};
			};
			class Equalizer1
			{
				center[] = {50,500,2500,10000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class Echo
			{
				WetDryMix = 0.1;
				Feedback = 0.1;
				Delay = 30;
			};
		};
	};
	class RadioFilterEffects
	{
		class Part0
		{
			center[] = {370,900,6000,10000};
			bandwidth[] = {1,2,1,1.2};
			gain[] = {1,1.58489,1.58489,1.77828};
			lim_limit = 1;
			lim_attack = 5;
			lim_release = 50;
			enabled[] = {1,0,1};
		};
		class Part1
		{
			filter_cut_off = 650;
			filter_one_over_Q = 0.5;
			filter_enabled = 1;
		};
		class Part2
		{
			center[] = {100,250,900,5000};
			bandwidth[] = {2,1.9,2,2};
			gain[] = {0.125893,0.125893,1.58489,0.707946};
			comp_threshold = 1;
			comp_ratio = 0.27;
			comp_attack = 1;
			comp_relase = 100;
			lim_limit = 0.125893;
			lim_attack = 1;
			lim_release = 500;
			enabled[] = {1,0,0};
		};
	};
};
class CfgAnimationSourceSounds
{
	class GenericDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\knob1",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\slam1",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class GenericBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class PlasticDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsSqueake_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsSqueake_1",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\PlasticDoors\PlasticDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class GlassBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSqueak_4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassBigDoors\GlassBigDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class GlassServoDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSqueak_4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_2",1,1,20};
			sound[] = {"sound0",1,"sound1",0.5};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsKnob_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsKnob_2",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassServoDoors\GlassServoDoorsSlam_2",1,1,20};
			sound[] = {"sound0",1,"sound1",0.5};
		};
	};
	class GlassMetalDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsSqueak_2",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GlassMetalDoors\GlassMetalDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class OldWoodDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_1",0.398107,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_2",0.398107,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_3",0.398107,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSqueak_4",0.398107,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\OldWoodDoors\OldWoodDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class MetalDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_1",0.562341,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_2",0.562341,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_3",0.562341,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_4",0.562341,1,20};
			sound[] = {"sound0",0.2,"sound1",0.2,"sound2",0.4,"sound3",0.2};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsKnob",0.630957,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class MetalBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSqueak_2",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsKnob_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsKnob_2",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalBigDoors\MetalBigDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class MetalOldDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_3",1,1,20};
			sound[] = {"sound0",0.33,"sound1",0.33,"sound2",0.33};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldDoors\MetalOldDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class MetalOldBigDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSqueak_2",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalOldBigDoors\MetalOldBigDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class RollDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_1",1,1,35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_2",1,1,35};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_3",1,1,35};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSqueak_4",1,1,35};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_1",1,1,35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_2",1,1,35};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsKnob_1",1,1,35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsKnob_2",1,1,35};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_1",1,1,35};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_2",1,1,35};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
	};
	class ServoDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_1",0.354813,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_2",0.354813,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_3",0.354813,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_4",0.354813,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam",0.354813,1,20};
			sound[] = {"sound0",1};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsKnob",0.354813,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class ServoRampSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_1",1,1,60};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_2",1,1,60};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_3",1,1,60};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSqueak_4",1,1,60};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorMovementDone1
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.9,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam",1,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone2
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.05])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam",1,1,60};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoDoors\ServoDoorsSlam",1,1,60};
			sound[] = {"sound0",1};
		};
	};
	class ServoRampSound_2
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSound_1",1,1,60};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSound_2",1,1,60};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class DoorMovementDone1
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSlam",1,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone2
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSlam",1,1,60};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\ServoRamp\ServoRampSlam",1,1,60};
			sound[] = {"sound0",1};
		};
	};
	class GateDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSqueak_1",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSlam",1,1,20};
			sound[] = {"sound0",1};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateKnob",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GateDoors\GateSlam",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class FenceGateDoorsSound
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSqueak_4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_2",1,1,20};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateKnob",0.707946,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\FenceGateDoors\fenceGateSlam_2",1,1,20};
			sound[] = {"sound0",1};
		};
	};
	class RoadGateDoors
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_1",1,1,45};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_2",1,1,45};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_3",1,1,45};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSqueake_4",1,1,45};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSlam",1,1,45};
			sound[] = {"sound0",1};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\dummysound",1,1,45};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RoadGateDoors\RoadGateDoorsSlam",1,1,45};
			sound[] = {"sound0",1};
		};
	};
	class TerminalLockSound
	{
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_lock_open",0.562341,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.15,0.14])";
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_lock_close",0.562341,1,20};
			sound[] = {"sound0",1};
		};
	};
	class TerminalAntennaSound
	{
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.8,0.81])";
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_antena_open",1,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[2.98,2.97])";
			sound0[] = {"A3\Sounds_F\sfx\objects\upload_terminal\Terminal_antena_close",1,1,20};
			sound[] = {"sound0",1};
		};
	};
};
class CfgSoundCurves
{
	class defaultAmpAttenuationCurve
	{
		points[] = {{0,1},{0.01,0.7},{0.035,0.45},{0.085,0.25},{0.14,0.15},{0.22,0.09},{0.325,0.05},{0.45,0.02},{0.7,0.01},{1,0}};
	};
	class defaultWeaponAmpAttenuationCurve
	{
		points[] = {{0,1},{0.0025,0.7},{0.00875,0.45},{0.02125,0.25},{0.035,0.15},{0.08125,0.1},{0.175,0.075},{0.7,0.01},{1,0}};
	};
	class defaultLFECurve
	{
		points[] = {{0,0.55},{0.0625,0.25},{0.125,0.1},{0.25,0.05},{1,0}};
	};
	class Constant1Curve
	{
		points[] = {{0,1},{1,1}};
	};
	class LinearCurve
	{
		points[] = {{0,1},{1,0}};
	};
	class LinearReverseCurve
	{
		points[] = {{0,0},{1,1}};
	};
	class InverseSquare1Curve
	{
		points[] = {{0,0.9751},{0.1,0.6332},{0.2,0.4307},{0.3,0.3009},{0.4,0.2128},{0.5,0.1503},{0.6,0.1043},{0.7,0.0695},{0.8,0.0426},{0.9,0.0213},{1,0.0041}};
	};
	class InverseSquare2Curve
	{
		points[] = {{0,1},{0.05,0.615},{0.1,0.4194},{0.15,0.3015},{0.2,0.225},{0.25,0.1725},{0.3,0.135},{0.35,0.1072},{0.4,0.0861},{0.45,0.0697},{0.5,0.0566},{0.6,0.0375},{0.7,0.0244},{0.8,0.015},{0.9,0.0081},{1,0}};
	};
	class InverseSquare3Curve
	{
		points[] = {{0,1},{0.01,0.7886},{0.02,0.6394},{0.03,0.5309},{0.04,0.4496},{0.05,0.387},{0.07,0.2983},{0.1,0.2175},{0.13,0.169},{0.2,0.1096},{0.4,0.0533},{0.6,0.0315},{0.8,0.0168},{1,0}};
	};
	class InverseSquare4Curve
	{
		points[] = {{0,1},{0.0025,0.7735},{0.005,0.6219},{0.0075,0.5142},{0.01,0.435},{0.015,0.3284},{0.02,0.2619},{0.025,0.2176},{0.035,0.1639},{0.05,0.1233},{0.07,0.0976},{0.09,0.0842},{0.15,0.0663},{0.2,0.0591},{0.3,0.0493},{0.4,0.0415},{0.5,0.0343},{0.6,0.0274},{0.7,0.0205},{0.8,0.0137},{0.9,0.007},{1,0}};
	};
	class LogReverse1Curve
	{
		points[] = {{0,1},{0.1,0.9573},{0.2,0.912},{0.3,0.8615},{0.4,0.8042},{0.5,0.7383},{0.6,0.6605},{0.7,0.5658},{0.8,0.4443},{0.9,0.2752},{1,0}};
	};
	class closeShotCurve
	{
		points[] = {{0,1},{0.1,0.5613},{0.2,0.3502},{0.3,0.2309},{0.4,0.1569},{0.5,0.108},{0.6,0.0739},{0.7,0.0493},{0.8,0.0308},{0.9,0.0167},{1,0}};
	};
	class Smooth1Curve
	{
		points[] = {{0,1},{0.1,0.98},{0.2,0.92},{0.3,0.8},{0.4,0.65},{0.5,0.5},{0.6,0.35},{0.7,0.2},{0.8,0.08},{0.9,0.02},{1,0}};
	};
	class CannonCloseShotCurve
	{
		points[] = {{0,0.9751},{0.1,0.6332},{0.2,0.4307},{0.3,0.3009},{0.4,0.2128},{0.5,0.1503},{0.6,0.1043},{0.7,0.0695},{0.8,0.0426},{0.9,0.0213},{1,0.0041}};
	};
	class CannonMidShotCurve
	{
		points[] = {{0,0.9751},{0.1,0.6332},{0.2,0.4307},{0.3,0.3009},{0.4,0.2128},{0.5,0.1503},{0.6,0.1043},{0.7,0.0695},{0.8,0.0426},{0.9,0.0213},{1,0.0041}};
	};
	class InverseSquareCurve_1
	{
		points[] = {{0,0.9751},{0.1,0.6332},{0.2,0.4307},{0.3,0.3009},{0.4,0.2128},{0.5,0.1503},{0.6,0.1043},{0.7,0.0695},{0.8,0.0426},{0.9,0.0213},{1,0}};
	};
	class InverseSquareCurve_2
	{
		points[] = {{0,1},{0.05,0.615},{0.1,0.4194},{0.15,0.3015},{0.2,0.225},{0.25,0.1725},{0.3,0.135},{0.35,0.1072},{0.4,0.0861},{0.45,0.0697},{0.5,0.0566},{0.6,0.0375},{0.7,0.0244},{0.8,0.015},{0.9,0.0081},{1,0}};
	};
	class InverseSquareCurve_3
	{
		points[] = {{0,1},{0.01,0.7886},{0.02,0.6394},{0.03,0.5309},{0.04,0.4496},{0.05,0.387},{0.07,0.2983},{0.1,0.2175},{0.13,0.169},{0.2,0.1096},{0.4,0.0533},{0.6,0.0315},{0.8,0.0168},{1,0}};
	};
	class InverseSquareCurve_4
	{
		points[] = {{0,1},{0.0025,0.7735},{0.005,0.6219},{0.0075,0.5142},{0.01,0.435},{0.015,0.3284},{0.02,0.2619},{0.025,0.2176},{0.035,0.1639},{0.05,0.1233},{0.07,0.0976},{0.09,0.0842},{0.15,0.0663},{0.2,0.0591},{0.3,0.0493},{0.4,0.0415},{0.5,0.0343},{0.6,0.0274},{0.7,0.0205},{0.8,0.0137},{0.9,0.007},{1,0}};
	};
	class ReverseLogCurve_1
	{
		points[] = {{0,1},{0.1,0.9573},{0.2,0.912},{0.3,0.8615},{0.4,0.8042},{0.5,0.7383},{0.6,0.6605},{0.7,0.5658},{0.8,0.4443},{0.9,0.2752},{1,0}};
	};
	class S_Curve
	{
		points[] = {{0,1},{0.1,0.98},{0.2,0.92},{0.3,0.8},{0.4,0.65},{0.5,0.5},{0.6,0.35},{0.7,0.2},{0.8,0.08},{0.9,0.02},{1,0}};
	};
};
class CfgSoundShaders
{
	class DebugSound_SoundShader
	{
		samples[] = {{"A3\Sounds_F\debugsound",1}};
		volume = 1;
		range = 2000;
	};
	class DummySound_SoundShader
	{
		samples[] = {{"A3\Sounds_F\dummysound",1}};
		volume = 1;
		range = 2000;
	};
	class Silence_SoundShader
	{
		samples[] = {{"A3\Sounds_F\dummysound",1}};
		volume = 1;
		range = 2000;
	};
	class Explosion_debrisSoft_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Soft_01",1},{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Soft_02",1},{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Soft_03",1}};
		volume = "forest";
		range = 50;
		limitation = 1;
	};
	class Explosion_debrisDirt_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Dirt_01",1},{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Dirt_02",1},{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Dirt_03",1}};
		volume = "meadows";
		range = 50;
		limitation = 1;
	};
	class Explosion_debrisHard_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Hard_01",1},{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Hard_02",1},{"A3\Sounds_F\arsenal\sfx\debris\DebrisSmall_Hard_03",1}};
		volume = "houses";
		range = 50;
		limitation = 1;
	};
	class BulletSonicCrack_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack1",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack2",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack3",1}};
		volume = 1;
		range = 400;
	};
	class BulletSonicCrack_tailMeadow_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailMeadow01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailMeadow01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailMeadow01",1}};
		volume = "meadow";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		range = 400;
		limitation = 1;
	};
	class BulletSonicCrack_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailForest01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailForest01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailForest01",1}};
		volume = "forest";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		range = 400;
		limitation = 1;
	};
	class BulletSonicCrack_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailTrees01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailTrees01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailTrees01",1}};
		volume = "trees";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		range = 400;
		limitation = 1;
	};
	class BulletSonicCrack_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailHouses01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailHouses01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\sonicCrack_tailHouses01",1}};
		volume = "houses max interior";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		range = 400;
		limitation = 1;
	};
	class BulletSonicCrack_Gatling_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\SonicCrack_Gatling_01",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\SonicCrack_Gatling_02",1},{"A3\Sounds_F\arsenal\sfx\bullet_sonicCrack\SonicCrack_Gatling_03",1}};
		volume = 1;
		range = 400;
	};
	class BulletFlyBy_SoundShader
	{
		samples[] = {{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",1},{"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",1}};
		volume = "0dB";
		range = 30;
	};
	class GrenadeHe_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_closeExp_04",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class GrenadeHe_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_midExp_04",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class GrenadeHe_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_distExp_03",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class GrenadeHe_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_04",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class GrenadeHe_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class GrenadeHe_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_04",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class MiniGrenade_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_closeExp_04",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class MiniGrenade_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_midExp_04",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class MiniGrenade_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_distExp_03",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class MiniGrenade_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailForest_04",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class MiniGrenade_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class MiniGrenade_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeLight_tailHouses_04",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class GrenadeLauncher_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_closeExp_04",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class GrenadeLauncher_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_midExp_04",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class GrenadeLauncher_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumB_distExp_03",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class GrenadeLauncher_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailForest_04",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class GrenadeLauncher_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class GrenadeLauncher_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeMediumA_tailHouses_04",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class Mortar_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_closeExp_04",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Mortar_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_midExp_04",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Mortar_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_distExp_03",1}};
		volume = 1.12202;
		range = 3000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{3000,1}};
	};
	class Mortar_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailForest_04",1}};
		volume = "forest";
		range = 1000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1000,0}};
	};
	class Mortar_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 1000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1000,0}};
	};
	class Mortar_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\grenades\GrenadeHeavy_tailHouses_04",1}};
		volume = "houses";
		range = 1000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1000,0}};
	};
	class APMine_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_02",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class APmine_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_midExp_02",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class APmine_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLight_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLight_distExp_02",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class APmine_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_tailForest_02",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class APmine_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_tailMeadows_02",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class APmine_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightA_tailHouses_02",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class ATMine_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_05",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_06",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class ATmine_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_midExp_02",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class ATmine_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_02",1}};
		volume = 1.12202;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class ATmine_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_tailForest_02",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class ATmine_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_tailMeadows_02",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class ATmine_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyC_tailHouses_02",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class M6slamMine_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_02",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class M6slamMine_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_midExp_02",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class M6slamMine_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLight_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLight_distExp_02",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class M6slamMine_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_tailForest_02",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class M6slamMine_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_tailMeadows_02",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class M6slamMine_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineLightB_tailHouses_02",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class TipToeMine_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_01",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class TipToeMine_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightC_midExp",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class TipToeMine_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLight_distExp",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class TipToeMine_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightC_tailForest",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class TipToeMine_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightC_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class TipToeMine_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightC_tailHouses",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class TripwireMine_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_01",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class TripwireMine_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightD_midExp",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class TripwireMine_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLight_distExp",1}};
		volume = 1.12202;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class TripwireMine_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightD_tailForest",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class TripwireMine_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightD_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class TripwireMine_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineLightD_tailHouses",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class ExplosiveCharge_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_02",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class ExplosiveCharge_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyB_midExp",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class ExplosiveCharge_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_02",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class ExplosiveCharge_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyB_tailForest",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class ExplosiveCharge_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyB_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class ExplosiveCharge_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyB_tailHouses",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class SmallIED_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_04",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class SmallIED_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_midExp_02",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class SmallIED_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMedium_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMedium_distExp_02",1}};
		volume = 1.12202;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class SmallIED_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailForest_02",1}};
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class SmallIED_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailMeadows_02",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class SmallIED_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailHouses_02",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class BigIED_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_04",1}};
		volume = 1;
		range = 110;
		rangeCurve = "CannonCloseShotCurve";
	};
	class BigIED_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_midExp_02",1}};
		volume = 1;
		range = 400;
		rangeCurve = "CannonMidShotCurve";
	};
	class BigIED_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_02",1}};
		volume = 1;
		range = 3000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{3000,1}};
	};
	class BigIED_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_tailForest_02",1}};
		volume = "forest";
		range = 3000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{3000,0}};
	};
	class BigIED_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_tailMeadows_02",1}};
		volume = "meadows max sea/2";
		range = 3000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{3000,0}};
	};
	class BigIED_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavyA_tailHouses_02",1}};
		volume = "houses";
		range = 3000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{3000,0}};
	};
	class ClaymoreMine_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_02",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class ClaymoreMine_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumB_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumB_midExp_02",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class ClaymoreMine_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineHeavy_distExp_02",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class ClaymoreMine_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailForest_02",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class ClaymoreMine_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailMeadows_02",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class ClaymoreMine_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\mines\MineMediumA_tailHouses_02",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class RocketsLight_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_03",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class RocketsLight_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_midExp_03",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class RocketsLight_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_distExp_02",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
	};
	class RocketsLight_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailForest_03",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class RocketsLight_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailMeadows_03",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class RocketsLight_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketLight_tailHouses_03",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class RocketsMedium_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_03",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class RocketsMedium_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_midExp_03",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class RocketsMedium_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_distExp_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class RocketsMedium_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailForest_03",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class RocketsMedium_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailMeadows_03",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class RocketsMedium_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketMedium_tailHouses_03",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class RocketsHeavy_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_03",1}};
		volume = 1;
		range = 110;
		rangeCurve = "CannonCloseShotCurve";
	};
	class RocketsHeavy_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_midExp_03",1}};
		volume = 1;
		range = 400;
		rangeCurve = "CannonMidShotCurve";
	};
	class RocketsHeavy_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_distExp_03",1}};
		volume = 1;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class RocketsHeavy_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailForest_03",1}};
		volume = "forest";
		range = 1500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1500,0}};
	};
	class RocketsHeavy_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailMeadows_03",1}};
		volume = "meadows max sea/2";
		range = 1500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1500,0}};
	};
	class RocketsHeavy_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailHouses_03",1}};
		volume = "houses";
		range = 1500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1500,0}};
	};
	class Shell19mm25mm_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightC_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightC_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightC_closeExp_03",1}};
		volume = 1;
		range = 1000;
		rangeCurve[] = {{0,1},{300,0.75},{1000,0}};
	};
	class Shell30mm40mm_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_closeExp_04",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class Shell30mm40mm_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_midExp_04",1}};
		volume = 1.41254;
		range = 1500;
		rangeCurve[] = {{0,1},{100,1},{1500,0}};
	};
	class Shell30mm40mm_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_distExp_03",1}};
		volume = 1.12202;
		range = 1500;
		rangeCurve[] = {{0,0},{100,0},{250,1},{1500,1}};
	};
	class Shell30mm40mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailForest_04",1}};
		volume = "forest";
		range = 1500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1500,0}};
	};
	class Shell30mm40mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 1500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1500,0}};
	};
	class Shell30mm40mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightB_tailHouses_04",1}};
		volume = "houses";
		range = 1500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{1500,0}};
	};
	class Shell105mm130mm_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_04",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Shell105mm130mm_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_midExp_04",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Shell105mm130mm_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_distExp_03",1}};
		volume = 1;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Shell105mm130mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Shell105mm130mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Shell105mm130mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellMedium_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Shell155mm_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_04",1}};
		volume = 1;
		range = 110;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Shell155mm_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_midExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_midExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_midExp_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_midExp_04",1}};
		volume = 1.41254;
		range = 400;
		rangeCurve = "CannonMidShotCurve";
	};
	class Shell155mm_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_distExp_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_distExp_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_distExp_03",1}};
		volume = 1.12202;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Shell155mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Shell155mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Shell155mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyA_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class BombsHeavy_closeExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavy_closeExp",1}};
		volume = 1;
		range = 70;
		rangeCurve = "CannonCloseShotCurve";
	};
	class BombsHeavy_midExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyB_midExp",1}};
		volume = 1;
		range = 400;
		rangeCurve = "CannonMidShotCurve";
	};
	class BombsHeavy_distExp_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyB_distExp",1}};
		volume = 1.41254;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class BombsHeavy_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyB_tailForest",1}};
		volume = "forest";
		range = 2000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2000,0}};
	};
	class BombsHeavy_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyB_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2000,0}};
	};
	class BombsHeavy_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellHeavyB_tailHouses",1}};
		volume = "houses";
		range = 2000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2000,0}};
	};
	class 4Five_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_closure_02",1}};
		range = 5;
		volume = 0.223872;
	};
	class 4Five_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 4Five_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_midShot_03",1}};
		volume = 0.707946;
		range = 1200;
		rangeCurve[] = {{0,0.2},{50,1},{150,0},{1200,0}};
	};
	class 4Five_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_distShot_03",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1200,1}};
	};
	class 4Five_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_taildistant",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{300,0.7},{1200,1}};
		limitation = 1;
	};
	class 4Five_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class 4Five_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		rangeCurve[] = {{0,1},{150,0.3},{1200,0}};
		limitation = 1;
	};
	class 4Five_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_tailinterior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{30,0.4},{100,0.2},{250,0}};
		limitation = 1;
	};
	class 4Five_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class 4Five_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class 4Five_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class 4Five_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class 4Five_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class 4Five_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class 4Five_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class 4Five_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4Five_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ACPC2_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_closure_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_closure_03",1}};
		range = 5;
		volume = 0.223872;
	};
	class ACPC2_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ACPC2_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_midShot_03",1}};
		volume = 0.707946;
		range = 1200;
		rangeCurve[] = {{0,0.2},{50,1},{150,0},{1200,0}};
	};
	class ACPC2_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_distShot_03",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1200,1}};
	};
	class ACPC2_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_taildistant",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{300,0.7},{1200,1}};
		limitation = 1;
	};
	class ACPC2_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class ACPC2_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		rangeCurve[] = {{0,1},{150,0.3},{1200,0}};
		limitation = 1;
	};
	class ACPC2_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_tailinterior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{30,0.4},{100,0.2},{250,0}};
		limitation = 1;
	};
	class ACPC2_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class ACPC2_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class ACPC2_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class ACPC2_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ACPC2_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class ACPC2_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class ACPC2_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ACPC2_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\ACPC2_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class P07_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closure_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closure_03",1}};
		range = 5;
		volume = 0.223872;
	};
	class P07_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class P07_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_midShot_03",1}};
		volume = 0.707946;
		range = 1200;
		rangeCurve[] = {{0,0.2},{50,1},{150,0},{1200,0}};
	};
	class P07_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_distShot_03",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1200,1}};
	};
	class P07_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_taildistant",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{300,0.7},{1200,1}};
		limitation = 1;
	};
	class P07_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class P07_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		rangeCurve[] = {{0,1},{150,0.3},{1200,0}};
		limitation = 1;
	};
	class P07_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tailinterior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{30,0.4},{100,0.2},{250,0}};
		limitation = 1;
	};
	class P07_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class P07_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class P07_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class P07_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class P07_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class P07_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class P07_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class P07_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Rook40_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_closure_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_closure_03",1}};
		range = 5;
		volume = 0.223872;
	};
	class Rook40_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Rook40_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_midShot_03",1}};
		volume = 0.707946;
		range = 1200;
		rangeCurve[] = {{0,0.2},{50,1},{150,0},{1200,0}};
	};
	class Rook40_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_distShot_03",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1200,1}};
	};
	class Rook40_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_taildistant",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{300,0.7},{1200,1}};
		limitation = 1;
	};
	class Rook40_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Rook40_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		rangeCurve[] = {{0,1},{150,0.3},{1200,0}};
		limitation = 1;
	};
	class Rook40_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tailinterior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{30,0.4},{100,0.2},{250,0}};
		limitation = 1;
	};
	class Rook40_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Rook40_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Rook40_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Rook40_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Rook40_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Rook40_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Rook40_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Rook40_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Zubr_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_closure_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_closure_03",1}};
		range = 5;
		volume = 0.223872;
	};
	class Zubr_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Zubr_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_midShot_03",1}};
		volume = 0.707946;
		range = 1200;
		rangeCurve[] = {{0,0.2},{50,1},{150,0},{1200,0}};
	};
	class Zubr_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_distShot_03",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1200,1}};
	};
	class Zubr_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_taildistant",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{300,0.7},{1200,1}};
		limitation = 1;
	};
	class Zubr_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Zubr_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		rangeCurve[] = {{0,1},{150,0.3},{1200,0}};
		limitation = 1;
	};
	class Zubr_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tailinterior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{30,0.4},{100,0.2},{250,0}};
		limitation = 1;
	};
	class Zubr_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Zubr_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Pistols\Zubr\Zubr_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class GM6Lynx_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_closure_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_closure_02",1}};
		range = 5;
		volume = 0.223872;
	};
	class GM6Lynx_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class GM6Lynx_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_midShot_03",1}};
		volume = 0.707946;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{1500,0}};
	};
	class GM6Lynx_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_distShot_01",1}};
		volume = 1.77828;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{1500,1}};
	};
	class GM6Lynx_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_taildistant",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{300,1},{2500,1}};
		limitation = 1;
	};
	class GM6Lynx_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2500;
		rangeCurve[] = {{0,1},{2500,0.3}};
		limitation = 1;
	};
	class GM6Lynx_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{300,0.3},{1500,0.3}};
		limitation = 1;
	};
	class GM6Lynx_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.2},{100,0.05},{350,0}};
		limitation = 1;
	};
	class GM6Lynx_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2500;
		rangeCurve[] = {{0,1},{2500,0.3}};
		limitation = 1;
	};
	class GM6Lynx_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2500;
		rangeCurve[] = {{0,1},{2500,0.3}};
		limitation = 1;
	};
	class M320_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class M320_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class M320_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_midShot_03",1}};
		volume = 0.707946;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class M320_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class M320_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class M320_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class M320_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class M320_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class M320_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class M320_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR01_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class DMR01_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class DMR01_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_midShot_03",1}};
		volume = 0.501187;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class DMR01_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class DMR01_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class DMR01_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR01_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class DMR01_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class DMR01_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR01_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR01_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class DMR01_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR01_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class DMR01_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class DMR01_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR01_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk18_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class Mk18_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class Mk18_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_midShot_03",1}};
		volume = 0.501187;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class Mk18_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class Mk18_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Mk18_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk18_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class Mk18_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class Mk18_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk18_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk18_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Mk18_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk18_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Mk18_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Mk18_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk18_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk200_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closure_02",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closure_03",1}};
		range = 5;
		volume = 0.446684;
	};
	class Mk200_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Mk200_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class Mk200_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Mk200_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Mk200_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk200_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class Mk200_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class Mk200_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk200_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk200_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Mk200_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk200_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Mk200_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Mk200_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk200_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Zafir_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class Zafir_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Zafir_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_midShot_03",1}};
		volume = 0.398107;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class Zafir_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Zafir_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Zafir_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Zafir_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class Zafir_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class Zafir_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Zafir_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Katiba_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_closure_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_closure_02",1}};
		volume = 0.446684;
		range = 5;
	};
	class Katiba_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Katiba_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_midShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class Katiba_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Katiba_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Katiba_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class Katiba_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class Katiba_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class Katiba_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class Katiba_Shot_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",1}};
		volume = 1;
		range = 400;
	};
	class Katiba_tailInterior_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Katiba_tailTrees_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_tail_trees",1}};
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class Katiba_tailForest_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_tail_forest",1}};
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class Katiba_tailMeadows_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class Katiba_tailHouses_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_tail_houses",1}};
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class Katiba_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Katiba_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Katiba_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Katiba_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Katiba_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Katiba_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk20_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class Mk20_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Mk20_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_midShot_03",1}};
		volume = 0.707946;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class Mk20_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Mk20_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Mk20_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk20_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class Mk20_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class Mk20_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk20_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Mk20_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Mk20_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk20_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Mk20_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Mk20_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Mk20_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MX_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",1}};
		volume = 0.446684;
		range = 5;
	};
	class MX_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MX_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_midShot_03",1}};
		volume = 0.794328;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class MX_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class MX_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailInterior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class MX_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class MX_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class MX_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class MX_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_tailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class MX_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MX_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MX_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class MX_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class MX_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MX_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SDAR_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class SDAR_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SDAR_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_midShot_03",1}};
		volume = 0.398107;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class SDAR_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class SDAR_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class SDAR_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SDAR_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class SDAR_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SDAR_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SDAR_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class TRG20_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_closure_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class TRG20_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class TRG20_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_midShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_midShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_midShot_03",1}};
		volume = 0.398107;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class TRG20_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class TRG20_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class TRG20_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class TRG20_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class TRG20_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class TRG20_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class TRG20_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class TRG20_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class TRG20_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class TRG20_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class TRG20_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class TRG20_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class TRG20_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_closure_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class SMGPDW2000_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SMGPDW2000_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_midShot_03",1}};
		volume = 1.41254;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{100,0},{1500,0}};
	};
	class SMGPDW2000_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_distShot_03",1}};
		volume = 1;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{100,1},{1500,1}};
	};
	class SMGPDW2000_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_taildistant",1}};
		volume = 1;
		range = 1500;
		rangeCurve[] = {{0,0},{300,1},{1500,1}};
		limitation = 1;
	};
	class SMGPDW2000_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{200,0.3},{800,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SMGPDW2000_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SMGPDW2000_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SMGPDW2000_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SMGPDW2000_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGPDW2000_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\PDW2000_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGSting_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_closure_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class SMGSting_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SMGSting_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_midShot_03",1}};
		volume = 0.446684;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class SMGSting_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_distShot_03",1}};
		volume = 1;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class SMGSting_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_taildistant",1}};
		volume = 1.77828;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class SMGSting_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGSting_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{200,0.3},{800,0.3}};
		limitation = 1;
	};
	class SMGSting_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SMGSting_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGSting_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGSting_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SMGSting_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGSting_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SMGSting_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SMGSting_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGSting_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGVermin_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_closure_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class SMGVermin_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SMGVermin_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_midShot_03",1}};
		volume = 0.562341;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class SMGVermin_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_distShot_03",1}};
		volume = 1;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class SMGVermin_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant",1}};
		volume = 1.77828;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class SMGVermin_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGVermin_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{200,0.3},{1500,0.3}};
		limitation = 1;
	};
	class SMGVermin_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SMGVermin_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGVermin_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitation = 1;
	};
	class SMGVermin_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerShot_01",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerShot_02",1},{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SMGVermin_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGVermin_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SMGVermin_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SMGVermin_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SMGVermin_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class UGL_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1}};
		range = 5;
		volume = 0.446684;
	};
	class UGL_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons\UGL\UGL_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons\UGL\UGL_closeShot_03",1}};
		volume = 1;
		range = 30;
		rangeCurve = "closeShotCurve";
	};
	class UGL_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_midShot_01",1},{"A3\Sounds_F\arsenal\weapons\UGL\UGL_midShot_02",1},{"A3\Sounds_F\arsenal\weapons\UGL\UGL_midShot_03",1}};
		volume = 1;
		range = 800;
		rangeCurve[] = {{0,0.5},{30,1},{150,0},{800,0}};
	};
	class UGL_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_distShot_01",1},{"A3\Sounds_F\arsenal\weapons\UGL\UGL_distShot_02",1},{"A3\Sounds_F\arsenal\weapons\UGL\UGL_distShot_03",1}};
		volume = 1;
		range = 800;
		rangeCurve[] = {{0,0},{30,0},{150,1},{800,1}};
	};
	class UGL_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 800;
		rangeCurve[] = {{0,1},{800,0.3}};
		limitation = 1;
	};
	class UGL_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 500;
		rangeCurve[] = {{0,1},{100,0.5},{500,0.3}};
		limitation = 1;
	};
	class UGL_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class UGL_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 800;
		rangeCurve[] = {{0,1},{800,0.3}};
		limitation = 1;
	};
	class UGL_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\UGL\UGL_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 800;
		rangeCurve[] = {{0,1},{800,0.3}};
		limitation = 1;
	};
	class Launcher_NLAW_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_01",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Launcher_NLAW_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_launcher_midShot",1}};
		volume = 1.99526;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Launcher_NLAW_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_launcher_distShot",1}};
		volume = 1.99526;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Launcher_NLAW_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_NLAW_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_NLAW_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_RPG32_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_02",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Launcher_RPG32_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\RPG32_launcher_midShot",1}};
		volume = 1.99526;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Launcher_RPG32_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\RPG32_launcher_distShot",1}};
		volume = 1.99526;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Launcher_RPG32_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_RPG32_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_RPG32_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_Titan_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_03",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Launcher_Titan_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan_launcher_midShot",1}};
		volume = 1.99526;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Launcher_Titan_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan_launcher_distShot",1}};
		volume = 1.99526;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Launcher_Titan_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_Titan_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_Titan_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class autocannon35mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_closeShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class autocannon35mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_midShot_03",1}};
		volume = 0.707946;
		range = 2300;
		rangeCurve[] = {{0,0.5},{150,1},{300,0},{2300,0}};
	};
	class autocannon35mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_distShot_03",1}};
		volume = 1;
		range = 2300;
		rangeCurve[] = {{0,0},{150,0},{300,1},{2300,1}};
	};
	class autocannon35mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{300,1},{1700,1}};
		limitable = 1;
	};
	class autocannon35mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class autocannon35mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{200,0.3},{800,0.3}};
		limitable = 1;
	};
	class autocannon35mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class autocannon35mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_35mm\autocannon35mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon30mmBody_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_closeShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Autocannon30mmBody_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_midShot_03",1}};
		volume = 1.41254;
		range = 2300;
		rangeCurve[] = {{0,0.2},{150,1},{400,0},{2300,0}};
	};
	class Autocannon30mmBody_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_distShot_03",1}};
		volume = 1;
		range = 2300;
		rangeCurve[] = {{0,0},{150,0},{400,1},{2300,1}};
	};
	class Autocannon30mmBody_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_taildistant",1}};
		volume = 0.707946;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class Autocannon30mmBody_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon30mmBody_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{200,0.3},{800,0.3}};
		limitable = 1;
	};
	class Autocannon30mmBody_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon30mmBody_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmBody_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon30mmTurret_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_closeShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Autocannon30mmTurret_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_midShot_03",1}};
		volume = 1;
		range = 2300;
		rangeCurve[] = {{0,0.2},{150,1},{400,0},{2300,0}};
	};
	class Autocannon30mmTurret_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_distShot_03",1}};
		volume = 1.77828;
		range = 2300;
		rangeCurve[] = {{0,0},{150,0},{400,1},{2300,1}};
	};
	class Autocannon30mmTurret_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_taildistant",1}};
		volume = 1.41254;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class Autocannon30mmTurret_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon30mmTurret_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1700;
		rangeCurve[] = {{0,1},{200,0.5},{800,0.3},{1700,0}};
		limitable = 1;
	};
	class Autocannon30mmTurret_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon30mmTurret_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\Autocannon30mmTurret_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon40mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_closeShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Autocannon40mm_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_midShot_03",1}};
		volume = 1.41254;
		range = 2300;
		rangeCurve[] = {{0,0.5},{200,1},{400,0},{2300,0}};
	};
	class Autocannon40mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_distShot_03",1}};
		volume = 1.77828;
		range = 2300;
		rangeCurve[] = {{0,0},{200,0},{400,1},{2300,1}};
	};
	class Autocannon40mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_taildistant",1}};
		volume = 1.77828;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class Autocannon40mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon40mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1700;
		rangeCurve[] = {{0,1},{200,0.5},{800,0.3},{1700,0}};
		limitable = 1;
	};
	class Autocannon40mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class Autocannon40mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\Autocannon40mmBody_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class GMG40mm_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_closure_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class GMG40mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GMG40mm_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_midShot_03",1}};
		volume = 0.707946;
		range = 1300;
		rangeCurve[] = {{0,0.2},{50,1},{200,0},{1300,0}};
	};
	class GMG40mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_distShot_03",1}};
		volume = 1;
		range = 1300;
		rangeCurve[] = {{0,0},{50,0},{200,1},{1300,1}};
	};
	class GMG40mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_taildistant",1}};
		volume = 1;
		range = 1300;
		rangeCurve[] = {{0,0},{600,1},{1300,1}};
		limitable = 1;
	};
	class GMG40mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1300;
		rangeCurve[] = {{0,1},{1300,0.3}};
		limitable = 1;
	};
	class GMG40mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{150,0.5},{800,0.3}};
		limitable = 1;
	};
	class GMG40mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1300;
		rangeCurve[] = {{0,1},{1300,0.3}};
		limitable = 1;
	};
	class GMG40mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\GMG_40mm\GMG40mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1300;
		rangeCurve[] = {{0,1},{1300,0.3}};
		limitable = 1;
	};
	class HMG050_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_closure_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class HMG050_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class HMG050_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_midShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0.5},{100,1},{300,0},{1700,0}};
	};
	class HMG050_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_distShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{300,1},{1700,1}};
	};
	class HMG050_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class HMG050_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG050_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
		rangeCurve[] = {{0,1},{400,0.5},{1000,0.3}};
		limitable = 1;
	};
	class HMG050_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG050_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG127mm_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_closure_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class HMG127mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class HMG127mm_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_midShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0.2},{100,1},{400,0},{1700,0}};
	};
	class HMG127mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_distShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{400,1},{1700,1}};
	};
	class HMG127mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class HMG127mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG127mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
		rangeCurve[] = {{0,1},{400,0.5},{1000,0.3}};
		limitable = 1;
	};
	class HMG127mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG127mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG127mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMG65mmBody_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class LMG65mmBody_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_midShot_03",1}};
		volume = 0.707946;
		range = 1700;
		rangeCurve[] = {{0,0.5},{100,1},{250,0},{1700,0}};
	};
	class LMG65mmBody_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_distShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{250,1},{1700,1}};
	};
	class LMG65mmBody_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class LMG65mmBody_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMG65mmBody_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
		rangeCurve[] = {{0,1},{400,0.5},{1000,0.3}};
		limitable = 1;
	};
	class LMG65mmBody_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMG65mmBody_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmBody_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMG65mmTurret_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class LMG65mmTurret_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_midShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0.2},{100,1},{250,0},{1700,0}};
	};
	class LMG65mmTurret_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_distShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{250,1},{1700,1}};
	};
	class LMG65mmTurret_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class LMG65mmTurret_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMG65mmTurret_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{800,0.3}};
		limitable = 1;
	};
	class LMG65mmTurret_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMG65mmTurret_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG65mmTurret_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMGCoax762mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class LMGCoax762mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_midShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0.5},{100,1},{250,0},{1700,0}};
	};
	class LMGCoax762mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_distShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{250,1},{1700,1}};
	};
	class LMGCoax762mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class LMGCoax762mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMGCoax762mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMGCoax762mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMGCoax762mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMGCoax762mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class LMGMinigun65mm_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_rotation_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_rotation_02",1}};
		volume = 0.251189;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class LMGMinigun65mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class LMGMinigun65mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_midShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{1800,0}};
	};
	class LMGMinigun65mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_distShot_03",1}};
		volume = 1.77828;
		range = 1800;
		rangeCurve[] = {{0,0},{100,0},{300,1},{1800,1}};
	};
	class LMGMinigun65mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_taildistant",1}};
		volume = 1.41254;
		range = 1500;
		rangeCurve[] = {{0,0},{600,1},{1500,1}};
		limitable = 1;
	};
	class LMGMinigun65mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitable = 1;
	};
	class LMGMinigun65mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{200,0.5},{800,0.3},{1500,0}};
		limitable = 1;
	};
	class LMGMinigun65mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitable = 1;
	};
	class LMGMinigun65mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitable = 1;
	};
	class M134Minigun_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_rotation_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_rotation_02",1}};
		volume = 0.630957;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class M134Minigun_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class M134Minigun_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_midShot_03",1}};
		volume = 0.446684;
		range = 1800;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{1800,0}};
	};
	class M134Minigun_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_distShot_03",1}};
		volume = 1.77828;
		range = 1800;
		rangeCurve[] = {{0,0},{100,0},{300,1},{1800,1}};
	};
	class M134Minigun_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_taildistant",1}};
		volume = 1.41254;
		range = 1500;
		rangeCurve[] = {{0,0},{600,1},{1500,1}};
		limitable = 1;
	};
	class M134Minigun_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitable = 1;
	};
	class M134Minigun_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{200,0.5},{800,0.3},{1500,0}};
		limitable = 1;
	};
	class M134Minigun_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitable = 1;
	};
	class M134Minigun_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1500;
		rangeCurve[] = {{0,1},{1500,0.3}};
		limitable = 1;
	};
	class Cannon105mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\Cannon105mm_closeShot",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Cannon105mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\Cannon105mm_midShot",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Cannon105mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_distShot",1}};
		volume = 1.41254;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class Cannon105mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailForest",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon105mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon105mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailHouses",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon120mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon120mm_closeShot",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Cannon120mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon120mm_midShot",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Cannon120mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_distShot",1}};
		volume = 1.41254;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class Cannon120mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailForest",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon120mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon120mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailHouses",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon125mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon125mm_closeShot",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Cannon125mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon125mm_midShot",1}};
		volume = 1;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Cannon125mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_distShot",1}};
		volume = 1.41254;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class Cannon125mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailForest",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon125mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon125mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\CannonMedium_tailHouses",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Cannon155mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\Cannon155mm_closeShot",1}};
		volume = 1;
		range = 110;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Cannon155mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\Cannon155mm_midShot",1}};
		volume = 1;
		range = 400;
		rangeCurve = "CannonMidShotCurve";
	};
	class Cannon155mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\CannonHeavy_distShot",1}};
		volume = 1.41254;
		range = 3000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{3000,1}};
	};
	class Cannon155mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\CannonHeavy_tailForest",1}};
		volume = "forest";
		range = 3000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{3000,0}};
	};
	class Cannon155mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\CannonHeavy_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 3000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{3000,0}};
	};
	class Cannon155mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\CannonHeavy_tailHouses",1}};
		volume = "houses";
		range = 3000;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{3000,0}};
	};
	class RocketsLight_Shot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesLight_shot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesLight_shot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesLight_shot_03",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesLight_shot_04",1}};
		volume = 1;
		range = 1000;
	};
	class RocketsMedium_shot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesMedium_shot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesMedium_shot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesMedium_shot_03",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesMedium_shot_04",1}};
		volume = 1;
		range = 1300;
	};
	class RocketsHeavy_shot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesHeavy_shot_01",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesHeavy_shot_02",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesHeavy_shot_03",1},{"A3\Sounds_F\arsenal\weapons_vehicles\Missiles\MissilesHeavy_shot_04",1}};
		volume = 1;
		range = 1600;
	};
	class Mortar82mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_closeShot_03",1}};
		volume = 1;
		range = 70;
		rangeCurve[] = {{0,1},{50,0.75},{70,0}};
	};
	class Mortar82mm_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_midShot_03",1}};
		volume = 1;
		range = 2200;
		rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
	};
	class Mortar82mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_distShot_03",1}};
		volume = 1.12202;
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class Mortar82mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_tailForest",1}};
		volume = "forest";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class Mortar82mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_tailMeadows",1}};
		volume = "meadows max sea/2";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class Mortar82mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Mortar\Mortar82mm_tailHouses",1}};
		volume = "houses";
		range = 2200;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2200,0}};
	};
	class Static_Launcher_Titan_ATAA_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_closeExp_03",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Static_Launcher_Titan_ATAA_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan_launcher_midShot",1}};
		volume = 1.99526;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Static_Launcher_Titan_ATAA_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan_launcher_distShot",1}};
		volume = 1.99526;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Static_Launcher_Titan_ATAA_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Static_Launcher_Titan_ATAA_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Static_Launcher_Titan_ATAA_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class HMG127mm_static_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_closure_01",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class HMG127mm_static_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class HMG127mm_static_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_midShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0.2},{100,1},{400,0},{1700,0}};
	};
	class HMG127mm_static_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_distShot_03",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{400,1},{1700,1}};
	};
	class HMG127mm_static_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_taildistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class HMG127mm_static_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG127mm_static_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
		rangeCurve[] = {{0,1},{400,0.5},{1000,0.3}};
		limitable = 1;
	};
	class HMG127mm_static_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class HMG127mm_static_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\HMG_127mm_static\HMG127mm_static_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class GMG20mm_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_closure_01",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class GMG20mm_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_closeShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_closeShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class GMG20mm_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_midShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_midShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_midShot_03",1}};
		volume = 0.707946;
		range = 1300;
		rangeCurve[] = {{0,0.2},{50,1},{200,0},{1300,0}};
	};
	class GMG20mm_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_distShot_01",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_distShot_02",1},{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_distShot_03",1}};
		volume = 1;
		range = 1300;
		rangeCurve[] = {{0,0},{50,0},{200,1},{1300,1}};
	};
	class GMG20mm_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_taildistant",1}};
		volume = 1;
		range = 1300;
		rangeCurve[] = {{0,0},{600,1},{1300,1}};
		limitable = 1;
	};
	class GMG20mm_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1300;
		rangeCurve[] = {{0,1},{1300,0.3}};
		limitable = 1;
	};
	class GMG20mm_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 800;
		rangeCurve[] = {{0,1},{150,0.5},{800,0.3}};
		limitable = 1;
	};
	class GMG20mm_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1300;
		rangeCurve[] = {{0,1},{1300,0.3}};
		limitable = 1;
	};
	class GMG20mm_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1300;
		rangeCurve[] = {{0,1},{1300,0.3}};
		limitable = 1;
	};
	class falling_broadleaf_tree_big_SoundShader
	{
		samples[] = {{"A3\Sounds_F\environment\sfx\falling_trees\falling_broadleaf_tree_big",1}};
		volume = "time factor [0.99, 1]";
		range = 70;
		rangeCurve = "defaultAmpAttenuationCurve";
	};
	class falling_broadleaf_tree_small_SoundShader
	{
		samples[] = {{"A3\Sounds_F\environment\sfx\falling_trees\falling_broadleaf_tree_small",1}};
		volume = "1 - (time factor [0.99, 1])";
		range = 70;
		rangeCurve = "defaultAmpAttenuationCurve";
	};
	class falling_palm_big_SoundShader
	{
		samples[] = {{"A3\Sounds_F\environment\sfx\falling_trees\falling_palm_big",1}};
		volume = "time factor [0.99, 1]";
		range = 70;
		rangeCurve = "defaultAmpAttenuationCurve";
	};
	class falling_palm_small_SoundShader
	{
		samples[] = {{"A3\Sounds_F\environment\sfx\falling_trees\falling_palm_small",1}};
		volume = "1 - (time factor [0.99, 1])";
		range = 70;
		rangeCurve = "defaultAmpAttenuationCurve";
	};
	class footsteps_boots_hard_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_hard_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_hard_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_hard_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_medium_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_medium_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_medium_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_sprint_8",1}};
		volume = 0.562341;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_soft_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_soft_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_run_8",1}};
		volume = 0.354813;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_soft_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_soft_LPF_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_soft_LPF_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_run_8",1}};
		volume = 0.562341;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_soft_LPF_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_LPF_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_medium_LPF_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_medium_LPF_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_medium_LPF_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_LPF_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_medium_int_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_medium_int_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_medium_int_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_medium_int_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_soft_int_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_soft_int_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_soft_int_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_base\boot_soft_int_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_base_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_base\crawl_base_1",1},{"\A3\sounds_f\characters\footsteps\_base\crawl_base_2",1},{"\A3\sounds_f\characters\footsteps\_base\crawl_base_3",1},{"\A3\sounds_f\characters\footsteps\_base\crawl_base_4",1},{"\A3\sounds_f\characters\footsteps\_base\crawl_base_5",1}};
		volume = 0.251189;
		range = 20;
		frequency = 1;
	};
	class footsteps_asphalt_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_1",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_2",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_3",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_4",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_5",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_6",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_7",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_asphalt_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_1",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_2",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_3",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_4",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_5",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_6",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_7",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_asphalt_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_1",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_2",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_3",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_4",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_5",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_6",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_7",1},{"\A3\sounds_f\characters\footsteps\asphalt\asphalt_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_asphalt_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\concrete_crawl_1",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_2",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_3",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_4",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_concrete_walk_LPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_1",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_2",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_3",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_4",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_5",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_6",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_7",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_LPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_concrete_walk_HPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_1",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_2",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_3",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_4",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_5",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_6",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_7",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_walk_HPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_concrete_run_LPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_1",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_2",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_3",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_4",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_5",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_6",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_7",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_LPF_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_concrete_run_HPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_1",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_2",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_3",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_4",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_5",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_6",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_7",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_run_HPF_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_concrete_sprint_LPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_1",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_2",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_3",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_4",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_5",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_6",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_7",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_LPF_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_concrete_sprint_HPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_1",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_2",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_3",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_4",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_5",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_6",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_7",1},{"\A3\sounds_f\characters\footsteps\concrete\concrete_sprint_HPF_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_concrete_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\concrete_crawl_1",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_2",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_3",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_4",1},{"\A3\sounds_f\characters\crawl\concrete_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_dirt_walk_LPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_1",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_2",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_3",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_4",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_5",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_6",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_7",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_dirt_walk_HPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_1",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_2",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_3",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_4",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_5",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_6",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_7",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_HPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_dirt_run_LPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_1",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_2",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_3",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_4",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_5",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_6",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_7",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_8",1}};
		volume = 0.354813;
		range = 50;
		frequency = 1;
	};
	class footsteps_dirt_run_HPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_1",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_2",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_3",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_4",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_5",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_6",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_7",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_HPF_8",1}};
		volume = 0.354813;
		range = 50;
		frequency = 1;
	};
	class footsteps_dirt_sprint_LPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_1",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_2",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_3",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_4",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_5",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_6",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_7",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_LPF_8",1}};
		volume = 0.354813;
		range = 60;
		frequency = 1;
	};
	class footsteps_dirt_sprint_HPF_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_1",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_2",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_3",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_4",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_5",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_6",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_7",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_sprint_HPF_8",1}};
		volume = 0.354813;
		range = 60;
		frequency = 1;
	};
	class footsteps_dirt_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\dirt_crawl_1",1},{"\A3\sounds_f\characters\crawl\dirt_crawl_2",1},{"\A3\sounds_f\characters\crawl\dirt_crawl_3",1},{"\A3\sounds_f\characters\crawl\dirt_crawl_4",1},{"\A3\sounds_f\characters\crawl\dirt_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_forest_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\forest\forest_walk_1",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_2",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_3",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_4",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_5",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_6",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_7",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_8",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_9",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_10",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_11",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_12",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_13",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_14",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_15",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_16",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_17",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_18",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_19",1},{"\A3\sounds_f\characters\footsteps\forest\forest_walk_20",1}};
		volume = 0.562341;
		range = 25;
		frequency = 1;
	};
	class footsteps_forest_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\forest\forest_run_1",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_2",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_3",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_4",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_5",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_6",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_7",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_8",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_9",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_10",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_11",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_12",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_13",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_14",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_15",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_16",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_17",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_18",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_19",1},{"\A3\sounds_f\characters\footsteps\forest\forest_run_20",1}};
		volume = 0.707946;
		range = 50;
		frequency = 1;
	};
	class footsteps_forest_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_1",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_2",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_3",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_4",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_5",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_6",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_7",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_8",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_9",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_10",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_11",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_12",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_13",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_14",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_15",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_16",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_17",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_18",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_19",1},{"\A3\sounds_f\characters\footsteps\forest\forest_sprint_20",1}};
		volume = 0.749894;
		range = 60;
		frequency = 1;
	};
	class footsteps_forest_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\forest\forest_crawl_1",1},{"\A3\sounds_f\characters\footsteps\forest\forest_crawl_2",1},{"\A3\sounds_f\characters\footsteps\forest\forest_crawl_3",1},{"\A3\sounds_f\characters\footsteps\forest\forest_crawl_4",1},{"\A3\sounds_f\characters\footsteps\forest\forest_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_grass_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grass\grass_walk_1",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_2",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_3",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_4",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_5",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_6",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_7",1},{"\A3\sounds_f\characters\footsteps\grass\grass_walk_8",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_1",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_2",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_3",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_4",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_5",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_6",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_7",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_8",0.2}};
		volume = 0.0316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_grass_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grass\grass_run_1",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_2",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_3",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_4",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_5",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_6",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_7",1},{"\A3\sounds_f\characters\footsteps\grass\grass_run_8",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_1",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_2",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_3",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_4",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_5",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_6",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_7",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_run_LPF_8",0.2}};
		volume = 0.0630957;
		range = 50;
		frequency = 1;
	};
	class footsteps_grass_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_1",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_2",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_3",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_4",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_5",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_6",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_7",1},{"\A3\sounds_f\characters\footsteps\grass\grass_sprint_8",1},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_1",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_2",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_3",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_4",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_5",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_6",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_7",0.2},{"\A3\sounds_f\characters\footsteps\dirt\dirt_walk_LPF_8",0.2}};
		volume = 0.0794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_grass_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grass\grass_crawl_1",1},{"\A3\sounds_f\characters\footsteps\grass\grass_crawl_2",1},{"\A3\sounds_f\characters\footsteps\grass\grass_crawl_3",1},{"\A3\sounds_f\characters\footsteps\grass\grass_crawl_4",1},{"\A3\sounds_f\characters\footsteps\grass\grass_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_grassTall_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_1",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_2",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_3",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_4",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_5",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_6",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_7",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_walk_8",1}};
		volume = 0.707946;
		range = 25;
		frequency = 1.7;
	};
	class footsteps_grassTall_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_1",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_2",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_3",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_4",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_5",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_6",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_7",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1.7;
	};
	class footsteps_grassTall_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_1",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_2",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_3",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_4",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_5",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_6",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_7",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1.7;
	};
	class footsteps_grassTall_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_crawl_1",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_crawl_2",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_crawl_3",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_crawl_4",1},{"\A3\sounds_f\characters\footsteps\grasstall\grassTall_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1.5;
	};
	class footsteps_gravel_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_1",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_2",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_3",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_4",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_5",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_6",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_7",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_walk_8",1}};
		volume = 0.0251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_gravel_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_1",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_2",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_3",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_4",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_5",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_6",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_7",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_run_8",1}};
		volume = 0.0316228;
		range = 50;
		frequency = 1;
	};
	class footsteps_gravel_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_1",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_2",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_3",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_4",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_5",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_6",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_7",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_sprint_8",1}};
		volume = 0.0354813;
		range = 60;
		frequency = 1;
	};
	class footsteps_gravel_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gravel\gravel_crawl_1",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_crawl_2",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_crawl_3",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_crawl_4",1},{"\A3\sounds_f\characters\footsteps\gravel\gravel_crawl_5",1}};
		volume = 0.251189;
		range = 20;
		frequency = 1;
	};
	class footsteps_gridMetal_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_1",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_2",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_3",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_4",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_5",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_6",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_7",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_gridMetal_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_1",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_2",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_3",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_4",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_5",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_6",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_7",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_gridMetal_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_1",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_2",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_3",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_4",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_5",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_6",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_7",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_gridMetal_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_crawl_1",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_crawl_2",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_crawl_3",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_crawl_4",1},{"\A3\sounds_f\characters\footsteps\gridMetal\gridMetal_crawl_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_lino_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\lino\lino_walk_1",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_2",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_3",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_4",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_5",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_6",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_7",1},{"\A3\sounds_f\characters\footsteps\lino\lino_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_lino_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\lino\lino_run_1",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_2",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_3",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_4",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_5",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_6",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_7",1},{"\A3\sounds_f\characters\footsteps\lino\lino_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_lino_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_1",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_2",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_3",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_4",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_5",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_6",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_7",1},{"\A3\sounds_f\characters\footsteps\lino\lino_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_lino_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\lino_crawl_1",1},{"\A3\sounds_f\characters\crawl\lino_crawl_2",1},{"\A3\sounds_f\characters\crawl\lino_crawl_3",1},{"\A3\sounds_f\characters\crawl\lino_crawl_4",1},{"\A3\sounds_f\characters\crawl\lino_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_MetalPlate_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_1",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_2",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_3",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_4",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_5",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_6",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_7",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_walk_8",1}};
		volume = 0.891251;
		range = 25;
		frequency = 1;
	};
	class footsteps_MetalPlate_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_1",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_2",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_3",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_4",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_5",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_6",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_7",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_run_8",1}};
		volume = 1;
		range = 50;
		frequency = 1;
	};
	class footsteps_MetalPlate_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_1",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_2",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_3",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_4",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_5",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_6",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_7",1},{"\A3\sounds_f\characters\footsteps\MetalPlate\MetalPlate_sprint_8",1}};
		volume = 1;
		range = 60;
		frequency = 1;
	};
	class footsteps_metalPlate_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\metalPlate_crawl_1",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_2",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_3",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_4",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_metalplatepressed_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_1",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_2",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_3",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_4",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_5",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_6",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_7",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_walk_8",1}};
		volume = 0.794328;
		range = 25;
		frequency = 1;
	};
	class footsteps_metalplatepressed_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_1",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_2",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_3",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_4",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_5",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_6",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_7",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_run_8",1}};
		volume = 0.891251;
		range = 50;
		frequency = 1;
	};
	class footsteps_metalplatepressed_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_1",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_2",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_3",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_4",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_5",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_6",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_7",1},{"\A3\sounds_f\characters\footsteps\metalplatepressed\metalplatepressed_sprint_8",1}};
		volume = 0.944061;
		range = 60;
		frequency = 1;
	};
	class footsteps_metalplatepressed_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\metalPlate_crawl_1",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_2",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_3",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_4",1},{"\A3\sounds_f\characters\crawl\metalPlate_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_mud_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mud\mud_walk_1",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_2",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_3",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_4",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_5",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_6",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_7",1},{"\A3\sounds_f\characters\footsteps\mud\mud_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_mud_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mud\mud_run_1",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_2",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_3",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_4",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_5",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_6",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_7",1},{"\A3\sounds_f\characters\footsteps\mud\mud_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_mud_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_1",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_2",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_3",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_4",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_5",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_6",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_7",1},{"\A3\sounds_f\characters\footsteps\mud\mud_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_mud_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mud\mud_crawl_1",1},{"\A3\sounds_f\characters\footsteps\mud\mud_crawl_2",1},{"\A3\sounds_f\characters\footsteps\mud\mud_crawl_3",1},{"\A3\sounds_f\characters\footsteps\mud\mud_crawl_4",1},{"\A3\sounds_f\characters\footsteps\mud\mud_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_pavement_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_1",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_2",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_3",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_4",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_5",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_6",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_7",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_pavement_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_1",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_2",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_3",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_4",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_5",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_6",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_7",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_pavement_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_1",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_2",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_3",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_4",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_5",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_6",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_7",1},{"\A3\sounds_f\characters\footsteps\pavement\pavement_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_pavement_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\pavement_crawl_1",1},{"\A3\sounds_f\characters\crawl\pavement_crawl_2",1},{"\A3\sounds_f\characters\crawl\pavement_crawl_3",1},{"\A3\sounds_f\characters\crawl\pavement_crawl_4",1},{"\A3\sounds_f\characters\crawl\pavement_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_roofTiles_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_1",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_2",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_3",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_4",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_5",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_6",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_7",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_roofTiles_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_1",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_2",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_3",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_4",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_5",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_6",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_7",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_roofTiles_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_1",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_2",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_3",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_4",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_5",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_6",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_7",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_roofTiles_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_crawl_1",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_crawl_2",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_crawl_3",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_crawl_4",1},{"\A3\sounds_f\characters\footsteps\roofTiles\roofTiles_crawl_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_sand_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\sand\sand_walk_1",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_2",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_3",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_4",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_5",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_6",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_7",1},{"\A3\sounds_f\characters\footsteps\sand\sand_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_sand_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\sand\sand_run_1",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_2",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_3",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_4",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_5",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_6",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_7",1},{"\A3\sounds_f\characters\footsteps\sand\sand_run_8",1}};
		volume = 0.630957;
		range = 50;
		frequency = 1;
	};
	class footsteps_sand_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_1",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_2",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_3",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_4",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_5",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_6",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_7",1},{"\A3\sounds_f\characters\footsteps\sand\sand_sprint_8",1}};
		volume = 0.707946;
		range = 60;
		frequency = 1;
	};
	class footsteps_sand_crawl_A_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_A_1",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_A_2",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_A_3",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_A_4",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_A_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_sand_crawl_B_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_B_1",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_B_2",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_B_3",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_B_4",1},{"\A3\sounds_f\characters\footsteps\sand\sand_crawl_B_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_seabed_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\seabed_walk_1",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_2",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_3",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_4",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_5",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_6",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_7",1},{"\A3\sounds_f\characters\footsteps\seabed_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_seabed_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\seabed_run_1",1},{"\A3\sounds_f\characters\footsteps\seabed_run_2",1},{"\A3\sounds_f\characters\footsteps\seabed_run_3",1},{"\A3\sounds_f\characters\footsteps\seabed_run_4",1},{"\A3\sounds_f\characters\footsteps\seabed_run_5",1},{"\A3\sounds_f\characters\footsteps\seabed_run_6",1},{"\A3\sounds_f\characters\footsteps\seabed_run_7",1},{"\A3\sounds_f\characters\footsteps\seabed_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_seabed_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\seabed_sprint_1",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_2",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_3",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_4",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_5",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_6",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_7",1},{"\A3\sounds_f\characters\footsteps\seabed_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_seabed_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\seabed_crawl_1",1},{"\A3\sounds_f\characters\crawl\seabed_crawl_2",1},{"\A3\sounds_f\characters\crawl\seabed_crawl_3",1},{"\A3\sounds_f\characters\crawl\seabed_crawl_4",1},{"\A3\sounds_f\characters\crawl\seabed_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_softwood_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_1",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_2",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_3",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_4",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_5",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_6",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_7",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_softwood_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_1",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_2",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_3",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_4",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_5",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_6",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_7",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_run_8",1}};
		volume = 0.707946;
		range = 50;
		frequency = 1;
	};
	class footsteps_softwood_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_1",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_2",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_3",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_4",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_5",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_6",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_7",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_softwood_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softwood\softWood_crawl_1",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_crawl_2",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_crawl_3",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_crawl_4",1},{"\A3\sounds_f\characters\footsteps\softwood\softWood_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_softWood_big_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_1",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_2",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_3",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_4",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_5",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_6",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_7",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_walk_8",1}};
		volume = 0.630957;
		range = 25;
		frequency = 1;
	};
	class footsteps_softWood_big_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_1",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_2",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_3",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_4",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_5",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_6",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_7",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_run_8",1}};
		volume = 0.794328;
		range = 50;
		frequency = 1;
	};
	class footsteps_softWood_big_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_1",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_2",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_3",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_4",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_5",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_6",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_7",1},{"\A3\sounds_f\characters\footsteps\softWood\softWood_big_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_steel_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\steel\steel_walk_1",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_2",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_3",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_4",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_5",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_6",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_7",1},{"\A3\sounds_f\characters\footsteps\steel\steel_walk_8",1}};
		volume = 0.630957;
		range = 25;
		frequency = 0.5;
	};
	class footsteps_steel_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\steel\steel_run_1",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_2",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_3",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_4",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_5",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_6",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_7",1},{"\A3\sounds_f\characters\footsteps\steel\steel_run_8",1}};
		volume = 0.707946;
		range = 50;
		frequency = 0.5;
	};
	class footsteps_steel_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_1",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_2",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_3",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_4",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_5",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_6",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_7",1},{"\A3\sounds_f\characters\footsteps\steel\steel_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 0.5;
	};
	class footsteps_steel_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\steel_crawl_1",1},{"\A3\sounds_f\characters\crawl\steel_crawl_2",1},{"\A3\sounds_f\characters\crawl\steel_crawl_3",1},{"\A3\sounds_f\characters\crawl\steel_crawl_4",1},{"\A3\sounds_f\characters\crawl\steel_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_stones_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\stones\stones_walk_1",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_2",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_3",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_4",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_5",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_6",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_7",1},{"\A3\sounds_f\characters\footsteps\stones\stones_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_stones_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\stones\stones_run_1",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_2",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_3",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_4",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_5",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_6",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_7",1},{"\A3\sounds_f\characters\footsteps\stones\stones_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_stones_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_1",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_2",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_3",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_4",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_5",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_6",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_7",1},{"\A3\sounds_f\characters\footsteps\stones\stones_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_stones_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\stones\stones_crawl_1",1},{"\A3\sounds_f\characters\footsteps\stones\stones_crawl_2",1},{"\A3\sounds_f\characters\footsteps\stones\stones_crawl_3",1},{"\A3\sounds_f\characters\footsteps\stones\stones_crawl_4",1},{"\A3\sounds_f\characters\footsteps\stones\stones_crawl_5",1}};
		volume = 0.251189;
		range = 20;
		frequency = 1;
	};
	class footsteps_straw_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_walk_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_5",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_6",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_7",1},{"\A3\sounds_f\characters\footsteps\straw\straw_walk_8",1}};
		volume = "(1 - humidity) * 0.5";
		range = 25;
		frequency = 1;
	};
	class footsteps_straw_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_run_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_5",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_6",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_7",1},{"\A3\sounds_f\characters\footsteps\straw\straw_run_8",1}};
		volume = "(1 - humidity) * 0.5";
		range = 50;
		frequency = 1;
	};
	class footsteps_straw_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_5",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_6",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_7",1},{"\A3\sounds_f\characters\footsteps\straw\straw_sprint_8",1}};
		volume = "(1 - humidity) * 0.5";
		range = 60;
		frequency = 1;
	};
	class footsteps_straw_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_crawl_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_crawl_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_crawl_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_crawl_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_crawl_5",1}};
		volume = "(1 - humidity) * 0.5";
		range = 20;
		frequency = 1;
	};
	class footsteps_straw_wet_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_5",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_6",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_7",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_walk_8",1}};
		volume = "humidity * 0.5";
		range = 25;
		frequency = 1;
	};
	class footsteps_straw_wet_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_5",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_6",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_7",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_run_8",1}};
		volume = "humidity * 0.5";
		range = 50;
		frequency = 1;
	};
	class footsteps_straw_wet_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_1",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_2",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_3",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_4",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_5",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_6",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_7",1},{"\A3\sounds_f\characters\footsteps\straw\straw_wet_sprint_8",1}};
		volume = "humidity * 0.5";
		range = 60;
		frequency = 1;
	};
	class footsteps_straw_wet_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\straw\straw_wet_crawl_1",1},{"\A3\sounds_f\characters\straw\straw_wet_crawl_2",1},{"\A3\sounds_f\characters\straw\straw_wet_crawl_3",1},{"\A3\sounds_f\characters\straw\straw_wet_crawl_4",1},{"\A3\sounds_f\characters\straw\straw_wet_crawl_5",1}};
		volume = "humidity * 0.5";
		range = 20;
		frequency = 1;
	};
	class footsteps_wavyMetal_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_1",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_2",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_3",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_4",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_5",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_6",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_7",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_8",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_9",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_10",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_11",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_12",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_13",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_14",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_15",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_walk_16",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_wavyMetal_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_1",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_2",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_3",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_4",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_5",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_6",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_7",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_8",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_9",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_10",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_11",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_12",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_13",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_14",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_15",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_run_16",1}};
		volume = 0.630957;
		range = 50;
		frequency = 1;
	};
	class footsteps_wavyMetal_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_1",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_2",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_3",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_4",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_5",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_6",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_7",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_8",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_9",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_10",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_11",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_12",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_13",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_14",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_15",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_sprint_16",1}};
		volume = 0.707946;
		range = 60;
		frequency = 1;
	};
	class footsteps_wavyMetal_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_crawl_1",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_crawl_2",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_crawl_3",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_crawl_4",1},{"\A3\sounds_f\characters\footsteps\wavyMetal\wavyMetal_crawl_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_water_walk_hit_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_1",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_2",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_3",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_4",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_5",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_6",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_7",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_hit_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_water_walk_tail_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_1",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_2",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_3",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_4",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_5",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_6",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_7",1},{"\A3\sounds_f\characters\footsteps\water\water_walk_tail_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_water_run_hit_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\water\water_run_hit_1",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_2",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_3",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_4",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_5",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_6",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_7",1},{"\A3\sounds_f\characters\footsteps\water\water_run_hit_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_water_run_tail_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\water\water_run_tail_1",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_2",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_3",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_4",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_5",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_6",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_7",1},{"\A3\sounds_f\characters\footsteps\water\water_run_tail_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_water_sprint_hit_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_1",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_2",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_3",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_4",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_5",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_6",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_7",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_hit_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_water_sprint_tail_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_1",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_2",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_3",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_4",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_5",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_6",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_7",1},{"\A3\sounds_f\characters\footsteps\water\water_sprint_tail_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_water_crawl_A_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\water_crawl_A_1",1},{"\A3\sounds_f\characters\crawl\water_crawl_A_2",1},{"\A3\sounds_f\characters\crawl\water_crawl_A_3",1},{"\A3\sounds_f\characters\crawl\water_crawl_A_4",1},{"\A3\sounds_f\characters\crawl\water_crawl_A_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_water_crawl_B_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\crawl\water_crawl_B_1",1},{"\A3\sounds_f\characters\crawl\water_crawl_B_2",1},{"\A3\sounds_f\characters\crawl\water_crawl_B_3",1},{"\A3\sounds_f\characters\crawl\water_crawl_B_4",1},{"\A3\sounds_f\characters\crawl\water_crawl_B_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_carpet_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_1",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_2",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_3",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_4",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_5",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_6",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_7",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_carpet_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_1",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_2",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_3",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_4",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_5",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_6",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_7",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_carpet_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_1",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_2",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_3",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_4",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_5",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_6",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_7",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_carpet_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\carpet\carpet_crawl_1",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_crawl_2",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_crawl_3",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_crawl_4",1},{"\A3\sounds_f\characters\footsteps\carpet\carpet_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_mat_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mat\mat_walk_1",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_2",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_3",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_4",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_5",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_6",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_7",1},{"\A3\sounds_f\characters\footsteps\mat\mat_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_mat_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mat\mat_run_1",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_2",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_3",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_4",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_5",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_6",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_7",1},{"\A3\sounds_f\characters\footsteps\mat\mat_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_mat_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_1",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_2",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_3",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_4",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_5",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_6",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_7",1},{"\A3\sounds_f\characters\footsteps\mat\mat_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_solidWood_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_1",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_2",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_3",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_4",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_5",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_6",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_7",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_solidWood_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_1",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_2",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_3",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_4",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_5",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_6",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_7",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_run_8",1}};
		volume = 0.707946;
		range = 50;
		frequency = 1;
	};
	class footsteps_solidWood_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_1",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_2",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_3",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_4",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_5",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_6",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_7",1},{"\A3\sounds_f\characters\footsteps\solidWood\solidWood_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_branch_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 1.41254;
		range = 25;
		frequency = 1;
	};
	class footsteps_branch_small_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\branches\branch_small_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.501187;
		range = 25;
		frequency = 1;
	};
	class footsteps_stones_small_debris_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_8",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_9",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_10",1},{"\A3\Sounds_F\dummysound",100},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_stones_debris_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\stones_debris_5",1},{"\A3\Sounds_F\dummysound",80},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.501187;
		range = 25;
		frequency = 1;
	};
	class footsteps_dirt_debris_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_8",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_9",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\dirt_debris_10",1}};
		volume = 0.501187;
		range = 25;
		frequency = 1;
	};
	class footsteps_sand_debris_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_8",1},{"\A3\sounds_f\characters\footsteps\_additionals\debris\sand_debris_9",1},{"\A3\Sounds_F\dummysound",10},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.707946;
		range = 25;
		frequency = 1;
	};
	class footsteps_wet_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_walk_8",1}};
		volume = "humidity";
		range = 25;
		frequency = 1;
	};
	class footsteps_wet_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_run_8",1}};
		volume = "humidity";
		range = 50;
		frequency = 1;
	};
	class footsteps_wet_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_sprint_8",1}};
		volume = "humidity";
		range = 60;
		frequency = 1;
	};
	class footsteps_wet_crawl_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_5",1}};
		volume = "humidity";
		range = 20;
		frequency = 1;
	};
	class footsteps_wet_crawl_soft_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_soft_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_soft_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_soft_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_soft_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wet\wet_crawl_soft_5",1}};
		volume = "humidity";
		range = 20;
		frequency = 1;
	};
	class footsteps_wood_creak_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_wood_creak_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_run_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_wood_creak_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_carpet_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_8",1}};
		volume = 0.125893;
		range = 25;
		frequency = 1;
	};
	class footsteps_carpet_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_8",1}};
		volume = 0.125893;
		range = 50;
		frequency = 1;
	};
	class footsteps_carpet_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_8",1}};
		volume = 0.125893;
		range = 60;
		frequency = 1;
	};
	class footsteps_concrete_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_concrete_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_concrete_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_lino_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_lino_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_lino_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_mat_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_mat_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_mat_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_metalPlate_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_metalPlate_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_metalPlate_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_pavement_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_pavement_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_pavement_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_softwood_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_softwood_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_softwood_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_solidWood_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_solidWood_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_solidWood_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_roofTiles_int_rev_walk_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_roofTiles_int_rev_run_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_roofTiles_int_rev_sprint_SoundShader
	{
		samples[] = {{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_1",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_2",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_3",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_4",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_5",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_6",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_7",1},{"\A3\sounds_f\characters\footsteps\_reverbs\roofTiles\roofTiles_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class DMR02_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class DMR02_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class DMR02_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_midShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_midShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_midShot_03",1}};
		volume = 0.501187;
		range = 2500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2500,0}};
	};
	class DMR02_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class DMR02_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class DMR02_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR02_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class DMR02_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{50,0.2},{350,0}};
		limitation = 1;
	};
	class DMR02_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR02_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR02_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class DMR02_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR02_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class DMR02_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class DMR02_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR02_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR03_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class DMR03_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class DMR03_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_midShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_midShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_midShot_03",1}};
		volume = 0.501187;
		range = 2500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2500,0}};
	};
	class DMR03_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class DMR03_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class DMR03_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR03_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class DMR03_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{50,0.2},{350,0}};
		limitation = 1;
	};
	class DMR03_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR03_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR03_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class DMR03_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR03_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class DMR03_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class DMR03_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR03_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR04_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class DMR04_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_03",1}};
		volume = 1;
		range = 200;
		rangeCurve = "closeShotCurve";
	};
	class DMR04_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 200;
		rangeCurve[] = {{0,1},{200,0}};
		limitation = 1;
	};
	class DMR04_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 200;
		rangeCurve[] = {{0,1},{200,0}};
		limitation = 1;
	};
	class DMR04_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_tailinterior",1}};
		volume = "interior";
		range = 100;
		rangeCurve[] = {{0,1},{100,0}};
		limitation = 1;
	};
	class DMR04_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 200;
		rangeCurve[] = {{0,1},{200,0}};
		limitation = 1;
	};
	class DMR04_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 200;
		rangeCurve[] = {{0,1},{200,0}};
		limitation = 1;
	};
	class DMR05_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class DMR05_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class DMR05_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_midShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_midShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_midShot_03",1}};
		volume = 0.501187;
		range = 2500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2500,0}};
	};
	class DMR05_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_distShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_distShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class DMR05_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class DMR05_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR05_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class DMR05_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{50,0.2},{350,0}};
		limitation = 1;
	};
	class DMR05_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR05_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR05_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class DMR05_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR05_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class DMR05_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class DMR05_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR05_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR06_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closure_01",1}};
		range = 5;
		volume = 0.446684;
	};
	class DMR06_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class DMR06_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_midShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_midShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_midShot_03",1}};
		volume = 0.501187;
		range = 2500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2500,0}};
	};
	class DMR06_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_distShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_distShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_distShot_03",1}};
		volume = 1;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class DMR06_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class DMR06_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR06_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class DMR06_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{50,0.2},{350,0}};
		limitation = 1;
	};
	class DMR06_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR06_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR06_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class DMR06_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR06_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class DMR06_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class DMR06_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR06_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MMG01_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closure_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closure_03",1}};
		range = 5;
		volume = 0.446684;
	};
	class MMG01_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MMG01_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_midShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_midShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class MMG01_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class MMG01_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class MMG01_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MMG01_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class MMG01_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class MMG01_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MMG01_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MMG01_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MMG01_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MMG01_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class MMG01_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class MMG01_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MMG01_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MMG02_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closure_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class MMG02_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closeShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closeShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MMG02_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_midShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_midShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class MMG02_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_distShot_01",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_distShot_02",1},{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class MMG02_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class MMG02_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MMG02_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class MMG02_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class MMG02_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MMG02_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MMG02_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MMG02_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MMG02_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class MMG02_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class MMG02_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MMG02_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SyndikatLMG_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closure_02",1}};
		range = 5;
		volume = 0.630957;
	};
	class SyndikatLMG_closeShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_03",1}};
		volume = 0.630957;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SyndikatLMG_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class SyndikatLMG_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class SyndikatLMG_TailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class SyndikatLMG_TailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SyndikatLMG_TailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class SyndikatLMG_TailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SyndikatLMG_TailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SyndikatLMG_TailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SyndikatLMG_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerShot_03",1}};
		volume = 0.562341;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SyndikatLMG_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SyndikatLMG_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SyndikatLMG_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SyndikatLMG_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SyndikatLMG_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR07_closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_closure_02",1}};
		range = 10;
		volume = 1;
		rangeCurve = "closeShotCurve";
	};
	class DMR07_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class DMR07_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class DMR07_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class DMR07_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class DMR07_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR07_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class DMR07_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class DMR07_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR07_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class DMR07_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class DMR07_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR07_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class DMR07_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class DMR07_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class DMR07_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Rogue9_closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closure_02",1}};
		range = 10;
		volume = 1;
		rangeCurve = "closeShotCurve";
	};
	class Rogue9_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Rogue9_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class Rogue9_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Rogue9_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Rogue9_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Rogue9_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class Rogue9_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class Rogue9_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Rogue9_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class Rogue9_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Rogue9_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Rogue9_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Rogue9_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Rogue9_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Rogue9_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK74_closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class AK74_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class AK74_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class AK74_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class AK74_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class AK74_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK74_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class AK74_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class AK74_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK74_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK74_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class AK74_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK74_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class AK74_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class AK74_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK74_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK47_closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class AK47_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class AK47_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class AK47_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class AK47_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class AK47_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK47_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class AK47_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class AK47_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK47_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK47_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class AK47_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK47_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class AK47_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class AK47_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK47_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK12_closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class AK12_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class AK12_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class AK12_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class AK12_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class AK12_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK12_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class AK12_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class AK12_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK12_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class AK12_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class AK12_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK12_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class AK12_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class AK12_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class AK12_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Type115_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_closeShot_03",1}};
		volume = 0.707946;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Type115_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_midShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_midShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_midShot_03",1}};
		volume = 0.794328;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class Type115_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_distShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_distShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_distShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Type115_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_tailInterior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Type115_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_tailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class Type115_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_tailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class Type115_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_tailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class Type115_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_tailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class Type115_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Type115_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Type115_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Type115_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Type115_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Type115_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class 50cal_Type115_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_closeShot_03",1}};
		volume = 0.707946;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 50cal_Type115_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_midShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_midShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_midShot_03",1}};
		volume = 0.794328;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class 50cal_Type115_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_distShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_distShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_distShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class 50cal_Type115_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_tailInterior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 50cal_Type115_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_tailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class 50cal_Type115_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_tailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class 50cal_Type115_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_tailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class 50cal_Type115_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_tailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class CAR_95_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_closure",1}};
		volume = 0.0794328;
		range = 5;
	};
	class CAR_95_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_closeShot_03",1}};
		volume = 0.794328;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class CAR_95_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_midShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_midShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_midShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class CAR_95_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_distShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_distShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_distShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class CAR_95_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class CAR_95_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_tail_trees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class CAR_95_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_tail_forest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class CAR_95_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class CAR_95_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_tail_houses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class CAR_95_Shot_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_short_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_short_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_short_03",1}};
		volume = 1;
		range = 400;
	};
	class CAR_95_tailInterior_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class CAR_95_tailTrees_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_tail_trees",1}};
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class CAR_95_tailForest_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_tail_forest",1}};
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class CAR_95_tailMeadows_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class CAR_95_tailHouses_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\Silencer_CAR_95_tail_houses",1}};
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class CAR_95_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class CAR_95_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class CAR_95_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class CAR_95_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class CAR_95_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class CAR_95_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR01_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class SPAR01_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SPAR01_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class SPAR01_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class SPAR01_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class SPAR01_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SPAR01_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class SPAR01_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SPAR01_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SPAR01_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SPAR01_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerShot_03",1}};
		volume = 0.562341;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SPAR01_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR01_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SPAR01_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SPAR01_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR01_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR02_Closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class SPAR02_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SPAR02_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_midShot_03",1}};
		volume = 0.501187;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class SPAR02_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_distShot_03",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class SPAR02_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class SPAR02_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SPAR02_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class SPAR02_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailinterior",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class SPAR02_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailmeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SPAR02_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class SPAR02_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerShot_03",1}};
		volume = 0.562341;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SPAR02_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR02_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SPAR02_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SPAR02_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR02_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR_17_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closure",1}};
		volume = 0.0562341;
		range = 5;
	};
	class SPAR_17_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_closeShot_03",1}};
		volume = 0.794328;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SPAR_17_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_midShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_midShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_midShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class SPAR_17_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_distShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_distShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_distShot_03",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class SPAR_17_tailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class SPAR_17_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_trees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class SPAR_17_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_forest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class SPAR_17_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class SPAR_17_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_tail_houses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class SPAR_17_Shot_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_short_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_short_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_short_03",1}};
		volume = 1;
		range = 400;
	};
	class SPAR_17_tailInterior_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_interior",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class SPAR_17_tailTrees_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_trees",1}};
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class SPAR_17_tailForest_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_forest",1}};
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class SPAR_17_tailMeadows_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class SPAR_17_tailHouses_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\Silencer_SPAR_17_tail_houses",1}};
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class SPAR_17_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SPAR_17_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR_17_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class SPAR_17_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class SPAR_17_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class SPAR_17_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Makarov_closure_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_closure_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_closure_02",1}};
		range = 5;
		volume = 0.223872;
	};
	class Makarov_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_closeShot_03",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Makarov_midShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_midShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_midShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_midShot_03",1}};
		volume = 0.707946;
		range = 1200;
		rangeCurve[] = {{0,0.2},{50,1},{150,0},{1200,0}};
	};
	class Makarov_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_distShot_01",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_distShot_02",1},{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_distShot_03",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1200,1}};
	};
	class Makarov_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_tailDistant",1}};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0,0},{300,0.7},{1200,1}};
		limitation = 1;
	};
	class Makarov_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_tailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Makarov_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_tailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		rangeCurve[] = {{0,1},{150,0.3},{1200,0}};
		limitation = 1;
	};
	class Makarov_tailInterior_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_tailInterior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{30,0.4},{100,0.2},{250,0}};
		limitation = 1;
	};
	class Makarov_tailMeadows_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_tailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Makarov_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_tailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1200;
		rangeCurve[] = {{0,1},{1200,0}};
		limitation = 1;
	};
	class Makarov_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerShot_01",1},{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerShot_02",1},{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class Makarov_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Makarov_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Makarov_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Makarov_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Makarov_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Pistols\Makarov\Makarov_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Launcher_RPG7_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Launchers\RPG7\RPG7_launcher_closeShot",1}};
		volume = 1;
		range = 90;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Launcher_RPG7_midShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Launchers\RPG7\RPG7_launcher_midShot",1}};
		volume = 1.99526;
		range = 350;
		rangeCurve = "CannonMidShotCurve";
	};
	class Launcher_RPG7_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\weapons\Launchers\RPG7\RPG7_launcher_distShot",1}};
		volume = 1.99526;
		range = 4000;
		rangeCurve[] = {{0,0},{100,0},{300,1},{4000,1}};
	};
	class Launcher_RPG7_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailForest_04",1}};
		volume = "forest";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_RPG7_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailMeadows_04",1}};
		volume = "meadows max sea/2";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class Launcher_RPG7_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_01",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_02",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_03",1},{"A3\Sounds_F\arsenal\explosives\shells\ShellLightA_tailHouses_04",1}};
		volume = "houses";
		range = 2500;
		limitation = 1;
		rangeCurve[] = {{0,1},{250,1},{2500,0}};
	};
	class MMG_SPMG_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_closure_01",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_closure_02",1}};
		range = 5;
		volume = 0.446684;
	};
	class MMG_SPMG_closeShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_closeShot_01",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_closeShot_02",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_closeShot_03",1}};
		volume = 1;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class MMG_SPMG_MidShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_midShot_01",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_midShot_01",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_midShot_01",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0.2},{100,1},{400,0},{1700,0}};
	};
	class MMG_SPMG_distShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_distShot_01",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_distShot_01",1},{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_distShot_01",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{100,0},{400,1},{1700,1}};
	};
	class MMG_SPMG_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_tailDistant",1}};
		volume = 1;
		range = 1700;
		rangeCurve[] = {{0,0},{600,1},{1700,1}};
		limitable = 1;
	};
	class MMG_SPMG_tailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_tailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class MMG_SPMG_tailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_tailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1000;
		rangeCurve[] = {{0,1},{400,0.5},{1000,0.3}};
		limitable = 1;
	};
	class MMG_SPMG_tailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_tailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class MMG_SPMG_tailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\arsenal\vehicle_weapons\MMG_SPMG\MMG_SPMG_tailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1700;
		rangeCurve[] = {{0,1},{1700,0.3}};
		limitable = 1;
	};
	class ForestMorning_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\forest\forest_morning",1}};
		volume = "(altitudeGround factor [100,30]) * (altitudeGround factor [100,30]) * (daytime factor [0.25, 0.33]) * (daytime factor [0.54, 0.46])";
	};
	class ForestAfternoon_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\forest\forest_morning",1}};
		volume = "(altitudeGround factor [100,30]) * (altitudeGround factor [100,30]) * (daytime factor [0.46, 0.54]) * (daytime factor [0.83, 0.75])";
	};
	class ForestNight_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\forest\forest_night",1}};
		volume = "(altitudeGround factor [100,30]) * (altitudeGround factor [100,30]) * ((daytime factor [0.75, 0.83]) + (daytime factor [0.33, 0.25]))";
	};
	class HousesDay_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\houses\houses_day",1}};
		volume = "(altitudeGround factor [100,30]) * (altitudeGround factor [100,30]) * (houses + (meadow factor [0,0.3])/2) * (daytime factor [0.25, 0.33]) * (daytime factor [0.88, 0.79])";
	};
	class HousesNight_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\houses\houses_night",1}};
		volume = "(altitudeGround factor [100,30]) * (altitudeGround factor [100,30]) * (houses + (meadow factor [0,0.3])/2) * ((daytime factor [0.79, 0.88]) + (daytime factor [0.33, 0.25]))";
	};
	class MeadowsDay_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\meadows\meadows_day",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (daytime factor [0.25, 0.33]) * (daytime factor [0.88, 0.79]) * (windy factor [0.6, 0.4]) * (1 - forest) * (1 - waterDepth) * (1 - houses)";
	};
	class MeadowsNight_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\meadows\meadows_night",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * ((daytime factor [0.79, 0.88]) + (daytime factor [0.33, 0.25])) * (1 - forest) * (1 - waterDepth) * (1 - houses)";
	};
	class WindForest_Low_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_forest_low",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.6, 0.4]) * (windy/0.4)";
	};
	class WindForest_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_forest_high",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (windy factor [0.3, 0.6]) * (windy/0.5)";
	};
	class WindMeadows_Low_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_meadows_low",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.7, 0.5]) * (windy/0.2) * (forest/2 + meadow + houses/2 + coast)";
	};
	class WindMeadows_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_meadows_high",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (windy factor [0.3, 0.9]) * (windy/0.2) * (forest/2 + meadow + houses/2 + coast)";
	};
	class WindHouses_Low_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_houses_low",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.7, 0.5]) * (windy) * houses";
	};
	class WindHouses_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_houses_high",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (windy factor [0, 0.3]) * (windy factor [0.7, 0.5]) * (windy) * houses";
	};
	class RainForest_Low_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_forest_low",1}};
		volume = "(altitudeGround factor [80,20]) * (altitudeGround factor [80,20]) * (rain factor [0, 0.3])";
	};
	class RainForest_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_forest_medium",1}};
		volume = "(altitudeGround factor [80,25]) * (altitudeGround factor [80,25]) * (rain factor [0.2, 0.4]) * (rain factor [0.8, 0.6])";
	};
	class RainForest_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_forest_high",1}};
		volume = "(altitudeGround factor [100,30]) * (altitudeGround factor [100,30]) * (rain factor [0.6, 0.8])";
	};
	class RainMeadows_Low_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_meadows_low",1}};
		volume = "(altitudeGround factor [50,15]) * (altitudeGround factor [50,15]) * (1 - (forest min trees)) * (rain factor [0.4, 0.3]) * rain/0.3";
	};
	class RainMeadows_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_meadows_medium",1}};
		volume = "(altitudeGround factor [70,20]) * (altitudeGround factor [70,20]) * (1 - (forest min trees)) * (rain factor [0, 0.2]) * (rain factor [0.8, 0.6]) * rain / 0.7";
	};
	class RainMeadows_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_meadows_high",1}};
		volume = "(altitudeGround factor [90,25]) * (altitudeGround factor [90,25]) * (1 - (forest min trees)) * (rain factor [0.4, 0.6]) * rain";
	};
	class RainHouses_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_houses_high",1}};
		volume = "(altitudeGround factor [90,25]) * (altitudeGround factor [90,25]) * houses * (rain factor [0.2, 1]) * rain / 2";
	};
	class Sea_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\Sea\sea",1}};
		volume = "(altitudeSea factor [60,15]) * (altitudeSea factor [60,15]) * (waterdepth factor[0,1])*(waterdepth factor[0,1])";
	};
	class Coast_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\ambient\Sea\coast",1}};
		volume = "(altitudeSea factor [120,20]) * (altitudeSea factor [120,20]) * (windy + 1)";
	};
	class Wind_Generic_Low_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\elements\winds\wind_generic_low",1}};
		volume = "(windy factor[0.9,0.3]) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [20, 80]) + 0.5 * (altitudeSea factor [200,300]) * (altitudeGround factor [80, 20]) * (1-forest)";
	};
	class Wind_Generic_High_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\Environment\elements\winds\wind_generic_high",1}};
		volume = "(windy factor[0.3,0.9]) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [20, 80]) + (altitudeGround factor [80, 20]) * (windy factor[0.4, 1])) * (1 - forest) * 0.3";
	};
	class Insect_Day_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\insect\insect_day_01",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_day_02",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_day_03",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_day_04",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_day_05",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_day_06",1}};
		volume = "(shooting factor [0.7,0.72]) *  ((rain factor [0.6,0.4]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79]) + forest/3)";
		range = 15;
	};
	class Insect_Night_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_01",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_02",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_03",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_04",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_05",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_06",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_07",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_08",1},{"A3\Sounds_F_Exp\environment\animals\insect\insect_night_09",1}};
		volume = "(shooting factor [0.7,0.72]) * ((rain factor [0.6,0.4]) * ((daytime factor [0.79, 0.88]) + (daytime factor [0.33, 0.25])) + forest/3)";
		range = 15;
	};
	class Forest_Birds_All_Day_SoundShader
	{
		XXX
		volume = "(shooting factor [0.6,1]) * forest * (trees factor [0.9,1]) * (rain factor[0.8,0.6]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79])";
		range = 25;
	};
	class Meadows_Birds_All_Day_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_10",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_11",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_12",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_13",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_14",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_15",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_16",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_17",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_18",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird01_19",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird02_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird03_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird04_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird05_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_10",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_11",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_12",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_13",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_14",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_15",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_16",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_17",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_18",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_19",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_20",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_21",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_22",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_23",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_24",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_25",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_26",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_27",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_28",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_29",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_30",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_31",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_32",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_33",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_34",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_35",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_36",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_37",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_38",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_39",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird06_40",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird07_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird08_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_10",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_11",1},{"A3\Sounds_F_Exp\environment\animals\birds\meadows\day\bird09_12",1}};
		volume = "(shooting factor [0.6,1]) * (1 - forest) * (rain factor[0.8,0.6]) * (daytime factor [0.25, 0.33])*(daytime factor [0.88, 0.79])";
		range = 28;
	};
	class Forest_Birds_All_Night_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird01_10",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird02_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird02_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird02_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird03_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird04_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird04_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\mid\bird05_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird01_10",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird02_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird02_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird02_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_03",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_04",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_05",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_06",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_07",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_08",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird03_09",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird04_01",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird04_02",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\night\dist\bird05_01",1}};
		volume = "(shooting factor [0.6,1]) * forest * (rain factor[0.8,0.6]) * ((daytime factor [0.79, 0.88]) + (daytime factor [0.33, 0.25]))";
		range = 25;
	};
	class Forest_Birds_Temp_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\temp1",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\temp2",1},{"A3\Sounds_F_Exp\environment\animals\birds\forest\day\dist\temp3",1}};
		volume = 1;
		range = 25;
	};
	class Forest_Frog01_Close_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog01_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog01_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog01_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog01_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog01_05",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog02_Close_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog02_07",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog03_Close_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog03_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog03_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog03_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog03_04",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog04_Close_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_07",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog04_08",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog05_Close_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_07",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_08",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\close\frog05_09",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog01_Mid_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog01_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog01_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog01_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog01_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog01_05",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog02_Mid_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog02_07",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog03_Mid_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog03_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog03_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog03_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog03_04",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog04_Mid_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_07",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog04_08",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog05_Mid_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_07",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_08",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\mid\frog05_09",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog01_Dist_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog01_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog01_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog01_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog01_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog01_05",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog02_Dist_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog02_07",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog03_Dist_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog03_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog03_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog03_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog03_04",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog04_Dist_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_07",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog04_08",1}};
		volume = "forest";
		range = 30;
	};
	class Forest_Frog05_Dist_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_01",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_02",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_03",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_04",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_05",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_06",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_07",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_08",1},{"A3\Sounds_F_Exp\environment\animals\frogs\forest\dist\frog05_09",1}};
		volume = "forest";
		range = 30;
	};
	class Rain_PlantA_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_light_003",1}};
		volume = "raindrops * raindrops * (rain factor[0,0.1]) * 1.5";
		range = 12;
	};
	class Rain_PlantA_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_medium_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 12;
	};
	class Rain_PlantA_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_plantA_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.7,0.9]) * 1.5";
		range = 12;
	};
	class Rain_PlantB_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_light_003",1}};
		volume = "raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 12;
	};
	class Rain_PlantB_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_medium_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 12;
	};
	class Rain_PlantB_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantB_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.7,0.9])*2";
		range = 12;
	};
	class Rain_PlantC_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_light_003",1}};
		volume = "raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 12;
	};
	class Rain_PlantC_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_medium_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 12;
	};
	class Rain_PlantC_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlantC_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.7,0.9])*2";
		range = 12;
	};
	class Rain_Tree_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_light_003",1}};
		volume = "raindrops * raindrops * (rain factor[0,0.1])*(rain factor[0.4,0.2])";
		range = 25;
	};
	class Rain_Tree_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_medium_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.2,0.4])*(rain factor[0.7,0.5])";
		range = 25;
	};
	class Rain_Tree_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_tree_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.5, 1])";
		range = 25;
	};
	class Rain_MetalT_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_003",1}};
		volume = "raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 8;
	};
	class Rain_MetalT_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 8;
	};
	class Rain_MetalT_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.7,0.9])*2";
		range = 8;
	};
	class Rain_MetalA_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_003",1}};
		volume = "10 * raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * rain";
		range = 15;
	};
	class Rain_MetalA_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_003",1}};
		volume = "10 * raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * rain";
		range = 15;
	};
	class Rain_MetalA_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.7,0.9]) * rain";
		range = 15;
	};
	class Rain_MetalAn_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_light_003",1}};
		volume = "raindrops * raindrops * (rain factor[0,0.1]) * (rain factor[0.6,0.4]) * rain";
		range = 10;
	};
	class Rain_MetalAn_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_medium_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * rain";
		range = 10;
	};
	class Rain_MetalAn_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalA_heavy_003",1}};
		volume = "raindrops * raindrops * (rain factor[0.7,0.9]) * rain";
		range = 10;
	};
	class Rain_MetalB_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_003",1}};
		volume = "(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 16;
	};
	class Rain_MetalB_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_003",1}};
		volume = "(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 16;
	};
	class Rain_MetalB_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_003",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 16;
	};
	class Rain_MetalBn_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_light_003",1}};
		volume = "(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 10;
	};
	class Rain_MetalBn_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_medium_003",1}};
		volume = "(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 10;
	};
	class Rain_MetalBn_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalB_heavy_003",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 10;
	};
	class Rain_MetalCn_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_003",1}};
		volume = "(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 12;
	};
	class Rain_MetalCn_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_003",1}};
		volume = "(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 12;
	};
	class Rain_MetalCn_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_003",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 12;
	};
	class Rain_MetalC_Light_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_light_003",1}};
		volume = "(rain factor[0,0.1]) * (rain factor[0.6,0.4]) * 1.5";
		range = 23;
	};
	class Rain_MetalC_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_medium_003",1}};
		volume = "(rain factor[0.4,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 23;
	};
	class Rain_MetalC_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_metalC_heavy_003",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 23;
	};
	class Rain_PlateA_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_medium_002",1}};
		volume = "(rain factor[0,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 20;
	};
	class Rain_PlateA_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateA_heavy_002",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 20;
	};
	class Rain_PlateBn_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_002",1}};
		volume = "(rain factor[0,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 25;
	};
	class Rain_PlateBn_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_003",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 25;
	};
	class Rain_PlateB_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_medium_002",1}};
		volume = "(rain factor[0,0.6])*(rain factor[0.9,0.7]) * 1.5";
		range = 25;
	};
	class Rain_PlateB_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_001",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_002",1},{"A3\Sounds_F_Exp\environment\elements\rains\rain_PlateB_heavy_003",1}};
		volume = "(rain factor[0.7,0.9])*2";
		range = 25;
	};
	class Water_Gutter_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\rains\water_gutter1",1},{"A3\Sounds_F_Exp\environment\elements\rains\water_gutter2",1},{"A3\Sounds_F_Exp\environment\elements\rains\water_gutter3",1}};
		volume = "(rain factor[0,0.5]) * (rain factor[0.8,0.7]) * rain";
		range = 5;
	};
	class Wind_LeavesA_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_1",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_2",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_3",1}};
		volume = "(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range = 24;
	};
	class Wind_LeavesA_Narrow_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_1",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_2",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesA_3",1}};
		volume = "(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range = 13;
	};
	class Wind_LeavesB_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesB_1",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesB_2",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesB_3",1}};
		volume = "(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range = 24;
	};
	class Wind_LeavesC_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesC_1",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesC_2",1},{"A3\Sounds_F_Exp\environment\elements\winds\wind_leavesC_3",1}};
		volume = "(1 - forest/2) * (rain factor [0.5,0.3]) * (wind factor [-0.1,0.8])";
		range = 24;
	};
	class Thunder_Norm_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_1",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_2",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_3",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_4",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_norm_5",1}};
		volume = 1;
		range = 2000;
	};
	class Thunder_Heavy_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_1",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_2",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_3",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_4",1},{"A3\Sounds_F_Exp\environment\elements\thunders\thunder_heavy_5",1}};
		volume = 1;
		range = 2000;
	};
	class Air_Condition_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_1",1},{"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_2",1},{"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_3",1},{"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_4",1},{"A3\Sounds_F_Exp\environment\structures\air_condition\aircondition_5",1}};
		volume = 1;
		range = 12;
	};
	class Electric_Box_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_1",1},{"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_2",1},{"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_3",1},{"A3\Sounds_F_Exp\environment\structures\electric_box\electric_box_4",1}};
		volume = 0.3;
		range = 6;
	};
	class Metal_Stress_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_01",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_02",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_03",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_04",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_05",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_06",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_07",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_08",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_09",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_10",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_11",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_12",1}};
		volume = 1;
		range = 25;
	};
	class Rock_Debris_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_01",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_02",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_03",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_04",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_05",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_06",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_07",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_08",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_09",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_10",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_11",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_12",1},{"A3\Sounds_F_Exp\environment\sfx\rock_debris\rock_debris_13",1}};
		volume = 1;
		range = 25;
	};
	class Metal_StressWind_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_01",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_02",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_03",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_04",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_05",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_06",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_07",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_08",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_09",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_10",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_11",1},{"A3\Sounds_F_Exp\environment\sfx\metal_stress\metal_stress_12",1}};
		volume = "wind factor[0.4, 0.8]";
		range = 25;
	};
	class ClothesWind_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\clothes_flapping",1}};
		volume = "wind factor[0.2, 0.7]";
		range = 10;
	};
	class MetalFenceWind_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\metal_fence_rattling",1}};
		volume = "wind factor[0.5, 1]";
		range = 10;
	};
	class Metal_DebrisWind_Large_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_01",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_02",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_03",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_04",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_05",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_06",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_07",1}};
		volume = "(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range = 25;
	};
	class Metal_DebrisWind_Medium_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_01",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_02",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_03",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_04",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_05",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_06",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_07",1}};
		volume = "(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range = 20;
	};
	class Metal_DebrisWind_Small_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_01",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_02",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_03",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_04",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_05",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_06",1},{"A3\Sounds_F_Exp\environment\sfx\metal_debris\metal_debris_07",1}};
		volume = "(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range = 15;
	};
	class Rock_DebrisWind_Small_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_01",1},{"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_02",1},{"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_03",1},{"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_04",1},{"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_05",1},{"A3\Sounds_F_Exp\environment\sfx\small_debris\rock_debris_06",1}};
		volume = "(wind factor[0.3, 0.6]) * (rain factor[0.7,0.5])";
		range = 25;
	};
	class footsteps_boots_hard_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_hard_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_hard_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_hard_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_medium_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_medium_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_medium_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_soft_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_soft_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_run_8",1}};
		volume = 0.354813;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_soft_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_soft_LPF_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_soft_LPF_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_run_8",1}};
		volume = 0.562341;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_soft_LPF_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_LPF_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_medium_LPF_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_medium_LPF_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_medium_LPF_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_LPF_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_medium_int_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_medium_int_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_medium_int_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_medium_int_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_boots_soft_int_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_boots_soft_int_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_boots_soft_int_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_base\boot_soft_int_sprint_8",1}};
		volume = 0.501187;
		range = 60;
		frequency = 1;
	};
	class footsteps_base_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_base\crawl_base_1",1},{"\A3\sounds_f_exp\characters\footsteps\_base\crawl_base_2",1},{"\A3\sounds_f_exp\characters\footsteps\_base\crawl_base_3",1},{"\A3\sounds_f_exp\characters\footsteps\_base\crawl_base_4",1},{"\A3\sounds_f_exp\characters\footsteps\_base\crawl_base_5",1}};
		volume = 0.251189;
		range = 20;
		frequency = 1;
	};
	class footsteps_asphalt_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_asphalt_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_asphalt_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\asphalt_exp\asphalt_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_asphalt_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_concrete_walk_LPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_LPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_concrete_walk_HPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_walk_HPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_concrete_run_LPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_LPF_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_concrete_run_HPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_run_HPF_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_concrete_sprint_LPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_LPF_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_concrete_sprint_HPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\concrete_exp\concrete_sprint_HPF_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_concrete_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\concrete_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_dirt_walk_LPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_dirt_walk_HPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_HPF_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_dirt_run_LPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_8",1}};
		volume = 0.354813;
		range = 50;
		frequency = 1;
	};
	class footsteps_dirt_run_HPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_HPF_8",1}};
		volume = 0.354813;
		range = 50;
		frequency = 1;
	};
	class footsteps_dirt_sprint_LPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_LPF_8",1}};
		volume = 0.354813;
		range = 60;
		frequency = 1;
	};
	class footsteps_dirt_sprint_HPF_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_1",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_2",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_3",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_4",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_5",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_6",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_7",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_sprint_HPF_8",1}};
		volume = 0.354813;
		range = 60;
		frequency = 1;
	};
	class footsteps_dirt_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\dirt_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\dirt_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\dirt_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\dirt_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\dirt_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_forest_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_8",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_9",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_10",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_11",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_12",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_13",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_14",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_15",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_16",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_17",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_18",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_19",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_walk_20",1}};
		volume = 0.562341;
		range = 25;
		frequency = 1;
	};
	class footsteps_forest_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_8",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_9",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_10",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_11",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_12",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_13",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_14",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_15",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_16",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_17",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_18",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_19",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_run_20",1}};
		volume = 0.707946;
		range = 50;
		frequency = 1;
	};
	class footsteps_forest_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_8",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_9",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_10",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_11",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_12",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_13",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_14",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_15",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_16",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_17",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_18",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_19",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_sprint_20",1}};
		volume = 0.749894;
		range = 60;
		frequency = 1;
	};
	class footsteps_forest_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\forest_exp\forest_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_grass_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_walk_8",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_1",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_2",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_3",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_4",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_5",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_6",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_7",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_8",0.2}};
		volume = 0.0316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_grass_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_run_8",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_1",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_2",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_3",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_4",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_5",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_6",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_7",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_run_LPF_8",0.2}};
		volume = 0.0630957;
		range = 50;
		frequency = 1;
	};
	class footsteps_grass_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_sprint_8",1},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_1",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_2",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_3",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_4",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_5",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_6",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_7",0.2},{"\A3\sounds_f_exp\characters\footsteps\dirt_exp\dirt_walk_LPF_8",0.2}};
		volume = 0.0794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_grass_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\grass_exp\grass_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_grassTall_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_walk_8",1}};
		volume = 0.707946;
		range = 25;
		frequency = 1.7;
	};
	class footsteps_grassTall_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1.7;
	};
	class footsteps_grassTall_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1.7;
	};
	class footsteps_grassTall_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\grasstall_exp\grassTall_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1.5;
	};
	class footsteps_gravel_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_gravel_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_gravel_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_gravel_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\gravel_exp\gravel_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_gridMetal_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_gridMetal_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_gridMetal_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_gridMetal_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\gridMetal_exp\gridMetal_crawl_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_lino_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_lino_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_lino_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\lino_exp\lino_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_lino_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\lino_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\lino_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\lino_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\lino_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\lino_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_MetalPlate_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_walk_8",1}};
		volume = 0.891251;
		range = 25;
		frequency = 1;
	};
	class footsteps_MetalPlate_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_run_8",1}};
		volume = 1;
		range = 50;
		frequency = 1;
	};
	class footsteps_MetalPlate_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\MetalPlate_exp\MetalPlate_sprint_8",1}};
		volume = 1;
		range = 60;
		frequency = 1;
	};
	class footsteps_metalPlate_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_metalplatepressed_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_walk_8",1}};
		volume = 1;
		range = 25;
		frequency = 1;
	};
	class footsteps_metalplatepressed_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_run_8",1}};
		volume = 1.41254;
		range = 50;
		frequency = 1;
	};
	class footsteps_metalplatepressed_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\metalplatepressed_exp\metalplatepressed_sprint_8",1}};
		volume = 1.58489;
		range = 60;
		frequency = 1;
	};
	class footsteps_metalplatepressed_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\metalPlate_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_mud_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_mud_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_mud_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_mud_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\mud_exp\mud_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_pavement_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_pavement_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_pavement_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\pavement_exp\pavement_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_pavement_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\pavement_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\pavement_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\pavement_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\pavement_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\pavement_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_roofTiles_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_roofTiles_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_roofTiles_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_roofTiles_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\roofTiles_exp\roofTiles_crawl_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_sand_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_sand_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_run_8",1}};
		volume = 0.630957;
		range = 50;
		frequency = 1;
	};
	class footsteps_sand_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_sprint_8",1}};
		volume = 0.707946;
		range = 60;
		frequency = 1;
	};
	class footsteps_sand_crawl_A_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_A_1",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_A_2",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_A_3",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_A_4",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_A_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_sand_crawl_B_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_B_1",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_B_2",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_B_3",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_B_4",1},{"\A3\sounds_f_exp\characters\footsteps\sand_exp\sand_crawl_B_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_seabed_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_seabed_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\seabed_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_seabed_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\seabed_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_seabed_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\seabed_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\seabed_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\seabed_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\seabed_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\seabed_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_softwood_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_walk_8",1}};
		volume = 0.562341;
		range = 25;
		frequency = 1;
	};
	class footsteps_softwood_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_run_8",1}};
		volume = 0.707946;
		range = 50;
		frequency = 1;
	};
	class footsteps_softwood_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_softwood_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\softwood_exp\softWood_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_softWood_big_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_walk_8",1}};
		volume = 0.630957;
		range = 25;
		frequency = 1;
	};
	class footsteps_softWood_big_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_run_8",1}};
		volume = 0.794328;
		range = 50;
		frequency = 1;
	};
	class footsteps_softWood_big_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\softWood_exp\softWood_big_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_steel_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_walk_8",1}};
		volume = 0.630957;
		range = 25;
		frequency = 0.5;
	};
	class footsteps_steel_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_run_8",1}};
		volume = 0.707946;
		range = 50;
		frequency = 0.5;
	};
	class footsteps_steel_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\steel_exp\steel_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 0.5;
	};
	class footsteps_steel_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\steel_crawl_1",1},{"\A3\sounds_f_exp\characters\crawl\steel_crawl_2",1},{"\A3\sounds_f_exp\characters\crawl\steel_crawl_3",1},{"\A3\sounds_f_exp\characters\crawl\steel_crawl_4",1},{"\A3\sounds_f_exp\characters\crawl\steel_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_stones_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_stones_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_stones_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_stones_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\stones_exp\stones_crawl_5",1}};
		volume = 0.251189;
		range = 20;
		frequency = 1;
	};
	class footsteps_straw_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_walk_8",1}};
		volume = "(1 - humidity)";
		range = 25;
		frequency = 1;
	};
	class footsteps_straw_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_run_8",1}};
		volume = "(1 - humidity)";
		range = 50;
		frequency = 1;
	};
	class footsteps_straw_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_sprint_8",1}};
		volume = "(1 - humidity)";
		range = 60;
		frequency = 1;
	};
	class footsteps_straw_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_crawl_5",1}};
		volume = "(1 - humidity)";
		range = 20;
		frequency = 1;
	};
	class footsteps_straw_wet_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_walk_8",1}};
		volume = "humidity * 0.5";
		range = 25;
		frequency = 1;
	};
	class footsteps_straw_wet_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_run_8",1}};
		volume = "humidity * 0.5";
		range = 50;
		frequency = 1;
	};
	class footsteps_straw_wet_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\straw_exp\straw_wet_sprint_8",1}};
		volume = "humidity * 0.5";
		range = 60;
		frequency = 1;
	};
	class footsteps_straw_wet_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\straw_exp\straw_wet_crawl_1",1},{"\A3\sounds_f_exp\characters\straw_exp\straw_wet_crawl_2",1},{"\A3\sounds_f_exp\characters\straw_exp\straw_wet_crawl_3",1},{"\A3\sounds_f_exp\characters\straw_exp\straw_wet_crawl_4",1},{"\A3\sounds_f_exp\characters\straw_exp\straw_wet_crawl_5",1}};
		volume = "humidity * 0.5";
		range = 20;
		frequency = 1;
	};
	class footsteps_wavyMetal_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_8",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_9",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_10",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_11",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_12",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_13",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_14",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_15",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_walk_16",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_wavyMetal_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_8",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_9",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_10",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_11",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_12",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_13",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_14",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_15",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_run_16",1}};
		volume = 0.630957;
		range = 50;
		frequency = 1;
	};
	class footsteps_wavyMetal_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_8",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_9",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_10",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_11",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_12",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_13",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_14",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_15",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_sprint_16",1}};
		volume = 0.707946;
		range = 60;
		frequency = 1;
	};
	class footsteps_wavyMetal_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\wavyMetal_exp\wavyMetal_crawl_5",1}};
		volume = 0.501187;
		range = 20;
		frequency = 1;
	};
	class footsteps_water_walk_hit_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_1",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_2",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_3",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_4",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_5",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_6",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_7",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_hit_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_water_walk_tail_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_1",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_2",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_3",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_4",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_5",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_6",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_7",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_walk_tail_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_water_run_hit_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_1",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_2",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_3",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_4",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_5",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_6",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_7",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_hit_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_water_run_tail_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_1",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_2",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_3",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_4",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_5",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_6",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_7",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_run_tail_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_water_sprint_hit_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_1",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_2",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_3",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_4",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_5",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_6",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_7",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_hit_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_water_sprint_tail_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_1",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_2",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_3",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_4",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_5",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_6",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_7",1},{"\A3\sounds_f_exp\characters\footsteps\water_exp\water_sprint_tail_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_water_crawl_A_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\water_crawl_A_1",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_A_2",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_A_3",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_A_4",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_A_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_water_crawl_B_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\crawl\water_crawl_B_1",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_B_2",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_B_3",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_B_4",1},{"\A3\sounds_f_exp\characters\crawl\water_crawl_B_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_carpet_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_carpet_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_carpet_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_carpet_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\carpet_exp\carpet_crawl_5",1}};
		volume = 0.125893;
		range = 20;
		frequency = 1;
	};
	class footsteps_mat_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_walk_8",1}};
		volume = 0.251189;
		range = 25;
		frequency = 1;
	};
	class footsteps_mat_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_run_8",1}};
		volume = 0.501187;
		range = 50;
		frequency = 1;
	};
	class footsteps_mat_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\mat_exp\mat_sprint_8",1}};
		volume = 0.630957;
		range = 60;
		frequency = 1;
	};
	class footsteps_solidWood_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_walk_8",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_solidWood_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_run_8",1}};
		volume = 0.707946;
		range = 50;
		frequency = 1;
	};
	class footsteps_solidWood_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\solidWood_exp\solidWood_sprint_8",1}};
		volume = 0.794328;
		range = 60;
		frequency = 1;
	};
	class footsteps_branch_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 1.41254;
		range = 25;
		frequency = 1;
	};
	class footsteps_branch_small_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\branches\branch_small_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.501187;
		range = 25;
		frequency = 1;
	};
	class footsteps_stones_small_debris_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_8",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_9",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_10",1},{"\A3\Sounds_F\dummysound",100},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.354813;
		range = 25;
		frequency = 1;
	};
	class footsteps_stones_debris_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\stones_debris_5",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.501187;
		range = 25;
		frequency = 1;
	};
	class footsteps_dirt_debris_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_8",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_9",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\dirt_debris_10",1}};
		volume = 0.501187;
		range = 25;
		frequency = 1;
	};
	class footsteps_sand_debris_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_8",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\debris\sand_debris_9",1},{"\A3\Sounds_F\dummysound",10},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.707946;
		range = 25;
		frequency = 1;
	};
	class footsteps_wet_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_walk_8",1}};
		volume = "humidity";
		range = 25;
		frequency = 1;
	};
	class footsteps_wet_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_run_8",1}};
		volume = "humidity";
		range = 50;
		frequency = 1;
	};
	class footsteps_wet_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_sprint_8",1}};
		volume = "humidity";
		range = 60;
		frequency = 1;
	};
	class footsteps_wet_crawl_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_5",1}};
		volume = "humidity";
		range = 20;
		frequency = 1;
	};
	class footsteps_wet_crawl_soft_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_soft_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_soft_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_soft_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_soft_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wet\wet_crawl_soft_5",1}};
		volume = "humidity";
		range = 20;
		frequency = 1;
	};
	class footsteps_wood_creak_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_walk_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_wood_creak_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_run_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_wood_creak_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_additionals\wood_creaks\wood_creak_sprint_8",1},{"\A3\Sounds_F\dummysound",60},{"\A3\Sounds_F\dummysound",1}};
		volume = 0.316228;
		range = 25;
		frequency = 1;
	};
	class footsteps_carpet_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_walk_8",1}};
		volume = 0.125893;
		range = 25;
		frequency = 1;
	};
	class footsteps_carpet_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_run_8",1}};
		volume = 0.125893;
		range = 50;
		frequency = 1;
	};
	class footsteps_carpet_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\carpet\carpet_int_rev_sprint_8",1}};
		volume = 0.125893;
		range = 60;
		frequency = 1;
	};
	class footsteps_concrete_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_concrete_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_concrete_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\concrete\concrete_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_lino_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_lino_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_lino_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\lino\lino_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_mat_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_mat_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_mat_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\mat\mat_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_metalPlate_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_metalPlate_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_metalPlate_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\metalPlate\metalPlate_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_pavement_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_pavement_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_pavement_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\pavement\pavement_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_softwood_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_softwood_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_softwood_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\softWood\softWood_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class footsteps_solidWood_int_rev_walk_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_walk_8",1}};
		volume = 0.177828;
		range = 25;
		frequency = 1;
	};
	class footsteps_solidWood_int_rev_run_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_run_8",1}};
		volume = 0.177828;
		range = 50;
		frequency = 1;
	};
	class footsteps_solidWood_int_rev_sprint_Exp_SoundShader
	{
		samples[] = {{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_1",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_2",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_3",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_4",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_5",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_6",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_7",1},{"\A3\sounds_f_exp\characters\footsteps\_reverbs\solidWood\solidWood_int_rev_sprint_8",1}};
		volume = 0.177828;
		range = 60;
		frequency = 1;
	};
	class DebugSound_sine880Hz_min10dB_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Exp\sfx\debug\sine880Hz-10dB",1}};
		volume = 0;
		range = 30;
	};
	class LIB_rifle_mech_soundShader
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_rifle\rifle_mech_01.wav",1}};
		volume = "db0";
		range = 7;
		rangeCurve[] = {{0,1},{1.8,1},{4,0.25},{7,0}};
		limitation = 0;
	};
	class LIB_rifle_close_soundShader
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_shot_close.wav",1}};
		volume = "db0";
		range = 75;
		rangeCurve[] = {{0,1},{20,1},{75,0}};
		limitation = 0;
	};
	class LIB_rifle_distant_soundShader
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\ru_rifle_svt\ru_rifle_svt_shot_distant.wav",1}};
		volume = "db0";
		range = 3000;
		rangeCurve[] = {{0,0},{20,0},{75,1},{3000,1}};
		limitation = 0;
	};
	class LIB_rifle_tail_interior
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_rifle\rifle_tail_interior.wav",1}};
		volume = "interior/2";
		range = 1000;
		rangeCurve = "InverseSquareCurve_1";
		limitation = 1;
	};
	class LIB_rifle_tail_trees
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_rifle\rifle_tail_trees.wav",1}};
		volume = "(1-interior/1.4)*trees";
		range = 3000;
		limitation = 1;
	};
	class LIB_rifle_tail_forest
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_rifle\rifle_tail_forest.wav",1}};
		volume = "(1-interior/1.4)*forest";
		range = 3000;
		limitation = 1;
	};
	class LIB_rifle_tail_meadows
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_rifle\rifle_tail_meadows.wav",1}};
		volume = "(1-interior/1.4)*(meadows max sea)/2";
		range = 3000;
		limitation = 1;
	};
	class LIB_rifle_tail_houses
	{
		samples[] = {{"WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_rifle\rifle_tail_houses.wav",1}};
		volume = "(1-interior/1.4)*houses/2";
		range = 3000;
		limitation = 1;
	};
	class LIB_rocketLaunchers_bazooka_punch
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_launcher\rocketLauncher_shot_1.wav",1}};
		volume = "db0";
		range = 3000;
		limitation = 0;
	};
	class LIB_rocketLaunchers_tail
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_sounds\arsenal\weapons\generic_launcher\rocketLauncher_tail_1.wav",1}};
		volume = "db0";
		range = 3000;
		limitation = 0;
	};
	class LIB_sonicCrackClose
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_close_01.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_close_02.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_close_03.wav",1}};
		volume = "db0";
		range = 500;
		rangeCurve[] = {{0,1},{5,1},{13,0},{50,0},{500,0}};
	};
	class LIB_sonicCrackMid
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_mid_01.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_mid_02.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_mid_03.wav",1}};
		volume = "db0";
		range = 500;
		rangeCurve[] = {{0,0},{5,0},{13,1},{50,1},{100,0},{500,0}};
	};
	class LIB_sonicCrackFar
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_far_01.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_far_02.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\punch\scrack_far_03.wav",1}};
		volume = "db0";
		range = 500;
		rangeCurve[] = {{0,0},{13,0},{30,0},{50,0},{100,1},{500,1}};
	};
	class LIB_sonicCrackTail
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\tail\scrack_tail_01.wav",1},{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\ammo_sounds\sonicCracks\tail\scrack_tail_02.wav",1}};
		volume = "db0";
		range = 500;
	};
	class ger_lmg_mg42_mech: LIB_rifle_mech_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ger_lmg_mg42\ger_lmg_mg42_mech.wav",1}};
	};
	class ger_lmg_mg42_shot_close: LIB_rifle_close_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ger_lmg_mg42\ger_lmg_mg42_close.wav",1}};
	};
	class ger_lmg_mg42_shot_distant: LIB_rifle_distant_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ger_lmg_mg42\ger_lmg_mg42_distant.wav",1}};
	};
	class ru_rifle_svt_mech: LIB_rifle_mech_soundShader
	{
	};
	class ru_rifle_svt_shot_close: LIB_rifle_close_soundShader
	{
	};
	class ru_rifle_svt_shot_distant: LIB_rifle_distant_soundShader
	{
	};
	class us_rifle_m1garand_shot_close: LIB_rifle_close_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\us_rifle_m1garand\us_rifle_m1garand_shot_close.wav",1}};
	};
	class us_rifle_m1garand_shot_distant: LIB_rifle_distant_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\us_rifle_m1garand\us_rifle_m1garand_shot_distant.wav",1}};
	};
	class ru_rifle_mosin_shot_close: LIB_rifle_close_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_mosin\ru_rifle_mosin_shot_close.wav",1}};
	};
	class ru_rifle_mosin_shot_distant: LIB_rifle_distant_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_mosin\ru_rifle_mosin_shot_distant.wav",1}};
	};
	class ru_rifle_mosin_shot_1p: LIB_rifle_mech_soundShader
	{
		samples[] = {{"\WW2\Assets_s\megagoth1702_sounds\LIB_Sounds\arsenal\weapons\ru_rifle_mosin\ru_rifle_mosin_shot_1p.wav",1}};
		range = 8;
		rangeCurve[] = {{0,1},{2,1},{8,0}};
	};
};
class CfgSoundSets
{
	class DebugSound_SoundSet
	{
		soundShaders[] = {"DebugSound_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0;
		volumeRandomizer = "0dB";
		spatialityRange = 0.005;
		spatialityRangeAngle = 0.785;
		sound3DProcessingType = "default3DProcessingType";
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
		loop = 0;
	};
	class DebugSound_Loop_SoundSet
	{
		soundShaders[] = {"DebugSound_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0;
		volumeRandomizer = "0dB";
		spatialityRange = 0.005;
		spatialityRangeAngle = 0.785;
		sound3DProcessingType = "default3DProcessingType";
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
		loop = 1;
	};
	class DummySound_SoundSet
	{
		soundShaders[] = {"DummySound_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0;
		volumeRandomizer = "0dB";
		spatialityRange = 0.005;
		spatialityRangeAngle = 0.785;
		sound3DProcessingType = "default3DProcessingType";
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
		loop = 0;
	};
	class Silence_SoundSet
	{
		soundShaders[] = {"Silence_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0;
		volumeRandomizer = "0dB";
		spatialityRange = 0.005;
		spatialityRangeAngle = 0.785;
		sound3DProcessingType = "default3DProcessingType";
		spatial = 1;
		doppler = 0;
		speedOfSound = 1;
		loop = 0;
	};
	class Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"MX_Closure_SoundShader","MX_closeShot_SoundShader","MX_midShot_SoundShader","MX_distShot_SoundShader","MX_tailInterior_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"MX_tailTrees_SoundShader","MX_tailForest_SoundShader","MX_tailMeadows_SoundShader","MX_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MX_tailInterior_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0;
		sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"MX_Closure_SoundShader","MX_silencerShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"MX_silencerTailTrees_SoundShader","MX_silencerTailForest_SoundShader","MX_silencerTailMeadows_SoundShader","MX_silencerTailHouses_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MX_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
	};
	class Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"P07_Closure_SoundShader","P07_closeShot_SoundShader","P07_midShot_SoundShader","P07_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponLightShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"P07_tailDistant_SoundShader","P07_tailForest_SoundShader","P07_tailHouses_SoundShader","P07_tailMeadows_SoundShader","P07_tailTrees_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		sound3DProcessingType = "WeaponLightShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"P07_tailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"P07_Closure_SoundShader","P07_silencerShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponLightShot3DProcessingType";
	};
	class Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"P07_silencerTailTrees_SoundShader","P07_silencerTailForest_SoundShader","P07_silencerTailMeadows_SoundShader","P07_silencerTailHouses_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponLightShotTail3DProcessingType";
	};
	class Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"P07_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
	};
	class Explosion_Debris_SoundSet
	{
		soundShaders[] = {"Explosion_debrisSoft_SoundShader","Explosion_debrisDirt_SoundShader","Explosion_debrisHard_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve[] = {{0,1},{30,0.75},{50,0.5},{100,0}};
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "ExplosionDebris3DProcessingType";
	};
	class bulletSonicCrack_SoundSet
	{
		soundShaders[] = {"BulletSonicCrack_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponLightShot3DProcessingType";
	};
	class bulletSonicCrackTail_SoundSet
	{
		soundShaders[] = {"BulletSonicCrack_tailMeadow_SoundShader","BulletSonicCrack_tailForest_SoundShader","BulletSonicCrack_tailTrees_SoundShader","BulletSonicCrack_tailHouses_SoundShader"};
		volumeFactor = 0.2;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "SonicCrackTail3DProcessingType";
	};
	class BulletSonicCrack_Gatling_SoundSet
	{
		soundShaders[] = {"BulletSonicCrack_Gatling_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponLightShot3DProcessingType";
	};
	class bulletFlyBy_SoundSet
	{
		soundShaders[] = {"BulletFlyBy_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class GrenadeHe_Exp_SoundSet
	{
		soundShaders[] = {"GrenadeHe_closeExp_SoundShader","GrenadeHe_midExp_SoundShader","GrenadeHe_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class GrenadeHe_Tail_SoundSet
	{
		soundShaders[] = {"GrenadeHe_tailForest_SoundShader","GrenadeHe_tailMeadows_SoundShader","GrenadeHe_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class MiniGrenade_Exp_SoundSet
	{
		soundShaders[] = {"MiniGrenade_closeExp_SoundShader","MiniGrenade_midExp_SoundShader","MiniGrenade_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class MiniGrenade_Tail_SoundSet
	{
		soundShaders[] = {"MiniGrenade_tailForest_SoundShader","MiniGrenade_tailMeadows_SoundShader","MiniGrenade_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class GrenadeLauncher_Exp_SoundSet
	{
		soundShaders[] = {"GrenadeLauncher_closeExp_SoundShader","GrenadeLauncher_midExp_SoundShader","GrenadeLauncher_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class GrenadeLauncher_Tail_SoundSet
	{
		soundShaders[] = {"GrenadeLauncher_tailForest_SoundShader","GrenadeLauncher_tailMeadows_SoundShader","GrenadeLauncher_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Mortar_Exp_SoundSet
	{
		soundShaders[] = {"Mortar_closeExp_SoundShader","Mortar_midExp_SoundShader","Mortar_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Mortar_Tail_SoundSet
	{
		soundShaders[] = {"Mortar_tailForest_SoundShader","Mortar_tailMeadows_SoundShader","Mortar_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class APmine_Exp_SoundSet
	{
		soundShaders[] = {"APmine_closeExp_SoundShader","APmine_midExp_SoundShader","APmine_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class APmine_Tail_SoundSet
	{
		soundShaders[] = {"APmine_tailForest_SoundShader","APmine_tailMeadows_SoundShader","APmine_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class ATmine_Exp_SoundSet
	{
		soundShaders[] = {"ATmine_closeExp_SoundShader","ATmine_midExp_SoundShader","ATmine_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class ATmine_Tail_SoundSet
	{
		soundShaders[] = {"ATmine_tailForest_SoundShader","ATmine_tailMeadows_SoundShader","ATmine_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class M6slamMine_Exp_SoundSet
	{
		soundShaders[] = {"M6slamMine_closeExp_SoundShader","M6slamMine_midExp_SoundShader","M6slamMine_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class M6slamMine_Tail_SoundSet
	{
		soundShaders[] = {"M6slamMine_tailForest_SoundShader","M6slamMine_tailMeadows_SoundShader","M6slamMine_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class TipToeMine_Exp_SoundSet
	{
		soundShaders[] = {"TipToeMine_closeExp_SoundShader","TipToeMine_midExp_SoundShader","TipToeMine_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class TipToeMine_Tail_SoundSet
	{
		soundShaders[] = {"TipToeMine_tailForest_SoundShader","TipToeMine_tailMeadows_SoundShader","TipToeMine_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class TripwireMine_Exp_SoundSet
	{
		soundShaders[] = {"TripwireMine_closeExp_SoundShader","TripwireMine_midExp_SoundShader","TripwireMine_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class TripwireMine_Tail_SoundSet
	{
		soundShaders[] = {"TripwireMine_tailForest_SoundShader","TripwireMine_tailMeadows_SoundShader","TripwireMine_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class ExplosiveCharge_Exp_SoundSet
	{
		soundShaders[] = {"ExplosiveCharge_closeExp_SoundShader","ExplosiveCharge_midExp_SoundShader","ExplosiveCharge_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class ExplosiveCharge_Tail_SoundSet
	{
		soundShaders[] = {"ExplosiveCharge_tailForest_SoundShader","ExplosiveCharge_tailMeadows_SoundShader","ExplosiveCharge_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class SmallIED_Exp_SoundSet
	{
		soundShaders[] = {"SmallIED_closeExp_SoundShader","SmallIED_midExp_SoundShader","SmallIED_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class SmallIED_Tail_SoundSet
	{
		soundShaders[] = {"SmallIED_tailForest_SoundShader","SmallIED_tailMeadows_SoundShader","SmallIED_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class BigIED_Exp_SoundSet
	{
		soundShaders[] = {"BigIED_closeExp_SoundShader","BigIED_midExp_SoundShader","BigIED_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class BigIED_Tail_SoundSet
	{
		soundShaders[] = {"BigIED_tailForest_SoundShader","BigIED_tailMeadows_SoundShader","BigIED_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class ClaymoreMine_Exp_SoundSet
	{
		soundShaders[] = {"ClaymoreMine_closeExp_SoundShader","ClaymoreMine_midExp_SoundShader","ClaymoreMine_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class ClaymoreMine_Tail_SoundSet
	{
		soundShaders[] = {"ClaymoreMine_tailForest_SoundShader","ClaymoreMine_tailMeadows_SoundShader","ClaymoreMine_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class RocketsLight_Exp_SoundSet
	{
		soundShaders[] = {"RocketsLight_closeExp_SoundShader","RocketsLight_midExp_SoundShader","RocketsLight_distExp_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class RocketsLight_Tail_SoundSet
	{
		soundShaders[] = {"RocketsLight_tailForest_SoundShader","RocketsLight_tailMeadows_SoundShader","RocketsLight_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class RocketsMedium_Exp_SoundSet
	{
		soundShaders[] = {"RocketsMedium_closeExp_SoundShader","RocketsMedium_midExp_SoundShader","RocketsMedium_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class RocketsMedium_Tail_SoundSet
	{
		soundShaders[] = {"RocketsMedium_tailForest_SoundShader","RocketsMedium_tailMeadows_SoundShader","RocketsMedium_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class RocketsHeavy_Exp_SoundSet
	{
		soundShaders[] = {"RocketsHeavy_closeExp_SoundShader","RocketsHeavy_midExp_SoundShader","RocketsHeavy_distExp_SoundShader"};
		volumeFactor = 1.8;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class RocketsHeavy_Tail_SoundSet
	{
		soundShaders[] = {"RocketsHeavy_tailForest_SoundShader","RocketsHeavy_tailMeadows_SoundShader","RocketsHeavy_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Shell19mm25mm_Exp_SoundSet
	{
		soundShaders[] = {"Shell19mm25mm_closeExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionGatlingDistanceFreqAttenuationFilter";
	};
	class Shell30mm40mm_Exp_SoundSet
	{
		soundShaders[] = {"Shell30mm40mm_closeExp_SoundShader","Shell30mm40mm_midExp_SoundShader","Shell30mm40mm_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Shell30mm40mm_Tail_SoundSet
	{
		soundShaders[] = {"Shell30mm40mm_tailForest_SoundShader","Shell30mm40mm_tailMeadows_SoundShader","Shell30mm40mm_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionLightTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Shell105mm130mm_Exp_SoundSet
	{
		soundShaders[] = {"Shell105mm130mm_closeExp_SoundShader","Shell105mm130mm_midExp_SoundShader","Shell105mm130mm_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Shell105mm130mm_Tail_SoundSet
	{
		soundShaders[] = {"Shell105mm130mm_tailForest_SoundShader","Shell105mm130mm_tailMeadows_SoundShader","Shell105mm130mm_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Shell155mm_Exp_SoundSet
	{
		soundShaders[] = {"Shell155mm_closeExp_SoundShader","Shell155mm_midExp_SoundShader","Shell155mm_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Shell155mm_Tail_SoundSet
	{
		soundShaders[] = {"Shell155mm_tailForest_SoundShader","Shell155mm_tailMeadows_SoundShader","Shell155mm_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class BombsHeavy_Exp_SoundSet
	{
		soundShaders[] = {"BombsHeavy_closeExp_SoundShader","BombsHeavy_midExp_SoundShader","BombsHeavy_distExp_SoundShader"};
		volumeFactor = 1.5;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class BombsHeavy_Tail_SoundSet
	{
		soundShaders[] = {"BombsHeavy_tailForest_SoundShader","BombsHeavy_tailMeadows_SoundShader","BombsHeavy_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class 4Five_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"4Five_Closure_SoundShader","4Five_closeShot_SoundShader","4Five_midShot_SoundShader","4Five_distShot_SoundShader"};
	};
	class 4Five_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"4Five_tailDistant_SoundShader","4Five_tailForest_SoundShader","4Five_tailHouses_SoundShader","4Five_tailMeadows_SoundShader","4Five_tailTrees_SoundShader"};
	};
	class 4Five_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"4Five_tailInterior_SoundShader"};
	};
	class 4Five_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"4Five_Closure_SoundShader","4Five_silencerShot_SoundShader"};
	};
	class 4Five_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"4Five_silencerTailTrees_SoundShader","4Five_silencerTailForest_SoundShader","4Five_silencerTailMeadows_SoundShader","4Five_silencerTailHouses_SoundShader"};
	};
	class 4Five_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"4Five_silencerTailInterior_SoundShader"};
	};
	class ACPC2_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"ACPC2_Closure_SoundShader","ACPC2_closeShot_SoundShader","ACPC2_midShot_SoundShader","ACPC2_distShot_SoundShader"};
	};
	class ACPC2_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"ACPC2_tailDistant_SoundShader","ACPC2_tailForest_SoundShader","ACPC2_tailHouses_SoundShader","ACPC2_tailMeadows_SoundShader","ACPC2_tailTrees_SoundShader"};
	};
	class ACPC2_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"ACPC2_tailInterior_SoundShader"};
	};
	class ACPC2_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"ACPC2_Closure_SoundShader","ACPC2_silencerShot_SoundShader"};
	};
	class ACPC2_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"ACPC2_silencerTailTrees_SoundShader","ACPC2_silencerTailForest_SoundShader","ACPC2_silencerTailMeadows_SoundShader","ACPC2_silencerTailHouses_SoundShader"};
	};
	class ACPC2_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"ACPC2_silencerTailInterior_SoundShader"};
	};
	class P07_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"P07_Closure_SoundShader","P07_closeShot_SoundShader","P07_midShot_SoundShader","P07_distShot_SoundShader"};
	};
	class P07_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"P07_tailDistant_SoundShader","P07_tailForest_SoundShader","P07_tailHouses_SoundShader","P07_tailMeadows_SoundShader","P07_tailTrees_SoundShader"};
	};
	class P07_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"P07_tailInterior_SoundShader"};
	};
	class P07_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"P07_Closure_SoundShader","P07_silencerShot_SoundShader"};
	};
	class P07_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"P07_silencerTailTrees_SoundShader","P07_silencerTailForest_SoundShader","P07_silencerTailMeadows_SoundShader","P07_silencerTailHouses_SoundShader"};
	};
	class P07_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"P07_silencerTailInterior_SoundShader"};
	};
	class Rook40_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"Rook40_Closure_SoundShader","Rook40_closeShot_SoundShader","Rook40_midShot_SoundShader","Rook40_distShot_SoundShader"};
	};
	class Rook40_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"Rook40_tailDistant_SoundShader","Rook40_tailForest_SoundShader","Rook40_tailHouses_SoundShader","Rook40_tailMeadows_SoundShader","Rook40_tailTrees_SoundShader"};
	};
	class Rook40_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Rook40_tailInterior_SoundShader"};
	};
	class Rook40_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Rook40_Closure_SoundShader","Rook40_silencerShot_SoundShader"};
	};
	class Rook40_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Rook40_silencerTailTrees_SoundShader","Rook40_silencerTailForest_SoundShader","Rook40_silencerTailMeadows_SoundShader","Rook40_silencerTailHouses_SoundShader"};
	};
	class Rook40_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Rook40_silencerTailInterior_SoundShader"};
	};
	class Zubr_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"Zubr_Closure_SoundShader","Zubr_closeShot_SoundShader","Zubr_midShot_SoundShader","Zubr_distShot_SoundShader"};
	};
	class Zubr_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"Zubr_tailDistant_SoundShader","Zubr_tailForest_SoundShader","Zubr_tailHouses_SoundShader","Zubr_tailMeadows_SoundShader","Zubr_tailTrees_SoundShader"};
	};
	class Zubr_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Zubr_tailInterior_SoundShader"};
	};
	class GM6Lynx_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"GM6Lynx_Closure_SoundShader","GM6Lynx_closeShot_SoundShader","GM6Lynx_midShot_SoundShader","GM6Lynx_distShot_SoundShader"};
	};
	class GM6Lynx_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"GM6Lynx_tailDistant_SoundShader","GM6Lynx_tailTrees_SoundShader","GM6Lynx_tailForest_SoundShader","GM6Lynx_tailMeadows_SoundShader","GM6Lynx_tailHouses_SoundShader"};
	};
	class GM6Lynx_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"GM6Lynx_tailInterior_SoundShader"};
	};
	class M320_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"M320_Closure_SoundShader","M320_closeShot_SoundShader","M320_midShot_SoundShader","M320_distShot_SoundShader"};
	};
	class M320_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"M320_tailDistant_SoundShader","M320_tailForest_SoundShader","M320_tailHouses_SoundShader","M320_tailMeadows_SoundShader","M320_tailTrees_SoundShader"};
	};
	class M320_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"M320_tailInterior_SoundShader"};
	};
	class DMR01_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR01_Closure_SoundShader","DMR01_closeShot_SoundShader","DMR01_midShot_SoundShader","DMR01_distShot_SoundShader"};
	};
	class DMR01_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR01_tailDistant_SoundShader","DMR01_tailForest_SoundShader","DMR01_tailHouses_SoundShader","DMR01_tailMeadows_SoundShader","DMR01_tailTrees_SoundShader"};
	};
	class DMR01_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR01_tailInterior_SoundShader"};
	};
	class DMR01_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DMR01_Closure_SoundShader","DMR01_silencerShot_SoundShader"};
	};
	class DMR01_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DMR01_silencerTailTrees_SoundShader","DMR01_silencerTailForest_SoundShader","DMR01_silencerTailMeadows_SoundShader","DMR01_silencerTailHouses_SoundShader"};
	};
	class DMR01_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR01_silencerTailInterior_SoundShader"};
	};
	class Mk18_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Mk18_Closure_SoundShader","Mk18_closeShot_SoundShader","Mk18_midShot_SoundShader","Mk18_distShot_SoundShader"};
	};
	class Mk18_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Mk18_tailDistant_SoundShader","Mk18_tailForest_SoundShader","Mk18_tailHouses_SoundShader","Mk18_tailMeadows_SoundShader","Mk18_tailTrees_SoundShader"};
	};
	class Mk18_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Mk18_tailInterior_SoundShader"};
	};
	class Mk18_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Mk18_Closure_SoundShader","Mk18_silencerShot_SoundShader"};
	};
	class Mk18_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Mk18_silencerTailTrees_SoundShader","Mk18_silencerTailForest_SoundShader","Mk18_silencerTailMeadows_SoundShader","Mk18_silencerTailHouses_SoundShader"};
	};
	class Mk18_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Mk18_silencerTailInterior_SoundShader"};
	};
	class Mk200_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Mk200_Closure_SoundShader","Mk200_closeShot_SoundShader","Mk200_midShot_SoundShader","Mk200_distShot_SoundShader"};
	};
	class Mk200_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Mk200_tailDistant_SoundShader","Mk200_tailForest_SoundShader","Mk200_tailHouses_SoundShader","Mk200_tailMeadows_SoundShader","Mk200_tailTrees_SoundShader"};
	};
	class Mk200_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Mk200_tailInterior_SoundShader"};
	};
	class Mk200_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Mk200_Closure_SoundShader","Mk200_silencerShot_SoundShader"};
	};
	class Mk200_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Mk200_silencerTailTrees_SoundShader","Mk200_silencerTailForest_SoundShader","Mk200_silencerTailMeadows_SoundShader","Mk200_silencerTailHouses_SoundShader","Mk200_silencerTailInterior_SoundShader"};
	};
	class Mk200_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Mk200_silencerTailInterior_SoundShader"};
	};
	class Zafir_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Zafir_Closure_SoundShader","Zafir_closeShot_SoundShader","Zafir_midShot_SoundShader","Zafir_distShot_SoundShader"};
	};
	class Zafir_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Zafir_tailDistant_SoundShader","Zafir_tailForest_SoundShader","Zafir_tailHouses_SoundShader","Zafir_tailMeadows_SoundShader","Zafir_tailTrees_SoundShader"};
	};
	class Zafir_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Zafir_tailInterior_SoundShader"};
	};
	class MX_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"MX_Closure_SoundShader","MX_closeShot_SoundShader","MX_midShot_SoundShader","MX_distShot_SoundShader"};
	};
	class MX_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"MX_tailTrees_SoundShader","MX_tailForest_SoundShader","MX_tailMeadows_SoundShader","MX_tailHouses_SoundShader"};
	};
	class MX_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MX_tailInterior_SoundShader"};
	};
	class MX_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"MX_Closure_SoundShader","MX_silencerShot_SoundShader"};
	};
	class MX_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"MX_silencerTailTrees_SoundShader","MX_silencerTailForest_SoundShader","MX_silencerTailMeadows_SoundShader","MX_silencerTailHouses_SoundShader"};
	};
	class MX_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MX_silencerTailInterior_SoundShader"};
	};
	class Mk20_Shot_SoundSet
	{
		soundShaders[] = {"Mk20_Closure_SoundShader","Mk20_closeShot_SoundShader","Mk20_midShot_SoundShader","Mk20_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Mk20_Tail_SoundSet
	{
		soundShaders[] = {"Mk20_tailDistant_SoundShader","Mk20_tailForest_SoundShader","Mk20_tailHouses_SoundShader","Mk20_tailInterior_SoundShader","Mk20_tailMeadows_SoundShader","Mk20_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Mk20_silencerShot_SoundSet
	{
		soundShaders[] = {"Mk20_Closure_SoundShader","Mk20_silencerShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Mk20_silencerTail_SoundSet
	{
		soundShaders[] = {"Mk20_silencerTailTrees_SoundShader","Mk20_silencerTailForest_SoundShader","Mk20_silencerTailMeadows_SoundShader","Mk20_silencerTailHouses_SoundShader","Mk20_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class Katiba_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Katiba_Closure_SoundShader","Katiba_closeShot_SoundShader","Katiba_midShot_SoundShader","Katiba_distShot_SoundShader","Katiba_tailInterior_SoundShader"};
	};
	class Katiba_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Katiba_tailTrees_SoundShader","Katiba_tailForest_SoundShader","Katiba_tailMeadows_SoundShader","Katiba_tailHouses_SoundShader"};
	};
	class Katiba_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Katiba_tailInterior_SoundShader"};
	};
	class Katiba_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Katiba_Closure_SoundShader","Katiba_silencerShot_SoundShader"};
	};
	class Katiba_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Katiba_silencerTailTrees_SoundShader","Katiba_silencerTailForest_SoundShader","Katiba_silencerTailMeadows_SoundShader","Katiba_silencerTailHouses_SoundShader"};
	};
	class Katiba_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Katiba_silencerTailInterior_SoundShader"};
	};
	class SDAR_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SDAR_Closure_SoundShader","SDAR_closeShot_SoundShader","SDAR_midShot_SoundShader","SDAR_distShot_SoundShader"};
	};
	class SDAR_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SDAR_tailDistant_SoundShader","SDAR_tailForest_SoundShader","SDAR_tailHouses_SoundShader","SDAR_tailMeadows_SoundShader","SDAR_tailTrees_SoundShader"};
	};
	class SDAR_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SDAR_tailInterior_SoundShader"};
	};
	class TRG20_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"TRG20_Closure_SoundShader","TRG20_closeShot_SoundShader","TRG20_midShot_SoundShader","TRG20_distShot_SoundShader"};
	};
	class TRG20_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"TRG20_tailDistant_SoundShader","TRG20_tailForest_SoundShader","TRG20_tailHouses_SoundShader","TRG20_tailMeadows_SoundShader","TRG20_tailTrees_SoundShader"};
	};
	class TRG20_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"TRG20_tailInterior_SoundShader"};
	};
	class TRG20_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"TRG20_Closure_SoundShader","TRG20_silencerShot_SoundShader"};
	};
	class TRG20_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"TRG20_silencerTailTrees_SoundShader","TRG20_silencerTailForest_SoundShader","TRG20_silencerTailMeadows_SoundShader","TRG20_silencerTailHouses_SoundShader"};
	};
	class TRG20_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"TRG20_silencerTailInterior_SoundShader"};
	};
	class SMGPDW2000_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SMGPDW2000_Closure_SoundShader","SMGPDW2000_closeShot_SoundShader","SMGPDW2000_midShot_SoundShader","SMGPDW2000_distShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class SMGPDW2000_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SMGPDW2000_tailDistant_SoundShader","SMGPDW2000_tailTrees_SoundShader","SMGPDW2000_tailForest_SoundShader","SMGPDW2000_tailMeadows_SoundShader","SMGPDW2000_tailHouses_SoundShader"};
		volumeFactor = 0.7;
	};
	class SMGPDW2000_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SMGPDW2000_tailInterior_SoundShader"};
		volumeFactor = 0.7;
	};
	class SMGPDW2000_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SMGPDW2000_Closure_SoundShader","SMGPDW2000_silencerShot_SoundShader"};
	};
	class SMGPDW2000_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SMGPDW2000_silencerTailTrees_SoundShader","SMGPDW2000_silencerTailForest_SoundShader","SMGPDW2000_silencerTailMeadows_SoundShader","SMGPDW2000_silencerTailHouses_SoundShader"};
	};
	class SMGPDW2000_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SMGPDW2000_silencerTailInterior_SoundShader"};
	};
	class SMGSting_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SMGSting_Closure_SoundShader","SMGSting_closeShot_SoundShader","SMGSting_midShot_SoundShader","SMGSting_distShot_SoundShader"};
	};
	class SMGSting_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SMGSting_tailDistant_SoundShader","SMGSting_tailTrees_SoundShader","SMGSting_tailForest_SoundShader","SMGSting_tailMeadows_SoundShader","SMGSting_tailHouses_SoundShader"};
		volumeFactor = 0.6;
	};
	class SMGSting_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SMGSting_tailInterior_SoundShader"};
		volumeFactor = 0.6;
	};
	class SMGSting_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SMGSting_silencerShot_SoundShader"};
		volumeFactor = 0.7;
	};
	class SMGSting_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SMGSting_silencerTailTrees_SoundShader","SMGSting_silencerTailForest_SoundShader","SMGSting_silencerTailMeadows_SoundShader","SMGSting_silencerTailHouses_SoundShader"};
		volumeFactor = 0.6;
	};
	class SMGSting_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SMGSting_silencerTailInterior_SoundShader"};
		volumeFactor = 0.6;
	};
	class SMGVermin_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SMGVermin_Closure_SoundShader","SMGVermin_closeShot_SoundShader","SMGVermin_midShot_SoundShader","SMGVermin_distShot_SoundShader"};
	};
	class SMGVermin_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SMGVermin_tailDistant_SoundShader","SMGVermin_tailTrees_SoundShader","SMGVermin_tailForest_SoundShader","SMGVermin_tailMeadows_SoundShader","SMGVermin_tailHouses_SoundShader"};
		volumeFactor = 0.6;
	};
	class SMGVermin_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SMGVermin_tailInterior_SoundShader"};
		volumeFactor = 0.6;
	};
	class SMGVermin_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SMGVermin_Closure_SoundShader","SMGVermin_silencerShot_SoundShader"};
	};
	class SMGVermin_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SMGVermin_silencerTailTrees_SoundShader","SMGVermin_silencerTailForest_SoundShader","SMGVermin_silencerTailMeadows_SoundShader","SMGVermin_silencerTailHouses_SoundShader"};
	};
	class SMGVermin_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SMGVermin_silencerTailInterior_SoundShader"};
	};
	class UGL_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"UGL_Closure_SoundShader","UGL_closeShot_SoundShader","UGL_midShot_SoundShader","UGL_distShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class UGL_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"UGL_tailTrees_SoundShader","UGL_tailForest_SoundShader","UGL_tailMeadows_SoundShader","UGL_tailHouses_SoundShader"};
	};
	class UGL_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"UGL_tailInterior_SoundShader"};
	};
	class Launcher_NLAW_Shot_SoundSet
	{
		soundShaders[] = {"Launcher_NLAW_closeShot_SoundShader","Launcher_NLAW_midShot_SoundShader","Launcher_NLAW_distShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Launcher_NLAW_Tail_SoundSet
	{
		soundShaders[] = {"Launcher_NLAW_tailForest_SoundShader","Launcher_NLAW_tailMeadows_SoundShader","Launcher_NLAW_tailHouses_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Launcher_RPG32_Shot_SoundSet
	{
		soundShaders[] = {"Launcher_RPG32_closeShot_SoundShader","Launcher_RPG32_midShot_SoundShader","Launcher_RPG32_distShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Launcher_RPG32_Tail_SoundSet
	{
		soundShaders[] = {"Launcher_RPG32_tailForest_SoundShader","Launcher_RPG32_tailMeadows_SoundShader","Launcher_RPG32_tailHouses_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Launcher_Titan_Shot_SoundSet
	{
		soundShaders[] = {"Launcher_Titan_closeShot_SoundShader","Launcher_Titan_midShot_SoundShader","Launcher_Titan_distShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Launcher_Titan_Tail_SoundSet
	{
		soundShaders[] = {"Launcher_Titan_tailForest_SoundShader","Launcher_Titan_tailMeadows_SoundShader","Launcher_Titan_tailHouses_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Autocannon35mm_Shot_SoundSet
	{
		soundShaders[] = {"Autocannon35mm_closeShot_SoundShader","Autocannon35mm_midShot_SoundShader","Autocannon35mm_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Autocannon35mm_tail_SoundSet
	{
		soundShaders[] = {"Autocannon35mm_tailDistant_SoundShader","Autocannon35mm_tailForest_SoundShader","Autocannon35mm_tailHouses_SoundShader","Autocannon35mm_tailMeadows_SoundShader","Autocannon35mm_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Autocannon30mmBody_Shot_SoundSet
	{
		soundShaders[] = {"Autocannon30mmBody_closeShot_SoundShader","Autocannon30mmBody_midShot_SoundShader","Autocannon30mmBody_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Autocannon30mmBody_tail_SoundSet
	{
		soundShaders[] = {"Autocannon30mmBody_tailDistant_SoundShader","Autocannon30mmBody_tailForest_SoundShader","Autocannon30mmBody_tailHouses_SoundShader","Autocannon30mmBody_tailMeadows_SoundShader","Autocannon30mmBody_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Autocannon30mmTurret_Shot_SoundSet
	{
		soundShaders[] = {"Autocannon30mmTurret_closeShot_SoundShader","Autocannon30mmTurret_midShot_SoundShader","Autocannon30mmTurret_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Autocannon30mmTurret_tail_SoundSet
	{
		soundShaders[] = {"Autocannon30mmTurret_tailDistant_SoundShader","Autocannon30mmTurret_tailForest_SoundShader","Autocannon30mmTurret_tailHouses_SoundShader","Autocannon30mmTurret_tailMeadows_SoundShader","Autocannon30mmTurret_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Autocannon40mm_Shot_SoundSet
	{
		soundShaders[] = {"Autocannon40mm_closeShot_SoundShader","Autocannon40mm_midShot_SoundShader","Autocannon40mm_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Autocannon40mm_tail_SoundSet
	{
		soundShaders[] = {"Autocannon40mm_tailDistant_SoundShader","Autocannon40mm_tailForest_SoundShader","Autocannon40mm_tailHouses_SoundShader","Autocannon40mm_tailMeadows_SoundShader","Autocannon40mm_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class GMG40mm_Shot_SoundSet
	{
		soundShaders[] = {"GMG40mm_closeShot_SoundShader","GMG40mm_midShot_SoundShader","GMG40mm_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class GMG40mm_tail_SoundSet
	{
		soundShaders[] = {"GMG40mm_tailDistant_SoundShader","GMG40mm_tailForest_SoundShader","GMG40mm_tailHouses_SoundShader","GMG40mm_tailMeadows_SoundShader","GMG40mm_tailTrees_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		multiChannelPanner = 1;
		multiChannelEmitter = 0;
		multiChannelPannerInnerRange = 25;
		multiChannelPannerRange = 100;
	};
	class HMG050_Shot_SoundSet
	{
		soundShaders[] = {"HMG050_closeShot_SoundShader","HMG050_midShot_SoundShader","HMG050_distShot_SoundShader","HMG050_Closure_SoundShader"};
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class HMG050_tail_SoundSet
	{
		soundShaders[] = {"HMG050_tailDistant_SoundShader","HMG050_tailTrees_SoundShader","HMG050_tailForest_SoundShader","HMG050_tailMeadows_SoundShader","HMG050_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class HMG127mm_shot_SoundSet
	{
		soundShaders[] = {"HMG127mm_closeShot_SoundShader","HMG127mm_midShot_SoundShader","HMG127mm_distShot_SoundShader","HMG127mm_Closure_SoundShader"};
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class HMG127mm_tail_SoundSet
	{
		soundShaders[] = {"HMG127mm_tailDistant_SoundShader","HMG127mm_tailTrees_SoundShader","HMG127mm_tailForest_SoundShader","HMG127mm_tailMeadows_SoundShader","HMG127mm_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class LMG65mmBody_Shot_SoundSet
	{
		soundShaders[] = {"LMG65mmBody_closeShot_SoundShader","LMG65mmBody_midShot_SoundShader","LMG65mmBody_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class LMG65mmBody_tail_SoundSet
	{
		soundShaders[] = {"LMG65mmBody_tailDistant_SoundShader","LMG65mmBody_tailTrees_SoundShader","LMG65mmBody_tailForest_SoundShader","LMG65mmBody_tailMeadows_SoundShader","LMG65mmBody_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class LMG65mmTurret_Shot_SoundSet
	{
		soundShaders[] = {"LMG65mmTurret_closeShot_SoundShader","LMG65mmTurret_midShot_SoundShader","LMG65mmTurret_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class LMG65mmTurret_tail_SoundSet
	{
		soundShaders[] = {"LMG65mmTurret_tailDistant_SoundShader","LMG65mmTurret_tailTrees_SoundShader","LMG65mmTurret_tailForest_SoundShader","LMG65mmTurret_tailMeadows_SoundShader","LMG65mmTurret_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class LMGCoax762mm_Shot_SoundSet
	{
		soundShaders[] = {"LMGCoax762mm_closeShot_SoundShader","LMGCoax762mm_midShot_SoundShader","LMGCoax762mm_distShot_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class LMGCoax762mm_tail_SoundSet
	{
		soundShaders[] = {"LMGCoax762mm_tailDistant_SoundShader","LMGCoax762mm_tailForest_SoundShader","LMGCoax762mm_tailHouses_SoundShader","LMGCoax762mm_tailMeadows_SoundShader","LMGCoax762mm_tailTrees_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class LMGMinigun65mm_Shot_SoundSet
	{
		soundShaders[] = {"LMGMinigun65mm_closeShot_SoundShader","LMGMinigun65mm_midShot_SoundShader","LMGMinigun65mm_distShot_SoundShader","LMGMinigun65mm_Closure_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class LMGMinigun65mm_tail_SoundSet
	{
		soundShaders[] = {"LMGMinigun65mm_tailDistant_SoundShader","LMGMinigun65mm_tailForest_SoundShader","LMGMinigun65mm_tailHouses_SoundShader","LMGMinigun65mm_tailMeadows_SoundShader","LMGMinigun65mm_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class M134Minigun_Shot_SoundSet
	{
		soundShaders[] = {"M134Minigun_closeShot_SoundShader","M134Minigun_midShot_SoundShader","M134Minigun_distShot_SoundShader","M134Minigun_Closure_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class M134Minigun_tail_SoundSet
	{
		soundShaders[] = {"M134Minigun_tailDistant_SoundShader","M134Minigun_tailForest_SoundShader","M134Minigun_tailHouses_SoundShader","M134Minigun_tailMeadows_SoundShader","M134Minigun_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Cannon105mm_Shot_SoundSet
	{
		soundShaders[] = {"Cannon105mm_closeShot_SoundShader","Cannon105mm_midShot_SoundShader","Cannon105mm_distShot_SoundShader"};
		volumeFactor = 1.8;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Cannon105mm_Tail_SoundSet
	{
		soundShaders[] = {"Cannon105mm_tailForest_SoundShader","Cannon105mm_tailMeadows_SoundShader","Cannon105mm_tailHouses_SoundShader"};
		volumeFactor = 0.8;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Cannon120mm_Shot_SoundSet
	{
		soundShaders[] = {"Cannon120mm_closeShot_SoundShader","Cannon120mm_midShot_SoundShader","Cannon120mm_distShot_SoundShader"};
		volumeFactor = 2;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Cannon120mm_Tail_SoundSet
	{
		soundShaders[] = {"Cannon120mm_tailForest_SoundShader","Cannon120mm_tailMeadows_SoundShader","Cannon120mm_tailHouses_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Cannon125mm_Shot_SoundSet
	{
		soundShaders[] = {"Cannon125mm_closeShot_SoundShader","Cannon125mm_midShot_SoundShader","Cannon125mm_distShot_SoundShader"};
		volumeFactor = 2;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Cannon125mm_Tail_SoundSet
	{
		soundShaders[] = {"Cannon125mm_tailForest_SoundShader","Cannon125mm_tailMeadows_SoundShader","Cannon125mm_tailHouses_SoundShader"};
		volumeFactor = 1.8;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class Cannon155mm_Shot_SoundSet
	{
		soundShaders[] = {"Cannon155mm_closeShot_SoundShader","Cannon155mm_midShot_SoundShader","Cannon155mm_distShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Cannon155mm_Tail_SoundSet
	{
		soundShaders[] = {"Cannon155mm_tailForest_SoundShader","Cannon155mm_tailMeadows_SoundShader","Cannon155mm_tailHouses_SoundShader"};
		volumeFactor = 0.8;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class RocketsLight_Shot_SoundSet
	{
		SoundShaders[] = {"RocketsLight_Shot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class RocketsMedium_Shot_SoundSet
	{
		SoundShaders[] = {"RocketsMedium_shot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class RocketsHeavy_Shot_SoundSet
	{
		SoundShaders[] = {"RocketsHeavy_shot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Mortar82mm_Shot_SoundSet
	{
		soundShaders[] = {"Mortar82mm_closeShot_SoundShader","Mortar82mm_midShot_SoundShader","Mortar82mm_distShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponHeavyShot3DProcessingType";
	};
	class Mortar82mm_Tail_SoundSet
	{
		soundShaders[] = {"Mortar82mm_tailForest_SoundShader","Mortar82mm_tailMeadows_SoundShader","Mortar82mm_tailHouses_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.1;
		sound3DProcessingType = "WeaponHeavyShotTail3DProcessingType";
	};
	class Static_Launcher_Titan_ATAA_Shot_SoundSet
	{
		soundShaders[] = {"Static_Launcher_Titan_ATAA_closeShot_SoundShader","Static_Launcher_Titan_ATAA_midShot_SoundShader","Static_Launcher_Titan_ATAA_distShot_SoundShader"};
		volumeFactor = 2;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Static_Launcher_Titan_ATAA_Tail_SoundSet
	{
		soundShaders[] = {"Static_Launcher_Titan_ATAA_tailForest_SoundShader","Static_Launcher_Titan_ATAA_tailMeadows_SoundShader","Static_Launcher_Titan_ATAA_tailHouses_SoundShader"};
		volumeFactor = 1.8;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class HMG127mm_static_shot_SoundSet
	{
		soundShaders[] = {"HMG127mm_static_closeShot_SoundShader","HMG127mm_static_midShot_SoundShader","HMG127mm_static_distShot_SoundShader","HMG127mm_static_Closure_SoundShader"};
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class HMG127mm_static_tail_SoundSet
	{
		soundShaders[] = {"HMG127mm_static_tailDistant_SoundShader","HMG127mm_static_tailTrees_SoundShader","HMG127mm_static_tailForest_SoundShader","HMG127mm_static_tailMeadows_SoundShader","HMG127mm_static_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class GMG20mm_Shot_SoundSet
	{
		soundShaders[] = {"GMG20mm_closeShot_SoundShader","GMG20mm_midShot_SoundShader","GMG20mm_distShot_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class GMG20mm_tail_SoundSet
	{
		soundShaders[] = {"GMG20mm_tailDistant_SoundShader","GMG20mm_tailForest_SoundShader","GMG20mm_tailHouses_SoundShader","GMG20mm_tailMeadows_SoundShader","GMG20mm_tailTrees_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		multiChannelPanner = 1;
		multiChannelEmitter = 0;
		multiChannelPannerInnerRange = 25;
		multiChannelPannerRange = 100;
	};
	class falling_broadleaf_tree_SoundSet
	{
		volumeFactor = 1;
		frequencyRandomizer = 1;
		soundShaders[] = {"falling_broadleaf_tree_big_SoundShader","falling_broadleaf_tree_small_SoundShader"};
	};
	class falling_palm_tree_SoundSet
	{
		volumeFactor = 1;
		frequencyRandomizer = 1;
		soundShaders[] = {"falling_palm_big_SoundShader","falling_palm_small_SoundShader"};
	};
	class footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
		volumeFactor = 0.15;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.3;
	};
	class footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
		volumeFactor = 0.25;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.4;
	};
	class footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
		volumeFactor = 0.3;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.6;
	};
	class footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_SoundShader"};
		volumeFactor = 0.35;
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.3;
	};
	class footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
		volumeFactor = 0.15;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
		volumeFactor = 0.4;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_SoundShader"};
		volumeFactor = 0.5;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_default_int_rev_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_SoundShader"};
		volumeFactor = 0.5;
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_boots_hard_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_hard_walk_SoundShader"};
	};
	class footsteps_boots_hard_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_hard_run_SoundShader"};
	};
	class footsteps_boots_hard_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_hard_sprint_SoundShader"};
	};
	class footsteps_boots_medium_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_walk_SoundShader"};
	};
	class footsteps_boots_medium_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_run_SoundShader"};
	};
	class footsteps_boots_medium_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_sprint_SoundShader"};
	};
	class footsteps_boots_soft_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_walk_SoundShader"};
	};
	class footsteps_boots_soft_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_run_SoundShader"};
	};
	class footsteps_boots_soft_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_sprint_SoundShader"};
	};
	class footsteps_boots_soft_LPF_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_LPF_walk_SoundShader"};
	};
	class footsteps_boots_soft_LPF_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_LPF_run_SoundShader"};
	};
	class footsteps_boots_soft_LPF_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_LPF_sprint_SoundShader"};
	};
	class footsteps_boots_medium_int_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_int_walk_SoundShader"};
	};
	class footsteps_boots_medium_int_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_int_run_SoundShader"};
	};
	class footsteps_boots_medium_int_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_int_sprint_SoundShader"};
	};
	class footsteps_boots_soft_int_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_int_walk_SoundShader"};
	};
	class footsteps_boots_soft_int_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_int_run_SoundShader"};
	};
	class footsteps_boots_soft_int_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_int_sprint_SoundShader"};
	};
	class footsteps_base_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_SoundShader"};
	};
	class footsteps_asphalt_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_asphalt_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_asphalt_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_asphalt_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_concrete_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_walk_LPF_SoundShader","footsteps_concrete_walk_HPF_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_run_LPF_SoundShader","footsteps_concrete_run_HPF_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_sprint_LPF_SoundShader","footsteps_concrete_sprint_HPF_SoundShader","footsteps_stones_small_debris_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_concrete_int_walk_SoundSet: footsteps_concrete_walk_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_walk_LPF_SoundShader","footsteps_concrete_walk_HPF_SoundShader","footsteps_stones_small_debris_SoundShader"};
	};
	class footsteps_concrete_int_run_SoundSet: footsteps_concrete_run_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_run_LPF_SoundShader","footsteps_concrete_run_HPF_SoundShader","footsteps_stones_small_debris_SoundShader"};
	};
	class footsteps_concrete_int_sprint_SoundSet: footsteps_concrete_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_sprint_LPF_SoundShader","footsteps_concrete_sprint_HPF_SoundShader","footsteps_stones_small_debris_SoundShader"};
	};
	class footsteps_concrete_int_crawl_SoundSet: footsteps_concrete_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_crawl_SoundShader","footsteps_base_crawl_SoundShader"};
	};
	class footsteps_dirt_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_walk_LPF_SoundShader","footsteps_dirt_walk_HPF_SoundShader","footsteps_dirt_debris_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_dirt_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_run_LPF_SoundShader","footsteps_dirt_run_HPF_SoundShader","footsteps_dirt_debris_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_dirt_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_sprint_LPF_SoundShader","footsteps_dirt_sprint_HPF_SoundShader","footsteps_dirt_debris_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_dirt_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_forest_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_forest_walk_SoundShader","footsteps_boots_soft_walk_SoundShader","footsteps_branch_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 1.1;
		frequencyRandomizerMin = 0.9;
		volumeRandomizer = 1.5;
		volumeRandomizerMin = 1.2;
	};
	class footsteps_forest_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_forest_run_SoundShader","footsteps_boots_soft_run_SoundShader","footsteps_branch_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 1.1;
		frequencyRandomizerMin = 0.9;
		volumeRandomizer = 1.5;
		volumeRandomizerMin = 1.2;
	};
	class footsteps_forest_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_forest_sprint_SoundShader","footsteps_boots_soft_sprint_SoundShader","footsteps_branch_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 1.1;
		frequencyRandomizerMin = 0.9;
		volumeRandomizer = 1.5;
		volumeRandomizerMin = 1.2;
	};
	class footsteps_forest_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_forest_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_branch_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_grass_walk_SoundSet
	{
		soundShaders[] = {"footsteps_grass_walk_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
	};
	class footsteps_grass_run_SoundSet
	{
		soundShaders[] = {"footsteps_grass_run_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
	};
	class footsteps_grass_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_grass_sprint_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
	};
	class footsteps_grass_boots_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_grass_boots_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_run_SoundShader","footsteps_wet_run_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_grass_boots_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_grass_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_grass_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_grassTall_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_walk_SoundShader","footsteps_boots_soft_walk_SoundShader","footsteps_branch_small_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_grassTall_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_SoundShader","footsteps_boots_soft_run_SoundShader","footsteps_branch_small_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_grassTall_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_sprint_SoundShader","footsteps_boots_soft_sprint_SoundShader","footsteps_branch_small_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_grassTall_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_gravel_walk_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_walk_SoundShader","footsteps_stones_small_debris_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
		frequencyRandomizer = 1.4;
		frequencyRandomizerMin = "0,8";
	};
	class footsteps_gravel_run_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_run_SoundShader","footsteps_stones_small_debris_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
		frequencyRandomizer = 1.4;
		frequencyRandomizerMin = "0,7";
	};
	class footsteps_gravel_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_sprint_SoundShader","footsteps_stones_small_debris_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
		frequencyRandomizer = 1.4;
		frequencyRandomizerMin = "0,8";
	};
	class footsteps_gravel_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_gravel_boots_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_walk_SoundShader","footsteps_dirt_debris_SoundShader","footsteps_wet_walk_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_gravel_boots_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_run_SoundShader","footsteps_dirt_debris_SoundShader","footsteps_wet_run_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_gravel_boots_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_sprint_SoundShader","footsteps_dirt_debris_SoundShader","footsteps_dirt_sprint_LPF_SoundShader","footsteps_dirt_sprint_HPF_SoundShader","footsteps_wet_sprint_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_gridMetal_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_gridMetal_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_gridMetal_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_gridMetal_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_lino_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_lino_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_lino_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_lino_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_lino_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_lino_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_lino_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_lino_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_MetalPlate_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_walk_SoundShader","footsteps_boots_medium_LPF_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_run_SoundShader","footsteps_boots_medium_LPF_run_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_sprint_SoundShader","footsteps_boots_medium_LPF_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_MetalPlate_int_walk_SoundSet: footsteps_MetalPlate_walk_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_walk_SoundShader","footsteps_boots_medium_LPF_walk_SoundShader"};
	};
	class footsteps_MetalPlate_int_run_SoundSet: footsteps_MetalPlate_run_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_run_SoundShader","footsteps_boots_medium_LPF_run_SoundShader"};
	};
	class footsteps_MetalPlate_int_sprint_SoundSet: footsteps_MetalPlate_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_sprint_SoundShader","footsteps_boots_medium_LPF_sprint_SoundShader"};
	};
	class footsteps_MetalPlate_int_crawl_SoundSet: footsteps_MetalPlate_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_crawl_SoundShader","footsteps_base_crawl_SoundShader"};
	};
	class footsteps_metalplatepressed_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_walk_SoundShader","footsteps_boots_medium_LPF_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_metalplatepressed_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_run_SoundShader","footsteps_boots_medium_LPF_run_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_metalplatepressed_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_sprint_SoundShader","footsteps_boots_medium_LPF_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_metalplatepressed_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_mud_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_mud_walk_SoundShader","footsteps_boots_soft_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_mud_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_mud_run_SoundShader","footsteps_boots_soft_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_mud_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_mud_sprint_SoundShader","footsteps_boots_soft_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_mud_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_mud_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_pavement_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_pavement_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_pavement_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_pavement_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_pavement_int_walk_SoundSet: footsteps_pavement_walk_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_walk_SoundShader","footsteps_boots_medium_walk_SoundShader"};
	};
	class footsteps_pavement_int_run_SoundSet: footsteps_pavement_run_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_run_SoundShader","footsteps_boots_medium_run_SoundShader"};
	};
	class footsteps_pavement_int_sprint_SoundSet: footsteps_pavement_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader"};
	};
	class footsteps_pavement_int_crawl_SoundSet: footsteps_pavement_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_crawl_SoundShader","footsteps_base_crawl_SoundShader"};
	};
	class footsteps_roofTiles_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_walk_SoundShader","footsteps_boots_medium_LPF_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_roofTiles_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_run_SoundShader","footsteps_boots_medium_LPF_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_roofTiles_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_sprint_SoundShader","footsteps_boots_medium_LPF_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_roofTiles_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_sand_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_sand_walk_SoundShader","footsteps_sand_debris_SoundShader","footsteps_boots_soft_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_sand_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_sand_run_SoundShader","footsteps_sand_debris_SoundShader","footsteps_boots_soft_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_sand_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_sand_sprint_SoundShader","footsteps_sand_debris_SoundShader","footsteps_boots_soft_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_sand_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_sand_crawl_A_SoundShader","footsteps_sand_crawl_B_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_seabed_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_seabed_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_seabed_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_seabed_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_softwood_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wood_creak_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wood_creak_run_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wood_creak_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_softwood_int_walk_SoundSet: footsteps_softwood_walk_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wood_creak_walk_SoundShader"};
	};
	class footsteps_softwood_int_run_SoundSet: footsteps_softwood_run_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wood_creak_run_SoundShader"};
	};
	class footsteps_softwood_int_sprint_SoundSet: footsteps_softwood_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wood_creak_sprint_SoundShader"};
	};
	class footsteps_softwood_int_crawl_SoundSet: footsteps_softwood_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_crawl_SoundShader","footsteps_base_crawl_SoundShader"};
	};
	class footsteps_stones_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_stones_walk_SoundShader","footsteps_boots_hard_walk_SoundShader","footsteps_stones_debris_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_stones_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_stones_run_SoundShader","footsteps_boots_hard_run_SoundShader","footsteps_stones_debris_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_stones_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_stones_sprint_SoundShader","footsteps_boots_hard_sprint_SoundShader","footsteps_stones_debris_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_stones_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_stones_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_steel_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_steel_walk_SoundShader","footsteps_boots_medium_LPF_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_steel_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_steel_run_SoundShader","footsteps_boots_medium_LPF_run_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_steel_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_steel_sprint_SoundShader","footsteps_boots_medium_LPF_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_steel_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_steel_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_straw_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_straw_walk_SoundShader","footsteps_boots_soft_LPF_walk_SoundShader","footsteps_branch_small_SoundShader","footsteps_straw_wet_walk_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_straw_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_straw_run_SoundShader","footsteps_boots_soft_LPF_run_SoundShader","footsteps_branch_small_SoundShader","footsteps_straw_wet_run_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_straw_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_straw_sprint_SoundShader","footsteps_boots_soft_LPF_sprint_SoundShader","footsteps_branch_small_SoundShader","footsteps_straw_wet_sprint_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_straw_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_straw_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_straw_wet_crawl_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_water_walk_hit_SoundShader","footsteps_water_walk_tail_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_water_run_hit_SoundShader","footsteps_water_run_tail_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_water_sprint_hit_SoundShader","footsteps_water_sprint_tail_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_water_crawl_A_SoundShader","footsteps_water_crawl_B_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_wavyMetal_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 0.9;
	};
	class footsteps_wavyMetal_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 0.9;
	};
	class footsteps_wavyMetal_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 0.9;
	};
	class footsteps_wavyMetal_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_carpet_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_walk_SoundShader","footsteps_boots_soft_LPF_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_carpet_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_run_SoundShader","footsteps_boots_soft_LPF_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_carpet_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_sprint_SoundShader","footsteps_boots_soft_LPF_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_carpet_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_mat_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_mat_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
	};
	class footsteps_mat_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_mat_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
	};
	class footsteps_mat_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_mat_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
	};
	class footsteps_mat_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_SoundShader","footsteps_wet_crawl_SoundShader"};
	};
	class footsteps_solidWood_walk_SoundSet: footsteps_default_walk_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_walk_SoundShader","footsteps_boots_medium_walk_SoundShader","footsteps_wet_walk_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_run_SoundSet: footsteps_default_run_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_run_SoundShader","footsteps_boots_medium_run_SoundShader","footsteps_wet_run_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_sprint_SoundSet: footsteps_default_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_sprint_SoundShader","footsteps_boots_medium_sprint_SoundShader","footsteps_wet_sprint_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_crawl_SoundSet: footsteps_default_crawl_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_crawl_SoundShader","footsteps_base_crawl_SoundShader","footsteps_wet_crawl_soft_SoundShader"};
	};
	class footsteps_carpet_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_int_rev_walk_SoundShader"};
	};
	class footsteps_carpet_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_int_rev_run_SoundShader"};
	};
	class footsteps_carpet_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_int_rev_sprint_SoundShader"};
	};
	class footsteps_concrete_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_int_rev_walk_SoundShader"};
	};
	class footsteps_concrete_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_int_rev_run_SoundShader"};
	};
	class footsteps_concrete_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_int_rev_sprint_SoundShader"};
	};
	class footsteps_lino_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_lino_int_rev_walk_SoundShader"};
	};
	class footsteps_lino_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_lino_int_rev_run_SoundShader"};
	};
	class footsteps_lino_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_lino_int_rev_sprint_SoundShader"};
	};
	class footsteps_mat_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_mat_int_rev_walk_SoundShader"};
	};
	class footsteps_mat_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_mat_int_rev_run_SoundShader"};
	};
	class footsteps_mat_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_mat_int_rev_sprint_SoundShader"};
	};
	class footsteps_metalPlate_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_metalPlate_int_rev_walk_SoundShader"};
	};
	class footsteps_metalPlate_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_metalPlate_int_rev_run_SoundShader"};
	};
	class footsteps_metalPlate_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_metalPlate_int_rev_sprint_SoundShader"};
	};
	class footsteps_pavement_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_int_rev_walk_SoundShader"};
	};
	class footsteps_pavement_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_int_rev_run_SoundShader"};
	};
	class footsteps_pavement_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_int_rev_sprint_SoundShader"};
	};
	class footsteps_softwood_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_int_rev_walk_SoundShader"};
	};
	class footsteps_softwood_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_int_rev_run_SoundShader"};
	};
	class footsteps_softwood_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_int_rev_sprint_SoundShader"};
	};
	class footsteps_solidWood_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_int_rev_walk_SoundShader"};
	};
	class footsteps_solidWood_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_int_rev_run_SoundShader"};
	};
	class footsteps_solidWood_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_int_rev_sprint_SoundShader"};
	};
	class footsteps_roofTiles_int_rev_walk_SoundSet: footsteps_default_int_rev_walk_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_int_rev_walk_SoundShader"};
	};
	class footsteps_roofTiles_int_rev_run_SoundSet: footsteps_default_int_rev_run_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_int_rev_run_SoundShader"};
	};
	class footsteps_roofTiles_int_rev_sprint_SoundSet: footsteps_default_int_rev_sprint_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_int_rev_sprint_SoundShader"};
	};
	class DMR02_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR02_Closure_SoundShader","DMR02_closeShot_SoundShader","DMR02_midShot_SoundShader","DMR02_distShot_SoundShader"};
	};
	class DMR02_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR02_tailDistant_SoundShader","DMR02_tailForest_SoundShader","DMR02_tailHouses_SoundShader","DMR02_tailMeadows_SoundShader","DMR02_tailTrees_SoundShader"};
	};
	class DMR02_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR02_tailInterior_SoundShader"};
	};
	class DMR02_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DMR02_Closure_SoundShader","DMR02_silencerShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class DMR02_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DMR02_silencerTailTrees_SoundShader","DMR02_silencerTailForest_SoundShader","DMR02_silencerTailMeadows_SoundShader","DMR02_silencerTailHouses_SoundShader"};
	};
	class DMR02_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR02_silencerTailInterior_SoundShader"};
	};
	class DMR03_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR03_Closure_SoundShader","DMR03_closeShot_SoundShader","DMR03_midShot_SoundShader","DMR03_distShot_SoundShader"};
	};
	class DMR03_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR03_tailDistant_SoundShader","DMR03_tailForest_SoundShader","DMR03_tailHouses_SoundShader","DMR03_tailMeadows_SoundShader","DMR03_tailTrees_SoundShader"};
	};
	class DMR03_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR03_tailInterior_SoundShader"};
	};
	class DMR03_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DMR03_Closure_SoundShader","DMR03_silencerShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class DMR03_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DMR03_silencerTailTrees_SoundShader","DMR03_silencerTailForest_SoundShader","DMR03_silencerTailMeadows_SoundShader","DMR03_silencerTailHouses_SoundShader"};
	};
	class DMR03_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR03_silencerTailInterior_SoundShader"};
	};
	class DMR04_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR04_closeShot_SoundShader","DMR04_Closure_SoundShader"};
	};
	class DMR04_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR04_tailForest_SoundShader","DMR04_tailHouses_SoundShader","DMR04_tailMeadows_SoundShader","DMR04_tailTrees_SoundShader"};
	};
	class DMR04_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR04_tailInterior_SoundShader"};
	};
	class DMR05_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR05_Closure_SoundShader","DMR05_closeShot_SoundShader","DMR05_midShot_SoundShader","DMR05_distShot_SoundShader"};
	};
	class DMR05_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR05_tailDistant_SoundShader","DMR05_tailForest_SoundShader","DMR05_tailHouses_SoundShader","DMR05_tailMeadows_SoundShader","DMR05_tailTrees_SoundShader"};
	};
	class DMR05_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR05_tailInterior_SoundShader"};
	};
	class DMR05_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DMR05_Closure_SoundShader","DMR05_silencerShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class DMR05_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DMR05_silencerTailTrees_SoundShader","DMR05_silencerTailForest_SoundShader","DMR05_silencerTailMeadows_SoundShader","DMR05_silencerTailHouses_SoundShader"};
	};
	class DMR05_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR05_silencerTailInterior_SoundShader"};
	};
	class DMR06_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR06_Closure_SoundShader","DMR06_closeShot_SoundShader","DMR06_midShot_SoundShader","DMR06_distShot_SoundShader"};
	};
	class DMR06_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR06_tailDistant_SoundShader","DMR06_tailForest_SoundShader","DMR06_tailHouses_SoundShader","DMR06_tailMeadows_SoundShader","DMR06_tailTrees_SoundShader"};
	};
	class DMR06_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR06_tailInterior_SoundShader"};
	};
	class DMR06_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DMR06_Closure_SoundShader","DMR06_silencerShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class DMR06_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DMR06_silencerTailTrees_SoundShader","DMR06_silencerTailForest_SoundShader","DMR06_silencerTailMeadows_SoundShader","DMR06_silencerTailHouses_SoundShader"};
	};
	class DMR06_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR06_silencerTailInterior_SoundShader"};
	};
	class MMG01_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"MMG01_Closure_SoundShader","MMG01_closeShot_SoundShader","MMG01_midShot_SoundShader","MMG01_distShot_SoundShader"};
	};
	class MMG01_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"MMG01_tailDistant_SoundShader","MMG01_tailForest_SoundShader","MMG01_tailHouses_SoundShader","MMG01_tailMeadows_SoundShader","MMG01_tailTrees_SoundShader"};
	};
	class MMG01_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MMG01_tailInterior_SoundShader"};
	};
	class MMG01_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"MMG01_Closure_SoundShader","MMG01_silencerShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class MMG01_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"MMG01_silencerTailTrees_SoundShader","MMG01_silencerTailForest_SoundShader","MMG01_silencerTailMeadows_SoundShader","MMG01_silencerTailHouses_SoundShader"};
	};
	class MMG01_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MMG01_silencerTailInterior_SoundShader"};
	};
	class MMG02_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"MMG02_Closure_SoundShader","MMG02_closeShot_SoundShader","MMG02_midShot_SoundShader","MMG02_distShot_SoundShader"};
	};
	class MMG02_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"MMG02_tailDistant_SoundShader","MMG02_tailForest_SoundShader","MMG02_tailHouses_SoundShader","MMG02_tailMeadows_SoundShader","MMG02_tailTrees_SoundShader"};
	};
	class MMG02_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MMG02_tailInterior_SoundShader"};
	};
	class MMG02_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"MMG02_Closure_SoundShader","MMG02_silencerShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class MMG02_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"MMG02_silencerTailTrees_SoundShader","MMG02_silencerTailForest_SoundShader","MMG02_silencerTailMeadows_SoundShader","MMG02_silencerTailHouses_SoundShader"};
	};
	class MMG02_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MMG02_silencerTailInterior_SoundShader"};
	};
	class SyndikatLMG_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SyndikatLMG_Closure_SoundShader","SyndikatLMG_closeShot_SoundShader","SyndikatLMG_midShot_SoundShader","SyndikatLMG_distShot_SoundShader"};
	};
	class SyndikatLMG_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SyndikatLMG_TailDistant_SoundShader","SyndikatLMG_TailForest_SoundShader","SyndikatLMG_TailHouses_SoundShader","SyndikatLMG_TailMeadows_SoundShader","SyndikatLMG_TailTrees_SoundShader"};
	};
	class SyndikatLMG_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SyndikatLMG_TailInterior_SoundShader"};
	};
	class SyndikatLMG_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SyndikatLMG_Closure_SoundShader","SyndikatLMG_silencerShot_SoundShader"};
	};
	class SyndikatLMG_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SyndikatLMG_silencerTailTrees_SoundShader","SyndikatLMG_silencerTailForest_SoundShader","SyndikatLMG_silencerTailMeadows_SoundShader","SyndikatLMG_silencerTailHouses_SoundShader"};
	};
	class SyndikatLMG_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SyndikatLMG_silencerTailInterior_SoundShader"};
	};
	class DMR07_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DMR07_Closure_SoundShader","DMR07_closeShot_SoundShader","DMR07_midShot_SoundShader","DMR07_distShot_SoundShader"};
		volumeFactor = 1.9;
	};
	class DMR07_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DMR07_tailDistant_SoundShader","DMR07_tailForest_SoundShader","DMR07_tailHouses_SoundShader","DMR07_tailMeadows_SoundShader","DMR07_tailTrees_SoundShader"};
	};
	class DMR07_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR07_tailInterior_SoundShader"};
	};
	class DMR07_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DMR07_Closure_SoundShader","DMR07_silencerShot_SoundShader"};
	};
	class DMR07_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DMR07_silencerTailTrees_SoundShader","DMR07_silencerTailForest_SoundShader","DMR07_silencerTailMeadows_SoundShader","DMR07_silencerTailHouses_SoundShader"};
	};
	class DMR07_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DMR07_silencerTailInterior_SoundShader"};
	};
	class Rogue9_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Rogue9_Closure_SoundShader","Rogue9_closeShot_SoundShader","Rogue9_midShot_SoundShader","Rogue9_distShot_SoundShader"};
		volumeFactor = 1.9;
	};
	class Rogue9_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Rogue9_tailDistant_SoundShader","Rogue9_tailForest_SoundShader","Rogue9_tailHouses_SoundShader","Rogue9_tailMeadows_SoundShader","Rogue9_tailTrees_SoundShader"};
	};
	class Rogue9_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Rogue9_tailInterior_SoundShader"};
	};
	class Rogue9_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Rogue9_Closure_SoundShader","Rogue9_silencerShot_SoundShader"};
	};
	class Rogue9_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Rogue9_silencerTailTrees_SoundShader","Rogue9_silencerTailForest_SoundShader","Rogue9_silencerTailMeadows_SoundShader","Rogue9_silencerTailHouses_SoundShader"};
	};
	class Rogue9_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Rogue9_silencerTailInterior_SoundShader"};
	};
	class AK74_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AK74_closure_SoundShader","AK74_closeShot_SoundShader","AK74_midShot_SoundShader","AK74_distShot_SoundShader"};
	};
	class AK74_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"AK74_tailDistant_SoundShader","AK74_tailForest_SoundShader","AK74_tailHouses_SoundShader","AK74_tailMeadows_SoundShader","AK74_tailTrees_SoundShader"};
	};
	class AK74_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"AK74_tailInterior_SoundShader"};
	};
	class AK74_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"AK74_closure_SoundShader","AK74_silencerShot_SoundShader"};
	};
	class AK74_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"AK74_silencerTailTrees_SoundShader","AK74_silencerTailForest_SoundShader","AK74_silencerTailMeadows_SoundShader","AK74_silencerTailHouses_SoundShader"};
	};
	class AK74_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"AK74_silencerTailInterior_SoundShader"};
	};
	class AK47_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AK47_Closure_SoundShader","AK47_closeShot_SoundShader","AK47_midShot_SoundShader","AK47_distShot_SoundShader"};
	};
	class AK47_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"AK47_tailDistant_SoundShader","AK47_tailForest_SoundShader","AK47_tailHouses_SoundShader","AK47_tailMeadows_SoundShader","AK47_tailTrees_SoundShader"};
	};
	class AK47_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"AK47_tailInterior_SoundShader"};
	};
	class AK47_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"AK47_Closure_SoundShader","AK47_silencerShot_SoundShader"};
	};
	class AK47_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"AK47_silencerTailTrees_SoundShader","AK47_silencerTailForest_SoundShader","AK47_silencerTailMeadows_SoundShader","AK47_silencerTailHouses_SoundShader"};
	};
	class AK47_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"AK47_silencerTailInterior_SoundShader"};
	};
	class AK12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AK12_Closure_SoundShader","AK12_closeShot_SoundShader","AK12_midShot_SoundShader","AK12_distShot_SoundShader"};
	};
	class AK12_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"AK12_tailDistant_SoundShader","AK12_tailForest_SoundShader","AK12_tailHouses_SoundShader","AK12_tailMeadows_SoundShader","AK12_tailTrees_SoundShader"};
	};
	class AK12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"AK12_tailInterior_SoundShader"};
	};
	class AK12_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"AK12_Closure_SoundShader","AK12_silencerShot_SoundShader"};
	};
	class AK12_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"AK12_silencerTailTrees_SoundShader","AK12_silencerTailForest_SoundShader","AK12_silencerTailMeadows_SoundShader","AK12_silencerTailHouses_SoundShader"};
	};
	class AK12_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"AK12_silencerTailInterior_SoundShader"};
	};
	class CAR_95_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"CAR_95_Closure_SoundShader","CAR_95_closeShot_SoundShader","CAR_95_midShot_SoundShader","CAR_95_distShot_SoundShader"};
	};
	class CAR_95_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"CAR_95_tailTrees_SoundShader","CAR_95_tailForest_SoundShader","CAR_95_tailMeadows_SoundShader","CAR_95_tailHouses_SoundShader"};
	};
	class CAR_95_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"CAR_95_tailInterior_SoundShader"};
	};
	class CAR_95_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"CAR_95_Closure_SoundShader","CAR_95_silencerShot_SoundShader"};
	};
	class CAR_95_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"CAR_95_silencerTailTrees_SoundShader","CAR_95_silencerTailForest_SoundShader","CAR_95_silencerTailMeadows_SoundShader","CAR_95_silencerTailHouses_SoundShader"};
	};
	class CAR_95_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"CAR_95_silencerTailInterior_SoundShader"};
	};
	class Type115_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Type115_closeShot_SoundShader","Type115_midShot_SoundShader","Type115_distShot_SoundShader"};
	};
	class Type115_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Type115_tailTrees_SoundShader","Type115_tailForest_SoundShader","Type115_tailMeadows_SoundShader","Type115_tailHouses_SoundShader"};
	};
	class Type115_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Type115_tailInterior_SoundShader"};
	};
	class Type115_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Type115_silencerShot_SoundShader"};
	};
	class Type115_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Type115_silencerTailTrees_SoundShader","Type115_silencerTailForest_SoundShader","Type115_silencerTailMeadows_SoundShader","Type115_silencerTailHouses_SoundShader"};
	};
	class Type115_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Type115_silencerTailInterior_SoundShader"};
	};
	class 50cal_Type115_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"50cal_Type115_closeShot_SoundShader","50cal_Type115_midShot_SoundShader","50cal_Type115_distShot_SoundShader"};
	};
	class 50cal_Type115_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"50cal_Type115_tailTrees_SoundShader","50cal_Type115_tailForest_SoundShader","50cal_Type115_tailMeadows_SoundShader","50cal_Type115_tailHouses_SoundShader"};
	};
	class 50cal_Type115_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"50cal_Type115_tailInterior_SoundShader"};
	};
	class SPAR01_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SPAR01_Closure_SoundShader","SPAR01_closeShot_SoundShader","SPAR01_midShot_SoundShader","SPAR01_distShot_SoundShader"};
		volumeFactor = 1.9;
	};
	class SPAR01_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SPAR01_tailDistant_SoundShader","SPAR01_tailForest_SoundShader","SPAR01_tailHouses_SoundShader","SPAR01_tailInterior_SoundShader","SPAR01_tailMeadows_SoundShader","SPAR01_tailTrees_SoundShader"};
	};
	class SPAR01_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR01_tailInterior_SoundShader"};
	};
	class SPAR01_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SPAR01_Closure_SoundShader","SPAR01_silencerShot_SoundShader"};
	};
	class SPAR01_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR01_silencerTailTrees_SoundShader","SPAR01_silencerTailForest_SoundShader","SPAR01_silencerTailMeadows_SoundShader","SPAR01_silencerTailHouses_SoundShader"};
	};
	class SPAR01_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR01_silencerTailInterior_SoundShader"};
	};
	class SPAR02_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SPAR02_Closure_SoundShader","SPAR02_closeShot_SoundShader","SPAR02_midShot_SoundShader","SPAR02_distShot_SoundShader"};
		volumeFactor = 1.9;
	};
	class SPAR02_tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SPAR02_tailDistant_SoundShader","SPAR02_tailForest_SoundShader","SPAR02_tailHouses_SoundShader","SPAR02_tailMeadows_SoundShader","SPAR02_tailTrees_SoundShader"};
	};
	class SPAR02_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR02_tailInterior_SoundShader"};
	};
	class SPAR02_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SPAR02_Closure_SoundShader","SPAR02_silencerShot_SoundShader"};
	};
	class SPAR02_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR02_silencerTailTrees_SoundShader","SPAR02_silencerTailForest_SoundShader","SPAR02_silencerTailMeadows_SoundShader","SPAR02_silencerTailHouses_SoundShader"};
	};
	class SPAR02_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR02_silencerTailInterior_SoundShader"};
	};
	class SPAR_17_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SPAR_17_Closure_SoundShader","SPAR_17_closeShot_SoundShader","SPAR_17_midShot_SoundShader","SPAR_17_distShot_SoundShader"};
	};
	class SPAR_17_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SPAR_17_tailTrees_SoundShader","SPAR_17_tailForest_SoundShader","SPAR_17_tailMeadows_SoundShader","SPAR_17_tailHouses_SoundShader"};
	};
	class SPAR_17_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR_17_tailInterior_SoundShader"};
	};
	class SPAR_17_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SPAR_17_Closure_SoundShader","SPAR_17_silencerShot_SoundShader"};
	};
	class SPAR_17_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR_17_silencerTailTrees_SoundShader","SPAR_17_silencerTailForest_SoundShader","SPAR_17_silencerTailMeadows_SoundShader","SPAR_17_silencerTailHouses_SoundShader"};
	};
	class SPAR_17_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SPAR_17_silencerTailInterior_SoundShader"};
	};
	class MMG_SPMG_shot_SoundSet
	{
		soundShaders[] = {"MMG_SPMG_closeShot_SoundShader","MMG_SPMG_midShot_SoundShader","MMG_SPMG_distShot_SoundShader","MMG_SPMG_Closure_SoundShader"};
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class MMG_SPMG_tail_SoundSet
	{
		soundShaders[] = {"MMG_SPMG_tailDistant_SoundShader","MMG_SPMG_tailTrees_SoundShader","MMG_SPMG_tailForest_SoundShader","MMG_SPMG_tailMeadows_SoundShader","MMG_SPMG_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Makarov_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"Makarov_closure_SoundShader","Makarov_closeShot_SoundShader","Makarov_midShot_SoundShader","Makarov_distShot_SoundShader"};
	};
	class Makarov_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[] = {"Makarov_tailDistant_SoundShader","Makarov_tailForest_SoundShader","Makarov_tailHouses_SoundShader","Makarov_tailMeadows_SoundShader","Makarov_tailTrees_SoundShader"};
	};
	class Makarov_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Makarov_tailInterior_SoundShader"};
	};
	class Makarov_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Makarov_closure_SoundShader","Makarov_silencerShot_SoundShader"};
	};
	class Makarov_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Makarov_silencerTailTrees_SoundShader","Makarov_silencerTailForest_SoundShader","Makarov_silencerTailMeadows_SoundShader","Makarov_silencerTailHouses_SoundShader"};
	};
	class Makarov_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Makarov_silencerTailInterior_SoundShader"};
	};
	class Launcher_RPG7_Shot_SoundSet
	{
		soundShaders[] = {"Launcher_RPG7_closeShot_SoundShader","Launcher_RPG7_midShot_SoundShader","Launcher_RPG7_distShot_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
	class Launcher_RPG7_Tail_SoundSet
	{
		soundShaders[] = {"Launcher_RPG7_tailForest_SoundShader","Launcher_RPG7_tailMeadows_SoundShader","Launcher_RPG7_tailHouses_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "ExplosionMediumTail3DProcessingType";
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
	};
	class ForestMorning_SoundSet
	{
		soundShaders[] = {"ForestMorning_SoundShader"};
		volumeFactor = 0.5;
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestDay_3DProcessingType";
	};
	class ForestAfternoon_SoundSet
	{
		soundShaders[] = {"ForestAfternoon_SoundShader"};
		volumeFactor = 0.6;
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestDay_3DProcessingType";
	};
	class ForestNight_SoundSet
	{
		soundShaders[] = {"ForestNight_SoundShader"};
		volumeFactor = 0.2;
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestNight_3DProcessingType";
	};
	class HousesDay_SoundSet
	{
		soundShaders[] = {"HousesDay_SoundShader"};
		volumeFactor = 0.4;
		spatial = 0;
		loop = 1;
	};
	class HousesNight_SoundSet
	{
		soundShaders[] = {"HousesNight_SoundShader"};
		volumeFactor = 0.3;
		spatial = 0;
		loop = 1;
	};
	class MeadowsDay_SoundSet
	{
		soundShaders[] = {"MeadowsDay_SoundShader"};
		volumeFactor = 0.6;
		spatial = 0;
		loop = 1;
	};
	class MeadowsNight_SoundSet
	{
		soundShaders[] = {"MeadowsNight_SoundShader"};
		volumeFactor = 0.4;
		spatial = 0;
		loop = 1;
	};
	class WindForest_High_SoundSet
	{
		soundShaders[] = {"WindForest_High_SoundShader"};
		volumeFactor = 0.6;
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestWind_3DProcessingType";
	};
	class WindForest_Low_SoundSet
	{
		soundShaders[] = {"WindForest_Low_SoundShader"};
		volumeFactor = 0.2;
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestWind_3DProcessingType";
	};
	class WindMeadows_High_SoundSet
	{
		soundShaders[] = {"WindMeadows_High_SoundShader"};
		volumeFactor = 0.2;
		spatial = 0;
		loop = 1;
	};
	class WindMeadows_Low_SoundSet
	{
		soundShaders[] = {"WindMeadows_Low_SoundShader"};
		volumeFactor = 0.1;
		spatial = 0;
		loop = 1;
	};
	class WindHouses_High_SoundSet
	{
		soundShaders[] = {"WindHouses_High_SoundShader"};
		volumeFactor = 0.3;
		spatial = 0;
		loop = 1;
	};
	class WindHouses_Low_SoundSet
	{
		soundShaders[] = {"WindHouses_Low_SoundShader"};
		volumeFactor = 0.2;
		spatial = 0;
		loop = 1;
	};
	class RainForest_Low_SoundSet
	{
		soundShaders[] = {"RainForest_Low_SoundShader"};
		volumeFactor = "0.7*0.4";
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestRain_3DProcessingType";
	};
	class RainForest_Medium_SoundSet
	{
		soundShaders[] = {"RainForest_Medium_SoundShader"};
		volumeFactor = "0.7*0.4";
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestRain_3DProcessingType";
	};
	class RainForest_High_SoundSet
	{
		soundShaders[] = {"RainForest_High_SoundShader"};
		volumeFactor = "0.8*0.4";
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "ForestRain_3DProcessingType";
	};
	class RainMeadows_Low_SoundSet
	{
		soundShaders[] = {"RainMeadows_Low_SoundShader"};
		volumeFactor = "0.6*0.4";
		spatial = 0;
		loop = 1;
	};
	class RainMeadows_Medium_SoundSet
	{
		soundShaders[] = {"RainMeadows_Medium_SoundShader"};
		volumeFactor = "0.5*0.4";
		spatial = 0;
		loop = 1;
	};
	class RainMeadows_High_SoundSet
	{
		soundShaders[] = {"RainMeadows_High_SoundShader"};
		volumeFactor = "0.5*0.4";
		spatial = 0;
		loop = 1;
	};
	class RainHouses_High_SoundSet
	{
		soundShaders[] = {"RainHouses_High_SoundShader"};
		volumeFactor = "1*0.4";
		spatial = 0;
		loop = 1;
	};
	class Sea_SoundSet
	{
		soundShaders[] = {"Sea_SoundShader"};
		volumeFactor = 0.18;
		spatial = 0;
		loop = 1;
	};
	class Coast_SoundSet
	{
		soundShaders[] = {"Coast_SoundShader"};
		volumeFactor = 1;
		spatial = 0;
		loop = 1;
		sound3DProcessingType = "Coast3DProcessingType";
	};
	class Wind_Generic_Low_SoundSet
	{
		soundShaders[] = {"Wind_Generic_Low_SoundShader"};
		volumeFactor = 0.3;
		spatial = 0;
		loop = 1;
	};
	class Wind_Generic_High_SoundSet
	{
		soundShaders[] = {"Wind_Generic_High_SoundShader"};
		volumeFactor = 0.2;
		spatial = 0;
		loop = 1;
	};
	class Insect_Day_SoundSet
	{
		soundShaders[] = {"Insect_Day_SoundShader"};
		volumeFactor = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "defaultAmpAttenuationCurve";
		sound3DProcessingType = "default3DProcessingType";
	};
	class Insect_Night_SoundSet
	{
		soundShaders[] = {"Insect_Night_SoundShader"};
		volumeFactor = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "defaultAmpAttenuationCurve";
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Birds_All_Day_SoundSet
	{
		soundShaders[] = {"Forest_Birds_All_Day_SoundShader"};
		volumeFactor = 0.2;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 6;
		delayRandomizer = 1;
		volumeCurve[] = {{0,0},{1,0},{3,0.5},{4,0.6},{5,0.5},{6,0.4},{7,0.5},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Birds_All_Night_SoundSet
	{
		soundShaders[] = {"Forest_Birds_All_Night_SoundShader"};
		volumeFactor = 0.2;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 20;
		delayRandomizer = 10;
		volumeCurve[] = {{0,0},{2,0},{3,0.7},{4,0.6},{5,0.5},{6,0.4},{7,0.5},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Meadows_Birds_All_Day_SoundSet
	{
		soundShaders[] = {"Meadows_Birds_All_Day_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 2;
		delayRandomizer = 1;
		volumeCurve = "defaultAmpAttenuationCurve";
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Birds_Temp_SoundSet
	{
		soundShaders[] = {"Forest_Birds_Temp_SoundShader"};
		volumeFactor = 3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 60;
		delayRandomizer = 30;
		volumeCurve = "defaultAmpAttenuationCurve";
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog01_Close_SoundSet
	{
		soundShaders[] = {"Forest_Frog01_Close_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,1},{1,0.9},{2,0.8},{2.999,0.7},{3,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog02_Close_SoundSet
	{
		soundShaders[] = {"Forest_Frog02_Close_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,1},{1,0.9},{2,0.8},{2.999,0.7},{3,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog03_Close_SoundSet
	{
		soundShaders[] = {"Forest_Frog03_Close_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,1},{1,0.9},{2,0.8},{2.999,0.7},{3,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog04_Close_SoundSet
	{
		soundShaders[] = {"Forest_Frog04_Close_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,1},{1,0.9},{2,0.8},{2.999,0.7},{3,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog05_Close_SoundSet
	{
		soundShaders[] = {"Forest_Frog05_Close_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,1},{1,0.9},{2,0.8},{2.999,0.7},{3,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog01_Mid_SoundSet
	{
		soundShaders[] = {"Forest_Frog01_Mid_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{3,0},{3.001,0.7},{4,0.6},{5,0.5},{6,0.4},{6.999,0.3},{7,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog02_Mid_SoundSet
	{
		soundShaders[] = {"Forest_Frog02_Mid_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{3,0},{3.001,0.7},{4,0.6},{5,0.5},{6,0.4},{6.999,0.3},{7,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog03_Mid_SoundSet
	{
		soundShaders[] = {"Forest_Frog03_Mid_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{3,0},{3.001,0.7},{4,0.6},{5,0.5},{6,0.4},{6.999,0.3},{7,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog04_Mid_SoundSet
	{
		soundShaders[] = {"Forest_Frog04_Mid_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{3,0},{3.001,0.7},{4,0.6},{5,0.5},{6,0.4},{6.999,0.3},{7,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog05_Mid_SoundSet
	{
		soundShaders[] = {"Forest_Frog05_Mid_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{3,0},{3.001,0.7},{4,0.6},{5,0.5},{6,0.4},{6.999,0.3},{7,0},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog01_Dist_SoundSet
	{
		soundShaders[] = {"Forest_Frog01_Dist_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{7,0},{7.001,0.3},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog02_Dist_SoundSet
	{
		soundShaders[] = {"Forest_Frog02_Dist_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{7,0},{7.001,0.3},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog03_Dist_SoundSet
	{
		soundShaders[] = {"Forest_Frog03_Dist_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{7,0},{7.001,0.3},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog04_Dist_SoundSet
	{
		soundShaders[] = {"Forest_Frog04_Dist_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{7,0},{7.001,0.3},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Forest_Frog05_Dist_SoundSet
	{
		soundShaders[] = {"Forest_Frog05_Dist_SoundShader"};
		volumeFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 16;
		delayRandomizer = 5;
		volumeCurve[] = {{0,0},{7,0},{7.001,0.3},{8,0.2},{9,0.1},{10,0}};
		sound3DProcessingType = "default3DProcessingType";
	};
	class Rain_PlantA_Light_SoundSet
	{
		soundShaders[] = {"Rain_PlantA_Light_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 0.8;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantA_Medium_SoundSet
	{
		soundShaders[] = {"Rain_PlantA_Medium_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantA_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_PlantA_Heavy_SoundShader"};
		volumeFactor = 0.6;
		frequencyFactor = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantB_Light_SoundSet
	{
		soundShaders[] = {"Rain_PlantB_Light_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantB_Medium_SoundSet
	{
		soundShaders[] = {"Rain_PlantB_Medium_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantB_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_PlantB_Heavy_SoundShader"};
		volumeFactor = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantC_Light_SoundSet
	{
		soundShaders[] = {"Rain_PlantC_Light_SoundShader"};
		volumeFactor = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantC_Medium_SoundSet
	{
		soundShaders[] = {"Rain_PlantC_Medium_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_PlantC_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_PlantC_Heavy_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_Tree_Light_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Light_SoundShader"};
		volumeFactor = 0.5;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "Tree3DProcessingType";
	};
	class Rain_Tree_Medium_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Medium_SoundShader"};
		volumeFactor = 0.7;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "Tree3DProcessingType";
	};
	class Rain_Tree_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Heavy_SoundShader"};
		volumeFactor = 0.4;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "Tree3DProcessingType";
	};
	class Rain_WideTree_Light_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Light_SoundShader"};
		volumeFactor = 0.5;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeWide3DProcessingType";
	};
	class Rain_WideTree_Medium_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Medium_SoundShader"};
		volumeFactor = 0.7;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeWide3DProcessingType";
	};
	class Rain_WideTree_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Heavy_SoundShader"};
		volumeFactor = 0.4;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeWide3DProcessingType";
	};
	class Rain_SmallTree_Light_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Light_SoundShader"};
		volumeFactor = 0.5;
		frequencyFactor = 1.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeNarrow3DProcessingType";
	};
	class Rain_SmallTree_Medium_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Medium_SoundShader"};
		volumeFactor = 0.5;
		frequencyFactor = 1.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeNarrow3DProcessingType";
	};
	class Rain_SmallTree_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_Tree_Heavy_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 1.3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeNarrow3DProcessingType";
	};
	class Rain_MetalT_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalT_Light_SoundShader"};
		volumeFactor = 0.7;
		frequencyFactor = 1.5;
		frequencyRandomizer = 3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_MetalT_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalT_Medium_SoundShader"};
		volumeFactor = 0.6;
		frequencyFactor = 1.5;
		frequencyRandomizer = 3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_MetalT_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalT_Heavy_SoundShader"};
		volumeFactor = 0.6;
		frequencyFactor = 1.5;
		frequencyRandomizer = 3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rain_MetalA_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalA_Light_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 2;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_MetalA_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalA_Medium_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 2;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_MetalA_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalA_Heavy_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 1;
		frequencyRandomizer = 2;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_MetalAn_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalAn_Light_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_MetalAn_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalAn_Medium_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_MetalAn_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalAn_Heavy_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_MetalB_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalB_Light_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_MetalB_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalB_Medium_SoundShader"};
		volumeFactor = 0.5;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_MetalB_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalB_Heavy_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_MetalBn_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalBn_Light_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_MetalBn_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalBn_Medium_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_MetalBn_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalBn_Heavy_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_MetalC_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalC_Light_SoundShader"};
		volumeFactor = 0.2;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_MetalC_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalC_Medium_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_MetalC_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalC_Heavy_SoundShader"};
		volumeFactor = 0.2;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_MetalCn_Light_SoundSet
	{
		soundShaders[] = {"Rain_MetalCn_Light_SoundShader"};
		volumeFactor = 0.2;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_MetalCn_Medium_SoundSet
	{
		soundShaders[] = {"Rain_MetalCn_Medium_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_MetalCn_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_MetalCn_Heavy_SoundShader"};
		volumeFactor = 0.2;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_PlateA_Medium_SoundSet
	{
		soundShaders[] = {"Rain_PlateA_Medium_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_PlateA_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_PlateA_Heavy_SoundShader"};
		volumeFactor = 0.5;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofSmall3DProcessingType";
	};
	class Rain_PlateBn_Medium_SoundSet
	{
		soundShaders[] = {"Rain_PlateBn_Medium_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1.3;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_PlateBn_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_PlateBn_Heavy_SoundShader"};
		volumeFactor = 0.5;
		frequencyFactor = 1.3;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofMedium3DProcessingType";
	};
	class Rain_PlateB_Medium_SoundSet
	{
		soundShaders[] = {"Rain_PlateB_Medium_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rain_PlateB_Heavy_SoundSet
	{
		soundShaders[] = {"Rain_PlateB_Heavy_SoundShader"};
		volumeFactor = 0.5;
		frequencyFactor = 1;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Water_Gutter_SoundSet
	{
		soundShaders[] = {"Water_Gutter_SoundShader"};
		volumeFactor = 0.8;
		frequencyFactor = 1;
		frequencyRandomizer = 3;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "Smooth1Curve";
		sound3DProcessingType = "default3DProcessingType";
	};
	class Wind_LeavesA_SoundSet
	{
		soundShaders[] = {"Wind_LeavesA_SoundShader"};
		volumeFactor = 0.8;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "Tree3DProcessingType";
	};
	class Wind_LeavesA_Narrow_SoundSet
	{
		soundShaders[] = {"Wind_LeavesA_Narrow_SoundShader"};
		volumeFactor = 0.8;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeNarrow3DProcessingType";
	};
	class Wind_LeavesB_SoundSet
	{
		soundShaders[] = {"Wind_LeavesB_SoundShader"};
		volumeFactor = 0.8;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "Tree3DProcessingType";
	};
	class Wind_LeavesC_SoundSet
	{
		soundShaders[] = {"Wind_LeavesC_SoundShader"};
		volumeFactor = 0.8;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "TreeWide3DProcessingType";
	};
	class Thunder_Norm_SoundSet
	{
		soundShaders[] = {"Thunder_Norm_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		volumeCurve = "Constant1Curve";
		sound3DProcessingType = "Thunder3DProcessingType";
	};
	class Thunder_Heavy_SoundSet
	{
		soundShaders[] = {"Thunder_Heavy_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		volumeCurve = "Constant1Curve";
		sound3DProcessingType = "Thunder3DProcessingType";
	};
	class Air_Condition_SoundSet
	{
		soundShaders[] = {"Air_Condition_SoundShader"};
		volumeFactor = 0.5;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Electric_Box_SoundSet
	{
		soundShaders[] = {"Electric_Box_SoundShader"};
		volumeFactor = 0.2;
		volumeRandomizer = 1.41254;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Metal_Stress_SoundSet
	{
		soundShaders[] = {"Metal_Stress_SoundShader"};
		volumeFactor = 0.2;
		volumeRandomizer = 0;
		frequencyFactor = 0.8;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 20;
		delayRandomizer = 10;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Metal_Stress_High_SoundSet
	{
		soundShaders[] = {"Metal_Stress_SoundShader"};
		volumeFactor = 0.15;
		frequencyFactor = 2;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 15;
		delayRandomizer = 10;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Metal_StressWind_SoundSet
	{
		soundShaders[] = {"Metal_StressWind_SoundShader"};
		volumeFactor = 0.4;
		volumeRandomizer = 0;
		frequencyFactor = 0.8;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 4;
		delayRandomizer = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Metal_StressWind_High_SoundSet
	{
		soundShaders[] = {"Metal_StressWind_SoundShader"};
		volumeFactor = 0.4;
		frequencyFactor = 2;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 4;
		delayRandomizer = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "RainRoofLarge3DProcessingType";
	};
	class Rock_Debris_SoundSet
	{
		soundShaders[] = {"Rock_Debris_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 30;
		delayRandomizer = 10;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rock_Debris_High_SoundSet
	{
		soundShaders[] = {"Rock_Debris_SoundShader"};
		volumeFactor = 0.3;
		frequencyFactor = 1.5;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 30;
		delayRandomizer = 10;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class ClothesWind_SoundSet
	{
		soundShaders[] = {"ClothesWind_SoundShader"};
		volumeFactor = 2;
		frequencyFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class MetalFenceWind_SoundSet
	{
		soundShaders[] = {"MetalFenceWind_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Metal_DebrisWind_Small_SoundSet
	{
		soundShaders[] = {"Metal_DebrisWind_Small_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1.5;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 5;
		delayRandomizer = 4;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Metal_DebrisWind_Medium_SoundSet
	{
		soundShaders[] = {"Metal_DebrisWind_Medium_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 5;
		delayRandomizer = 4;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Metal_DebrisWind_Large_SoundSet
	{
		soundShaders[] = {"Metal_DebrisWind_Large_SoundShader"};
		volumeFactor = 1.5;
		frequencyFactor = 0.6;
		volumeRandomizer = 0;
		frequencyRandomizer = 12;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 5;
		delayRandomizer = 4;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class Rock_DebrisWind_Small_SoundSet
	{
		soundShaders[] = {"Rock_DebrisWind_Small_SoundShader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		volumeRandomizer = 0;
		frequencyRandomizer = 6;
		spatial = 1;
		doppler = 0;
		loop = 1;
		delay = 5;
		delayRandomizer = 4;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "PLant3DProcessingType";
	};
	class footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_Exp_SoundShader"};
		volumeFactor = 0.15;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.3;
	};
	class footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_Exp_SoundShader"};
		volumeFactor = 0.25;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.3;
	};
	class footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_Exp_SoundShader"};
		volumeFactor = 0.3;
		frequencyRandomizer = 2.2;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.3;
	};
	class footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_Exp_SoundShader"};
		volumeFactor = 0.35;
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 0.7;
		volumeRandomizerMin = 0.3;
	};
	class footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_Exp_SoundShader"};
		volumeFactor = 0.2;
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_Exp_SoundShader"};
		volumeFactor = 0.25;
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_A_Exp_SoundShader"};
		volumeFactor = 0.3;
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_default_int_rev_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_Exp_SoundShader"};
		volumeFactor = 0.5;
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
		sound3DProcessingType = "FootstepsIntRev3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare1Curve";
	};
	class footsteps_boots_hard_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_hard_walk_Exp_SoundShader"};
	};
	class footsteps_boots_hard_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_hard_run_Exp_SoundShader"};
	};
	class footsteps_boots_hard_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_hard_sprint_Exp_SoundShader"};
	};
	class footsteps_boots_medium_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_walk_Exp_SoundShader"};
	};
	class footsteps_boots_medium_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_run_Exp_SoundShader"};
	};
	class footsteps_boots_medium_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_sprint_Exp_SoundShader"};
	};
	class footsteps_boots_soft_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_walk_Exp_SoundShader"};
	};
	class footsteps_boots_soft_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_run_Exp_SoundShader"};
	};
	class footsteps_boots_soft_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_sprint_Exp_SoundShader"};
	};
	class footsteps_boots_soft_LPF_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_LPF_walk_Exp_SoundShader"};
	};
	class footsteps_boots_soft_LPF_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_LPF_run_Exp_SoundShader"};
	};
	class footsteps_boots_soft_LPF_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_LPF_sprint_Exp_SoundShader"};
	};
	class footsteps_boots_medium_int_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_int_walk_Exp_SoundShader"};
	};
	class footsteps_boots_medium_int_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_int_run_Exp_SoundShader"};
	};
	class footsteps_boots_medium_int_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_medium_int_sprint_Exp_SoundShader"};
	};
	class footsteps_boots_soft_int_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_int_walk_Exp_SoundShader"};
	};
	class footsteps_boots_soft_int_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_int_run_Exp_SoundShader"};
	};
	class footsteps_boots_soft_int_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_int_sprint_Exp_SoundShader"};
	};
	class footsteps_base_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_asphalt_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_asphalt_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_asphalt_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_asphalt_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_asphalt_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_concrete_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_walk_LPF_Exp_SoundShader","footsteps_concrete_walk_HPF_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_run_LPF_Exp_SoundShader","footsteps_concrete_run_HPF_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_sprint_LPF_Exp_SoundShader","footsteps_concrete_sprint_HPF_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_concrete_int_walk_Exp_SoundSet: footsteps_concrete_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_walk_LPF_Exp_SoundShader","footsteps_concrete_walk_HPF_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_int_run_Exp_SoundSet: footsteps_concrete_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_run_LPF_Exp_SoundShader","footsteps_concrete_run_HPF_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_int_sprint_Exp_SoundSet: footsteps_concrete_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_sprint_LPF_Exp_SoundShader","footsteps_concrete_sprint_HPF_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_concrete_int_crawl_Exp_SoundSet: footsteps_concrete_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_dirt_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_walk_LPF_Exp_SoundShader","footsteps_dirt_walk_HPF_Exp_SoundShader","footsteps_dirt_debris_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_dirt_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_run_LPF_Exp_SoundShader","footsteps_dirt_run_HPF_Exp_SoundShader","footsteps_dirt_debris_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_dirt_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_sprint_LPF_Exp_SoundShader","footsteps_dirt_sprint_HPF_Exp_SoundShader","footsteps_dirt_debris_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_dirt_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_dirt_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_forest_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_forest_walk_Exp_SoundShader","footsteps_boots_soft_walk_Exp_SoundShader","footsteps_branch_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 1.1;
		frequencyRandomizerMin = 0.9;
		volumeRandomizer = 1.5;
		volumeRandomizerMin = 1.2;
	};
	class footsteps_forest_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_forest_run_Exp_SoundShader","footsteps_boots_soft_run_Exp_SoundShader","footsteps_branch_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 1.1;
		frequencyRandomizerMin = 0.9;
		volumeRandomizer = 1.5;
		volumeRandomizerMin = 1.2;
	};
	class footsteps_forest_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_forest_sprint_Exp_SoundShader","footsteps_boots_soft_sprint_Exp_SoundShader","footsteps_branch_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 1.1;
		frequencyRandomizerMin = 0.9;
		volumeRandomizer = 1.5;
		volumeRandomizerMin = 1.2;
	};
	class footsteps_forest_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_forest_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_branch_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_grass_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grass_walk_Exp_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
	};
	class footsteps_grass_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grass_run_Exp_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
	};
	class footsteps_grass_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grass_sprint_Exp_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 2;
		volumeRandomizerMin = 1.5;
	};
	class footsteps_grass_boots_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_grass_boots_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_grass_boots_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_boots_soft_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		sound3DProcessingType = "Footsteps3DProcessingType";
		distanceFilter = "footstepsDistanceFreqAttenuationFilter";
		volumeCurve = "InverseSquare2Curve";
		volumeRandomizer = 1.2;
		volumeRandomizerMin = 1.1;
	};
	class footsteps_grass_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grass_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_grassTall_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_walk_Exp_SoundShader","footsteps_boots_soft_walk_Exp_SoundShader","footsteps_branch_small_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_grassTall_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_run_Exp_SoundShader","footsteps_boots_soft_run_Exp_SoundShader","footsteps_branch_small_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_grassTall_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_sprint_Exp_SoundShader","footsteps_boots_soft_sprint_Exp_SoundShader","footsteps_branch_small_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_grassTall_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_grassTall_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_gravel_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_gravel_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_gravel_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_stones_small_debris_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_gravel_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gravel_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_gridMetal_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_gridMetal_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_gridMetal_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_gridMetal_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_gridMetal_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_lino_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_lino_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_lino_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_lino_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_lino_int_walk_Exp_SoundSet: footsteps_lino_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader"};
	};
	class footsteps_lino_int_run_Exp_SoundSet: footsteps_lino_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader"};
	};
	class footsteps_lino_int_sprint_Exp_SoundSet: footsteps_lino_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader"};
	};
	class footsteps_lino_int_crawl_Exp_SoundSet: footsteps_lino_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_MetalPlate_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_walk_Exp_SoundShader","footsteps_boots_medium_LPF_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_run_Exp_SoundShader","footsteps_boots_medium_LPF_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_sprint_Exp_SoundShader","footsteps_boots_medium_LPF_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_MetalPlate_int_walk_Exp_SoundSet: footsteps_MetalPlate_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_walk_Exp_SoundShader","footsteps_boots_medium_LPF_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_int_run_Exp_SoundSet: footsteps_MetalPlate_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_run_Exp_SoundShader","footsteps_boots_medium_LPF_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_int_sprint_Exp_SoundSet: footsteps_MetalPlate_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_sprint_Exp_SoundShader","footsteps_boots_medium_LPF_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_MetalPlate_int_crawl_Exp_SoundSet: footsteps_MetalPlate_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_MetalPlate_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_metalplatepressed_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_walk_Exp_SoundShader","footsteps_boots_medium_LPF_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_metalplatepressed_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_run_Exp_SoundShader","footsteps_boots_medium_LPF_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_metalplatepressed_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_sprint_Exp_SoundShader","footsteps_boots_medium_LPF_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_metalplatepressed_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalplatepressed_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_mud_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mud_walk_Exp_SoundShader","footsteps_boots_soft_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_mud_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mud_run_Exp_SoundShader","footsteps_boots_soft_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_mud_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mud_sprint_Exp_SoundShader","footsteps_boots_soft_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_mud_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mud_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_pavement_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_pavement_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_pavement_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_pavement_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_pavement_int_walk_Exp_SoundSet: footsteps_pavement_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader"};
	};
	class footsteps_pavement_int_run_Exp_SoundSet: footsteps_pavement_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader"};
	};
	class footsteps_pavement_int_sprint_Exp_SoundSet: footsteps_pavement_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader"};
	};
	class footsteps_pavement_int_crawl_Exp_SoundSet: footsteps_pavement_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_roofTiles_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_walk_Exp_SoundShader","footsteps_boots_medium_LPF_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_roofTiles_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_run_Exp_SoundShader","footsteps_boots_medium_LPF_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_roofTiles_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_sprint_Exp_SoundShader","footsteps_boots_medium_LPF_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_roofTiles_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_roofTiles_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_sand_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_sand_walk_Exp_SoundShader","footsteps_sand_debris_Exp_SoundShader","footsteps_boots_soft_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_sand_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_sand_run_Exp_SoundShader","footsteps_sand_debris_Exp_SoundShader","footsteps_boots_soft_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_sand_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_sand_sprint_Exp_SoundShader","footsteps_sand_debris_Exp_SoundShader","footsteps_boots_soft_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_sand_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_sand_crawl_A_Exp_SoundShader","footsteps_sand_crawl_B_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_seabed_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_seabed_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_seabed_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_seabed_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_seabed_crawl_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_softwood_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wood_creak_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wood_creak_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wood_creak_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_softwood_int_walk_Exp_SoundSet: footsteps_softwood_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wood_creak_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_int_run_Exp_SoundSet: footsteps_softwood_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wood_creak_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_int_sprint_Exp_SoundSet: footsteps_softwood_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wood_creak_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_softwood_int_crawl_Exp_SoundSet: footsteps_softwood_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_stones_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_stones_walk_Exp_SoundShader","footsteps_boots_hard_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_stones_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_stones_run_Exp_SoundShader","footsteps_boots_hard_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_stones_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_stones_sprint_Exp_SoundShader","footsteps_boots_hard_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_stones_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_stones_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_steel_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_steel_walk_Exp_SoundShader","footsteps_boots_medium_LPF_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_steel_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_steel_run_Exp_SoundShader","footsteps_boots_medium_LPF_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_steel_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_steel_sprint_Exp_SoundShader","footsteps_boots_medium_LPF_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_steel_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_steel_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
		frequencyRandomizer = 0;
		frequencyRandomizerMin = 0;
	};
	class footsteps_straw_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_straw_walk_Exp_SoundShader","footsteps_boots_soft_LPF_walk_Exp_SoundShader","footsteps_branch_small_Exp_SoundShader","footsteps_straw_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_straw_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_straw_run_Exp_SoundShader","footsteps_boots_soft_LPF_run_Exp_SoundShader","footsteps_branch_small_Exp_SoundShader","footsteps_straw_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_straw_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_straw_sprint_Exp_SoundShader","footsteps_boots_soft_LPF_sprint_Exp_SoundShader","footsteps_branch_small_Exp_SoundShader","footsteps_straw_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_straw_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_straw_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_straw_wet_crawl_Exp_SoundShader"};
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_water_walk_hit_Exp_SoundShader","footsteps_water_walk_tail_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_water_run_hit_Exp_SoundShader","footsteps_water_run_tail_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_water_sprint_hit_Exp_SoundShader","footsteps_water_sprint_tail_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 1;
	};
	class footsteps_water_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_water_crawl_A_Exp_SoundShader","footsteps_water_crawl_B_Exp_SoundShader","footsteps_wet_crawl_Exp_SoundShader"};
	};
	class footsteps_wavyMetal_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 0.9;
	};
	class footsteps_wavyMetal_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 0.9;
	};
	class footsteps_wavyMetal_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 3;
		frequencyRandomizerMin = 0.9;
	};
	class footsteps_wavyMetal_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_wavyMetal_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_carpet_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_walk_Exp_SoundShader","footsteps_boots_soft_LPF_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_carpet_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_run_Exp_SoundShader","footsteps_boots_soft_LPF_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_carpet_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_sprint_Exp_SoundShader","footsteps_boots_soft_LPF_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_carpet_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_carpet_int_walk_Exp_SoundSet: footsteps_carpet_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_walk_Exp_SoundShader","footsteps_boots_soft_LPF_walk_Exp_SoundShader"};
	};
	class footsteps_carpet_int_run_Exp_SoundSet: footsteps_carpet_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_run_Exp_SoundShader","footsteps_boots_soft_LPF_run_Exp_SoundShader"};
	};
	class footsteps_carpet_int_sprint_Exp_SoundSet: footsteps_carpet_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_sprint_Exp_SoundShader","footsteps_boots_soft_LPF_sprint_Exp_SoundShader"};
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 1;
	};
	class footsteps_carpet_int_crawl_Exp_SoundSet: footsteps_carpet_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_mat_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
	};
	class footsteps_mat_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
	};
	class footsteps_mat_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
	};
	class footsteps_mat_crawl_exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_mat_int_walk_Exp_SoundSet: footsteps_mat_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader"};
	};
	class footsteps_mat_int_run_Exp_SoundSet: footsteps_mat_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader"};
	};
	class footsteps_mat_int_sprint_Exp_SoundSet: footsteps_mat_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader"};
	};
	class footsteps_mat_int_crawl_exp_SoundSet: footsteps_mat_crawl_exp_SoundSet
	{
		soundShaders[] = {"footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_solidWood_walk_Exp_SoundSet: footsteps_default_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader","footsteps_wet_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_run_Exp_SoundSet: footsteps_default_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader","footsteps_wet_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_sprint_Exp_SoundSet: footsteps_default_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader","footsteps_wet_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_crawl_Exp_SoundSet: footsteps_default_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader","footsteps_wet_crawl_soft_Exp_SoundShader"};
	};
	class footsteps_solidWood_int_walk_Exp_SoundSet: footsteps_solidWood_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_walk_Exp_SoundShader","footsteps_boots_medium_walk_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_int_run_Exp_SoundSet: footsteps_solidWood_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_run_Exp_SoundShader","footsteps_boots_medium_run_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_int_sprint_Exp_SoundSet: footsteps_solidWood_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_sprint_Exp_SoundShader","footsteps_boots_medium_sprint_Exp_SoundShader"};
		frequencyRandomizer = 0;
	};
	class footsteps_solidWood_int_crawl_Exp_SoundSet: footsteps_solidWood_crawl_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_crawl_Exp_SoundShader","footsteps_base_crawl_Exp_SoundShader"};
	};
	class footsteps_carpet_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_carpet_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_carpet_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_carpet_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_concrete_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_concrete_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_concrete_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_concrete_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_lino_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_lino_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_lino_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_lino_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_mat_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_mat_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_mat_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_mat_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_metalPlate_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalPlate_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_metalPlate_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalPlate_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_metalPlate_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_metalPlate_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_pavement_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_pavement_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_pavement_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_pavement_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_softwood_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_softwood_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_softwood_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_softwood_int_rev_sprint_Exp_SoundShader"};
	};
	class footsteps_solidWood_int_rev_walk_Exp_SoundSet: footsteps_default_int_rev_walk_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_int_rev_walk_Exp_SoundShader"};
	};
	class footsteps_solidWood_int_rev_run_Exp_SoundSet: footsteps_default_int_rev_run_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_int_rev_run_Exp_SoundShader"};
	};
	class footsteps_solidWood_int_rev_sprint_Exp_SoundSet: footsteps_default_int_rev_sprint_Exp_SoundSet
	{
		soundShaders[] = {"footsteps_solidWood_int_rev_sprint_Exp_SoundShader"};
	};
	class DebugSound_sine880Hz_min10dB_SoundSet
	{
		soundShaders[] = {"DebugSound_sine880Hz_min10dB_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0;
		volumeRandomizer = "0dB";
		sound3DProcessingType = "default3DProcessingType";
		spatial = 1;
		doppler = 0;
		speedOfSound = 0;
		loop = 1;
	};
	class LIB_RIFLE_SHOT_SOUNDSET
	{
		soundShaders[] = {"RU_RIFLE_SVT_SHOT_CLOSE","RU_RIFLE_SVT_SHOT_distant","ru_rifle_svt_mech"};
		volumeFactor = "db0";
		frequencyFactor = 1;
		volumeCurve = "InverseSquareCurve_2";
		sound3DProcessingType = "LIB_shotPanner";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "LIB_lowPass1";
		volumeRandomizer = "db0.5";
		volumeRandomizerMin = "db0";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
	};
	class LIB_RIFLE_TAIL_SOUNDSET
	{
		soundShaders[] = {"LIB_rifle_tail_interior","LIB_rifle_tail_houses","LIB_rifle_tail_trees","LIB_rifle_tail_forest","LIB_rifle_tail_meadows"};
		soundShadersLimit = 3;
		volumeFactor = "db-3";
		frequencyFactor = 1;
		volumeCurve = "InverseSquareCurve_2";
		sound3DProcessingType = "LIB_TailPanner";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "LIB_lowPass1";
		volumeRandomizer = "db0.5";
		volumeRandomizerMin = "db0";
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 0.2;
	};
	class LIB_LAUNCHER_SHOT_SOUNDSET: LIB_RIFLE_SHOT_SOUNDSET
	{
		soundShaders[] = {"LIB_rocketLaunchers_bazooka_punch"};
	};
	class LIB_ROCKETLAUNCHER_TAIL_SOUNDSET: LIB_RIFLE_TAIL_SOUNDSET
	{
		soundShaders[] = {"LIB_rocketLaunchers_tail"};
		volumeFactor = 1;
	};
	class LIB_PlaneWeapon_LMG_SoundSet: HMG127mm_shot_SoundSet
	{
		volumeFactor = "db0";
		frequencyRandomizer = 0.7;
	};
	class LIB_PlaneWeapon_HMG_SoundSet: Autocannon35mm_Shot_SoundSet
	{
		volumeFactor = "0db";
		frequencyRandomizer = 0.7;
	};
	class LIB_SONICCRACK_CRACK_SOUNDSET
	{
		soundShaders[] = {"LIB_sonicCrackclose","LIB_sonicCrackmid","LIB_sonicCrackfar"};
		volumeFactor = "db+3";
		frequencyFactor = 1;
		volumeCurve = "InverseSquareCurve_2";
		sound3DProcessingType = "LIB_sonicCrackPanner";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "LIB_lowPass1";
		volumeRandomizer = "db0";
		volumeRandomizerMin = "db0";
		frequencyRandomizer = 0.3;
		frequencyRandomizerMin = 0.1;
	};
	class LIB_SONICCRACK_TAIL_SOUNDSET
	{
		soundShaders[] = {"LIB_sonicCrackTail"};
		volumeFactor = "db+3";
		frequencyFactor = 1;
		volumeCurve = "InverseSquareCurve_2";
		sound3DProcessingType = "LIB_sonicCrackTailPanner";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "LIB_lowPass1";
		volumeRandomizer = "db0";
		volumeRandomizerMin = "db0";
		frequencyRandomizer = 0.7;
		frequencyRandomizerMin = 0.1;
	};
	class GER_LMG_MG42_SHOT: LIB_RIFLE_SHOT_SOUNDSET
	{
		soundShaders[] = {"ger_lmg_mg42_SHOT_CLOSE","ger_lmg_mg42_SHOT_distant","ger_lmg_mg42_mech"};
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
	};
	class GER_LMG_MG42_TAIL: LIB_RIFLE_TAIL_SOUNDSET
	{
	};
	class RU_RIFLE_SVT_SHOT: LIB_RIFLE_SHOT_SOUNDSET
	{
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.3;
	};
	class RU_RIFLE_SVT_TAIL: LIB_RIFLE_TAIL_SOUNDSET
	{
	};
	class us_rifle_m1garand_SHOT: LIB_RIFLE_SHOT_SOUNDSET
	{
		soundShaders[] = {"us_rifle_m1garand_SHOT_CLOSE","us_rifle_m1garand_SHOT_distant","LIB_rifle_mech_soundShader"};
	};
	class RU_RIFLE_MOSIN_SHOT_SOUNDSET: LIB_RIFLE_SHOT_SOUNDSET
	{
		soundShaders[] = {"ru_rifle_mosin_SHOT_CLOSE","ru_rifle_mosin_SHOT_distant","ru_rifle_mosin_SHOT_1p"};
	};
	class RU_RIFLE_MOSIN_TAIL_SOUNDSET: LIB_RIFLE_TAIL_SOUNDSET
	{
	};
};
class CfgSound3DProcessors
{
	class default3DProcessingType
	{
		type = "emitter";
		innerRange = 0;
		range = 15;
		radius = 3;
	};
	class WeaponLightShot3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 5;
		rangeCurve = "Smooth1Curve";
	};
	class WeaponLightShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 100;
		rangeCurve = "InverseSquare1Curve";
	};
	class WeaponMediumShot3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 5;
		rangeCurve = "LinearCurve";
	};
	class WeaponMediumShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 160;
		rangeCurve = "InverseSquare1Curve";
	};
	class WeaponInteriorShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 10;
		rangeCurve = "InverseSquare1Curve";
	};
	class WeaponHeavyShot3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 15;
		rangeCurve = "Smooth1Curve";
	};
	class WeaponHeavyShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 20;
		range = 300;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionLight3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 100;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionLightTail3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 200;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionMedium3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 1500;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionMediumTail3DProcessingType
	{
		type = "panner";
		innerRange = 10;
		range = 400;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionHeavy3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 1500;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionHeavyTail3DProcessingType
	{
		type = "panner";
		innerRange = 10;
		range = 400;
		rangeCurve = "InverseSquare2Curve";
	};
	class ExplosionDebris3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 30;
		rangeCurve = "InverseSquare2Curve";
	};
	class SonicCrackTail3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 50;
		rangeCurve = "Smooth1Curve";
	};
	class Thunder3DProcessingType
	{
		type = "panner";
		innerRange = 100;
		range = 1500;
		rangeCurve = "Smooth1Curve";
	};
	class Tree3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 10;
		rangeCurve = "Smooth1Curve";
	};
	class TreeNarrow3DProcessingType
	{
		type = "emitter";
		innerRange = 8;
		range = 20;
		radius = 3;
		rangeCurve = "Smooth1Curve";
	};
	class TreeWide3DProcessingType
	{
		type = "panner";
		innerRange = 0;
		range = 17;
		rangeCurve = "Smooth1Curve";
	};
	class PLant3DProcessingType
	{
		type = "emitter";
		innerRange = 8;
		range = 20;
		radius = 2;
		rangeCurve = "Smooth1Curve";
	};
	class RainRoofSmall3DProcessingType
	{
		type = "panner";
		innerRange = 1;
		range = 6;
		rangeCurve = "Smooth1Curve";
	};
	class RainRoofMedium3DProcessingType
	{
		type = "panner";
		innerRange = 3;
		range = 9;
		rangeCurve = "Smooth1Curve";
	};
	class RainRoofLarge3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 11;
		rangeCurve = "Smooth1Curve";
	};
	class Footsteps3DProcessingType
	{
		type = "emitter";
		innerRange = 0;
		range = 5;
		radius = 1;
	};
	class FootstepsIntRev3DProcessingType
	{
		type = "panner";
		innerRange = 0.1;
		range = 8;
		rangeCurve = "InverseSquare1Curve";
	};
	class Coast3DProcessingType
	{
		type = "surround_panner";
		radius = 7;
		volumeAll = "coast * coast / 2";
		reference = "camera";
	};
	class Forest_3DProcessingType
	{
		type = "surround_panner";
		radius = 10;
		volumeAll = "forest";
		reference = "camera";
	};
	class ForestDay_3DProcessingType
	{
		type = "surround_panner";
		radius = 10;
		volumeAll = "forest * (trees factor [0.6, 1])";
		reference = "camera";
	};
	class ForestNight_3DProcessingType
	{
		type = "surround_panner";
		radius = 10;
		volumeAll = "forest";
		reference = "camera";
	};
	class ForestWind_3DProcessingType
	{
		type = "surround_panner";
		radius = 10;
		volumeAll = "forest * (trees factor [0.6, 1])";
		reference = "camera";
	};
	class ForestRain_3DProcessingType
	{
		type = "surround_panner";
		radius = 10;
		volumeAll = "forest";
		reference = "camera";
	};
	class LIB_shotPanner
	{
		type = "panner";
		innerRange = 1.5;
		rangeCurve = "InverseSquareCurve_4";
		range = 10;
	};
	class LIB_tailPanner
	{
		type = "panner";
		innerRange = 10;
		rangeCurve = "InverseSquareCurve_3";
		range = 1300;
	};
	class LIB_sonicCrackPanner
	{
		type = "panner";
		innerRange = 1;
		rangeCurve = "InverseSquareCurve_1";
		range = 25;
	};
	class LIB_sonicCrackTailPanner
	{
		type = "panner";
		innerRange = 20;
		rangeCurve = "InverseSquareCurve_2";
		range = 400;
	};
};
class CfgDistanceFilters
{
	class defaultDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 10;
		range = 1000;
		powerFactor = 32;
	};
	class weaponShotDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 300;
		qFactor = 1;
		innerRange = 10;
		range = 2000;
		powerFactor = 32;
	};
	class weaponShotTailDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 300;
		qFactor = 1;
		innerRange = 10;
		range = 1500;
		powerFactor = 32;
	};
	class explosionDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 10;
		range = 2000;
		powerFactor = 22;
	};
	class explosionTailDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 10;
		range = 2000;
		powerFactor = 22;
	};
	class explosionGatlingDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 10;
		range = 400;
		powerFactor = 22;
	};
	class footstepsDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 3;
		range = 50;
		powerFactor = 20;
	};
	class LIB_lowPass1
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 20;
		range = 2500;
		powerFactor = 32;
	};
	class LIB_lowPass2
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 20;
		range = 1800;
		powerFactor = 32;
	};
};
class CfgSoundGlobals
{
	defaultDistanceFilter = "defaultDistanceFreqAttenuationFilter";
	defaultVolumeCurve = "defaultAmpAttenuationCurve";
	defaultWeaponVolumeCurve = "defaultWeaponAmpAttenuationCurve";
	defaultLFEVolumeCurve = "defaultLFECurve";
	defaultSound3DProcessingType = "default3DProcessingType";
	defaultSpatialityRange = 0.005;
	defaultSpatialityRangeAngle = 0.785;
	OldConfigurationVolumeFactor = 0.630957;
};
