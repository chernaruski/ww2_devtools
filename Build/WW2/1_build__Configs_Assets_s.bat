rem Prepare
CALL _configureSettings.bat
rem ----



REM Assets_s\Megagoth1702_Sounds
set _TARGETFOLDER=Assets_s
set _TARGETSUBFOLDER=Megagoth1702_Sounds
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%\%_TARGETSUBFOLDER%"
"%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%_TARGETSUBFOLDER%" "%_TARGETPATH%\WW2_%_TARGETFOLDER%_%_TARGETSUBFOLDER%" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%_%_TARGETSUBFOLDER%.log" 1>nul

exit