rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Merged_Objects.log"


cd /D "%SOURCEPATH_WW2%"

rem ----

for /D %%i in (Objects_?) do (

	cd %%i

	for /D %%j in (*) do (

		cd %%j

		for /D %%k in (*) do (

			echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Merged_Objects.log"

			"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\%%i\%%j\%%k" %TEMPPATH%\temp.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Merged_Objects.log"  2>>&1

		)

		cd..

	)

	cd..

)

exit