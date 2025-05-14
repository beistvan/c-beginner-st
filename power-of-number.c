#include <stdio.h>
#include <math.h>
#include <stdint.h>

uint64_t ipow(uint64_t base, int exp) {
    uint64_t result = 1;
    while (exp) {
        if (exp % 2) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

int is_kth_power(uint64_t x, int k, uint64_t *root) {
    uint64_t low = 1, high = (uint64_t)pow(x, 1.0 / k) + 2;
    while (low <= high) {
        uint64_t mid = (low + high) / 2;
        uint64_t power = ipow(mid, k);
        if (power == x) {
            *root = mid;
            return 1;
        } else if (power < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}

int main() {
    uint64_t n;
    int k;
    scanf("%lu %d", &n, &k);

    uint64_t original = n;
    uint64_t a[64];
    int t = 0;

    for (uint64_t i = 2; ipow(i, k) <= n; i++) {
        uint64_t power = ipow(i, k);
        while (n % power == 0) {
            n /= power;
            a[t++] = i;
            printf("%lu %lu\n", i, n);
        }
    }

    if (n == 1) {
        uint64_t root = 1;
        for (int i = 0; i < t; i++) {
            root *= a[i];
        }
        printf("%lu\n", root);
    } else {
        printf("-1\n");
    }

    return 0;
}
