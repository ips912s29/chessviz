#include "chessboardInit.h"
#include "chessboardMove.h"
#include "input.h"
#include "ctest.h"

char chessboard[11][11] = {{'8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'5', ' ', ' ', ' ', 't', ' ', ' ', ' ', ' ', ' '},
                           {'4', ' ', ' ', ' ', ' ', 't', ' ', ' ', ' ', ' '},
                           {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {'2', ' ', ' ', ' ', ' ', ' ', 't', ' ', ' ', ' '},
                           {'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                           {' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

char inp[6];

CTEST(input, input_convert)
{
    MoveCoordinates* move = malloc(sizeof(*move));

    strcpy(inp, "e2fe4"); // Ввод неправильного формата
    int temp = input_converter(move, inp);
    int exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e2xe4");
    temp = input_converter(move, inp);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e2-e4"); // Обычный ход
    temp = input_converter(move, inp);
    exp = 0;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e2-e9"); // Ход за пределы поля
    temp = input_converter(move, inp);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "z2-e4"); // Ход за пределы поля
    temp = input_converter(move, inp);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e9-e2"); // Ход за пределы поля
    temp = input_converter(move, inp);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e2-z2"); // Ход за пределы поля
    temp = input_converter(move, inp);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "JiLoh"); // Ввод мусора
    temp = input_converter(move, inp);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    free(move);
}
