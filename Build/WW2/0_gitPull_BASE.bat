FOR /D %%i in (Assets_?) DO (

	cd %%i
	git pull
	cd ..

)

FOR /D %%i in (Core_?) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit