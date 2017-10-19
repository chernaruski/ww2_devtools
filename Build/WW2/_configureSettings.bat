set _APPPATH=D:\kju\Programs\MikeroTools
set _SOURCEPATH=p:\WW2
set _TARGETPATH_HQ=D:\kju\release\B\@IFA3_HQ
set _TARGETPATH_BASE=D:\kju\release\B\@WW2_LITE
set _TARGETPATH_OBJECTS=D:\kju\release\B\@WW2_OBJECTS_LITE
set _TARGETPATH_TERRAINSIF=D:\kju\release\B\@WW2_TERRAINS_LITE
set _TARGETPATH_TERRAINSI44=D:\kju\release\B\@I44_TERRAINS
set _TARGETPATH_TERRAINSWW2=D:\kju\release\B\@WW2_TERRAINS_LITE

set _ALLOWHPP=-X=thumbs.db,*.dep,*.cpp,*.bak,*.png,*.log,*.pew

set _PARAMS_STANDARD=-$ -PDABW %_ALLOWHPP%
rem set _PARAMS_STANDARD=-! -$ -PDABW -Z=default %_ALLOWHPP%

set _PARAMS_MISSIONS=-$ -PDANW %_ALLOWHPP%

set _PARAMS_HQ=-! -$ -PDABW -Z=default