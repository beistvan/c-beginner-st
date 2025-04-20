#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    if (y <= 3 + x && y <= 3 - x && y >= -2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
