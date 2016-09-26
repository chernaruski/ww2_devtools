rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckMerged_AssetsSource.log"  


cd /D "%SOURCEPATH_WW2%\AssetsSource_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_AssetsSource.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\AssetsSource_m\%%A" 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_AssetsSource.log"  2>>&1
)

cd /D "%LOGPATH%"\

exit