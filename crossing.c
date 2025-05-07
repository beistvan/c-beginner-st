#include <stdio.h>

int main() {
    int k, p1, p2, p3;
    scanf("%d%d%d%d", &k, &p1, &p2, &p3);

    int temp;
    if (p1 > p2) { temp = p1; p1 = p2; p2 = temp; }
    if (p2 > p3) { temp = p2; p2 = p3; p3 = temp; }
    if (p1 > p2) { temp = p1; p1 = p2; p2 = temp; }

    if (p1 + p2 <= k && p3 <= k) {
        printf("YES\n");
    } else if (p1 + p3 <= k && p2 <= k) {
        printf("YES\n");
    } else if (p2 + p3 <= k && p1 <= k) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
