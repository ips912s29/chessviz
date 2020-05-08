#include "chessboardInit.h"

extern char chessboard[11][11];

int chesschessboardMove(MoveCoordinates* move)
{
    if (chessboard[move->y2][move->x2] != ' ') {
        printf("You can't do this now.");
    }

    if (chessboard[move->y2][move->x2] == ' ') {
        chessboard[move->y2][move->x2] = chessboard[move->y1][move->x1];
        chessboard[move->y1][move->x1] = ' ';
    }

    return 0;
}
