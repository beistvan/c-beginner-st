#include <stdio.h>

int main() {
    int L;
    int k;

    int i;
    int step;
    int path;

    scanf("%d", &L);
    scanf("%d", &k);

    i = 0;
    step = L;
    path = 0;

    while (i < 100) {
        path += step;
        i++;
        step += k;
    }

    printf("%d\n", path);

    return 0;
}
