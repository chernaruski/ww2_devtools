FOR /D %%i IN (*_c) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit