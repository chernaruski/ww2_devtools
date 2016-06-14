rem Prepare
CALL _configureSettings.bat
rem ----



REM Core_f
set _TARGETFOLDER=Core_f
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% %_ALLOWHPP% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

exit