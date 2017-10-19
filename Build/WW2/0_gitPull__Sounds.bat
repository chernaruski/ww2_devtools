FOR /D %%j IN (*_s) DO (

	cd %%j
	git pull
	cd ..

)

pause

exit