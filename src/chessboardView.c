#include "chessboardView.h"
#include <stdio.h>

extern char chessboard[11][11];

void chessboardPrint()
{
    printf("\n");
    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 11; ++j) {
            if (chessboard[i][j] == '-'
                || ((chessboard[i][j] > 'a' && chessboard[i][j] < 'z')
                    && i < 8)) {
                printf(BLACK "%c ", chessboard[i][j]);
            } else {
                printf(WHITE "%c ", chessboard[i][j]);
            }
        }

        printf("\n");
    }
    printf("Example of move e2-e4.\n");
}
