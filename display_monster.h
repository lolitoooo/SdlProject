#ifndef DISPLAY_MONSTER_H
#define DISPLAY_MONSTER_H
#include <SDL_image.h>
#include <SDL.h>
#include "struct.h"

void display_monster(Jeu *p_jeu, Img *img_monstre, SDL_Rect *dest_monstre);
void move_monster(SDL_Rect *dest_monstre, Jeu *p_jeu, SDL_Rect *p_perso, Img *img_monstre); 

#endif