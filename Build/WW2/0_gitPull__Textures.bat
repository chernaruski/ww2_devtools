FOR /D %%j IN (*_t) DO (

	cd %%j
	git pull
	cd ..

)

pause

exit