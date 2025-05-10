#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];
    int min_value;

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    min_value = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
    }

    printf("%d\n", min_value);

    return 0;
}
