void chessboardInit(string chessboard[9][9],bool chessboard_b[9][9]) 
{
    Figura f;
    for (int i = 0; i < 8; i++)
    {   
        for (int j = 1; j < 9; j++)
        {           
            chessboard[i][j] = "|__|";
            chessboard_b[i][j] = 0;
        }   
    }
    for (int i = 1; i < 9; i++)
    {                                                       
        chessboard[1][i] = "|" + f.Pb + "|"; chessboard_b[1][i] = 1;
        chessboard[6][i] = "|" + f.Pw + "|"; chessboard_b[6][i] = 1;
    }
    chessboard[0][1] = chessboard[0][8] = "|" + f.Rb + "|"; chessboard_b[0][1] = chessboard_b[0][8] = 1;
    chessboard[7][1] = chessboard[7][8] = "|" + f.Rw + "|"; chessboard_b[7][1] = chessboard_b[7][8] = 1;
    chessboard[0][2] = chessboard[0][7] = "|" + f.Kb + "|"; chessboard_b[0][2] = chessboard_b[0][7] = 1;
    chessboard[7][2] = chessboard[7][7] = "|" + f.Kw + "|"; chessboard_b[7][2] = chessboard_b[7][7] = 1;
    chessboard[0][3] = chessboard[0][6] = "|" + f.Bb + "|"; chessboard_b[0][3] = chessboard_b[0][6] = 1;
    chessboard[7][3] = chessboard[7][6] = "|" + f.Bw + "|"; chessboard_b[7][3] = chessboard_b[7][6] = 1;
    chessboard[0][4] = "|" + f.Qb + "|"; chessboard_b[0][4] = 1;
    chessboard[0][5] = "|" + f.Kb + "|"; chessboard_b[0][5] = 1;
    chessboard[7][4] = "|" + f.Qw + "|"; chessboard_b[7][4] = 1;
    chessboard[7][5] = "|" + f.Kw + "|"; chessboard_b[7][5] = 1;
}