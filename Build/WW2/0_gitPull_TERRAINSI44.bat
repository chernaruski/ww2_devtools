FOR /D %%i in (TerrainsI44_?) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit