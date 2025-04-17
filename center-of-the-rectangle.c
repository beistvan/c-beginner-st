#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc) {
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
}

int main() {
    int xlt, ylt, xrb, yrb;
    int xc, yc;

    scanf("%d %d %d %d", &xlt, &ylt, &xrb, &yrb);

    center(xlt, ylt, xrb, yrb, &xc, &yc);

    printf("%d %d\n", xc, yc);

    return 0;
}
