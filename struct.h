#ifndef STRUCT_H
#define STRUCT_H
#include <SDL.h>

typedef struct Jeu {
    SDL_Window *gWindow;
    SDL_Renderer *gRenderer;  

} Jeu; 

typedef struct Img {
    SDL_Surface *surface;
    SDL_Texture *texture;
} Img;


#endif