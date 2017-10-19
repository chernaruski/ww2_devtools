FOR /D %%i IN (*SOURCE*) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit