set _FROM=2017-02-20
set _FILE=WW2_ChangeLog_Objects_%_FROM%.txt

echo "START" >> %_FILE%

cd Objects_c
echo //Objects_c >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Objects_m
echo //Objects_m >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Objects_r
echo //Objects_r >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
cd Objects_t
echo //Objects_t >> ..\%_FILE%
git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
cd ..
