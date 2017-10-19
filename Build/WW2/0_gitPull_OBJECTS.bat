FOR /D %%i in (Objects_?) DO (

	cd %%i
	git pull
	cd ..

)

pause

exit