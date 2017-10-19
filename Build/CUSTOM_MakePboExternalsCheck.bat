rem Prepare
CALL _configureSettings.bat
rem ----

REM set SOURCEPATH_CUSTOM=P:\WW2\TerrainsWW2_Hyde
REM set SOURCEPATH_CUSTOM=P:\WW2\TerrainsWW2_swurvin
set SOURCEPATH_CUSTOM=P:\WW2\TerrainsWW2_Hicks

echo start > "%LOGPATH%\CUSTOM_MakePboExternalsCheck_Errors.log"  
echo start > "%LOGPATH%\CUSTOM_MakePboExternalsCheck_Console.log"

cd /D "%SOURCEPATH_CUSTOM%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\CUSTOM_MakePboExternalsCheck_Errors.log"
	echo %%A>>"%LOGPATH%\CUSTOM_MakePboExternalsCheck_Console.log"
 	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_CUSTOM%\%%A" 2>>"%LOGPATH%\CUSTOM_MakePboExternalsCheck_Errors.log" %TEMPPATH%\temp.pbo 1>>"%LOGPATH%\CUSTOM_MakePboExternalsCheck_Console.log"
)

cd /D "%LOGPATH%"\

exit