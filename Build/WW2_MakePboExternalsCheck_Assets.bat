rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"
echo start > "%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"

cd /D "%SOURCEPATH_WW2%\Assets_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Assets_c\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Assets_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Assets_m\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Assets_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Assets_r\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheck_Assets_Console.log"
)


cd /D "%LOGPATH%"\

exit