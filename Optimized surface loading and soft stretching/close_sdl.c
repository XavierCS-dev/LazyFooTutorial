#include "close_sdl.h"

void Close_SDL()
{
    // Deallocate surface
    SDL_FreeSurface(gHelloWorld);
    gHelloWorld = NULL; // setting our pointers to null

    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    SDL_Quit();

    // we will not worry about the screen surface as SDL_Destrpy window will take care of it.
}
