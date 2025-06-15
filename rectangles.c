#include <stdio.h>

#define MAX 100

int main() {
    int N;
    char grid[MAX][MAX + 1];
    int max_area = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", grid[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == '*' &&
                (i == 0 || grid[i-1][j] != '*') &&
                (j == 0 || grid[i][j-1] != '*')) {

                int width = 0;
                while (j + width < N && grid[i][j + width] == '*') {
                    width++;
                }

                int height = 0;
                while (i + height < N) {
                    int all_stars = 1;
                    for (int k = 0; k < width; k++) {
                        if (grid[i + height][j + k] != '*') {
                            all_stars = 0;
                            break;
                        }
                    }
                    if (!all_stars) break;
                    height++;
                }

                int area = width * height;
                if (area > max_area) {
                    max_area = area;
                }
            }
        }
    }

    printf("%d\n", max_area);
    return 0;
}
