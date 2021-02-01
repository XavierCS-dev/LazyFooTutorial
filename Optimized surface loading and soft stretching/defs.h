#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

//The window we'll be rendering to
SDL_Window *gWindow;

//The surface contained by the window
SDL_Surface *gScreenSurface;

//The image we will load and show on the screen
SDL_Surface *gHelloWorld;

// Event handler
SDL_Event e_handler;

// Main loop flag
bool quit;

//Key press surfaces constants, symnboloic constants
enum KeyPressSurfaces
{
    KEY_PRESS_SURFACE_DEFAULT, // value of 0
    KEY_PRESS_SURFACE_UP, // value of 1
    KEY_PRESS_SURFACE_DOWN, //value of 2
    KEY_PRESS_SURFACE_LEFT, //etc
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};


// The images that correspond to a keypress
SDL_Surface *gKeyPressSurfaces [KEY_PRESS_SURFACE_TOTAL];

// Current displayed image

SDL_Surface *gCurrentSurface;




/*
typedef struct
{
    SDL_Window *gWindow;
    SDL_Surface *gScreenSurface;
    SDL_Surface *gHelloWorld;

}
*/

#endif // DEFS_H_INCLUDED
