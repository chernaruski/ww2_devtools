rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"


cd /D "%SOURCEPATH_WW2%\Terrains_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_c\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Terrains_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_m\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Terrains_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_r\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Terrains_w"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_w\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Terrains.log"  2>>&1
)


cd /D "%LOGPATH%"\

exit