rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Errors.log"
echo start > "%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Console.log"

cd /D "%SOURCEPATH_WW2%\AssetsSource_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\AssetsSource_m\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Console.log"
)

rem ----

cd /D "%SOURCEPATH_WW2%\TerrainsSource_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\TerrainsSource_m\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Source_Console.log"
)

cd /D "%LOGPATH%"\

exit