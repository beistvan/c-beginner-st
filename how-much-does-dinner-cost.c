#include <stdio.h>

int main() {
    int n, k_rice, k_veg;

    scanf("%d %d %d", &n, &k_rice, &k_veg);

    printf("%d %d %d\n", n, k_rice, k_veg);

    int total_cost = k_rice + 2 * k_veg;

    printf("%d\n", total_cost);

    if (n >= total_cost) {
        printf("YES\n");
    }

    return 0;
}
