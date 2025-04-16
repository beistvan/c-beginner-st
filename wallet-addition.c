#include <stdio.h>

int main() {
    int g1, s1, k1;
    int g2, s2, k2;

    scanf("%d %d %d", &g1, &s1, &k1);
    scanf("%d %d %d", &g2, &s2, &k2);

    int total_knuts1 = g1 * 17 * 29 + s1 * 29 + k1;
    int total_knuts2 = g2 * 17 * 29 + s2 * 29 + k2;

    int total = total_knuts1 + total_knuts2;

    int galleons = total / (17 * 29);
    int sickles = (total % (17 * 29)) / 29;
    int knuts   = total % 29;

    printf("%d %d %d\n", galleons, sickles, knuts);
    return 0;
}
