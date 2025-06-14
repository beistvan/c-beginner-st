#include <stdio.h>

#define MAX 10

void sum(int rows, int cols, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[MAX][MAX];
    int b[MAX][MAX];
    int c[MAX][MAX];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    sum(rows, cols, a, b, c);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", c[i][j]);
            if (j < cols - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
