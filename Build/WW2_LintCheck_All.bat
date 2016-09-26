rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_LintCheckAll_Errors.log"
echo start > "%LOGPATH%\WW2_LintCheckAll_Console.log"

cd /D "%SOURCEPATH_WW2%"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\WW2_LintCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_LintCheckAll_Console.log"
	"%APPPATH%\Rapify.exe" -LP "%%A" 2>>"%LOGPATH%\WW2_LintCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_LintCheckAll_Console.log"
)

cd /D "%LOGPATH%"\

exit