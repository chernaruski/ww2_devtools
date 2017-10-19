rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Objects_Errors.log"
echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Objects_Console.log"

cd /D "%SOURCEPATH_WW2%"

rem ----

for /D %%i in (Objects_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Objects_Errors.log"
			echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Objects_Console.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Objects_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Objects_Console.log"

		)

		cd..

	)

	cd..

)

exit