FOR /D %%i IN (Objects_*) DO (

	cd %%i
	git gui
	cd ..

)

pause

exit