rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\CA_LintCheckAll_Errors.log"
echo start > "%LOGPATH%\CA_LintCheckAll_Console.log"

cd /D "%SOURCEPATH_CA%"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\CA_LintCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\CA_LintCheckAll_Console.log"
	"%APPPATH%\Rapify.exe" -LP "%%A" 2>>"%LOGPATH%\CA_LintCheckAll_Errors.log"  1>>"%LOGPATH%\CA_LintCheckAll_Console.log"
)

cd /D "%LOGPATH%"\

exit