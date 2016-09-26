rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"  
echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"

cd /D "%SOURCEPATH_WW2%\Terrains_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Terrains_c\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Terrains_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Terrains_m\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Terrains_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Terrains_r\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Terrains_w"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Terrains_w\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Terrains_Console.log"
)


cd /D "%LOGPATH%"\

exit