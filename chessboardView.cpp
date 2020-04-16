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