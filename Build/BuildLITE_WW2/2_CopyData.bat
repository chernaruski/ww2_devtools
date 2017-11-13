rem Prepare
CALL _configureSettings.bat
rem ----

ROBOCOPY P:\WW2\Assets_t_SourceIF\Vehicles\Optics_t\ P:\WW2\Assets_t\Vehicles\Optics_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Assets_t_SourceIF\Weapons\Optics_t\ P:\WW2\Assets_t\Weapons\Optics_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Assets_t_SourceWW2\Vehicles\Optics_t\ P:\WW2\Assets_t\Vehicles\Optics_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Assets_t_SourceWW2\Weapons\Optics_t\ P:\WW2\Assets_t\Weapons\Optics_t\ *.paa /S /MT
ROBOCOPY p:\WW2\Assets_t_SourceWW2\Weapons\Pistols_t\LEN_P08\ p:\WW2\Assets_t\Weapons\Pistols_t\LEN_P08\ *.paa /S /MT
ROBOCOPY p:\WW2\Assets_t_SourceWW2\Weapons\SniperRifles_t\LEN_PTRD\ p:\WW2\Assets_t\Weapons\SniperRifles_t\LEN_PTRD\ *.paa /S /MT

ROBOCOPY P:\WW2\Core_t_SourceIF\IF_Data_t\ P:\WW2\Core_t\IF_Data_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_Decals_t\ P:\WW2\Core_t\IF_Decals_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_EditorPreviews_t\ P:\WW2\Core_t\IF_EditorPreviews_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_GUI_t\ P:\WW2\Core_t\IF_GUI_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_MapControl_t\ P:\WW2\Core_t\IF_MapControl_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_Markers_t\ P:\WW2\Core_t\IF_Markers_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_Sights_t\ P:\WW2\Core_t\IF_Sights_t\ *.paa /S /MT
ROBOCOPY P:\WW2\Core_t_SourceIF\IF_System_Artillery_t\ P:\WW2\Core_t\IF_System_Artillery_t\ *.paa /S /MT

ROBOCOPY P:\WW2\Objects_t_SourceIF\Misc\IF_EditorPreviews_t\ P:\WW2\Objects_t\Misc\IF_EditorPreviews_t\ *.paa /S /MT

ROBOCOPY P:\WW2\TerrainsIF_t_Source\Worlds\IF_Misc_t\ P:\WW2\TerrainsIF_t\Worlds\IF_Misc_t\ *.paa /S /MT
ROBOCOPY P:\WW2\TerrainsIF_t_Source\Worlds\IF_Surfaces_t\ P:\WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\ *.paa /S /MT
ROBOCOPY P:\WW2\TerrainsIF_t_Source\Worlds\IF_SurfacesWinter_t\ P:\WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\ *.paa /S /MT

pause
