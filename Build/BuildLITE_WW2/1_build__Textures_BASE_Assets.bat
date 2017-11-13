rem Prepare
CALL _configureSettings.bat
rem ----

REM BASE - Assets
set _FILTERSTRING=ww2_assets_t_*
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_BASE_Assets_LQ%\ -src %_SOURCEPATH_BASE_Assets_IF%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_BASE_Assets_LQ%\ -src %_SOURCEPATH_BASE_Assets_WW2%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1

REM exit