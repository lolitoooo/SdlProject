#include "init.h"
#include "struct.h"
#include "defines.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>

/*int init(struct Jeu jeu) {

    long tmp = 0; 

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        exit(1);
    }

   jeu.gWindow = SDL_CreateWindow("Jeu", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN);
    if(jeu.gWindow == NULL) {
        printf("erreur de creation de la fenetre : %s\n", SDL_GetError());
        exit(1);
    }

    jeu.gRenderer = SDL_CreateRenderer(jeu.gWindow, -1, SDL_RENDERER_ACCELERATED);
    if(jeu.gRenderer == NULL) {
        printf("erreur de creation du rendu : %s\n", SDL_GetError());
        exit(1);
     }

     *(jeu.gRenderer) =  long(jeu.gRenderer); 

    // tmp = jeu.gRenderer; 

    printf("jeu.gRenderer : %ld\n", jeu.gRenderer);

   // return tmp; 

    
}*/

