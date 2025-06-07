#include <stdio.h>

int main() {
    int coins[] = {5000, 1000, 500, 100, 50, 10, 5, 2, 1};
    int n = sizeof(coins) / sizeof(coins[0]);

    int X;
    scanf("%d", &X);

    for (int i = 0; i < n; i++) {
        int count = X / coins[i];
        X = X % coins[i];

        printf("%d %d\n", coins[i], count);
    }

    return 0;
}
