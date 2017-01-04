rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll2.log"  


cd /D "%SOURCEPATH_WW2_I44_Terrains%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll2.log"
 	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2_I44_Terrains%\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll2.log"  2>>&1
)

cd /D "%LOGPATH%"\

exit