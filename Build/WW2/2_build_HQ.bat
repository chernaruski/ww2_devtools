rem Prepare
CALL _configureSettings.bat
rem ----

set _SOURCEPATH=T:\WW2

robocopy P:\WW2\Assets_t T:\WW2\Assets_t /S /XD P:\WW2\Assets_t\.git
robocopy P:\WW2\Assets_t_SourceIF T:\WW2\Assets_t *.paa /S /XD P:\WW2\Assets_t_SourceIF\.git
robocopy P:\WW2\Assets_t_SourceWW2 T:\WW2\Assets_t *.paa /S /XD P:\WW2\Assets_t_SourceWW2\.git

robocopy P:\WW2\Core_t T:\WW2\Core_t /S /XD P:\WW2\Core_t\.git
robocopy P:\WW2\Core_t_SourceIF T:\WW2\Core_t *.paa /S /XD P:\WW2\Core_t_SourceIF\.git
robocopy P:\WW2\Core_t_SourceWW2 T:\WW2\Core_t *.paa /S /XD P:\WW2\Core_t_SourceWW2\.git

robocopy P:\WW2\Objects_t T:\WW2\Objects_t /S /XD P:\WW2\Objects_t\.git
robocopy P:\WW2\Objects_t_SourceIF T:\WW2\Objects_t *.paa /S /XD P:\WW2\Objects_t_SourceIF\.git
robocopy P:\WW2\Objects_t_SourceWW2 T:\WW2\Objects_t *.paa /S /XD P:\WW2\Objects_t_SourceWW2\.git

robocopy P:\WW2\TerrainsIF_t T:\WW2\TerrainsIF_t /S /XD P:\WW2\TerrainsIF_t\.git
robocopy P:\WW2\TerrainsIF_t_Source T:\WW2\TerrainsIF_t *.paa /S /XD P:\WW2\TerrainsIF_t_Source\.git

cd /D %_SOURCEPATH%

for /D %%i in (Assets_t) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			"%_APPPATH%\Makepbo.exe" %_PARAMS_HQ% "%_SOURCEPATH%\%%i\%%j\%%k" "%_TARGETPATH_HQ%\WW2_%%i_%%j_%%k" 2>>"%_SOURCEPATH%\BuildPBOs_%%i_%%j.log" 1>nul

		)

		cd..

	)

	cd..

)

for /D %%i in (Core_t) do (

	cd %%i

	for /D %%j in (*) do (

		"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j" "%_TARGETPATH_HQ%\WW2_%%i_%%j" 2>>"%_SOURCEPATH%\BuildPBOs_%%i.log" 1>nul

	)

	cd..

)

for /D %%i in (Objects_t) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j\%%k" "%_TARGETPATH_HQ%\WW2_%%i_%%j_%%k" 2>>"%_SOURCEPATH%\BuildPBOs_%%i_%%j.log" 1>nul

		)

		cd..

	)

	cd..

)

for /D %%i in (TerrainsIF_t) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			"%_APPPATH%\Makepbo.exe" %_PARAMS_STANDARD% "%_SOURCEPATH%\%%i\%%j\%%k" "%_TARGETPATH_HQ%\WW2_%%i_%%j_%%k" 2>>"%_SOURCEPATH%\BuildPBOs_%%i_%%j.log" 1>nul

		)

		cd..

	)

	cd..

)
