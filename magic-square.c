#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[3][3];
    int sum_row, sum_col;
    int magic_sum;
    bool is_magic = true;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    magic_sum = a[0][0] + a[0][1] + a[0][2];

    for (int i = 0; i < 3; i++) {
        sum_row = 0;
        for (int j = 0; j < 3; j++) {
            sum_row += a[i][j];
        }
        if (sum_row != magic_sum) {
            is_magic = false;
            break;
        }
    }

    if (is_magic) {
        for (int j = 0; j < 3; j++) {
            sum_col = 0;
            for (int i = 0; i < 3; i++) {
                sum_col += a[i][j];
            }
            if (sum_col != magic_sum) {
                is_magic = false;
                break;
            }
        }
    }

    if (is_magic) {
        int diag1 = a[0][0] + a[1][1] + a[2][2];
        if (diag1 != magic_sum)
            is_magic = false;
    }

    if (is_magic) {
        int diag2 = a[0][2] + a[1][1] + a[2][0];
        if (diag2 != magic_sum)
            is_magic = false;
    }

    if (is_magic)
        printf("MAGIC\n");
    else
        printf("NO\n");

    return 0;
}
