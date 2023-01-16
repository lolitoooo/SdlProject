#include <SDL.h>
#include <SDL_image.h>
#include "move_player.h" // pour display_perso
#include "main.h"
#include "struct.h"
#include "map.h"


void attack(Jeu *p_jeu, int orientation, Img *p_img, SDL_Rect *p_perso, int xmap, int ymap, int chest) {

    switch(orientation) {

        case 1:  // gauche
            p_img->surface = IMG_Load("perso/link/swordL1.png");
            p_perso->w  -= 18;
            p_perso->x  += 5;
            p_perso->y  -= 12;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            p_perso->w = 36;
            p_perso->h = 48;
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);
            p_perso->w  += 18;
        
            p_img->surface = IMG_Load("perso/link/swordL2.png");
            p_perso->x  -= 24;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);

            p_img->surface = IMG_Load("perso/link/swordL3.png");
            p_perso->w  += 6;
            p_perso->h  -= 18;

            p_perso->y  += 18;
            p_perso->x  -= 6;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer);
            SDL_Delay(30); 
            p_perso->w  -= 6;
            p_perso->h  += 18;

            p_perso->y  -= 6;
            p_perso->x += 25;

            p_perso->w = 36;
            p_perso->h = 36;      
            break;

        case 2: // Droite
            p_img->surface = IMG_Load("perso/link/swordR1.png");
            p_perso->w  -= 18;
            p_perso->y  -= 12;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            p_perso->w = 36;
            p_perso->h = 48;
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);
            p_perso->w  += 18;
            

            p_img->surface = IMG_Load("perso/link/swordR2.png");
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);

            p_img->surface = IMG_Load("perso/link/swordR3.png");
            p_perso->w  += 4;
            p_perso->h  -= 14;

            p_perso->y  += 14;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer);
            SDL_Delay(30); 
            
            p_perso->h += 14;
            p_perso->w  -= 4;

            p_perso->y  -= 2;
            p_perso->w = 36;
            p_perso->h = 36;
            break;

        case 3: // Haut
            p_perso->x += 8;
            p_img->surface = IMG_Load("perso/link/swordU1.png");
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            p_perso->w = 62;
            p_perso->h = 40;
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);
            p_perso->x -= 8;
            

            p_img->surface = IMG_Load("perso/link/swordU2.png");
            p_perso->w = 68;
            p_perso->h = 58;
            p_perso->y -= 20;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);

            p_img->surface = IMG_Load("perso/link/swordU3.png");
            p_perso->w = 41;
            p_perso->h = 56;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer);
            SDL_Delay(30); 

            p_perso->y += 20;
            p_perso->w = 36;
            p_perso->h = 36;
            break;

        case 4: // Bas
            p_img->surface = IMG_Load("perso/link/swordF1.png");
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            p_perso->w = 64;
            p_perso->h = 40;
            p_perso->x -= 28;
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);
            
            p_img->surface = IMG_Load("perso/link/swordF2.png");
            p_perso->w = 72;
            p_perso->h = 64;
            p_perso->y += 4;
            p_perso->x -= 4;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer); 
            SDL_Delay(30);

            p_img->surface = IMG_Load("perso/link/swordF3.png");
            p_perso->w = 40;
            p_perso->h = 64;
            p_perso->x += 32;
            p_perso->y += 2;
            SDL_RenderClear(p_jeu->gRenderer);
            display_map(p_jeu, xmap, ymap, chest);
            display_perso(p_jeu, p_img, p_perso);
            SDL_RenderPresent(p_jeu->gRenderer);
            SDL_Delay(30); 

            p_perso->w = 36;
            p_perso->h = 36;
            p_perso->y -= 6;  
            break;

            default:
            break;
    }
}