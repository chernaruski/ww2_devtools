rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckMerged_All.log"  


cd /D "%SOURCEPATH_WW2%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_All.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\%%A" 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_All.log"  2>>&1
)

cd /D "%LOGPATH%"\

exit