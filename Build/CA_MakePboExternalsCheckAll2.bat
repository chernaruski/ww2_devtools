rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\CA_MakePboExternalsCheckAll2.log"  


cd /D "%SOURCEPATH_CA%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\CA_MakePboExternalsCheckAll2.log"
 	"%APPPATH%\MakePbo.exe" -QGJUP "%SOURCEPATH_CA%\%%A" 1>>"%LOGPATH%\CA_MakePboExternalsCheckAll2.log"  2>>&1
)

cd /D "%LOGPATH%"\

exit