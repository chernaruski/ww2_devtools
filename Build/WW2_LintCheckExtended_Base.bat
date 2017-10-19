rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_LintCheckExtended_Base_Errors.log"  
echo start > "%LOGPATH%\WW2_LintCheckExtended_Base_Console.log"

cd /D "%SOURCEPATH_WW2%\Assets_c"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Base_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Base_Console.log"
	"%APPPATH%\Rapify.exe" %LINTCHECKEXTENDED% "%%A" 2>>"%LOGPATH%\WW2_LintCheckExtended_Base_Errors.log"  1>>"%LOGPATH%\WW2_LintCheckExtended_Base_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_c"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Base_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Base_Console.log"
	"%APPPATH%\Rapify.exe" %LINTCHECKEXTENDED% "%%A" 2>>"%LOGPATH%\WW2_LintCheckExtended_Base_Errors.log"  1>>"%LOGPATH%\WW2_LintCheckExtended_Base_Console.log"
)


cd /D "%LOGPATH%"\

exit