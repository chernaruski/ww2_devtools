FOR /D %%i IN (*_t) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit