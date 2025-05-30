#include <stdio.h>
#define N 100

typedef struct {
    char a[N];
    unsigned int n;
} Decimal;

void elong_print(Decimal x) {
    if (x.n == 0 && x.a[0] == 0) {
        printf("0\n");
        return;
    }

    for (int i = x.n; i >= 0; i--) {
        printf("%d", x.a[i]);
    }
    printf("\n");
}


int main()
{
    Decimal x = {{7, 4, 1}, 2};
    Decimal zero ={{0}, 0};

    elong_print(x);
    elong_print(zero);

    return 0;
}
