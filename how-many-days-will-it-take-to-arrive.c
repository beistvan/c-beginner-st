#include <stdio.h>

int main() {
    int L, k, s;
    scanf("%d", &L);
    scanf("%d", &k);
    scanf("%d", &s);

    int days = 0;
    int distance = 0;
    int current_day_distance = L;

    while (distance < s) {
        distance += current_day_distance;
        current_day_distance += k;
        days++;
    }

    printf("%d\n", days);
    return 0;
}
