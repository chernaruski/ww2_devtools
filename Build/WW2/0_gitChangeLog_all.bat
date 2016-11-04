set _FROM=2016-11-02
set _FILE=WW2_ChangeLog.txt

echo "START" >> %_FILE%

cd Assets_c
echo //Assets_c >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Assets_m
echo //Assets_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Assets_r
echo //Assets_r >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Assets_s
echo //Assets_s >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Assets_t
echo //Assets_t >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_a
echo //Core_a >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_c
echo //Core_c >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_f
echo //Core_f >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_m
echo //Core_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_r
echo //Core_r >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_s
echo //Core_s >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Core_t
echo //Core_t >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Terrains_c
echo //Terrains_c >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Terrains_m
echo //Terrains_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Terrains_r
echo //Terrains_r >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Terrains_s
echo //Terrains_s >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Terrains_t
echo //Terrains_t >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Terrains_w
echo //Terrains_w >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..

cd AssetsSource_m
echo //AssetsSource_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd CoreSource_m
echo //CoreSource_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd TerrainsSource_m
echo //TerrainsSource_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
