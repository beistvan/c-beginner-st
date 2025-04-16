#include <stdio.h>

int main() {
    int rub, kop;
    scanf("%d %d", &rub, &kop);

    int total = rub * 100 + kop;
    int n = total / 106;
    int rest = total - n * 106;

    printf("%d %d\n", n, rest);
    return 0;
}
