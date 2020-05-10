#include "chessboardInit.h"
#include "chessboardMove.h"
#include "chessboardView.h"

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

int input_converter(MoveCoordinates* move, char* inp)
{
    if (inp[0] >= 'a' && inp[0] <= 'h') {
        move->x1 = (int)inp[0] - 'a' + 2;
    } else {
        return 1;
    }

    if (inp[1] >= '1' && inp[1] <= '8') {
        move->y1 = -((int)inp[1] - '8');
    } else {
        return 1;
    }

    if (inp[2] != '-') {
        return 1;
    }

    if (inp[3] >= 'a' && inp[3] <= 'h') {
        move->x2 = (int)inp[3] - 'a' + 2;
    } else {
        return 1;
    }

    if (inp[4] >= '1' && inp[4] <= '8') {
        move->y2 = -((int)inp[4] - '8');
    } else {
        return 1;
    }

    return 0;
}
int input(MoveCoordinates* move)
{
loop:
    printf("\n");
    char inp[6];
    int check = 0;
    fgets(inp, 6, stdin);
    check = input_converter(move, inp);
    if (check == 1) {
        goto loop;
    }

    return 0;
}

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
