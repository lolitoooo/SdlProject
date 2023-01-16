#include "move_player.h"
#include "defines.h"
#include "main.h"
#include "struct.h"
#include "map.h"
#include <SDL_image.h>
#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>

SDL_Rect display_perso(Jeu *p_jeu, Img *p_img, SDL_Rect *p_perso) {                                                         
                                                                            
    if(p_img->surface == NULL) {
        printf("erreur de creation de la surface : %s\n", SDL_GetError());
        exit(1); 
    }                                                                      

    p_img->texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, p_img->surface);
    SDL_FreeSurface(p_img->surface);

    if(p_img->texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }    

    SDL_RenderCopy(p_jeu->gRenderer, p_img->texture, NULL, p_perso); 
    SDL_DestroyTexture(p_img->texture);

    return *p_perso;  
}

int load_anim_left(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 1) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkLeft1.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c == 2) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkLeft2.png");
        display_perso(p_jeu, img, p_perso);
    }


    if(*c >= 2) {
        *c = 0;
    }
    
    return *c;
}

int load_anim_right(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 1) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkRight1.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c == 2) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkRight2.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c >= 2) {
        *c = 0;
    }

    return *c;
}

int load_anim_back(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 1) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkUp1.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c == 2) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkUp2.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c >= 2) {
        *c = 0;
    }
    
    return *c;
}

int load_anim_forward(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 1) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkForward1.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c == 2) { 
        img->surface = IMG_Load("perso/link/linkBasic/linkForward2.png");
        display_perso(p_jeu, img, p_perso);
    }

    if(*c >= 2) {
        *c = 0;
    }

return *c;
}