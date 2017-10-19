set _FROM=2017-09-27
set _FILE=WW2_ChangeLog_%_FROM%.txt

echo "START" >> %_FILE%

for /D %%i in ("*") DO (

	cd %%i
	echo //%%i >> ..\%_FILE%
	git log --pretty=format:"%%B" --since==%_FROM% >> ..\%_FILE%
	cd ..

)

pause

exit
