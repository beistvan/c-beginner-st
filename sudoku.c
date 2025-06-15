#include <stdio.h>

int is_valid_sudoku(int grid[9][9]) {
    int row[9], col[9], block[9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            row[j] = 0;
            col[j] = 0;
        }
        for (int j = 0; j < 9; j++) {
            int r = grid[i][j];
            int c = grid[j][i];
            if (r < 1 || r > 9 || row[r - 1]++) return 0;
            if (c < 1 || c > 9 || col[c - 1]++) return 0;
        }
    }

    for (int bi = 0; bi < 9; bi += 3) {
        for (int bj = 0; bj < 9; bj += 3) {
            for (int k = 0; k < 9; k++) block[k] = 0;

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int val = grid[bi + i][bj + j];
                    if (val < 1 || val > 9 || block[val - 1]++) return 0;
                }
            }
        }
    }

    return 1;
}

int main() {
    int grid[9][9];

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &grid[i][j]);

    if (is_valid_sudoku(grid))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
