#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
