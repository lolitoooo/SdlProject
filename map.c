#include "struct.h"
#include "defines.h"
#include "main.h"
#include "map.h"
#include <SDL.h>
#include <SDL_image.h>


void display_map(Jeu *p_jeu, int xMap, int yMap) {

    SDL_Rect position_elem = {0, 0, TAILLE_BLOCK, TAILLE_BLOCK}; 
    int i = 0;
    int j = 0;
    Img map[12][12] = {0}; 
    int carte0[12][12] = {0};
    int carte1[12][12] = {0};
    Img *p_map = *map;

    Img grass1;
    Img grass2;

    Img flower1; 
    Img flower2;

    Img ground1; 
    Img ground2;
    Img ground3;

    // 1
    carte0[0][0] = HERBE1;
    carte0[0][1] = HERBE1;
    carte0[0][2] = HERBE1;
    carte0[0][3] = HERBE1;
    carte0[0][4] = HERBE1;
    carte0[0][5] = HERBE1;
    carte0[0][6] = HERBE1;
    carte0[0][7] = HERBE1;
    carte0[0][8] = HERBE1;
    carte0[0][9] = HERBE1;
    carte0[0][10] = HERBE1;
    carte0[0][11] = HERBE1;
   

// 2
    carte0[1][0] = HERBE1;
    carte0[1][1] = HERBE1;
    carte0[1][2] = HERBE1;
    carte0[1][3] = HERBE1;
    carte0[1][4] = HERBE1;
    carte0[1][5] = HERBE1;
    carte0[1][6] = HERBE1;
    carte0[1][7] = HERBE1;
    carte0[1][8] = HERBE1;
    carte0[1][9] = HERBE1;
    carte0[1][10] = HERBE1;
    carte0[1][11] = HERBE2;
    

// 3 
    carte0[2][0] = HERBE2;
    carte0[2][1] = HERBE2;
    carte0[2][2] = HERBE2;
    carte0[2][3] = HERBE2;
    carte0[2][4] = HERBE2;
    carte0[2][5] = HERBE2;
    carte0[2][6] = HERBE2;
    carte0[2][7] = HERBE2;
    carte0[2][8] = HERBE2;
    carte0[2][9] = HERBE2;
    carte0[2][10] = HERBE2;
    carte0[2][11] = HERBE2; 

// 4
    carte0[3][0] = FLEUR1;
    carte0[3][1] = FLEUR1;
    carte0[3][2] = FLEUR1;
    carte0[3][3] = FLEUR1;
    carte0[3][4] = FLEUR1;
    carte0[3][5] = FLEUR1;
    carte0[3][6] = FLEUR1;
    carte0[3][7] = FLEUR1;
    carte0[3][8] = FLEUR1;
    carte0[3][9] = FLEUR1;
    carte0[3][10] = FLEUR1;
    carte0[3][11] = FLEUR1; 

// 5 
    carte0[4][0] = SOL2;
    carte0[4][1] = SOL1;
    carte0[4][2] = SOL1;
    carte0[4][3] = SOL1;
    carte0[4][4] = SOL1;
    carte0[4][5] = SOL1;
    carte0[4][6] = SOL1;
    carte0[4][7] = SOL1;
    carte0[4][8] = SOL1;
    carte0[4][9] = SOL1;
    carte0[4][10] = SOL1;
    carte0[4][11] = SOL3;  

// 6 
    carte0[5][0] = SOL2;
    carte0[5][1] = SOL1;
    carte0[5][2] = SOL1;
    carte0[5][3] = SOL1;
    carte0[5][4] = SOL1;
    carte0[5][5] = SOL1;
    carte0[5][6] = SOL1;
    carte0[5][7] = SOL1;
    carte0[5][8] = SOL1;
    carte0[5][9] = SOL1;
    carte0[5][10] = SOL1;
    carte0[5][11] = SOL3;
    

// 7 
    carte0[6][0] = SOL2;
    carte0[6][1] = SOL1;
    carte0[6][2] = SOL1;
    carte0[6][3] = SOL1;
    carte0[6][4] = SOL1;
    carte0[6][5] = SOL1;
    carte0[6][6] = SOL1;
    carte0[6][7] = SOL1;
    carte0[6][8] = SOL1;
    carte0[6][9] = SOL1;
    carte0[6][10] = SOL1;
    carte0[6][11] = SOL3;
    


// 8 
    carte0[7][0] = FLEUR1;
    carte0[7][1] = FLEUR1;
    carte0[7][2] = FLEUR1;
    carte0[7][3] = FLEUR1;
    carte0[7][4] = FLEUR1;
    carte0[7][5] = FLEUR1;
    carte0[7][6] = FLEUR1;
    carte0[7][7] = FLEUR1;
    carte0[7][8] = FLEUR1;
    carte0[7][9] = FLEUR1;
    carte0[7][10] = FLEUR1;
    carte0[7][11] = FLEUR1;
    

// 9 
    carte0[8][0] = HERBE2;
    carte0[8][1] = HERBE2;
    carte0[8][2] = HERBE2;
    carte0[8][3] = HERBE2;
    carte0[8][4] = HERBE2;
    carte0[8][5] = HERBE2;
    carte0[8][6] = HERBE2;
    carte0[8][7] = HERBE2;
    carte0[8][8] = HERBE2;
    carte0[8][9] = HERBE2;
    carte0[8][10] = HERBE2;
    carte0[8][11] = HERBE2;
    

// 10 
    carte0[9][0] = HERBE2;
    carte0[9][1] = HERBE2;
    carte0[9][2] = HERBE2;
    carte0[9][3] = HERBE2;
    carte0[9][4] = HERBE2;
    carte0[9][5] = HERBE2;
    carte0[9][6] = HERBE2;
    carte0[9][7] = HERBE2;
    carte0[9][8] = HERBE2;
    carte0[9][9] = HERBE2;
    carte0[9][10] = HERBE2;
    carte0[9][11] = HERBE2; 

    // 11 
    carte0[10][0] = HERBE1;
    carte0[10][1] = HERBE1;
    carte0[10][2] = HERBE1;
    carte0[10][3] = HERBE1;
    carte0[10][4] = HERBE1;
    carte0[10][5] = HERBE1;
    carte0[10][6] = HERBE1;
    carte0[10][7] = HERBE1;
    carte0[10][8] = HERBE1;
    carte0[10][9] = HERBE1;
    carte0[10][10] = HERBE1;
    carte0[10][11] = HERBE1; 

    // 12
    carte0[11][0] = HERBE1;
    carte0[11][1] = HERBE1;
    carte0[11][2] = HERBE1;
    carte0[11][3] = HERBE1;
    carte0[11][4] = HERBE1;
    carte0[11][5] = HERBE1;
    carte0[11][6] = HERBE1;
    carte0[11][7] = HERBE1;
    carte0[11][8] = HERBE1;
    carte0[11][9] = HERBE1;
    carte0[11][10] = HERBE1;
    carte0[11][11] = HERBE1;


    carte1[0][0] = HERBE1;
    carte1[0][1] = HERBE1;
    carte1[0][2] = HERBE1;
    carte1[0][3] = FLEUR1;
    carte1[0][4] = HERBE2;
    carte1[0][5] = HERBE2;
    carte1[0][6] = HERBE2;
    carte1[0][7] = HERBE2;
    carte1[0][8] = FLEUR1;
    carte1[0][9] = HERBE1;
    carte1[0][10] = HERBE1;
    carte1[0][11] = HERBE1;

    carte1[1][0] = HERBE1;
    carte1[1][1] = HERBE1;
    carte1[1][2] = HERBE1;
    carte1[1][3] = FLEUR1;
    carte1[1][4] = SOL1;
    carte1[1][5] = SOL1;
    carte1[1][6] = SOL1;
    carte1[1][7] = SOL1;
    carte1[1][8] = FLEUR1;
    carte1[1][9] = HERBE1;
    carte1[1][10] = HERBE1;
    carte1[1][11] = HERBE1;

    carte1[2][0] = HERBE1;
    carte1[2][1] = HERBE1;
    carte1[2][2] = HERBE1;
    carte1[2][3] = FLEUR1;
    carte1[2][4] = SOL1;
    carte1[2][5] = SOL1;
    carte1[2][6] = SOL1;
    carte1[2][7] = SOL1;
    carte1[2][8] = FLEUR1;
    carte1[2][9] = HERBE1;
    carte1[2][10] = HERBE1;
    carte1[2][11] = HERBE1;

    carte1[3][0] = HERBE1;
    carte1[3][1] = HERBE1;
    carte1[3][2] = HERBE1;
    carte1[3][3] = FLEUR1;
    carte1[3][4] = SOL1;
    carte1[3][5] = SOL1;
    carte1[3][6] = SOL1;
    carte1[3][7] = SOL1;
    carte1[3][8] = FLEUR1;
    carte1[3][9] = HERBE1;
    carte1[3][10] = HERBE1;
    carte1[3][11] = HERBE1;

     
    carte1[4][0] = HERBE1;
    carte1[4][1] = HERBE1;
    carte1[4][2] = HERBE1;
    carte1[4][3] = FLEUR1;
    carte1[4][4] = SOL1;
    carte1[4][5] = SOL1;
    carte1[4][6] = SOL1;
    carte1[4][7] = SOL1;
    carte1[4][8] = FLEUR1;
    carte1[4][9] = HERBE1;
    carte1[4][10] = HERBE1;
    carte1[4][11] = HERBE1;

    carte1[5][0] = HERBE1;
    carte1[5][1] = HERBE1;
    carte1[5][2] = HERBE1;
    carte1[5][3] = FLEUR1;
    carte1[5][4] = SOL1;
    carte1[5][5] = SOL1;
    carte1[5][6] = SOL1;
    carte1[5][7] = SOL1;
    carte1[5][8] = FLEUR1;
    carte1[5][9] = HERBE1;
    carte1[5][10] = HERBE1;
    carte1[5][11] = HERBE1;

    carte1[6][0] = HERBE1;
    carte1[6][1] = HERBE1;
    carte1[6][2] = HERBE1;
    carte1[6][3] = FLEUR1;
    carte1[6][4] = SOL1;
    carte1[6][5] = SOL1;
    carte1[6][6] = SOL1;
    carte1[6][7] = SOL1;
    carte1[6][8] = FLEUR1;
    carte1[6][9] = HERBE1;
    carte1[6][10] = HERBE1;
    carte1[6][11] = HERBE1;

    carte1[7][0] = HERBE1;
    carte1[7][1] = HERBE1;
    carte1[7][2] = HERBE1;
    carte1[7][3] = FLEUR1;
    carte1[7][4] = SOL1;
    carte1[7][5] = SOL1;
    carte1[7][6] = SOL1;
    carte1[7][7] = SOL1;
    carte1[7][8] = FLEUR1;
    carte1[7][9] = HERBE1;
    carte1[7][10] = HERBE1;
    carte1[7][11] = HERBE1;

    carte1[8][0] = HERBE1;
    carte1[8][1] = HERBE1;
    carte1[8][2] = HERBE1;
    carte1[8][3] = FLEUR1;
    carte1[8][4] = SOL1;
    carte1[8][5] = SOL1;
    carte1[8][6] = SOL1;
    carte1[8][7] = SOL1;
    carte1[8][8] = FLEUR1;
    carte1[8][9] = HERBE1;
    carte1[8][10] = HERBE1;
    carte1[8][11] = HERBE1;

    carte1[9][0] = HERBE1;
    carte1[9][1] = HERBE1;
    carte1[9][2] = HERBE1;
    carte1[9][3] = FLEUR1;
    carte1[9][4] = SOL1;
    carte1[9][5] = SOL1;
    carte1[9][6] = SOL1;
    carte1[9][7] = SOL1;
    carte1[9][8] = FLEUR1;
    carte1[9][9] = HERBE1;
    carte1[9][10] = HERBE1;
    carte1[9][11] = HERBE1;

    carte1[10][0] = HERBE1;
    carte1[10][1] = HERBE1;
    carte1[10][2] = HERBE1;
    carte1[10][3] = FLEUR1;
    carte1[10][4] = SOL1;
    carte1[10][5] = SOL1;
    carte1[10][6] = SOL1;
    carte1[10][7] = SOL1;
    carte1[10][8] = FLEUR1;
    carte1[10][9] = HERBE1;
    carte1[10][10] = HERBE1;
    carte1[10][11] = HERBE1;

    carte1[11][0] = HERBE1;
    carte1[11][1] = HERBE1;
    carte1[11][2] = HERBE1;
    carte1[11][3] = FLEUR1;
    carte1[11][4] = SOL1;
    carte1[11][5] = SOL1;
    carte1[11][6] = SOL1;
    carte1[11][7] = SOL1;
    carte1[11][8] = FLEUR1;
    carte1[11][9] = HERBE1;
    carte1[11][10] = HERBE1;
    carte1[11][11] = HERBE1;
    

    

    
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
    switch (xMap)
    {
    case 0:
        for(i = 0; i < 12; i++) { // nb lignes de la fenetre - longueur 
        for(j = 0; j < 12; j++) { // nb colonnes de la fenetre - largeur
            position_elem.x = j*TAILLE_BLOCK; // l'abscisse de l'element + 34
            position_elem.y = i*TAILLE_BLOCK; //  l'ordonnÃ©e de l'element + 34
            

            switch(carte0[i][j]) {
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
    
    break;

    case 1:
    for(i = 0; i < 12; i++) { // nb lignes de la fenetre - longueur 
        for(j = 0; j < 12; j++) { // nb colonnes de la fenetre - largeur
            position_elem.x = j*TAILLE_BLOCK; // l'abscisse de l'element + 34
            position_elem.y = i*TAILLE_BLOCK; //  l'ordonnÃ©e de l'element + 34
            

            switch(carte1[i][j]) {
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

    break;
    
    default:
        break;
    }

    ////
                         
   /* for(i = 0; i < 12; i++) { // nb lignes de la fenetre - longueur 
        for(j = 0; j < 12; j++) { // nb colonnes de la fenetre - largeur
            position_elem.x = j*TAILLE_BLOCK; // l'abscisse de l'element + 34
            position_elem.y = i*TAILLE_BLOCK; //  l'ordonnÃ©e de l'element + 34
            

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
*/
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