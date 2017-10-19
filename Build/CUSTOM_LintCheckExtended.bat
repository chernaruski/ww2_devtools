rem Prepare
CALL _configureSettings.bat
rem ----

REM set SOURCEPATH_CUSTOM=P:\WW2\TerrainsWW2_Hyde
REM set SOURCEPATH_CUSTOM=P:\WW2\TerrainsWW2_swurvin
set SOURCEPATH_CUSTOM=P:\WW2\TerrainsWW2_Hicks

echo start > "%LOGPATH%\CUSTOM_LintCheckExtended_Errors.log"  
echo start > "%LOGPATH%\CUSTOM_LintCheckExtended_Console.log"

cd /D "%SOURCEPATH_CUSTOM%"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\CUSTOM_LintCheckExtended_Errors.log"
	echo %%A>>"%LOGPATH%\CUSTOM_LintCheckExtended_Console.log"
	"%APPPATH%\Rapify.exe" %LINTCHECKEXTENDED% "%%A" 2>>"%LOGPATH%\CUSTOM_LintCheckExtended_Errors.log"  1>>"%LOGPATH%\CUSTOM_LintCheckExtended_Console.log"
)

cd /D "%LOGPATH%"\

exit