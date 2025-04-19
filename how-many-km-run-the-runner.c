#include <stdio.h>

int main() {
    int z;
    scanf("%d", &z);

    if (z < 10)
        printf("0\n");
    else if (z <= 12)
        printf("3\n");
    else if (z <= 15)
        printf("5\n");
    else
        printf("10\n");

    return 0;
}
