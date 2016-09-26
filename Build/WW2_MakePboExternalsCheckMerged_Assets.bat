rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"  


cd /D "%SOURCEPATH_WW2%\Assets_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Assets_c\%%A" 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Assets_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Assets_m\%%A" 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Assets_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Assets_r\%%A" 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Assets.log"  2>>&1
)


cd /D "%LOGPATH%"\

exit