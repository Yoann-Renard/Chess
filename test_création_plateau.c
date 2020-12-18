#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                            // Création du plateau 
typedef struct {
        char* piece;
        char* nom_case;
}Echiquier;
Echiquier plateau[8][8];

int reset_plateau(void)
{
    int i;
    int j;
                            // On rempli le tableau avec les 0 ( cases vides )
    for ( i = 2 ; i < 6 ; i++)  
    {
        for ( j = 0 ; j < 8 ; j++)
        {
            plateau[i][j].piece="00";
        }
    }

                            // On place les pièces noires
    plateau[0][0].piece = plateau[0][7].piece = "tn";
    plateau[0][1].piece = plateau[0][6].piece = "cn";
    plateau[0][2].piece = plateau[0][5].piece = "fn";
    plateau[0][3].piece = "dn";
    plateau[0][4].piece = "rn";

                            // Pions noirs 
    for (i = 0; i < 8 ; i++)
    {
        plateau[1][i].piece = "pn";
    }

                            // On place les pièces blanches
    plateau[7][0].piece = plateau[7][7].piece = "tb";
    plateau[7][1].piece = plateau[7][6].piece = "cb";
    plateau[7][2].piece = plateau[7][5].piece = "fb";
    plateau[7][3].piece = "db";
    plateau[7][4].piece = "rb";

                            // Pions blancs
    for (i = 0; i < 8 ; i++)
    {
        plateau[6][i].piece = "pb";
    }
                            // Affichage du plateau sur la console
    for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
        {
            printf("%s", plateau[i][j].piece);
        }
        printf("\n");
    }
    
    return(0);
}

int main (void)
{
    reset_plateau();
    return 0;
}
