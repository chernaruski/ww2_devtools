FOR /D %%i IN (*) DO (

	cd %%i
	git prune
	git gc
	cd ..

)

pause

exit