rem Prepare
set _TYPE=configParserRsc

CALL _configureSettings.bat

cd..
cd..

%_LAUNCH% -mod=%_AIA_IF_FULL%

exit