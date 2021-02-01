#include "main.h"

int main( int argc, char* args[] )
{
    // main loop flag
    quit = false;

    Load_media(); // Loading the images
    // Setting default image to display
    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

    // Start SDL and create a window

    if (!Init())
    {
        printf("Failed to initialize!\n");
    } else
    {

        while (!quit) // main loop
        {
            process_inputs();
            //Apply the current image
            SDL_BlitSurface(gCurrentSurface , NULL, gScreenSurface, NULL );

            //Update the surface
            SDL_UpdateWindowSurface(gWindow);

        }

    }
// Free resources and close SDL

    Close_SDL();

    return 0;
}
