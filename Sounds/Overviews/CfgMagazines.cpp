/*
		reloadMagazineSound[] =
		reloadSound[] =
		sound[] =
		soundFly[] =
		soundHit[] =
*/
class CfgMagazines
{
	class HandGrenade: CA_Magazine
	{
		sound[] = {"",0.000316228,1};
	};
	class MiniGrenade: CA_Magazine
	{
		sound[] = {"",0.000316228,1};
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
		sound[] = {"A3\sounds_f\dummysound",3.16228,1};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1};
	};
	class 24Rnd_missiles: VehicleMagazine
	{
		sound[] = {"A3\sounds_f\weapons\rockets\explosion_missile_01",1,1,1200};
		reloadSound[] = {"",0.000316228,1};
	};
	class 8Rnd_LG_scalpel: VehicleMagazine
	{
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
	};
	class 14Rnd_80mm_rockets: VehicleMagazine
	{
		sound[] = {"A3\sounds_f\weapons\rockets\Titan_3",1,1,1200};
		reloadSound[] = {"",0.000316228,1};
	};
	class 2Rnd_AAA_missiles: VehicleMagazine
	{
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_3",1.25893,1,1000};
		reloadSound[] = {"",0.000316228,1,20};
	};
	class 4Rnd_GAA_missiles: VehicleMagazine
	{
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		reloadSound[] = {"",0.000316228,1,20};
	};
	class 5Rnd_GAT_missiles: VehicleMagazine
	{
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		reloadSound[] = {"",0.000316228,1,20};
	};
	class 6Rnd_AAT_missiles: VehicleMagazine
	{
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1100};
		soundFly[] = {"A3\sounds_f\dummysound",1,1.1,700};
		soundHit[] = {"A3\sounds_f\dummysound",15.8489,1,2000};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
	};
	class 2Rnd_GBU12_LGB: VehicleMagazine
	{
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
	};
	class B_IR_Grenade: CA_Magazine
	{
		sound[] = {"",0.000316228,1};
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
	};
	class 2Rnd_Missile_AA_04_F: VehicleMagazine
	{
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
	};
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine
	{
		sound[] = {"\A3\sounds_f\dummysound",1,1,1300};
		reloadSound[] = {"\A3\sounds_f\dummysound",0.000316228,1,20};
	};
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
	{
		reloadSound[] = {"",0.000316228,1};
		sound[] = {"\A3\sounds_f\weapons\rockets\explosion_missile_02",1,1,1200};
	};
	class 4Rnd_Bomb_04_F: VehicleMagazine
	{
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
	};
	class ATMine_Range_Mag: CA_Magazine
	{
		sound[] = {"A3\sounds_f\dummysound",0.000316228,1,10};
	};
	class SatchelCharge_Remote_Mag: CA_Magazine
	{
		sound[] = {"A3\sounds_f\dummysound",0.000316228,1,10};
	};
	class LIB_Bomb_VehicleMagazine_base: VehicleMagazine
	{
		sound[] = {"",1,1,1100};
		soundFly[] = {"\ww2_ca\sounds\weapons\cannon\rocket_fly_x2.wss",1,1.1,700};
		reloadSound[] = {"",1,1};
	};
	class TimeBomb: CA_Magazine
	{
		sound[] = {"",0.000316228,1,10};
	};
	class PipeBomb: TimeBomb
	{
		sound[] = {"",0.000316228,1,10};
	};
};
/*
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
		reloadSound[] = {"",0.000316228,1,20};
		reloadSound[] = {"",0.000316228,1};
		reloadSound[] = {"",1,1};
		reloadSound[] = {"\A3\sounds_f\dummysound",0.000316228,1,20};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1};
		sound[] = {"",0.000316228,1,10};
		sound[] = {"",0.000316228,1};
		sound[] = {"",1,1,1100};
		sound[] = {"",1,1};
		sound[] = {"\A3\sounds_f\dummysound",1,1,1300};
		sound[] = {"\A3\sounds_f\weapons\rockets\explosion_missile_02",1,1,1200};
		sound[] = {"A3\sounds_f\dummysound",0.000316228,1,10};
		sound[] = {"A3\sounds_f\dummysound",3.16228,1};
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1100};
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1600};
		sound[] = {"A3\sounds_f\weapons\rockets\explosion_missile_01",1,1,1200};
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		sound[] = {"A3\sounds_f\weapons\rockets\Titan_3",1,1,1200};
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_3",1.25893,1,1000};
		soundFly[] = {"\ww2_ca\sounds\weapons\cannon\rocket_fly_x2.wss",1,1.1,700};
		soundFly[] = {"A3\sounds_f\dummysound",1,1.1,700};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		soundHit[] = {"A3\sounds_f\dummysound",15.8489,1,2000};
*/