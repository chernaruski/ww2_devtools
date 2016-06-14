rem Prepare
CALL _configureSettings.bat
rem ----



REM Terrains_m\Vegetation
set _TARGETFOLDER=Terrains_m
set _TARGETSUBFOLDER=Vegetation
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%\%_TARGETSUBFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%_TARGETSUBFOLDER%\%%i" "%_TARGETPATH%\WW2_%_TARGETFOLDER%_%_TARGETSUBFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%_%_TARGETSUBFOLDER%.log" 1>nul)

exit