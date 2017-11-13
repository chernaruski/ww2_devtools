SETLOCAL ENABLEDELAYEDEXPANSION
SETLOCAL ENABLEDELAYEDEXPANSION
echo on


REM Default parameter values
set SH_Tex_Quality=512
set SH_Destination=
set SH_Filter=*



:continue

:reparam
if /I [%1] == [-texsize] (
 set SH_Tex_Quality=%2
 shift
 shift
 goto reparam
)

if /I [%1] == [-filter] (
 set SH_Filter=%2
 shift
 shift
 goto reparam
)

if /I [%1] == [-dst] (
 set SH_Destination=%2
 shift
 shift
 goto reparam
)

if /I [%1] == [-src] (
 set SH_SourcePure=%2
 shift
 shift
 goto reparam
)

if /I [%SH_SourcePure%] == [] (
 goto end
)

ECHO SH_SourcePure=%SH_SourcePure%
ECHO SH_Destination=%SH_Destination%
ECHO SH_Filter=%SH_Filter%

REM copy more recent textures to temp
ECHO Copying new/modified textures
ROBOCOPY %SH_SourcePure% %SH_TempFolder% *.paa /S /MT /MAXAGE:%SH_Date%

REM apply pal2pace on temp folder
ECHO Shrinking textures
if %SH_Tex_Quality% GTR 0 (

	if %SH_Tex_Quality% LSS 2048 (


		for /R %SH_TempFolder% %%i in (*.paa) do (

 			"%PAL2PACE_EXE%" -size=%SH_Tex_Quality% "%%i" "%%i"

		)

	)

)

REM copy LITE to repo
ECHO Copying new/modified textures
ROBOCOPY %SH_TempFolder% %SH_Destination% *.paa /S /MT

REM clean up
ECHO Removing temp data
rmdir %SH_TempFolder% /S /Q
REM del /Q  %SH_TempFolder%

ECHO DONE

:end

exit /B

REM shift
REM if not [%1] ==  [] goto continue
