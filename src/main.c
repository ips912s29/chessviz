#include "chessboardInit.h"
#include "chessboardMove.h"
#include "chessboardView.h"
#include "input.h"

char chessboard[11][11] = {{'8', ' ', 'r', 'k', 'b', 'q', '-', 'b', 'k', 'r'},
                           {'7', ' ', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                           {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'2', ' ', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                           {'1', ' ', 'R', 'K', 'B', 'Q', '+', 'B', 'K', 'R'},
                           {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

int main()
{
    system("clear");
    chessboardPrint();
    MoveCoordinates* move = malloc(sizeof(*move));
    while (1) {
        input(move);
        chesschessboardMove(move);
        chessboardPrint();
    }
    return 0;
}
