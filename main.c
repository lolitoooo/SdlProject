// gcc -c main.c map.c move_player.c  $(sdl2-config --cflags --libs) -lSDL2_image
// gcc -o main main.o map.o move_player.o $(sdl2-config --cflags --libs) -lSDL2_image
//https://convert-my-image.com/ImageConverter_Fr

#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "main.h"
#include "move_player.h"
#include "map.h"
#include "init.h"

Jeu jeu;
Img img;

Img *p_img = &img;
Jeu *p_jeu = &jeu;

int main(int argc, char **argv) {

     int map1_collision[12][12] = {
                                {1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
                                };

    SDL_bool program_launched = SDL_TRUE;
    SDL_Rect perso = {96, 96, 64, 64}; // rectangle de destination du perso
    SDL_Rect *p_perso = &perso;

    int countCase = 0; // compte les appuis sur une touche
    int *c = &countCase;
    int orientation = 0;
    int nbMapLoad = 1; 
    int tick, tick_start = 0; 

     int xmap = 0;
     int ymap = 0;

     ///// les touches du clavier /////

    SDL_bool keyLeft = SDL_FALSE; 
    SDL_bool keyRight = SDL_FALSE;
    SDL_bool keyForward = SDL_FALSE;
    SDL_bool keyUp = SDL_FALSE;

    ///////////////////////////////////

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

    ///////////////////////////////////////////////////////////////////////////////////////////////////
 
        // affiche le sprite du personnage
        p_img->surface = IMG_Load("perso/tileFront1.png");  // creation de la surface a partir de l'image
        display_perso(p_jeu, &img, &perso);
        display_map(p_jeu, xmap, ymap);    


    while(program_launched) {

        tick_start = SDL_GetTicks();
        SDL_Event event;   

        while(SDL_PollEvent(&event)) {

            switch(event.type) {

                case SDL_QUIT: 
                    program_launched = SDL_FALSE; 
                break;



                case SDL_KEYUP:

                if(keyLeft == SDL_TRUE) keyLeft = SDL_FALSE;
                 if(keyRight == SDL_TRUE) keyRight = SDL_FALSE;
                  if(keyForward == SDL_TRUE) keyForward = SDL_FALSE;
                   if(keyUp == SDL_TRUE) keyUp = SDL_FALSE; 

                   break;


                case SDL_KEYDOWN: 

                display_map(p_jeu, xmap, ymap);
                nbMapLoad++; 

                    switch(event.key.keysym.sym) { 

                                case SDLK_LEFT: 

                                keyLeft = SDL_TRUE; 

                                    countCase++;
                                
                                   /* if(keyUp == SDL_TRUE) {
                                        p_perso->x -= SPEED/2;
                                        p_perso->y -= SPEED/2; 
                                    }  
                                    else if(keyForward == SDL_TRUE) {
                                         p_perso->x -= SPEED/2;
                                         p_perso->y += SPEED/2; 
                                    } 

                                    else */

                              
                                    if(map1_collision[p_perso->x/(SPEED*4) - 1][p_perso->y/(SPEED*4)] == 1) {
                                        p_perso->x += SPEED; 
                                    } 
                                              p_perso->x -= SPEED;

                                    

                                    printf("p_perso[%d][%d]\n", ((p_perso->x/SPEED) / 4), ((p_perso->y/SPEED) / 4));




                                    if(p_perso->x <= 0 && xmap != 0) {
                                    p_perso->x += (SCREEN_W);
                                    xmap--; 
                                    nbMapLoad++; 
                                    printf("map numero : %d %d\n", xmap, ymap);
                                    }
                                     else if(p_perso->x <= 0 && xmap == 0) {
                                        p_perso->x += SPEED;
                                    }
                                    
                                    load_anim_left(c, p_jeu, &img, &perso);

                                    orientation = 1; 
                                    
                                break;
                                                
                        /////////////////////////////////////////////////////////////////////////////////////////////////

                                case SDLK_RIGHT: 

                                keyRight = SDL_TRUE; 

                                    countCase++; 

                                    /*if(keyUp == SDL_TRUE) {
                                        p_perso->x += SPEED/2;
                                         p_perso->y -= SPEED/2; 
                                    }  
                                    else if(keyForward == SDL_TRUE) {
                                        p_perso->x += SPEED/2;
                                         p_perso->y += SPEED/2; 
                                    }  

                                    else */ 

                               

                                    if(map1_collision[p_perso->x/(SPEED*4) + 1][p_perso->y/(SPEED*4)] == 1) {
                                        p_perso->x -= SPEED; 
                                    }

                                         p_perso->x += SPEED;
                                         
                                    printf("p_perso[%d][%d]\n", ((p_perso->x/SPEED) / 4), (p_perso->y/SPEED) / 4);





                                    if(p_perso->x >= (SCREEN_W - p_perso->w)) {
                                        p_perso->x -= (SCREEN_W - p_perso->w);
                                        xmap++; 
                                        nbMapLoad++; 
                                        printf("map numero : %d %d\n", xmap, ymap);
                                    }

                                    load_anim_right(c, p_jeu, &img, &perso);

                                break; 

                        /////////////////////////////////////////////////////////////////////////////////////////////////

                                case SDLK_UP: 

                                keyUp = SDL_TRUE; 

                               /* if(keyLeft == SDL_TRUE) {
                                    p_perso->y -= SPEED/2;
                                         p_perso->x -= SPEED/2; 
                                    }  
                                    else if(keyRight == SDL_TRUE) {
                                        p_perso->y -= SPEED/2;
                                         p_perso->x += SPEED/2; 
                                    } 

                                    else */ 


                                 


                                    if(map1_collision[p_perso->x/(SPEED*4)][p_perso->y/(SPEED*4) - 1] == 1) {
                                        p_perso->y += SPEED; 
                                    } 

                                    printf("p_perso[%d][%d]\n", (p_perso->x/SPEED) / 4, (p_perso->y/SPEED) / 4);

                                        
                                    p_perso->y -= SPEED;



                                    countCase++; 
                                    
                                    if(p_perso->y <= 0 && ymap != 0) {
                                        p_perso->y += (SCREEN_W - p_perso->h);
                                        ymap--;
                                        if(ymap <= 0) ymap = 0; 
                                        nbMapLoad++; 
                                        printf("map numero : %d %d\n", xmap, ymap);
                                    } else if(p_perso->y <= 0 && ymap == 0) {
                                        p_perso->y += SPEED;
                                    }
                                    load_anim_back(c, p_jeu, &img, &perso);
                                    
                                break;

                        /////////////////////////////////////////////////////////////////////////////////////////////////

                                case SDLK_DOWN:

                                keyForward = SDL_TRUE;

                               /*  if(keyLeft == SDL_TRUE) {
                                    p_perso->y += SPEED/2;
                                         p_perso->x -= SPEED/2; 
                                    }  
                                    else if(keyRight == SDL_TRUE) {
                                        p_perso->y += SPEED/2;
                                         p_perso->x += SPEED/2; 
                                    } 

                                    else*/ 

                                        

                                    if(map1_collision[p_perso->x/(SPEED*4)][p_perso->y/(SPEED*4) + 1] == 1) {
                                        p_perso->y -= SPEED; 
                                    } 

                                    p_perso->y += SPEED;

                                    printf("p_perso[%d][%d]\n", (p_perso->x/SPEED) / 4, (p_perso->y/SPEED) / 4);


                                  



                                    countCase++; 
                                    
                                    if(p_perso->y >= (SCREEN_H - p_perso->h)) {
                                        p_perso->y -= (SCREEN_W - p_perso->w);
                                        ymap++;
                                        nbMapLoad++; 
                                        printf("map numero : %d %d\n", xmap, ymap);
                                    }
                                    load_anim_forward(c, p_jeu, &img, &perso);
                                
                                break;


                        default:
                        break;
                    } // fin switch event.key

                default:
                break;

            } // fin swtich event.type 
             
        } // fin while SDL_PollEvent 
        SDL_RenderPresent(jeu.gRenderer);

        if(1000/FPS > SDL_GetTicks() - tick_start) {
                SDL_Delay(1000/FPS - (SDL_GetTicks() - tick_start));
        }

    } // fin while prog launch

    unsigned ticks = 0; 
    ticks = SDL_GetTicks();
    printf("%dms écoulées\n", ticks);
    printf("nb de chargement de map : %d\n", nbMapLoad);
    fermeture(jeu); 
    extern int atexit(void (*SDL_QUIT) (void));

    return EXIT_SUCCESS;
}

void fermeture(struct Jeu jeu) {

    if(jeu.gRenderer != NULL) {
        SDL_DestroyRenderer(jeu.gRenderer);
    }

    if(jeu.gWindow != NULL) {
        SDL_DestroyWindow(jeu.gWindow);
    }

    SDL_Quit();
}