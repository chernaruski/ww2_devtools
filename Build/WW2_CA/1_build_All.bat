rem Prepare
CALL _configureSettings.bat
rem ----

cd /D "%_SOURCEPATH%"

for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%%i" "%_TARGETPATH%\addons" 2>>"%_SOURCEPATH%\BuildPBOs_WW2_CA.log" 1>nul)

exit