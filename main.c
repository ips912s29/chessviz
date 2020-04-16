#include <iostream>
using namespace std;
void chessboardView(char chessboard[9][9])
{
    cout << "\t\t\t";
    for (char ch = 'a'; ch <= 'h'; ch++) {
        cout << "   " << ch;
    }
    cout << endl;
    for (int i = 0; i < 8; i++) {
        cout << "\t\t\t" << 8 - i << " ";
        for (int j = 0; j < 8; j++) {
            cout << " " << chessboard[i][j] << "  ";
        }
        cout << " " << 8 - i;
        cout << endl;
    }
    cout << "\t\t\t";
    for (char ch = 'a'; ch <= 'h'; ch++) {
        cout << "   " << ch;
    }
}
int main()
{
    char chessboard[9][9];
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            chessboard[i][j] = '0';
        }
    }
    for (int j = 0; j < 8; j++) {
        chessboard[1][j] = 'P';
        chessboard[6][j] = 'P'; // pawn
    }
    chessboard[0][0] = 'R';
    chessboard[7][0] = 'R';
    chessboard[0][7] = 'R';
    chessboard[7][7] = 'R';
    chessboard[0][1] = 'K';
    chessboard[7][1] = 'K';
    chessboard[0][6] = 'K';
    chessboard[7][6] = 'K';
    chessboard[0][2] = 'B';
    chessboard[7][2] = 'B';
    chessboard[0][5] = 'B';
    chessboard[7][5] = 'B'; // bishop
    chessboard[0][3] = 'Q';
    chessboard[7][3] = 'Q';
    chessboard[0][4] = '+';
    chessboard[7][4] = '+'; // king
    chessboard[8][8] = ' ';
    chessboardView(chessboard);
    return 0;
}
