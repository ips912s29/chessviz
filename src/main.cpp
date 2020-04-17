#include <iostream>
#include "chessboardView.h"
#include "chessboardMove.h"
#include "chessboardInit.h"
using namespace std;

int main()
{
	string chessboard[9][9];
    bool chessboard_b[9][9];
    int str = 0;
    char stb = 0;
    chessboardInit(chessboard,chessboard_b);
    while (cin >> stb >> str)
    {       
        chessboardMove(stb, str, chessboard, chessboard_b);           
    }
    return 0;
}
