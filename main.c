// gcc -c main.c $(sdl2-config --cflags --libs) -lSDL2_image
// gcc -o main main.o $(sdl2-config --cflags --libs) -lSDL2_image
//https://convert-my-image.com/ImageConverter_Fr

#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "main.h"
#include "move_player.h"

Jeu jeu;
Img img;

Img *p_img = &img;

int main(int argc, char **argv) {

    SDL_bool program_launched = SDL_TRUE;
    SDL_Rect perso = {0, 0, 64, 64}; // rectangle de destination du perso
    SDL_Rect *p_perso = &perso;

    int countCase = 0; // compte les appuis sur une touche
    int *c = &countCase;
    int orientation = 0;

    ///////////////////////////////////////////// INIT //////////////////////////////////////////////////

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

    //init(jeu);

    ///////////////////////////////////////////////////////////////////////////////////////////////////
 
        // affiche le sprite du personnage
        p_img->surface = IMG_Load("perso/tileFront1.png");  // creation de la surface a partir de l'image
        display_perso(jeu, &img, &perso); 

    while(program_launched) {

        SDL_Event event;
        
        while(SDL_PollEvent(&event)) {

            switch(event.type) {

                case SDL_QUIT: 
                    program_launched = SDL_FALSE; 
                break;

                case SDL_KEYDOWN: 
                    printf("%d %d %d %d", p_perso->x, p_perso->y, p_perso->w, p_perso->h);
                    switch(event.key.keysym.sym) {  

                        case SDLK_LEFT: 
                            countCase++;
                            p_perso->x -= SPEED;
                            if(p_perso->x <= 0) {
                               p_perso->x += SPEED;
                            }
                            load_anim_left(c, jeu, &img, &perso);
                            //orientation = 1;
                        break;
                                                
                        /////////////////////////////////////////////////////////////////////////////////////////////////

                        case SDLK_RIGHT: 
                            countCase++; 
                            p_perso->x += SPEED;
                            if(p_perso->x >= (SCREEN_W - p_perso->w)) {
                                p_perso->x -= SPEED;
                            }
                            load_anim_right(c, jeu, &img, &perso);
                            //orientation = 2;
                        break; 

                        /////////////////////////////////////////////////////////////////////////////////////////////////

                        case SDLK_UP: 
                            countCase++; 
                            perso.y -= SPEED;
                            if(perso.y <= 0) {
                                perso.y += SPEED;
                            }
                            load_anim_back(c, jeu, &img, &perso);
                            orientation = 3;
                            break;

                        /////////////////////////////////////////////////////////////////////////////////////////////////

                        case SDLK_DOWN:
                            countCase++; 
                            perso.y += SPEED;
                            if(perso.y >= (SCREEN_H - perso.h)) {
                                perso.y -= SPEED;
                            }
                            load_anim_forward(c, jeu, &img, &perso);
                            orientation = 4;
                        break;


                        default:
                        break;
                    } // fin switch event.key

                default:
                break;

            } // fin swtich event.type 
             
        } // fin while SDL_PollEvent 

    } // fin while prog lunch

    unsigned ticks = 0; 
    ticks = SDL_GetTicks();
    printf("%dms écoulées\n", ticks);
    fermeture(jeu); 
    extern int atexit(void (*SDL_QUIT) (void));

    return EXIT_SUCCESS;
}