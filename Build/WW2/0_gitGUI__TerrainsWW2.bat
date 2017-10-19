FOR /D %%i IN (TerrainsWW2_*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit