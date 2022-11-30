#include "move_player.h"
#include "defines.h"
#include "main.h"
#include "struct.h"
#include <SDL_image.h>
#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>

SDL_Rect display_perso(struct Jeu jeu, Img *p_img, SDL_Rect *p_perso) {     // retourne la texture a partir de l'image d'un personnage

                                                                            // creation de la surface a partir de l'image

    if(p_img->surface == NULL) {
        printf("erreur de creation de la surface : %s\n", SDL_GetError());
        exit(1); 
    }                                                                       // cree la surface a partir de l'image

    printf("img.surface : %p\n", p_img->surface);
    printf("jeu.gRenderer : %p\n", jeu.gRenderer);

    p_img->texture = SDL_CreateTextureFromSurface(jeu.gRenderer, p_img->surface);
    SDL_FreeSurface(p_img->surface);

    if(p_img->texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }                                                                       // cree la texture a partir de la surface

    printf("img.texture dans move_player : %ld\n", p_img->texture);

    SDL_RenderCopy(jeu.gRenderer, p_img->texture, NULL, p_perso);
    SDL_RenderPresent(jeu.gRenderer);

    return *p_perso;  
}

int load_anim_left(int *c, struct Jeu jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 2) { 
        img->surface = IMG_Load("perso/tileLeft1.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);

        img->surface = IMG_Load("perso/tileLeft2.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    ////////////deuxieme partie de l'animation vers la gauche/////////////////////

    if(*c == 3) {
        img->surface = IMG_Load("perso/tileLeft3.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);

        img->surface = IMG_Load("perso/tileLeft4.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    if(*c >= 3) {
        *c = 1; 
    }
    
    return *c;
}

int load_anim_right(int *c, struct Jeu jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 2) { 
        img->surface = IMG_Load("perso/tileRight1.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);


        img->surface = IMG_Load("perso/tileRight2.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    ////////////deuxieme partie de l'animation vers la gauche/////////////////////

    if(*c == 3) {
        img->surface = IMG_Load("perso/tileRight3.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);


        img->surface = IMG_Load("perso/tileRight4.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    if(*c >= 3) {
        *c = 1; 
    }

    return *c;
}

int load_anim_back(int *c, struct Jeu jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 2) { 
        img->surface = IMG_Load("perso/tileBack1.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);


        img->surface = IMG_Load("perso/tileBack2.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    ////////////deuxieme partie de l'animation vers la gauche/////////////////////

    if(*c == 3) {
        img->surface = IMG_Load("perso/tileBack3.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);


        img->surface = IMG_Load("perso/tileBack4.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    if(*c >= 3) {
        *c = 1; 
    }
    
    return *c;
}

int load_anim_forward(int *c, struct Jeu jeu, Img *img, SDL_Rect *p_perso) {

    if(*c == 2) { 
        img->surface = IMG_Load("perso/tileFront1.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);


        img->surface = IMG_Load("perso/tileFront2.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);
    }

    ////////////deuxieme partie de l'animation vers la gauche/////////////////////

    if(*c == 3) {
        img->surface = IMG_Load("perso/tileFront3.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);


        img->surface = IMG_Load("perso/tileFront4.png");
        display_perso(jeu, img, p_perso);
        SDL_RenderCopy(jeu.gRenderer, img->texture, NULL, p_perso);
        SDL_RenderPresent(jeu.gRenderer);
        SDL_DestroyTexture(img->texture);
        SDL_RenderClear(jeu.gRenderer);    
    }

    if(*c >= 3) {
        *c = 1; 
    }

return *c;
}