int echec(void) // retourne 0 si aucun echec, 1 si echec
{
    int *deplacement = (int*)malloc(20*sizeof(int));
    int xn,yn,xb,yb;
    int d;
    // Récupération Des Rois :
    for ( int i=0; i<8; i++)
    {
        for ( int j=0; j<8; j++)
        {
            if ( strcmp(plateau[i][j].piece,"rn") == 0 ) 
            {
                xn=i; 
                yn=j;
            }
            if ( strcmp(plateau[i][j].piece,"rb") == 0 ) 
            {
                xb=i; 
                yb=j;
            }
        }
    }
    
    //printf("Roi Noir : %d|%d\nRoi Blanc : %d|%d\n",xn,yn,xb,yb);  
    // Test Echec
    for ( int i=0; i<8; i++ )
    {
        for ( int j=0; j<8; j++, d=0)
        {
            switch(plateau[i][j].piece[0])
            {
                case '0': 
                    break;
                case 'r':
                    break;
                case 'd':
                    d = reine(i,j,deplacement);
                    for ( int k=0; k<d; k=k+2 )
                    {
                        if ( plateau[i][j].piece[1] == 'b')
                        {
                        if ((deplacement[k]==xn && deplacement[k+1]==yn))
                        {
                            printf("Roi noir en échec\n");
                            return 1;
                        }
                        }
                        else
                        {
                            if ((deplacement[k]==xb && deplacement[k+1]==yb))
                            {
                                printf("Roi blanc en échec\n");
                                return 1;
                            }
                        }
                    }
                    break;
                case 'p':
                    //d = pion(i,j,deplacement);
                    if ( plateau[i][j].piece[1] == 'b')
                    {
                        if((i-1>=0 && j+1<8 && strcmp(plateau[i-1][j+1].piece,"rn") == 0) || (i-1>=0 && j-1>=0 && strcmp(plateau[i-1][j-1].piece,"rn") == 0 ))
                        {
                            printf("Roi noir en échec\n");
                            return 1;
                        }
                    }
                    else
                    {
                        if((i+1<8 && j+1<8 && strcmp(plateau[i+1][j+1].piece,"rn") == 0) || (i+1<8 && j-1>=0 && strcmp(plateau[i+1][j-1].piece,"rn") == 0))
                        {
                            printf("Roi blanc en échec\n");
                            return 1;
                        }
                    }
                    
                    break;
                case 'c':
                    d = cavalier(i,j,deplacement);
                    for ( int k=0; k<d; k=k+2 )
                    {
                        if ( plateau[i][j].piece[1] == 'b')
                        {
                        if ((deplacement[k]==xn && deplacement[k+1]==yn))
                        {
                            printf("Roi noir en échec\n");
                            return 1;
                        }
                        }
                        else
                        {
                            if ((deplacement[k]==xb && deplacement[k+1]==yb))
                            {
                                printf("Roi blanc en échec\n");
                                return 1;
                            }
                        }
                    }
                    break;
                case 't':
                    d = tour(i,j,deplacement);
                    for ( int k=0; k<d; k=k+2 )
                    {
                        if ( plateau[i][j].piece[1] == 'b')
                        {
                        if ((deplacement[k]==xn && deplacement[k+1]==yn))
                        {
                            printf("Roi noir en échec\n");
                            return 1;
                        }
                        }
                        else
                        {
                            if ((deplacement[k]==xb && deplacement[k+1]==yb))
                            {
                                printf("Roi blanc en échec\n");
                                return 1;
                            }
                        }
                    }
                    break;
                case 'f':
                    d = fou(i,j,deplacement);
                    for ( int k=0; k<j; k=k+2 )
                    {
                        if ( plateau[i][j].piece[1] == 'b')
                        {
                        if ((deplacement[k]==xn && deplacement[k+1]==yn))
                        {
                            printf("Roi noir en échec\n");
                            return 1;
                        }
                        }
                        else
                        {
                            if ((deplacement[k]==xb && deplacement[k+1]==yb))
                            {
                                printf("Roi blanc en échec\n");
                                return 1;
                            }
                        }
                    }
                    break;
            }
        }
    }
    return 0;
}
