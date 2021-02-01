#include "user_input.h"

void process_inputs()
{
    // Events loop
    while( SDL_PollEvent( &e_handler ) != 0 ) // keeps processing the even queue until its empty
    // with SDL_PollEvent we are polling the events in the queue starting from the first event
    // poll event will return 0 when its empty
    {
        //User requests quit
        if( e_handler.type == SDL_QUIT )
        {
            quit = true;
        } else if (e_handler.type == SDL_KEYDOWN) //select surfaces based on key press
        {
            switch(e_handler.key.keysym.sym)
            {
                case SDLK_UP:
                    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];
                    break;
                case SDLK_DOWN:
                    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
                    break;
                case SDLK_LEFT:
                    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
                    break;
                case SDLK_RIGHT:
                    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
                    break;
                default:
                    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
                    break;

            }
        }



    }
}
