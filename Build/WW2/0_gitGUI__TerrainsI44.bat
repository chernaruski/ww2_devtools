FOR /D %%i IN (TerrainsI44_*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit