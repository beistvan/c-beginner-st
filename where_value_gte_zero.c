#include <stdio.h>

#define N 10

int main() {
    int a[N];
    int i;

    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < N; i++) {
        if (a[i] >= 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
