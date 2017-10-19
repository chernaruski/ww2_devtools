FOR /D %%i IN (TerrainsIF_*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit