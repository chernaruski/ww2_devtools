FOR /D %%i IN (*) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit