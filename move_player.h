#ifndef MOVE_PLAYER_H
#define MOVE_PLAYER_H
#include <SDL_image.h>
#include <SDL.h>
#include "struct.h"

SDL_Rect display_perso(Jeu *p_jeu, Img *p_img, SDL_Rect *p_perso);
int load_anim_left(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso);
int load_anim_right(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso);
int load_anim_forward(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso);
int load_anim_back(int *c, Jeu *p_jeu, Img *img, SDL_Rect *p_perso);


#endif