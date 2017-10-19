rem Prepare
CALL _configureSettings.bat
rem ----

for /D %%i in (MissionsWW2_p) do (

	cd %%i

	for /D %%j in (*) do (

		for /D %%k in (*) do (

			"%_APPPATH%\Makepbo.exe" %_PARAMS_MISSIONS% "%_SOURCEPATH%\%%i\%%j" "%_TARGETPATH_BASE%\addons\WW2_%%i_%%j" 2>>"%_SOURCEPATH%\BuildPBOs_%%i.log" 1>nul

		)

		cd..

	)

	cd..

)
