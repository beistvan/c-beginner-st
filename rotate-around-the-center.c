#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2) {

    int xc = (*x1 + *x2) / 2;
    int yc = (*y1 + *y2) / 2;

    int x1r = *x1 - xc;
    int y1r = *y1 - yc;
    int x2r = *x2 - xc;
    int y2r = *y2 - yc;

    int rx1 = -y1r;
    int ry1 =  x1r;
    int rx2 = -y2r;
    int ry2 =  x2r;

    rx1 += xc;
    ry1 += yc;
    rx2 += xc;
    ry2 += yc;

    *x1 = (rx1 < rx2) ? rx1 : rx2;
    *y1 = (ry1 > ry2) ? ry1 : ry2;
    *x2 = (rx1 > rx2) ? rx1 : rx2;
    *y2 = (ry1 < ry2) ? ry1 : ry2;
}

int main() {
    int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    rotateC(&x1, &y1, &x2, &y2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);

    return 0;
}
