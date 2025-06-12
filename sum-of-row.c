#include <stdio.h>

int sum_row(int a[3][3], int irow) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += a[irow][i];
    }
    return sum;
}

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n", sum_row(a, 1));

    return 0;
}
