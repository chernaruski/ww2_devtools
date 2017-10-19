FOR /D %%i IN (Core_*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit