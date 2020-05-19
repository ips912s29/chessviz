#include "chessboardInit.h"
#include "chessboardMove.h"
#include "input.h"
#include "ctest.h"

char inp[6];

CTEST(MOVE, chessboard_move_right)
{
    MoveCoordinates* move = malloc(sizeof(*move));
    strcpy(inp, "c2-c3");
    input_converter(move, inp);
    int temp = chesschessboardMove(move);
    int exp = 0;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e2-e4");
    input_converter(move, inp);
    temp = chesschessboardMove(move);
    exp = 0;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "a2-a4");
    input_converter(move, inp);
    temp = chesschessboardMove(move);
    exp = 0;
    ASSERT_EQUAL(exp, temp);
}

CTEST(MOVE, chessboard_move_wrong)
{
    MoveCoordinates* move = malloc(sizeof(*move));
    strcpy(inp, "c3-c5");
    input_converter(move, inp);
    int temp = chesschessboardMove(move);
    int exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "e1-e4");
    input_converter(move, inp);
    temp = chesschessboardMove(move);
    exp = 1;
    ASSERT_EQUAL(exp, temp);

    strcpy(inp, "b2-d4");
    input_converter(move, inp);
    temp = chesschessboardMove(move);
    exp = 1;
    ASSERT_EQUAL(exp, temp);
}
