FOR /D %%i IN (*) DO (

	cd %%i
	git push
	cd ..

)

pause

exit