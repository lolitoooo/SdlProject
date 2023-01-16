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

enum block{HERBE1, HERBE2, FLEUR1, FLEUR2, SOL1, SOL2, SOL3};

#endif
