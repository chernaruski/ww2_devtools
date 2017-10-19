rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Merged_Assets.log"


cd /D "%SOURCEPATH_WW2%"

rem ----

for /D %%i in (Assets_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Base_Errors.log"
			echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Base_Console.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Merged_Assets.log"  2>>&1

		)

		cd..

	)

	cd..

)

for /D %%i in (Core_?) do (

	cd %%i

	for /D %%j in (*) do (

		echo %%i_%%j>>"%LOGPATH%\WW2_MakePboExternalsCheck_Base_Errors.log"
		echo %%i_%%j>>"%LOGPATH%\WW2_MakePboExternalsCheck_Base_Console.log"

		"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j" %TEMPPATH%\temp.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Merged_Assets.log"  2>>&1

	)

	cd..

)

exit