#include "chessboardInit.h"

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
    printf("\n");
    char inp[6];
    int check = 1;
    while (check != 0) {
        fgets(inp, 6, stdin);
        check = input_converter(move, inp);
    }

    return 0;
}
