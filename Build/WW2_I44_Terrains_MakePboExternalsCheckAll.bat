rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll_Errors.log"  
echo start > "%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll_Console.log"

cd /D "%SOURCEPATH_WW2_I44_Terrains%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll_Console.log"
 	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2_I44_Terrains%\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_I44_TerrainsMakePboExternalsCheckAll_Console.log"
)

cd /D "%LOGPATH%"\

exit