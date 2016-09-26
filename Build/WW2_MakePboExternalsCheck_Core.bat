rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"  
echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"

cd /D "%SOURCEPATH_WW2%\Core_a"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Core_a\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Core_c\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_f"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Core_f\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Core_m\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_WW2%\Core_r\%%A" 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Core_Console.log"
)


cd /D "%LOGPATH%"\

exit