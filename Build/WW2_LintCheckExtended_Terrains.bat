rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_LintCheckExtended_Terrains_Errors.log"  
echo start > "%LOGPATH%\WW2_LintCheckExtended_Terrains_Console.log"

cd /D "%SOURCEPATH_WW2%\TerrainsI44_c"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Console.log"
	"%APPPATH%\Rapify.exe" %LINTCHECKEXTENDED% "%%A" 2>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Errors.log"  1>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Console.log"
)

cd /D "%SOURCEPATH_WW2%\TerrainsIF_c"

for /F "Delims=" %%A in ('"dir config.cpp /b /s"') do (
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Console.log"
	"%APPPATH%\Rapify.exe" %LINTCHECKEXTENDED% "%%A" 2>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Errors.log"  1>>"%LOGPATH%\WW2_LintCheckExtended_Terrains_Console.log"
)


cd /D "%LOGPATH%"\

exit