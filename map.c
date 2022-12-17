#include "struct.h"
#include "defines.h"
#include "main.h"
#include "map.h"
#include <SDL.h>
#include <SDL_image.h>


void display_map(Jeu *p_jeu, int d, int f,  int xmap,  int ymap) {

    SDL_Rect position_elem = {0, 0, TAILLE_BLOCK, TAILLE_BLOCK}; 
    int i = 0;
    int j = 0;
    Img map[12][12] = {0}; 
    int carte[12][12] = {0};
    int carte2[12][12] = {0};
    Img *p_map = *map;

    Img grass1;
    Img grass2;

    Img flower1; 
    Img flower2;

    Img ground1; 
    Img ground2;
    Img ground3;

    // 1
    carte[0][0] = HERBE1;
    carte[0][1] = HERBE1;
    carte[0][2] = HERBE1;
    carte[0][3] = HERBE1;
    carte[0][4] = HERBE1;
    carte[0][5] = HERBE1;
    carte[0][6] = HERBE1;
    carte[0][7] = HERBE1;
    carte[0][8] = HERBE1;
    carte[0][9] = HERBE1;
    carte[0][10] = HERBE1;
    carte[0][11] = HERBE1;
   

// 2
    carte[1][0] = HERBE1;
    carte[1][1] = HERBE1;
    carte[1][2] = HERBE1;
    carte[1][3] = HERBE1;
    carte[1][4] = HERBE1;
    carte[1][5] = HERBE1;
    carte[1][6] = HERBE1;
    carte[1][7] = HERBE1;
    carte[1][8] = HERBE1;
    carte[1][9] = HERBE1;
    carte[1][10] = HERBE1;
    carte[1][11] = HERBE2;
    

// 3 
    carte[2][0] = HERBE2;
    carte[2][1] = HERBE2;
    carte[2][2] = HERBE2;
    carte[2][3] = HERBE2;
    carte[2][4] = HERBE2;
    carte[2][5] = HERBE2;
    carte[2][6] = HERBE2;
    carte[2][7] = HERBE2;
    carte[2][8] = HERBE2;
    carte[2][9] = HERBE2;
    carte[2][10] = HERBE2;
    carte[2][11] = HERBE2;
    

// 4
    carte[3][0] = FLEUR1;
    carte[3][1] = FLEUR1;
    carte[3][2] = FLEUR1;
    carte[3][3] = FLEUR1;
    carte[3][4] = FLEUR1;
    carte[3][5] = FLEUR1;
    carte[3][6] = FLEUR1;
    carte[3][7] = FLEUR1;
    carte[3][8] = FLEUR1;
    carte[3][9] = FLEUR1;
    carte[3][10] = FLEUR1;
    carte[3][11] = FLEUR1;
  

// 5 
    carte[4][0] = SOL2;
    carte[4][1] = SOL1;
    carte[4][2] = SOL1;
    carte[4][3] = SOL1;
    carte[4][4] = SOL1;
    carte[4][5] = SOL1;
    carte[4][6] = SOL1;
    carte[4][7] = SOL1;
    carte[4][8] = SOL1;
    carte[4][9] = SOL1;
    carte[4][10] = SOL1;
    carte[4][11] = SOL3;
   


// 6 
    carte[5][0] = SOL2;
    carte[5][1] = SOL1;
    carte[5][2] = SOL1;
    carte[5][3] = SOL1;
    carte[5][4] = SOL1;
    carte[5][5] = SOL1;
    carte[5][6] = SOL1;
    carte[5][7] = SOL1;
    carte[5][8] = SOL1;
    carte[5][9] = SOL1;
    carte[5][10] = SOL1;
    carte[5][11] = SOL3;
    

// 7 
    carte[6][0] = SOL2;
    carte[6][1] = SOL1;
    carte[6][2] = SOL1;
    carte[6][3] = SOL1;
    carte[6][4] = SOL1;
    carte[6][5] = SOL1;
    carte[6][6] = SOL1;
    carte[6][7] = SOL1;
    carte[6][8] = SOL1;
    carte[6][9] = SOL1;
    carte[6][10] = SOL1;
    carte[6][11] = SOL3;
    


// 8 
    carte[7][0] = FLEUR1;
    carte[7][1] = FLEUR1;
    carte[7][2] = FLEUR1;
    carte[7][3] = FLEUR1;
    carte[7][4] = FLEUR1;
    carte[7][5] = FLEUR1;
    carte[7][6] = FLEUR1;
    carte[7][7] = FLEUR1;
    carte[7][8] = FLEUR1;
    carte[7][9] = FLEUR1;
    carte[7][10] = FLEUR1;
    carte[7][11] = FLEUR1;
    

// 9 
    carte[8][0] = HERBE2;
    carte[8][1] = HERBE2;
    carte[8][2] = HERBE2;
    carte[8][3] = HERBE2;
    carte[8][4] = HERBE2;
    carte[8][5] = HERBE2;
    carte[8][6] = HERBE2;
    carte[8][7] = HERBE2;
    carte[8][8] = HERBE2;
    carte[8][9] = HERBE2;
    carte[8][10] = HERBE2;
    carte[8][11] = HERBE2;
    

// 10 
    carte[9][0] = HERBE2;
    carte[9][1] = HERBE2;
    carte[9][2] = HERBE2;
    carte[9][3] = HERBE2;
    carte[9][4] = HERBE2;
    carte[9][5] = HERBE2;
    carte[9][6] = HERBE2;
    carte[9][7] = HERBE2;
    carte[9][8] = HERBE2;
    carte[9][9] = HERBE2;
    carte[9][10] = HERBE2;
    carte[9][11] = HERBE2;
    

    // 11 
    carte[10][0] = HERBE1;
    carte[10][1] = HERBE1;
    carte[10][2] = HERBE1;
    carte[10][3] = HERBE1;
    carte[10][4] = HERBE1;
    carte[10][5] = HERBE1;
    carte[10][6] = HERBE1;
    carte[10][7] = HERBE1;
    carte[10][8] = HERBE1;
    carte[10][9] = HERBE1;
    carte[10][10] = HERBE1;
    carte[10][11] = HERBE1;
    

    // 12
    carte[11][0] = HERBE1;
    carte[11][1] = HERBE1;
    carte[11][2] = HERBE1;
    carte[11][3] = HERBE1;
    carte[11][4] = HERBE1;
    carte[11][5] = HERBE1;
    carte[11][6] = HERBE1;
    carte[11][7] = HERBE1;
    carte[11][8] = HERBE1;
    carte[11][9] = HERBE1;
    carte[11][10] = HERBE1;
    carte[11][11] = HERBE1;


    carte2[0][0] = HERBE1;
    carte2[0][1] = HERBE1;
    carte2[0][2] = HERBE1;
    carte2[0][3] = FLEUR1;
    carte2[0][4] = HERBE2;
    carte2[0][5] = HERBE2;
    carte2[0][6] = HERBE2;
    carte2[0][7] = HERBE2;
    carte2[0][8] = FLEUR1;
    carte2[0][9] = HERBE1;
    carte2[0][10] = HERBE1;
    carte2[0][11] = HERBE1;

    carte2[1][0] = HERBE1;
    carte2[1][1] = HERBE1;
    carte2[1][2] = HERBE1;
    carte2[1][3] = FLEUR1;
    carte2[1][4] = SOL1;
    carte2[1][5] = SOL1;
    carte2[1][6] = SOL1;
    carte2[1][7] = SOL1;
    carte2[1][8] = FLEUR1;
    carte2[1][9] = HERBE1;
    carte2[1][10] = HERBE1;
    carte2[1][11] = HERBE1;

    carte2[2][0] = HERBE1;
    carte2[2][1] = HERBE1;
    carte2[2][2] = HERBE1;
    carte2[2][3] = FLEUR1;
    carte2[2][4] = SOL1;
    carte2[2][5] = SOL1;
    carte2[2][6] = SOL1;
    carte2[2][7] = SOL1;
    carte2[2][8] = FLEUR1;
    carte2[2][9] = HERBE1;
    carte2[2][10] = HERBE1;
    carte2[2][11] = HERBE1;

    carte2[3][0] = HERBE1;
    carte2[3][1] = HERBE1;
    carte2[3][2] = HERBE1;
    carte2[3][3] = FLEUR1;
    carte2[3][4] = SOL1;
    carte2[3][5] = SOL1;
    carte2[3][6] = SOL1;
    carte2[3][7] = SOL1;
    carte2[3][8] = FLEUR1;
    carte2[3][9] = HERBE1;
    carte2[3][10] = HERBE1;
    carte2[3][11] = HERBE1;

     
    carte2[4][0] = HERBE1;
    carte2[4][1] = HERBE1;
    carte2[4][2] = HERBE1;
    carte2[4][3] = FLEUR1;
    carte2[4][4] = SOL1;
    carte2[4][5] = SOL1;
    carte2[4][6] = SOL1;
    carte2[4][7] = SOL1;
    carte2[4][8] = FLEUR1;
    carte2[4][9] = HERBE1;
    carte2[4][10] = HERBE1;
    carte2[4][11] = HERBE1;

    carte2[5][0] = HERBE1;
    carte2[5][1] = HERBE1;
    carte2[5][2] = HERBE1;
    carte2[5][3] = FLEUR1;
    carte2[5][4] = SOL1;
    carte2[5][5] = SOL1;
    carte2[5][6] = SOL1;
    carte2[5][7] = SOL1;
    carte2[5][8] = FLEUR1;
    carte2[5][9] = HERBE1;
    carte2[5][10] = HERBE1;
    carte2[5][11] = HERBE1;

    carte2[6][0] = HERBE1;
    carte2[6][1] = HERBE1;
    carte2[6][2] = HERBE1;
    carte2[6][3] = FLEUR1;
    carte2[6][4] = SOL1;
    carte2[6][5] = SOL1;
    carte2[6][6] = SOL1;
    carte2[6][7] = SOL1;
    carte2[6][8] = FLEUR1;
    carte2[6][9] = HERBE1;
    carte2[6][10] = HERBE1;
    carte2[6][11] = HERBE1;

    carte2[7][0] = HERBE1;
    carte2[7][1] = HERBE1;
    carte2[7][2] = HERBE1;
    carte2[7][3] = FLEUR1;
    carte2[7][4] = SOL1;
    carte2[7][5] = SOL1;
    carte2[7][6] = SOL1;
    carte2[7][7] = SOL1;
    carte2[7][8] = FLEUR1;
    carte2[7][9] = HERBE1;
    carte2[7][10] = HERBE1;
    carte2[7][11] = HERBE1;

    carte2[8][0] = HERBE1;
    carte2[8][1] = HERBE1;
    carte2[8][2] = HERBE1;
    carte2[8][3] = FLEUR1;
    carte2[8][4] = SOL1;
    carte2[8][5] = SOL1;
    carte2[8][6] = SOL1;
    carte2[8][7] = SOL1;
    carte2[8][8] = FLEUR1;
    carte2[8][9] = HERBE1;
    carte2[8][10] = HERBE1;
    carte2[8][11] = HERBE1;

    carte2[9][0] = HERBE1;
    carte2[9][1] = HERBE1;
    carte2[9][2] = HERBE1;
    carte2[9][3] = FLEUR1;
    carte2[9][4] = SOL1;
    carte2[9][5] = SOL1;
    carte2[9][6] = SOL1;
    carte2[9][7] = SOL1;
    carte2[9][8] = FLEUR1;
    carte2[9][9] = HERBE1;
    carte2[9][10] = HERBE1;
    carte2[9][11] = HERBE1;

    carte2[10][0] = HERBE1;
    carte2[10][1] = HERBE1;
    carte2[10][2] = HERBE1;
    carte2[10][3] = FLEUR1;
    carte2[10][4] = SOL1;
    carte2[10][5] = SOL1;
    carte2[10][6] = SOL1;
    carte2[10][7] = SOL1;
    carte2[10][8] = FLEUR1;
    carte2[10][9] = HERBE1;
    carte2[10][10] = HERBE1;
    carte2[10][11] = HERBE1;

    carte2[11][0] = HERBE1;
    carte2[11][1] = HERBE1;
    carte2[11][2] = HERBE1;
    carte2[11][3] = FLEUR1;
    carte2[11][4] = SOL1;
    carte2[11][5] = SOL1;
    carte2[11][6] = SOL1;
    carte2[11][7] = SOL1;
    carte2[11][8] = FLEUR1;
    carte2[11][9] = HERBE1;
    carte2[11][10] = HERBE1;
    carte2[11][11] = HERBE1;
    
    
    ////////////// textures d'herbe ///////////////////

    grass1.surface = IMG_Load("tiles/herbe/tile026.png");
    grass1.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, grass1.surface);

    if(grass1.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }
    
    grass2.surface = IMG_Load("tiles/herbe/tile025.png");
    grass2.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, grass2.surface);

    if(grass2.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }

    ////////////// textures de fleurs ///////////////////

    flower1.surface = IMG_Load("tiles/herbe/tile029.png");
    flower1.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, flower1.surface);

    if(flower1.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }

    flower2.surface = IMG_Load("tiles/herbe/tile021.png");
    flower2.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, flower2.surface);

    if(flower2.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }

    ////////////// textures de sol ///////////////////

    ground1.surface = IMG_Load("tiles/herbe/tile032.png");
    ground1.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, ground1.surface);

    if(ground1.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }

    ground2.surface = IMG_Load("tiles/herbe/tile034.png");
    ground2.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, ground2.surface);

    if(ground2.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }

    ground3.surface = IMG_Load("tiles/herbe/tile035.png");
    ground3.texture = SDL_CreateTextureFromSurface(p_jeu->gRenderer, ground3.surface);

    if(ground3.texture == NULL) {
        printf("erreur de creation de la texture : %s\n", SDL_GetError());
        exit(1); 
    }

    /////////////////////////////////////////////////////
                         
    for(i = 0; i < 12; i++) { // nb lignes de la fenetre - longueur 
        for(j = 0; j < 12; j++) { // nb colonnes de la fenetre - largeur
            position_elem.x = j*TAILLE_BLOCK; // l'abscisse de l'element + 34
            position_elem.y = i*TAILLE_BLOCK; //  l'ordonnÃ©e de l'element + 34
            
            if(xmap == 0 && ymap == 0) {

            switch(carte[i][j]) {
                case 0: // herbe1
                map[i][j].texture = grass1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 1: // herbe2
                map[i][j].texture = grass2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                    case 2: // fleur1
                map[i][j].texture = flower1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 3: // fleur2
                map[i][j].texture = flower2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 4: // sol1
                map[i][j].texture = ground1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 5: // sol2
                map[i][j].texture = ground2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 6: // sol3
                map[i][j].texture = ground3.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                default:
                break;
                }

            } else if(xmap == 1 && ymap == 0) {

                switch(carte2[i][j]) {
                case 0: // herbe1
                map[i][j].texture = grass1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 1: // herbe2
                map[i][j].texture = grass2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                    case 2: // fleur1
                map[i][j].texture = flower1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 3: // fleur2
                map[i][j].texture = flower2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 4: // sol1
                map[i][j].texture = ground1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 5: // sol2
                map[i][j].texture = ground2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 6: // sol3
                map[i][j].texture = ground3.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                default:
                break;
                }
            }

            else if(xmap == 0 && ymap == 1) {

                switch(carte2[i][j]) {
                case 0: // herbe1
                map[i][j].texture = grass1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 1: // herbe2
                map[i][j].texture = grass2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                    case 2: // fleur1
                map[i][j].texture = flower1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 3: // fleur2
                map[i][j].texture = flower2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 4: // sol1
                map[i][j].texture = ground1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 5: // sol2
                map[i][j].texture = ground2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 6: // sol3
                map[i][j].texture = ground3.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                default:
                break;
                }
            }

            else if(xmap == 1 && ymap == 1) {

                switch(carte[i][j]) {
                case 0: // herbe1
                map[i][j].texture = grass1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 1: // herbe2
                map[i][j].texture = grass2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                    case 2: // fleur1
                map[i][j].texture = flower1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 3: // fleur2
                map[i][j].texture = flower2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 4: // sol1
                map[i][j].texture = ground1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 5: // sol2
                map[i][j].texture = ground2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 6: // sol3
                map[i][j].texture = ground3.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                default:
                break;
                }
            }

            else {

                switch(carte[i][j]) {

                case 0: // herbe1
                map[i][j].texture = grass1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 1: // herbe2
                map[i][j].texture = grass2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                    case 2: // fleur1
                map[i][j].texture = flower1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 3: // fleur2
                map[i][j].texture = flower2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 4: // sol1
                map[i][j].texture = ground1.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 5: // sol2
                map[i][j].texture = ground2.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                case 6: // sol3
                map[i][j].texture = ground3.texture;
                SDL_RenderCopy(p_jeu->gRenderer, (map[i][j]).texture, NULL, &position_elem);
                break;

                default:
                break;
                }
            }

        }
    }

        SDL_FreeSurface(grass1.surface);
        SDL_FreeSurface(grass2.surface);

        SDL_FreeSurface(flower1.surface);
        SDL_FreeSurface(flower2.surface);

        SDL_FreeSurface(ground1.surface);
        SDL_FreeSurface(ground2.surface);
        SDL_FreeSurface(ground3.surface);
    }




/*

    
*/