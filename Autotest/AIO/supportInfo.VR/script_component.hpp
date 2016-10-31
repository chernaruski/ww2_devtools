#define COMPONENT diagnostic
#include "script_mod.hpp"

#ifdef DEBUG_ENABLED_DIAGNOSTIC
	#define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_DIAGNOSTIC
	#define DEBUG_SETTINGS DEBUG_SETTINGS_DIAGNOSTIC
#endif

#include "script_macros.hpp"
