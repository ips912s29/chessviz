#include <iostream>
#include <string>
std::string buff;
void chessboardMove(
        int x, int y, std::string chessboard[9][9], bool chessboard_b[9][9])
{
    if ((8 - y) >= 0 && (8 - (104 - x)) >= 0) {
        if (chessboard_b[8 - y][8 - (104 - x)] == 1) {
            buff = chessboard[8 - y][8 - (104 - x)];
            chessboard[8 - y][8 - (104 - x)] = "|__|";
            chessboard_b[8 - y][8 - (104 - x)] = 0;
        } else {
            chessboard[8 - y][8 - (104 - x)] = buff;
            chessboard_b[8 - y][8 - (104 - x)] = 1;
            buff = "";
        }
    } else
        std::cout << "Change the incorrectly entered field" << std::endl;
}