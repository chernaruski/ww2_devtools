FOR /D %%i IN (*) DO (

	cd %%i
	git status
	cd ..
	pause

)

pause

exit