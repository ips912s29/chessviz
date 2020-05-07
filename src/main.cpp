#include "chessboardInit.hpp"
#include "chessboardMove.hpp"
#include "chessboardView.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string chessboard[9][9];
    bool chessboard_b[9][9];
    int str = 0;
    char stb = 0;
    chessboardInit(chessboard, chessboard_b);
    chessboardView(chessboard);
    while (std::cin >> stb >> str) {
        chessboardMove(stb, str, chessboard, chessboard_b);
        chessboardView(chessboard);
    }
    return 0;
}
