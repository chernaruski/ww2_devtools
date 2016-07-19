rem Prepare
CALL _configureSettings.bat
rem ----

cd /D "%_SOURCEPATH%"

"%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\WW2_CA_Core_c" "%_TARGETPATH%\addons" 2>>"%_SOURCEPATH%\BuildPBOs_WW2_CA.log" 1>nul
"%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\WW2_CA_CUP_Dummy" "%_TARGETPATH%\addons" 2>>"%_SOURCEPATH%\BuildPBOs_WW2_CA.log" 1>nul

exit