#include <stdio.h>

int main() {
    int s, L, k;
    scanf("%d %d %d", &s, &L, &k);

    int dist = s;
    int step = L;
    int count = 0;

    while (step > 0 && step <= dist) {
        dist -= step;
        count++;
        step -= k;
    }

    printf("%d %d\n", count, dist);
    return 0;
}
