FOR /D %%i IN (*_s) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit