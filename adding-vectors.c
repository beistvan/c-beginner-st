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

    for (int i = 0; i < n; i++) {
        printf("%d", a[i] + b[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
