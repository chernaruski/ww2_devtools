rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\CA_MakePboExternalsCheckAll_Errors.log"  
echo start > "%LOGPATH%\CA_MakePboExternalsCheckAll_Console.log"

cd /D "%SOURCEPATH_CA%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\CA_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\CA_MakePboExternalsCheckAll_Console.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_CA%\%%A" 2>>"%LOGPATH%\CA_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\CA_MakePboExternalsCheckAll_Console.log"
)

cd /D "%LOGPATH%"\

exit