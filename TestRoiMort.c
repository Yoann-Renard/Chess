int roimort(void) // retourne 0 si roi en vie 1 sinon 
{
    int echecRoi = 0;
    int echecRoiNoir = 1;
    int echecRoiBlanc = 1;
    for ( int i=0; i<8; i++)
    {
        for ( int j=0; j<8; j++)
        {
            if ( strcmp(plateau[i][j].piece,"rn") == 0 ) 
            {
                echecRoiNoir=0;
            }
            if ( strcmp(plateau[i][j].piece,"rb") == 0 ) 
            {
                echecRoiBlanc=0;
            }
        }
    }
    if (echecRoiNoir == 1 || echecRoiBlanc == 1)
    {
        echecRoi = 1;
    }
    return echecRoi;
}
