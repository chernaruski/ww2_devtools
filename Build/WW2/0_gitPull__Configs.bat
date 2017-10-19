FOR /D %%j IN (*_c) DO (

	cd %%j
	git pull
	cd ..

)

pause

exit