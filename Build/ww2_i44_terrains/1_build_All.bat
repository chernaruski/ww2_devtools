rem Prepare
CALL _configureSettings.bat
rem ----

REM Misc_c
set _TARGETFOLDER=Misc_c
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Misc_m
set _TARGETFOLDER=Misc_m
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Misc_r
set _TARGETFOLDER=Misc_r
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Misc_t
set _TARGETFOLDER=Misc_t
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Structures_c
set _TARGETFOLDER=Structures_c
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Structures_m
set _TARGETFOLDER=Structures_m
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Structures_r
set _TARGETFOLDER=Structures_r
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Structures_t
set _TARGETFOLDER=Structures_t
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Vegetation_m
set _TARGETFOLDER=Vegetation_m
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Vegetation_r
set _TARGETFOLDER=Vegetation_r
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Vegetation_t
set _TARGETFOLDER=Vegetation_t
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Worlds_c
set _TARGETFOLDER=Worlds_c
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Worlds_r
set _TARGETFOLDER=Worlds_r
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Worlds_s
set _TARGETFOLDER=Worlds_s
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Worlds_t
set _TARGETFOLDER=Worlds_t
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)

REM Worlds_w
set _TARGETFOLDER=Worlds_w
cd /D "%_SOURCEPATH%\%_TARGETFOLDER%"
for /D %%i in (*) do ("%_APPPATH%\Makepbo.exe" %_PARAMS% "%_SOURCEPATH%\%_TARGETFOLDER%\%%i" "%_TARGETPATH%\WW2_I44_Terrains_%_TARGETFOLDER%_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_%_TARGETFOLDER%.log" 1>nul)



exit