FOR /D %%i IN (*_r) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit