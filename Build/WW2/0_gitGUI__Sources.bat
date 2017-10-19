FOR /D %%i IN (*SOURCE*) DO (

	cd %%i
	git gui
	cd ..

)

exit
