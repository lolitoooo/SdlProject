#include "defines.h"
#include "main.h"
#include "struct.h"
#include "map.h"
#include "collisions.h"
#include <SDL_image.h>
#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>


void collisions_left(SDL_Rect *p_perso, int xmap, int ymap) {

         if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 48)) {
               if(p_perso->y >= 216 && p_perso->y <= 384) p_perso->x -= SPEED;
              }
        if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 96)) {
              if(p_perso->y == 144) p_perso->x -= SPEED;
              }

               if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 132)) {
              if(p_perso->y >= 0 && p_perso->y <= 60) p_perso->x -= SPEED;
              }
}

void collisions_right(SDL_Rect *p_perso, int xmap, int ymap) {

         if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 48)) {
               if(p_perso->y >= 216 && p_perso->y <= 384) p_perso->x -= SPEED;
              }
        if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 96)) {
              if(p_perso->y == 144) p_perso->x -= SPEED;
              }

               if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 132)) {
              if(p_perso->y >= 0 && p_perso->y <= 60) p_perso->x -= SPEED;
              }
}

void collisions_up(SDL_Rect *p_perso, int xmap, int ymap) {

         if(xmap == 0 && ymap == 0 && ((p_perso->y) - SPEED == 48)) {
              if(p_perso->x >= 124 && p_perso->x <= 216) p_perso->y += SPEED;
              }
}

void collisions_back(SDL_Rect *p_perso, int xmap, int ymap) {

         if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 48)) {
               if(p_perso->y >= 216 && p_perso->y <= 384) p_perso->x -= SPEED;
              }
        if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 96)) {
              if(p_perso->y == 144) p_perso->x -= SPEED;
              }

               if(xmap == 0 && ymap == 0 && ((p_perso->x) + SPEED == 132)) {
              if(p_perso->y >= 0 && p_perso->y <= 60) p_perso->x -= SPEED;
              }
}