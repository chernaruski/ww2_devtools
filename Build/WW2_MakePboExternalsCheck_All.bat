rem Prepare
CALL _configureSettings.bat
rem ----

echo start > "%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
echo start > "%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"

cd /D "%SOURCEPATH_WW2%\Assets_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Assets_c\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Assets_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Assets_m\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Assets_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Assets_r\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

rem ----

cd /D "%SOURCEPATH_WW2%\Core_a"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_a\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_c\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_f"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_f\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_m\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Core_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Core_r\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

rem ----

cd /D "%SOURCEPATH_WW2%\Terrains_c"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_c\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Terrains_m"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_m\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Terrains_r"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_r\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%SOURCEPATH_WW2%\Terrains_w"

for /F "Delims=" %%A in ('"dir /a:d /b"') do (
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"
	echo %%A>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
	"%APPPATH%\MakePbo.exe" %MAKEPBOEXTERNALSCHECK% "%SOURCEPATH_WW2%\Terrains_w\%%A" x:\temp\dummy.pbo 2>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Errors.log"  1>>"%LOGPATH%\WW2_MakePboExternalsCheckAll_Console.log"
)

cd /D "%LOGPATH%"\

exit