rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_LintCheckExtended_AssetsSource_Errors.log"  
echo start > "%LOGPATH%\WW2_LintCheckExtended_AssetsSource_Console.log"

cd /D "%SOURCEPATH_WW2%\AssetsSource_m"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_AssetsSource_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_AssetsSource_Console.log"
	"%APPPATH%\Rapify.exe" -LEP "%%A" 2>>"%LOGPATH%\WW2_LintCheckExtended_AssetsSource_Errors.log"  1>>"%LOGPATH%\WW2_LintCheckExtended_AssetsSource_Console.log"
)

cd /D "%LOGPATH%"\

exit