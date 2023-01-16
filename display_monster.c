#include "defines.h"
#include "main.h"
#include "struct.h"
#include "map.h"
#include "display_monster.h"
#include <SDL_image.h>
#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void display_monster(Jeu *p_jeu, Img *img_monstre, SDL_Rect *dest_monstre) {

   srand(time(NULL));
   int random = rand() % 120 + 50;

   if(img_monstre->surface == NULL) {
      printf("erreur de creation de la surface : %s\n", SDL_GetError());
      exit(1); 
   }

   img_monstre->texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, img_monstre->surface);
   SDL_FreeSurface(img_monstre->surface);
   if(img_monstre->texture == NULL) {
      printf("erreur de creation de la texture : %s\n", SDL_GetError());
      exit(1); 
   }

   SDL_RenderCopy(p_jeu->gRenderer, img_monstre->texture, NULL, dest_monstre);
}


void move_monster(SDL_Rect *dest_monstre, Jeu *p_jeu, SDL_Rect *p_perso, Img *img_monstre) {

   srand(time(NULL));
   int left = 0, right = 0, back = 0, forward = 0; 
   int orientation;

   orientation = rand() % 4 + 1;
 
   printf("orientation : %d\n", orientation);

   switch(orientation) {

      case 1: // Gauche
         img_monstre->surface = IMG_Load("tiles_monstre/monster_left2.png");  
         display_monster(p_jeu, img_monstre, dest_monstre); 
         dest_monstre->x -= SPEED_MONSTER/3;                 

         if(dest_monstre->x <= 0) {
            dest_monstre->x += SPEED_MONSTER;
         }
         break;

      case 2: // Droite   
         img_monstre->surface = IMG_Load("tiles_monstre/monster_right2.png");  
         display_monster(p_jeu, img_monstre, dest_monstre); 
         dest_monstre->x += SPEED_MONSTER/2;

         if(dest_monstre->x >= (SCREEN_W - dest_monstre->w)) {
            dest_monstre->x -= SPEED_MONSTER;
         }
         break;

      case 3: // Bas
         img_monstre->surface = IMG_Load("tiles_monstre/monster_front2.png");  
         display_monster(p_jeu, img_monstre, dest_monstre); 
         dest_monstre->y += SPEED_MONSTER/2;
                 
         if(dest_monstre->y >= (SCREEN_H - dest_monstre->h)) {
            dest_monstre->y -= SPEED_MONSTER;
         }               
         break;

      case 4: // Haut 
         img_monstre->surface = IMG_Load("tiles_monstre/monster_back2.png");  
         display_monster(p_jeu, img_monstre, dest_monstre); 
         dest_monstre->y -= SPEED_MONSTER/2;
               
         if(dest_monstre->y <= 0) {
            dest_monstre->y += SPEED_MONSTER;
         }
         break; 

         default: 
         break;
   }
}