rem Prepare
CALL _configureSettings.bat
rem ----

REM TERRAINS IF
set _FILTERSTRING=ww2_terrainsif_t_*
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_TERRAINSIF_LQ%\ -src %_SOURCEPATH_TERRAINSIF%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1

REM exit