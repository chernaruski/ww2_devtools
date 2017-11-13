rem Prepare
CALL _configureSettings.bat
rem ----

REM BASE - Core
set _FILTERSTRING=ww2_core_t_*
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_BASE_Core_LQ%\ -src %_SOURCEPATH_BASE_Core_IF%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1
call 0_CreateLITE.bat -filter %_FILTERSTRING% -dst %_TARGETPATH_BASE_Core_LQ%\ -src %_SOURCEPATH_BASE_Core_WW2%\ >> WW2_LITE_%MYTAG_YEAR%_%MYTAG_MONTH%_%MYTAG_DAY%.log 2>&1

REM exit