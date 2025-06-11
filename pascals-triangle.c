#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long row[67] = {0};
    row[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }

    for (int i = 0; i <= n; i++) {
        printf("%llu", row[i]);
        if (i != n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
