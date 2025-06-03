#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    long long scalar_product = 0;

    for (int i = 0; i < n; i++) {
        scalar_product += (long long)a[i] * b[i];
    }

    printf("%lld\n", scalar_product);

    return 0;
}
