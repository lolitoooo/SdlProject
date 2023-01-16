#include "struct.h"
#include "defines.h"
#include "main.h"
#include "map.h"
#include "display_monster.h"
#include <SDL.h>
#include <SDL_image.h>


void display_map(Jeu *p_jeu,  int xmap,  int ymap, int chest) {

    SDL_Rect rect_map = {0, 0, SCREEN_W, SCREEN_H};

    Img map1;
    Img map2;
    Img map3; 
    Img map4;

    if(xmap == 0 && ymap == 0 && chest == 0) {

    map1.surface = IMG_Load("map/map00.png");
    map1.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, map1.surface);

    if(map1.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }
    SDL_RenderCopy(p_jeu->gRenderer, map1.texture, NULL, &rect_map);

    } else if (xmap == 0 && ymap == 0 && chest == 1) {

        map1.surface = IMG_Load("map/map00C.png");
        map1.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, map1.surface);

        if(map1.texture == NULL) {
            printf("erreur de creation de la texture : %s\n", SDL_GetError());
            exit(1); 
        }
        SDL_RenderCopy(p_jeu->gRenderer, map1.texture, NULL, &rect_map);
    }

    if(xmap == 1 && ymap == 0) {

    map2.surface = IMG_Load("map/map10.png");
    map2.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, map2.surface);

    if(map2.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }
    SDL_RenderCopy(p_jeu->gRenderer, map2.texture, NULL, &rect_map);

    }

    if(xmap == 1 && ymap == 1) {

    map3.surface = IMG_Load("map/mapcoffres.png");
    map3.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, map3.surface);

    if(map3.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }
    SDL_RenderCopy(p_jeu->gRenderer, map3.texture, NULL, &rect_map);

    }
}