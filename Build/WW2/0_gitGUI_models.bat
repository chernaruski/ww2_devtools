FOR /D %%i IN (*_m) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit