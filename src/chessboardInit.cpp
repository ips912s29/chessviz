#include <iostream>
#include <string>
struct Figura {
    const std::string Kingw = "+w", Kingb = "+b", Qw = "Qw", Qb = "Qb",
                      Bw = "Bw", Bb = "Bb", Kw = "Kw", Kb = "Kb", Rw = "Rw",
                      Rb = "Rb", Pw = "Pw", Pb = "Pb";
};
void chessboardInit(std::string chessboard[9][9], bool chessboard_b[9][9])
{
    Figura f;
    for (int i = 0; i < 8; i++) {
        for (int j = 1; j < 9; j++) {
            chessboard[i][j] = "|__|";
            chessboard_b[i][j] = 0;
        }
    }
    for (int i = 1; i < 9; i++) {
        chessboard[1][i] = "|" + f.Pb + "|";
        chessboard[6][i] = "|" + f.Pw + "|";
        chessboard_b[1][i] = 1;
        chessboard_b[6][i] = 1;
        chessboard_b[0][i] = 1;
        chessboard_b[7][i] = 1;
    }
    chessboard[0][1] = chessboard[0][8] = "|" + f.Rb + "|";
    chessboard[7][1] = chessboard[7][8] = "|" + f.Rw + "|";
    chessboard[0][2] = chessboard[0][7] = "|" + f.Kb + "|";
    chessboard[7][2] = chessboard[7][7] = "|" + f.Kw + "|";
    chessboard[0][3] = chessboard[0][6] = "|" + f.Bb + "|";
    chessboard[7][3] = chessboard[7][6] = "|" + f.Bw + "|";
    chessboard[0][4] = "|" + f.Qb + "|";
    chessboard[0][5] = "|" + f.Kb + "|";
    chessboard[7][4] = "|" + f.Qw + "|";
    chessboard[7][5] = "|" + f.Kw + "|";
}