#include <stdio.h>

int triangle_len_type(int a, int b, int c) {

    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }

    if (a == b && b == c) {
        return 2;
    }

    if (a == b || a == c || b == c) {
        return 1;
    }

    return 0;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", triangle_len_type(a, b, c));
    return 0;
}
