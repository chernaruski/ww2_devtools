rem Prepare
CALL _configureSettings.bat
rem ----

for /D %%i in (Assets_c) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j\%%k" "%_TARGETPATH_BASE%\WW2_%%i_%%j_%%k" 2>>"%_SOURCEPATH%\BuildPBOs_%%i.log" 1>nul

		)

		cd..

	)

	cd..

)

for /D %%i in (Core_c) do (

	cd %%i

	for /D %%j in (*) do (

		"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j" "%_TARGETPATH_BASE%\WW2_%%i_%%j" 2>>"%_SOURCEPATH%\BuildPBOs_%%i.log" 1>nul

	)

	cd..

)
