#include <stdio.h>

int main() {
    int height;
    int total_count = 0;
    int tall_count = 0;

    while (scanf("%d", &height) == 1) {
        total_count++;
        if (height > 170) {
            tall_count++;
        }
    }

    printf("%d %d\n", total_count, tall_count);

    return 0;
}
