FOR /D %%i IN (*) DO (

	cd %%i
	"C:\Program Files\Git\git-bash.exe" "--cd=%cd%\%%i"
	cd ..

)

pause

exit