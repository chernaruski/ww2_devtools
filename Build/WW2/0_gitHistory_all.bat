FOR /D %%i IN (*) DO (

	cd %%i
	gitk
	cd ..

)

pause

exit