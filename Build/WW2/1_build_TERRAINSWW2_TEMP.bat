rem Prepare
CALL _configureSettings.bat
rem ----

for /D %%i in (TerrainsWW2_Jegor TerrainsWW2_scott) do (

	cd %%i

	for /D %%j in (*) do (

		"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j" "t:\addons\addons\WW2_%%i_%%j" 2>>"%_SOURCEPATH%\BuildPBOs_%%i.log" 1>nul

	)

	cd..

)
