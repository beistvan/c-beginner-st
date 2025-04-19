#include <stdio.h>

int main() {
    int a1, b1, a2, b2;
    
    scanf("%d:%d", &a1, &b1);
    scanf("%d:%d", &a2, &b2);

    int a = a1 + a2;
    int b = b1 + b2;

    printf("%d:%d\n", a, b);

    if (a > b)
        printf("2\n");
    else if (a == b)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
