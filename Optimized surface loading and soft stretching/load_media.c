#include "load_media.h"

bool Load_media()
{
    bool success = true;

    // Load default surface
    gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] = Load_surface("press.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] == NULL)
    {
        printf("Failed to load up image!\n");
        success = false;
    }

    // Load up surface

    gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] = Load_surface("up.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] == NULL)
    {
        printf("Failed to load up image!\n");
        success = false;
    }

    // Load down surface

    gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] = Load_surface("down.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] == NULL)
    {
        printf("Failed to load up image!\n");
        success = false;
    }

    // Load left surface

    gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] = Load_surface("left.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] == NULL)
    {
        printf("Failed to load up image!\n");
        success = false;
    }

    // Load up surface

    gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] = Load_surface("right.bmp");
    if (gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] == NULL)
    {
        printf("Failed to load up image!\n");
        success = false;
    }

    return success;
}
