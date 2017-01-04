rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckMerged_All_Source.log"


cd /D "%SOURCEPATH_WW2%\AssetsSource_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_All_Source.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\AssetsSource_m\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_All_Source.log"  2>>&1
)

rem ----

cd /D "%SOURCEPATH_WW2%\TerrainsSource_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_All_Source.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\TerrainsSource_m\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_All_Source.log"  2>>&1
)

cd /D "%LOGPATH%"\

exit