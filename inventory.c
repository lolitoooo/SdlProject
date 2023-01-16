#include "inventory.h"
#include "struct.h"
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>


void open_inventory(Img *p_inventory, Jeu *p_jeu) {

    SDL_Rect i_rect = {260, 260, 200, 200}; 

    init_inventory(); 

    p_inventory->surface = IMG_Load("inventory/inventaire.png");

    if(p_inventory->surface == NULL) {
        printf("erreur de creation de la surface pour l'inventaire : %s\n", SDL_GetError());
        exit(1); 
    }

    p_inventory->texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, p_inventory->surface);

    if(p_inventory->texture == NULL) {
        printf("erreur de creation de la texture pour l'inventaire : %s\n", SDL_GetError());
        exit(1); 
    }
    SDL_RenderCopy(p_jeu->gRenderer, p_inventory->texture, NULL, &i_rect);
}

void init_inventory() {
    int inventory[3][3] = {0}; 
}

void close_inventory(Img *p_inventory, Jeu *p_jeu) {
    SDL_DestroyTexture(p_inventory->texture); 
    SDL_RenderPresent(p_jeu->gRenderer); 
}