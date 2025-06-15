#include <stdio.h>
#include <string.h>

#define N 100

typedef struct {
    char a[N];       // a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;
} Decimal;

void elong_set(Decimal *res, const char str[]) {
    int len = strlen(str);
    res->n = len - 1;

    for (int i = 0; i < len; i++) {
        res->a[i] = str[len - 1 - i] - '0';
    }

    for (int i = len; i < N; i++) {
        res->a[i] = 0;
    }
}

void elong_print(Decimal d) {
    for (int i = d.n; i >= 0; i--) {
        printf("%d", d.a[i]);
    }
    printf("\n");
}

int main() {
    Decimal res;
    elong_set(&res, "12345678901234567890");
    elong_print(res);
    return 0;
}
