FOR /D %%i IN (TerrainsIF_?) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit