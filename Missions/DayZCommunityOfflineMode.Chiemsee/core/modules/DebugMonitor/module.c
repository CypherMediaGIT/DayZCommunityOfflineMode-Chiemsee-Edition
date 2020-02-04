#ifndef COM_MODULES_OLDLOADING
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\BaseModuleInclude.c"
#endif
/*
    Define used for optional compilations
*/
#define MODULE_DEBUG_MONITOR

/*
    Include of all .c files that belong to this module
*/
#ifdef COM_MODULES_OLDLOADING
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\modules\\DebugMonitor\\CustomDebugMonitor.c"
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\modules\\DebugMonitor\\gui\\DebugMonitor.c"
#endif

#ifndef COM_MODULES_OLDLOADING
void RegisterModule()
{
    GetModuleManager().RegisterModule( new CustomDebugMonitor );
}
#endif