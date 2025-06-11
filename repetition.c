#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() {
    int a[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    a[1][2] *= 10;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
