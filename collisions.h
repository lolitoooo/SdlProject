#ifndef COLLISIONS
#define COLLISIONS

void collisions_right(SDL_Rect *p_perso, int xmap, int ymap);
void collisions_left(SDL_Rect *p_perso, int xmap, int ymap);
void collisions_up(SDL_Rect *p_perso, int xmap, int ymap);
void collisions_down(SDL_Rect *p_perso, int xmap, int ymap);

#endif 