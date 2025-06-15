#include <stdio.h>

#define MAX 100

int N;
char grid[MAX][MAX + 1];

void dfs(int i, int j) {
    if (i < 0 || i >= N || j < 0 || j >= N) return;
    if (grid[i][j] != '*') return;

    grid[i][j] = '.';

    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main() {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", grid[i]);
    }

    int figures = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == '*') {
                figures++;
                dfs(i, j);
            }
        }
    }

    printf("%d\n", figures);
    return 0;
}
