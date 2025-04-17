#include <stdio.h>

int rusMult(int a, int b) {
    printf("%d %d\n", a, b);

    if (b == 1) {
        printf("%d\n", a);
        return a;
    }

    int res = rusMult(a * 2, b / 2);

    int ost = b % 2;
    int new_res = res;

    if (ost == 1)
        new_res += a;

    printf("%d %d %d %d\n", res, a, ost, new_res);

    return new_res;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    int result = rusMult(a, b);

    printf("%d\n", result);

    return 0;
}
