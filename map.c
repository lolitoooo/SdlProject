#include "struct.h"
#include "defines.h"
#include "main.h"
#include "map.h"
#include <SDL.h>
#include <SDL_image.h>


void display_map(Jeu *p_jeu,  int xmap,  int ymap) {

    SDL_Rect rect_map = {0, 0, SCREEN_W, SCREEN_H};

    Img map1;
    Img map2;
    Img map3; 
    Img map4;

    ////////////// textures d'herbe ///////////////////

    if(xmap == 0 && ymap == 0) {

    map1.surface = IMG_Load("map/map11.png");
    map1.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, map1.surface);

    if(map1.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }
    SDL_RenderCopy(p_jeu->gRenderer, map1.texture, NULL, &rect_map);

    }

    if(xmap == 1 && ymap == 0) {

    map2.surface = IMG_Load("map/map2.png");
    map2.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, map2.surface);

    if(map2.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }
    SDL_RenderCopy(p_jeu->gRenderer, map2.texture, NULL, &rect_map);

    }

    

    }