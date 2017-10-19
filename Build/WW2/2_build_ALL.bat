rem ----
set _SOURUCE_PATH=D:\kju\workspace\WW2
rem ----

cd /D %_SOURUCE_PATH%
CALL 1_build_BASE.bat

cd /D %_SOURUCE_PATH%
CALL 1_build_MISSIONS.bat

cd /D %_SOURUCE_PATH%
CALL 1_build_OBJECTS.bat

cd /D %_SOURUCE_PATH%
CALL 1_build_TERRAINSI44.bat

cd /D %_SOURUCE_PATH%
CALL 1_build_TERRAINSIF.bat

cd /D %_SOURUCE_PATH%
CALL 1_build_TERRAINSWW2.bat

exit