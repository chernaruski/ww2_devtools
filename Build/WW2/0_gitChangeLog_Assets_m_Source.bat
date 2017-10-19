set _FROM=2014-03-06
set _FILE=WW2_ChangeLog_Assets_m_SourceIF.txt

echo "START" >> %_FILE%

cd Assets_m_SourceIF
rem git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\%_FILE%

git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Characters_Germans_m_GER_TankTroops.txt -- Characters/Germans_m/GER_TankTroops
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Characters_Germans_m_GER_Wehrmacht.txt -- Characters/Germans_m/GER_Wehrmacht
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Characters_Soviets_m_SOV_RKKA.txt -- Characters/Soviets_m/SOV_RKKA
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Vehicles_Planes_m.txt -- Vehicles/Planes_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Vehicles_StaticWeapons_m.txt -- Vehicles/StaticWeapons_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_Ammoboxes_m.txt -- Weapons/Ammoboxes_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_Backpacks_m.txt -- Weapons/Backpacks_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_Launchers_m.txt -- Weapons/Launchers_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_MachineGun_Heavy_m.txt -- Weapons/MachineGun_Heavy_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_MachineGun_Light_m.txt -- Weapons/MachineGun_Light_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_MachineGun_Sub_m.txt -- Weapons/MachineGun_Sub_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_Misc_m_Particles.txt -- Weapons/Misc_m/Particles
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_Pistols_m.txt -- Weapons/Pistols_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_Rifles_m.txt -- Weapons/Rifles_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_SniperRifles_m.txt -- Weapons/SniperRifles_m
git log --pretty=format:"%%H%%x09%%T%%x09%%P%%x09%%s" --name-only >> ..\GitLog_Weapons_WeaponsAmmo_m.txt -- Weapons/WeaponsAmmo_m

REM %%x09%%B
cd ..
