rem Prepare
CALL _configureSettings.bat
rem ----



REM Core_m
set _TARGETFOLDER=Core_m
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%_.log" 1>nul)

exit