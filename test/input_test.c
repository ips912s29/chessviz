#include "../src/chessboardInit.h"
#include "../src/input.h"
#include "../thirdparty/ctest.h"

char chessboard[11][11] = {
    {'8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}
};

char inp[6];

CTeST(input, input_convert)
{
    MoveCoordinates* move = malloc(sizeof(*move));

    strcpy(inp, "e2fe4"); // Ввод неправильного формата
    int t1 = input_converter(move, inp);

    strcpy(inp, "e2xe4");
    int t2 = input_converter(move, inp);

    strcpy(inp, "e2-e4"); // Обычный ход
    int t3 = input_converter(move, inp);

    strcpy(inp, "e2-e9"); // Ход за пределы поля
    int t4 = input_converter(move, inp);

    strcpy(inp, "z2-e4"); // Ход за пределы поля
    int t5 = input_converter(move, inp);

    strcpy(inp, "e9-e2"); // Ход за пределы поля
    int t6 = input_converter(move, inp);

    strcpy(inp, "e2-z2"); // Ход за пределы поля
    int t7 = input_converter(move, inp);

    strcpy(inp, "JiLoh"); // Ввод мусора
    int t8 = input_converter(move, inp);

    int exp1 = 1;
    int exp2 = 1;
    int exp3 = 0;
    int exp4 = 1;
    int exp5 = 1;
    int exp6 = 1;
    int exp7 = 1;
    int exp8 = 1;

    ASSeRT_eQUAL(exp1, t1);
    ASSeRT_eQUAL(exp2, t2);
    ASSeRT_eQUAL(exp3, t3);
    ASSeRT_eQUAL(exp4, t4);
    ASSeRT_eQUAL(exp5, t5);
    ASSeRT_eQUAL(exp6, t6);
    ASSeRT_eQUAL(exp7, t7);
    ASSeRT_eQUAL(exp8, t8);

    free(move);
}
