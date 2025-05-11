#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    scanf("%d", &n);

    if (n < 0 || n > 12) {
        printf("error: n have to be between 0 and 12.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d\n", factorial);

    return 0;
}
