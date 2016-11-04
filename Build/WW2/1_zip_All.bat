rem ----
set _APPPATH=C:\Program Files\7-Zip
rem ----

"%_APPPATH%\7z.exe" a -t7z Assets_c_v6.7z Assets_c\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Assets_r_v6.7z Assets_r\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Assets_t_v6.7z Assets_t\ -xr!.git -psgYUNme5G23tkZZe80gVqqtLPsQNWgGTFI2tE3
"%_APPPATH%\7z.exe" a -t7z AssetsSource_m_v6.7z AssetsSource_m\ -xr!.git -psgYUNme5G23tkZZe80gVqqtLPsQNWgGTFI2tE3

"%_APPPATH%\7z.exe" a -t7z Core_a_v6.7z Core_a\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Core_c_v6.7z Core_c\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Core_r_v6.7z Core_r\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Core_t_v6.7z Core_t\ -xr!.git -psgYUNme5G23tkZZe80gVqqtLPsQNWgGTFI2tE3
REM "%_APPPATH%\7z.exe" a -t7z CoreSource_m_v6.7z CoreSource_m\ -xr!.git -psgYUNme5G23tkZZe80gVqqtLPsQNWgGTFI2tE3

"%_APPPATH%\7z.exe" a -t7z Terrains_c_v6.7z Terrains_c\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Terrains_r_v6.7z Terrains_r\ -xr!.git
"%_APPPATH%\7z.exe" a -t7z Terrains_t_v6.7z Terrains_t\ -xr!.git -psgYUNme5G23tkZZe80gVqqtLPsQNWgGTFI2tE3
"%_APPPATH%\7z.exe" a -t7z TerrainsSource_m_v6.7z TerrainsSource_m\ -xr!.git -psgYUNme5G23tkZZe80gVqqtLPsQNWgGTFI2tE3

pause