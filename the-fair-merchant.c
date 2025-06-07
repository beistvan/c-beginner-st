#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[100];
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

    long long merchant = 0;
    int max_iter = 100000;

    for (int iter = 0; iter < max_iter; iter++) {
        bool all_equal = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                all_equal = false;
                break;
            }
        }
        if (all_equal) break;

        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            long long sum = a[i] + a[j];
            if (sum % 2 != 0) {
                merchant++;
                sum--;
            }
            long long half = sum / 2;
            a[i] = half;
            a[j] = half;
        }
    }

    printf("%lld %lld\n", merchant, a[0]);
    return 0;
}
