#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int num;

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            sum += num;
        }
    }

    printf("%d\n", sum);
    return 0;
}
