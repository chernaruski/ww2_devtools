FOR /D %%i IN (*SOURCE*) DO (

	cd %%i
	git push
	cd ..

)

pause

exit