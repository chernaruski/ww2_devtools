FOR /D %%i IN (*SOURCE*) DO (

	cd %%i
	git prune
	git gc
	cd ..

)

pause

exit