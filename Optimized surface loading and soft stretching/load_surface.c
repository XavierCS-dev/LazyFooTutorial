#include "load_surface.h"

SDL_Surface *Load_surface(char *path)
{
    // Load image at specified path
    SDL_Surface *loaded_surface = SDL_LoadBMP(path);

    SDL_Surface *optimized_surface = NULL;
    if (loaded_surface == NULL)
    {
        printf("Unable to load image %s! SDL ERROR: %s\n", path, SDL_GetError());

    } else
    {
        // Convert surface to screen format
        optimized_surface = SDL_ConvertSurface(loaded_surface, gScreenSurface->format, 0);
        if (optimized_surface == NULL)
        {
            printf("Unable to optimize image %s! SDL ERROR:%s\n", path, SDL_GetError());

        }
        // Get rid of old surface

        SDL_FreeSurface(loaded_surface); // free memory of old image
        // What we are doing is optimized the image to the correct
        // bit depth to the display, do this doesn't have to be done
        // on each blit
    }
    return optimized_surface;
}

/* Code for stretching images
/Apply the image stretched
				SDL_Rect stretchRect;
				stretchRect.x = 0;
				stretchRect.y = 0;
				stretchRect.w = SCREEN_WIDTH;
				stretchRect.h = SCREEN_HEIGHT;
				SDL_BlitScaled( gStretchedSurface, NULL, gScreenSurface, &stretchRect );
*/
