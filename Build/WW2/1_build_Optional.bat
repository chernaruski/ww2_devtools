rem Prepare
CALL _configureSettings.bat
rem ----



REM Core_c\Optional
set _TARGETFOLDER=Core_c
set _TARGETSUBFOLDER=Optional
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%\%_TARGETSUBFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%_TARGETSUBFOLDER%\%%i" "%_TARGETPATH%\WW2_%_TARGETFOLDER%_%_TARGETSUBFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%_%_TARGETSUBFOLDER%.log" 1>nul)

exit