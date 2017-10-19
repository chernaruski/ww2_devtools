FOR /D %%i IN (*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit