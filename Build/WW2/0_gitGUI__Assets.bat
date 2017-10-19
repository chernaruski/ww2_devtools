FOR /D %%i IN (Assets_*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit