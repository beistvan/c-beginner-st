#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int number, min;
    scanf("%d", &min);

    for (int i = 1; i < n; i++) {
        scanf("%d", &number);
        if (number < min) {
            min = number;
        }
    }

    printf("%d\n", min);
    return 0;
}
