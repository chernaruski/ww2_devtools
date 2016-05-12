rem Prepare
set _TYPE=dumpConfig

CALL _configureSettings.bat

cd..
cd..

%_LAUNCH% -mod=%_AIA_IF_LITE_PURE%

exit