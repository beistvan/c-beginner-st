#include <stdio.h>

int main() {
    int a[10];
    int i, k, n;

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &k, &n);

    for(i = k; i <= n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
