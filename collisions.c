#include "defines.h"
#include "main.h"
#include "struct.h"
#include "map.h"
#include "collisions.h"
#include <SDL_image.h>
#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>


void collisions_left_map10(SDL_Rect *p_perso, int xmap, int ymap){
      if(xmap == 1 && ymap == 0){
            if(p_perso->x <= 0 && p_perso->y >= 0 && p_perso->y <= 516)
                  p_perso->x += SPEED;

            if(p_perso->x <= 396 && p_perso->y >= 588 && p_perso->y <= 648)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 48 && p_perso->y >= 72 && p_perso->y <= 96)
                  p_perso->x += SPEED;

            if(p_perso->x == 132 && p_perso->y == 108)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 144 && p_perso->y >= 72 && p_perso->y <= 128)
                  p_perso->x += SPEED;

            if(p_perso->x == 312 && p_perso->y >= 48 && p_perso->y <= 84)
                  p_perso->x += SPEED;

            if(p_perso->x == 444 && p_perso->y >= 0 && p_perso->y <= 36)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 492 && p_perso->y >= 456 && p_perso->y <= 480)
                  p_perso->x += SPEED;

            if(p_perso->x == 540 && p_perso->y >= 564 && p_perso->y <= 624)
                  p_perso->x += SPEED;

            if(p_perso->x == 432 && p_perso->y >= 396 && p_perso->y <= 480)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 324 && p_perso->y >= 336 && p_perso->y <= 384)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 384 && p_perso->y == 348)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 396 && p_perso->y == 336)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 576 && p_perso->y >= 324 && p_perso->y <= 360)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 540 && p_perso->y >= 192 && p_perso->y <= 228)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 576 && p_perso->y >= 132 && p_perso->y <= 180)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 600 && p_perso->y >= 300 && p_perso->y <= 144)
                  p_perso->x += SPEED;
            
            if(p_perso->x == 504 && p_perso->y >= 120 && p_perso->y <= 144)
                  p_perso->x += SPEED;
            
             if(p_perso->x == 504 && p_perso->y >= 168 && p_perso->y <= 192)
                  p_perso->x += SPEED;
      }
      if(xmap == 1 && ymap == 1) {
            // pilliers vers la gauche //
            if(p_perso->x == 300 && p_perso->y >= 192 && p_perso->y <= 624) 
                  p_perso->x += SPEED;

            /// bloquer gauche escaliers 
            if(p_perso->x == 312 && p_perso->y >= 108 && p_perso->y <= 192) 
                  p_perso->x += SPEED;

            // gauche plateforme coffres 
            if(p_perso->x == 252 && p_perso->y >= 0 && p_perso->y <= 108)
                  p_perso->x += SPEED;

            ////// coffres /////
            if(p_perso->x == 312 && p_perso->y == 60 )
                  p_perso->x += SPEED;

            if(p_perso->x == 408 && p_perso->y >= 48 && p_perso->y <= 60)
                  p_perso->x += SPEED;
                  
            /////////// impossible d'aller vers la gauche sur le pillier en haut /////////
            if(p_perso->x == 360 && p_perso->y >= 0 && p_perso->y <= 48)
                  p_perso->x += SPEED;
      }
}

void collisions_right_map10(SDL_Rect *p_perso, int xmap, int ymap){
      if(xmap == 1 && ymap == 0){
            if(p_perso->x == 36 && p_perso->y >= 0 && p_perso->y <= 96)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 84 && p_perso->y >= 72 && p_perso->y <= 108)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 108 && p_perso->y == 120)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 264 && p_perso->y == 72)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 504 && p_perso->y >= 0 && p_perso->y <= 84)
                  p_perso->x -= SPEED;

            if(p_perso->x == 312 && p_perso->y >= 300 && p_perso->y <= 444)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 420 && p_perso->y >= 456 && p_perso->y <= 480)
                  p_perso->x -= SPEED;

            if(p_perso->x == 552 && p_perso->y >= 456 && p_perso->y <= 468)
                  p_perso->x -= SPEED;

            if(p_perso->x == 624 && p_perso->y >= 480 && p_perso->y <= 624)
                  p_perso->x -= SPEED;

            if(p_perso->x == 516 && p_perso->y >= 564 && p_perso->y <= 624)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 480 && p_perso->y >= 396 && p_perso->y <= 480)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 372 && p_perso->y >= 336 && p_perso->y <= 348)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 540 && p_perso->y == 336)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 564 && p_perso->y >= 348 && p_perso->y <= 360)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 624 && p_perso->y >= 324 && p_perso->y <= 384)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 480 && p_perso->y >= 96 && p_perso->y <= 144)
                  p_perso->x -= SPEED;

            if(p_perso->x == 480 && p_perso->y >= 168 && p_perso->y <= 180)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 516 && p_perso->y >= 192 && p_perso->y <= 216)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 612 && p_perso->y >= 156 && p_perso->y <= 288)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 552 && p_perso->y >= 120 && p_perso->y <= 180)
                  p_perso->x -= SPEED;
            
            if(p_perso->x == 660 && p_perso->y >= 636 && p_perso->y <= 648)
                  p_perso->x -= SPEED;
      }
      if(xmap == 1 && ymap == 1) {

            /// bloquer droite escaliers 
            if(p_perso->x == 372 && p_perso->y >= 108 && p_perso->y <= 192)
                  p_perso->x -= SPEED;

            // pilliers vers la droite //
            if(p_perso->x == 384 && p_perso->y >= 192 && p_perso->y <= 624)
                  p_perso->x -= SPEED;
                  
            // bordure droite plateforme coffres 
            if(p_perso->x == 432 && p_perso->y >= 0 && p_perso->y <= 108)
                  p_perso->x -= SPEED;     

            ////// collisions coffres gauche /////
            if(p_perso->x == 372 && p_perso->y == 60 )
                  p_perso->x -= SPEED;

            // impossible d'aller sur le pillier depuis le haut du coffre en bas à gauche //
            if(p_perso->x == 324 && p_perso->y >= 0 && p_perso->y <= 48) 
                  p_perso->x -= SPEED;
      }
}

void collisions_front_map10(SDL_Rect *p_perso, int xmap, int ymap){
      if(xmap == 1 && ymap == 0){
            if(p_perso->y == 60 && p_perso->x >= 60 && p_perso->x <= 72)
                  p_perso->y += SPEED;

            if(p_perso->y == 96 && p_perso->x >= 36 && p_perso->x <= 48)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 108 && p_perso->x >= 84 && p_perso->x <= 96)
                  p_perso->y += SPEED;

            if(p_perso->y == 108 && p_perso->x >= 108 && p_perso->x <= 132)
                  p_perso->y += SPEED;
            
            if(p_perso->x == 144 && p_perso->y == 96)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 60 && p_perso->x >= 156 && p_perso->x <= 256)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 72 && p_perso->x >= 264 && p_perso->x <= 312)
                  p_perso->y += SPEED;

            if(p_perso->y == 36 && p_perso->x >= 324 && p_perso->x <= 444)
                  p_perso->y += SPEED;

            if(p_perso->y == 444 && p_perso->x >= 312 & p_perso->x <= 408)
                  p_perso->y += SPEED;

            if(p_perso->y == 480 && p_perso-> x >= 420 && p_perso->x <= 432)
                  p_perso->y += SPEED;

            if(p_perso->y == 480 && p_perso-> x >= 480 && p_perso->x <= 492)
                  p_perso->y += SPEED;

            if(p_perso->y == 444 && p_perso->x >= 504 && p_perso->x <= 540)
                  p_perso->y += SPEED;

            if(p_perso->y == 468 && p_perso->x >= 552 && p_perso->x <= 612)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 624 && p_perso->x >= 624 && p_perso->x <= 648)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 624 && p_perso->x >= 516 && p_perso->x <= 540)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 324 && p_perso->x >= 324 && p_perso->x <= 360)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 348 && p_perso->x >= 372 && p_perso->x <= 384)
                  p_perso->y += SPEED;
            
            if(p_perso->x == 396 && p_perso->y == 336)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 324 && p_perso->x >= 408 && p_perso->x <= 528)
                  p_perso->y += SPEED;

            if(p_perso->y == 336 && p_perso->x >= 540 && p_perso->x <= 552)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 360 && p_perso->x >= 564 && p_perso->x <= 576)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 324 && p_perso->x >= 588 && p_perso->x <= 612)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 180 && p_perso->x >= 480 && p_perso->x <= 504)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 216 && p_perso->x >= 516 && p_perso->x <= 540)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 180 && p_perso->x >= 552 && p_perso->x <= 576)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 144 && p_perso->x >= 588 && p_perso->x <= 624)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 108 && p_perso->x >= 504 && p_perso->x <= 552)
                  p_perso->y += SPEED;
            
            if(p_perso->y == 144 && p_perso->x >= 480 && p_perso->x <= 504)
                  p_perso->y += SPEED;
            
            if(p_perso->x == 0 && p_perso->y == 516)
                  p_perso->y += SPEED;
      }
      if(xmap == 1 && ymap == 1) {
            if(p_perso->y == 84 && p_perso->x >= 360 && p_perso->x <= 408)
                  p_perso->y -= SPEED;

            // plateforme bordures bas 
            if(p_perso->y == 108 && p_perso->x >= 252 && p_perso->x <= 316)
                  p_perso->y -= SPEED;

            if(p_perso->y == 108 && p_perso->x >= 372 && p_perso->x <= 420)
                  p_perso->y -= SPEED;

            //// haut des coffres ////
            if(p_perso->y == 48 && p_perso->x >= 276 && p_perso->x <= 312)
                  p_perso->y -= SPEED;

            if(p_perso->y == 48 && p_perso->x >= 360 && p_perso->x <= 408)
                  p_perso->y -= SPEED;
      }
}

void collisions_down_map10(SDL_Rect *p_perso, int xmap, int ymap){
      if(xmap == 1 && ymap == 0){
            if(p_perso->y == 576 && p_perso->x >= 12 && p_perso->x <= 396)
                  p_perso->y -= SPEED;

            if(p_perso->y == 300 && p_perso->x >= 312 && p_perso->x <= 612)
                  p_perso->y -= SPEED;
            
            if(p_perso->y == 564 && p_perso->x >= 516 && p_perso->x <= 540)
                  p_perso->y -= SPEED;

            if(p_perso->y == 396 && p_perso->x >= 336 && p_perso->x <= 432)
                  p_perso->y -= SPEED;

            if(p_perso->y == 396 && p_perso->x >= 480 && p_perso->x <= 612)
                  p_perso->y -= SPEED;
            
            if(p_perso->y == 96 && p_perso->x >= 480 && p_perso->x <= 496)
                  p_perso->y -= SPEED;
            
            if(p_perso->y == 192 && p_perso->x >= 516 && p_perso->x <= 540)
                  p_perso->y -= SPEED;
            
            if(p_perso->y == 168 && p_perso->x >= 480 && p_perso->x <= 504)
                  p_perso->y -= SPEED;
            
            if(p_perso->y == 660 && p_perso->x >= 408 && p_perso->x <= 660)
                  p_perso->y -= SPEED;
      }
      if(xmap == 1 && ymap == 1) {
            // bords de l'escalier
            if(p_perso->y == 192 && p_perso->x == 312)
                  p_perso->y += SPEED;

            if(p_perso->y == 192 && p_perso->x == 372)
                  p_perso->y += SPEED;
            ///// stele en haut //////

            if(p_perso->y == 48 && p_perso->x >= 324 && p_perso->x <= 360)
                  p_perso->y += SPEED;

            //// limites vers les coffres tout en haut ///
            if(p_perso->y == -12 && p_perso->x >= 264 && p_perso->x <= 312)
                  p_perso->y += SPEED;

            if(p_perso->y == -12 && p_perso->x >= 372 && p_perso->x <= 420)
                  p_perso->y += SPEED;
      }
}


void collisions_left(SDL_Rect *p_perso, int xmap, int ymap) {
      collisions_left_map10(p_perso, xmap, ymap);     
}

void collisions_right(SDL_Rect *p_perso, int xmap, int ymap) {
      collisions_right_map10(p_perso, xmap, ymap);
}

void collisions_front(SDL_Rect *p_perso, int xmap, int ymap) {
      collisions_front_map10(p_perso, xmap, ymap);
}

void collisions_down(SDL_Rect *p_perso, int xmap, int ymap) {
      collisions_down_map10(p_perso, xmap, ymap);
}
