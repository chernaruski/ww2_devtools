REM ---------------------------------------------------------------------------
REM 				ADJUST IF NECESSARY
REM ---------------------------------------------------------------------------

set _APPPATH=C:\Program Files (x86)\Mikero\DePboTools\bin

REM ---------------------------------------------------------------------------
REM 				ADJUST IF NECESSARY
REM ---------------------------------------------------------------------------

set _SOURCEPATH=p:\WW2

REM ---------------------------------------------------------------------------
REM 			ADJUST TO DESIRED MODFOLDER LOCATION(S)
REM ---------------------------------------------------------------------------

set _TARGETPATH_BASE=D:\kju\release\B\@WW2_LITE\addons
set _TARGETPATH_OBJECTS=D:\kju\release\B\@WW2_OBJECTS_LITE\addons
set _TARGETPATH_TERRAINSIF=D:\kju\release\B\@WW2_TERRAINS_LITE\addons
set _TARGETPATH_TERRAINSI44=D:\kju\release\B\@I44_TERRAINS\addons
set _TARGETPATH_TERRAINSWW2=D:\kju\release\B\@WW2_TERRAINS_LITE\addons


REM --- OPTIONAL --- (ONLY WITH ACCESS TO SOURCE TEXTURES REPOSITORIES
set _TARGETPATH_HQ=D:\kju\release\B\@IFA3_HQ\addons



REM ---------------------------------------------------------------------------
REM		MAKEPBO PARAMETER - MODIFY ONLY WHEN YOU KNOW WHAT YOU DO
REM ---------------------------------------------------------------------------

set _ALLOWHPP=-X=thumbs.db,*.dep,*.cpp,*.bak,*.png,*.log,*.pew

set _PARAMS_STANDARD=-$ -PDABW %_ALLOWHPP%
rem set _PARAMS_STANDARD=-! -$ -PDABW -Z=default %_ALLOWHPP%

set _PARAMS_MISSIONS=-$ -PDANW %_ALLOWHPP%

set _PARAMS_HQ=-! -$ -PDABW -Z=default



REM ---------------------------------------------------------------------------
REM 				DO NOT MODIFY
REM ---------------------------------------------------------------------------

if not exist "%_TARGETPATH_HQ%\" mkdir "%_TARGETPATH_HQ%"
if not exist "%_TARGETPATH_BASE%\" mkdir "%_TARGETPATH_BASE%"
if not exist "%_TARGETPATH_OBJECTS%\" mkdir "%_TARGETPATH_OBJECTS%"
if not exist "%_TARGETPATH_TERRAINSIF%\" mkdir "%_TARGETPATH_TERRAINSIF%"
if not exist "%_TARGETPATH_TERRAINSI44%\" mkdir "%_TARGETPATH_TERRAINSI44%"
if not exist "%_TARGETPATH_TERRAINSWW2%\" mkdir "%_TARGETPATH_TERRAINSWW2%"