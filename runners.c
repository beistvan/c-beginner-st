#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double k;
    scanf("%d %lf", &n, &k);

    int meetings = (int)(n * (1 - k));
    printf("%d\n", meetings);
    return 0;
}
