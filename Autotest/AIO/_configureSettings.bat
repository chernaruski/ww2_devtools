REM set _PATH_TO_A3=e:\games\Steam\steamapps\common\arma 3
set _PATH_TO_A3=e:\games\SteamCMD\steamapps\common\Arma 3

REM set _A3_EXE=arma3.exe
set _A3_EXE=arma3diag.exe

REM ---------------------------------------------------------------------------

set _MOD_PATH=E:\kju\A3Data
set _WOG_PATH=E:\kju\WOG
set _WW2_PATH=E:\kju\A3Data\WW2

REM ---------------------------------------------------------------------------

set _NONE=none

set _AIA_IF_FULL=%_MOD_PATH%\@IFA3_FULL
set _AIA_IF_LITE_PURE=%_MOD_PATH%\@IFA3_LITE
set _AIA_IF_LITE_CBA=%_MOD_PATH%\@IFA3_LITE;%_MOD_PATH%\@IFA3_CBA;%_MOD_PATH%\@CBA_A3

set _AIA_IF_OLD_CBA=%_MOD_PATH%\@IF_OLD\@IF_Other_Addons;%_MOD_PATH%\@IF_OLD\@LIB_DLC_1;%_MOD_PATH%\@IF_OLD\@IF;%_MOD_PATH%\@IFA3SA;%_MOD_PATH%\@IF_OLD\@IFA3M;%_MOD_PATH%\@IF_OLD\@IFA3;%_MOD_PATH%\@CBA_A3

set _AIA_IF_WOG=%_WOG_PATH%\@IFA3SA;%_WOG_PATH%\@LIB_DLC_1;%_WOG_PATH%\@IF;%_WOG_PATH%\@IFA3M;%_WOG_PATH%\@IFA3;%_WOG_PATH%\@WOG_IF;%_WOG_PATH%\@CBA_A3
REM set _AIA_IF_WOG=%_WOG_PATH%\@IFA3SA;%_WOG_PATH%\@LIB_DLC_1;%_WOG_PATH%\@IF;%_WOG_PATH%\@ifa3m;%_WOG_PATH%\@IFA3;%_WOG_PATH%\@task_force_radio;%_WOG_PATH%\@WOG_IF_AGM;%_WOG_PATH%\@WOG_IF_ACE;%_WOG_PATH%\@WOG_IF;%_WOG_PATH%\@CBA_A3

set _AIA_WW2=%_WW2_PATH%\@CA;%_WW2_PATH%\@WW2

REM ---------------------------------------------------------------------------

set _BASIC_PARAMS= -nosplash -skipintro -world=empty -window -noFilePatching -noPause -noAsserts
set _TYPE_PARAMS= "-profiles=%_PATH_TO_A3%\autotest\AIO\rpt\%_TYPE%\" -name=%_TYPE% "-autotest=%_PATH_TO_A3%\autotest\AIO\%_TYPE%.cfg"

REM ---------------------------------------------------------------------------

set _LAUNCH="%_PATH_TO_A3%\%_A3_EXE%" %_BASIC_PARAMS% %_TYPE_PARAMS%