#include <stdio.h>

void swap(int * px, int * py);

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}
