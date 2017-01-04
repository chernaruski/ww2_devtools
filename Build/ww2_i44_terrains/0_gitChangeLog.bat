set _FROM=2016-12-01
set _FILE=WW2_I44_Terains_ChangeLog.txt

echo "START" >> %_FILE%

git log --pretty=format:"%%B" --since==%_FROM% >> %_FILE%
