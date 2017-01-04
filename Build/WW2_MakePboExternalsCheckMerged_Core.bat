rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"


cd /D "%SOURCEPATH_WW2%\Core_a"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_a\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Core_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_c\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Core_f"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_f\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Core_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_m\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"  2>>&1
)

cd /D "%SOURCEPATH_WW2%\Core_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (

	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_r\%%A" x:\temp\dummy.pbo 1>>"%LOGPATH%\WW2_MakePboExternalsCheckMerged_Core.log"  2>>&1
)


cd /D "%LOGPATH%"\

exit