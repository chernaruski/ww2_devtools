rem Prepare
CALL _configureSettings.bat
rem ----

for /D %%i in (Core_c) do (

	cd %%i

	for /D %%j in (*) do (

		"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j" "%_TARGETPATH_BASE%\addons\WW2_%%i_%%j" 2>>"%_SOURCEPATH%\BuildPBOs_%%i.log" 1>nul

	)

	cd..

)
