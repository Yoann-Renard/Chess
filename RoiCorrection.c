nt roi( int x, int y, int *deplacement)
{
    int j = 0;
    
    //test si la piece est blanche ou noire
    if(plateau[x][y].piece[1] == 'b')
    {
        //arriere droite
        if((x+1 < 8) && (y+1 < 8) && (strcmp(plateau[x+1][y+1].piece, "00") == 0 || plateau[x+1][y+1].piece[1] == 'n'))
        {
            deplacement[j] = x+1;
            j++;
            deplacement[j] = y+1;
            j++;
            
        }
        // arriere
        if((x+1 < 8) && (y < 8) && (strcmp(plateau[x+1][y].piece,"00") == 0 || plateau[x+1][y].piece[1] == 'n'))
        {
            deplacement[j] = x+1;
            j++;
            deplacement[j] = y;
            j++;
            
        }
        //arriere gauche
        if((x+1 < 8) && (y-1 >= 0) && (strcmp(plateau[x+1][y-1].piece, "00") == 0 || plateau[x+1][y-1].piece[1] == 'n'))
        {
            deplacement[j] = x+1;
            j++;
            deplacement[j] = y-1;
            j++;
            
        }
        //gauche
        if((x < 8) && (y-1 >= 8) && (strcmp(plateau[x][y-1].piece, "00") == 0 || plateau[x][y-1].piece[1] == 'n'))
        {
            deplacement[j] = x;
            j++;
            deplacement[j] = y-1;
            j++;
        }
        //avant gauche
        if((x-1 >= 0) && (y-1 >= 0) && (strcmp(plateau[x-1][y-1].piece, "00") == 0 || plateau[x-1][y-1].piece[1] == 'n'))
        {
            deplacement[j] = x-1;
            j++;
            deplacement[j] = y-1;
            j++;
            
        }
        //avant
        if((x-1 >= 0) && (y < 8) && (strcmp(plateau[x-1][y].piece, "00") == 0 || plateau[x-1][y].piece[1] == 'n'))
        {
            deplacement[j] = x-1;
            j++;
            deplacement[j] = y;
            j++;
            
        }
        //avant droite
        if((x-1 >=0) && (y+1 < 8) && (strcmp(plateau[x-1][y+1].piece,"00") == 0 || plateau[x-1][y+1].piece[1] == 'n'))
        {
            deplacement[j] = x-1;
            j++;
            deplacement[j] = y+1;
            j++;
            
        }
        //droite
        if((x < 8) && (y+1 < 8) && (strcmp(plateau[x][y+1].piece, "00") == 0 || plateau[x][y+1].piece[1] == 'n'))
        {
            deplacement[j] = x;
            j++;
            deplacement[j] = y+1;
            j++;
                        
        }
        
    }

    if(plateau[x][y].piece[1] == 'n')
    {
        //arriere droite
        if((x+1 < 8) && (y+1 < 8) && (strcmp(plateau[x+1][y+1].piece, "00") == 0 || plateau[x+1][y+1].piece[1] == 'b'))
        {
            deplacement[j] = x+1;
            j++;
            deplacement[j] = y+1;
            j++;
            
        }
        // arriere
        if((x+1 < 8) && (y < 8) && (strcmp(plateau[x+1][y].piece,"00") == 0 || plateau[x+1][y].piece[1] == 'b'))
        {
            deplacement[j] = x+1;
            j++;
            deplacement[j] = y;
            j++;
        }
        //arriere gauche
        if((x+1 < 8) && (y-1 >= 0) && (strcmp(plateau[x+1][y-1].piece, "00") == 0 || plateau[x+1][y-1].piece[1] == 'b'))
        {
            deplacement[j] = x+1;
            j++;
            deplacement[j] = y-1;
            j++;
        }
        //gauche
        if((x < 8) && (y-1 >=0) && (strcmp(plateau[x][y-1].piece, "00") == 0 || plateau[x][y-1].piece[1] == 'b'))
        {
            deplacement[j] = x;
            j++;
            deplacement[j] = y-1;
            j++;
            
        }
        //avant gauche
        if((x-1 >= 0) && (y-1 >=0) && (strcmp(plateau[x-1][y-1].piece, "00") == 0 || plateau[x-1][y-1].piece[1] == 'b'))
        {
            deplacement[j] = x-1;
            j++;
            deplacement[j] = y-1;
            j++;
            
        }
        //avant
        if((x-1 >= 0) && (y < 8) && (strcmp(plateau[x-1][y].piece, "00") == 0 || plateau[x-1][y].piece[1] == 'b'))
        {
            deplacement[j] = x-1;
            j++;
            deplacement[j] = y;
            j++;
            
        }
        //avant droite
        if((x-1 >=0) && (y+1 < 8) && (strcmp(plateau[x-1][y+1].piece,"00") == 0 || plateau[x-1][y+1].piece[1] == 'b'))
        {
            deplacement[j] = x-1;
            j++;
            deplacement[j] = y+1;
            j++;
            
        }
        //droite
        if((x < 8) && (y+1 < 8) && (strcmp(plateau[x][y+1].piece, "00") == 0 || plateau[x][y+1].piece[1] == 'b'))
        {
            deplacement[j] = x;
            j++;
            deplacement[j] = y+1;
            j++;
                        
        }
        
    }
    return j;
}
