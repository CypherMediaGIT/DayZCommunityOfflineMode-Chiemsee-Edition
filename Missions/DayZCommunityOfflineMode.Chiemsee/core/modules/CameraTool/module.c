#ifndef COM_MODULES_OLDLOADING
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\BaseModuleInclude.c"
#endif

/*
    Define used for optional compilations
*/
#define MODULE_CAMERA_TOOL

/*
    Include of all .c files that belong to this module
*/
#ifdef COM_MODULES_OLDLOADING
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\modules\\CameraTool\\CameraTool.c"
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\modules\\CameraTool\\gui\\CameraSettings.c"
#include "$CurrentDir:missions\\DayZCommunityOfflineMode.Chiemsee\\core\\modules\\CameraTool\\WidgetStore.c"
#endif

#ifndef COM_MODULES_OLDLOADING
void RegisterModule()
{
    GetModuleManager().RegisterModule( new CameraTool );
}
#endif