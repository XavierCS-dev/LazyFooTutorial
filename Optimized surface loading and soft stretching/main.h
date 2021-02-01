#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include "common.h"

extern bool Init();
extern void Close_SDL();
extern bool Load_media();
extern void process_inputs();
extern SDL_Surface *Load_surface(char *path);

#endif // MAIN_H_INCLUDED
