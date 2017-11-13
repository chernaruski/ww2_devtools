rem Prepare
CALL _configureSettings.bat
rem ----

REM OBJECTS
set _FILTERSTRING=ww2_objects_t_*
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_OBJECTS_LQ%\ -src %_SOURCEPATH_OBJECTS_IF%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_OBJECTS_LQ%\ -src %_SOURCEPATH_OBJECTS_WW2%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1

REM exit