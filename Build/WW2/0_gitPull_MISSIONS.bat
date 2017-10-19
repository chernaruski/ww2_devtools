FOR /D %%i in (MissionsWW2_p) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit