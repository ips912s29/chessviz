#include <stdio.h>

extern char chessboard[11][11];

void chessboardPrint()
{
    printf("\n");
    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 11; ++j) {
            if ((chessboard[i][j] > 'a' && chessboard[i][j] < 'z') && i <= 7) {
                printf("\x1B[35m"
                       "%c ",
                       chessboard[i][j]);
            } else {
                printf("%c ", chessboard[i][j]);
            }
        }

        printf("\n");
    }
    printf("Example of move e2-e4.\n");
}
