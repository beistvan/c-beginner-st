#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= 3; k++) {
        if ((n - k) % 4 == 1) {
            printf("%d\n", k);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
