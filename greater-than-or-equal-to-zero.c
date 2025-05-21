#include <stdio.h>

#define N 10

int main() {
    int a[N];
    int i;

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N; i++) {
        if (a[i] >= 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
