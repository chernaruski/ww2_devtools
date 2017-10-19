FOR /D %%i IN (TerrainsWW2_?) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit