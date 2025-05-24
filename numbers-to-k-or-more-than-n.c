#include <stdio.h>

#define N 10

int main() {
    int a[N];
    int i, k, n;

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &k, &n);

    for (i = 0; i < N; i++) {
        if (a[i] < k || a[i] > n) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
