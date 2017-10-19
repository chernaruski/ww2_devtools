FOR /D %%j IN (*_m) DO (

	cd %%j
	git pull
	cd ..

)

pause

exit