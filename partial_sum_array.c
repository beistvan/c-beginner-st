#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE];
    int i, k, n, sum = 0;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &k, &n);

    for (i = k; i < n; i++) {
        sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}
