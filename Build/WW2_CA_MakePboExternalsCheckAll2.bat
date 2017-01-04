rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_CA_MakePboExternalsCheckAll2.log"  


cd /D "%SOURCEPATH_WW2_CA%"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_CA_MakePboExternalsCheckAll2.log"
 	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2_CA%\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_CA_MakePboExternalsCheckAll2.log"  2>>&1
)

cd /D "%LOGPATH%"\

exit