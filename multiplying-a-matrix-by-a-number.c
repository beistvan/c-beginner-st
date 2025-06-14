#include <stdio.h>

#define MAX 10

void number_mult(int k, int rows, int cols, int a[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] *= k;
        }
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[MAX][MAX];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int k;
    scanf("%d", &k);

    number_mult(k, rows, cols, a);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", a[i][j]);
            if (j < cols - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
