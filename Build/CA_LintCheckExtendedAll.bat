rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\CA_LintCheckExtendedAll_Errors.log"  
echo start > "%LOGPATH%\CA_LintCheckExtendedAll_Console.log"

cd /D "%SOURCEPATH_CA%"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\CA_LintCheckExtendedAll_Errors.log"
	echo %%A>>"%LOGPATH%\CA_LintCheckExtendedAll_Console.log"
	"%APPPATH%\Rapify.exe" -LEP "%%A" 2>>"%LOGPATH%\CA_LintCheckExtendedAll_Errors.log"  1>>"%LOGPATH%\CA_LintCheckExtendedAll_Console.log"
)

cd /D "%LOGPATH%"\

exit