#include <stdio.h>

int main() {
    int a[10];
    int i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++) {
        a[i] = a[i] * 2;
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
