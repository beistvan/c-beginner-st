#include <stdio.h>
#include <math.h>

int main() {
    double s, w, ch;
    scanf("%lf %lf %lf", &s, &w, &ch);

    double h = s / w;
    int res = (int)(h / ch);

    printf("%d\n", res);
    return 0;
}
