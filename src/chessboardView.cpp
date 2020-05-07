#include <iostream>
#include <string>
void chessboardView(std::string chessboard[9][9])
{
    std::cout << "\t\t\t";
    for (char ch = 'a'; ch <= 'h'; ch++) {
        std::cout << "   " << ch;
    }
    std::cout << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "\t\t\t" << 8 - i << " ";
        for (int j = 0; j < 9; j++) {
            std::cout << chessboard[i][j];
        }
        std::cout << " " << 8 - i;
        std::cout << std::endl;
    }
    std::cout << "\t\t\t";
    for (char ch = 'a'; ch <= 'h'; ch++) {
        std::cout << "   " << ch;
    }
    std::cout << "\n\nExample of move:e2 e4" << std::endl
              << "You also can use 'Enter' instead 'Space'. Input your move: ";
}
