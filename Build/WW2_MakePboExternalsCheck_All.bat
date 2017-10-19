rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

cd /D "%SOURCEPATH_WW2%"

rem ----

for /D %%i in (Assets_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log" 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

		)

		cd..

	)

	cd..

)

for /D %%i in (Core_?) do (

	cd %%i

	for /D %%j in (*) do (

		echo %%i_%%j>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
		echo %%i_%%j>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

		"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log" 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

)

	cd..

)

rem ----

for /D %%i in (Objects_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log" 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

)

		cd..

)

	cd..

)


rem ----

for /D %%i in (TerrainsI44_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log" 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

)

		cd..

)

	cd..

)


rem ----

for /D %%i in (TerrainsIF_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
			echo %%i_%%j_%%k>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log" 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

)

		cd..

)

	cd..

)


rem ----

for /D %%i in (TerrainsWW2_*) do (

	cd %%i

	for /D %%j in (*) do (

		echo %%i_%%j>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log"
		echo %%i_%%j>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

		"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Errors.log" 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_All_Console.log"

)

	cd..

)

exit