#include <stdio.h>
#include <string.h>

int main() {
    char n_str[20];
    scanf("%s", n_str);

    int len = strlen(n_str);
    long long total_digits = 0;
    long long power_of_10 = 1;

    for (int i = 1; i < len; i++) {
        total_digits += i * 9 * power_of_10;
        power_of_10 *= 10;
    }

    long long n;
    sscanf(n_str, "%lld", &n);

    total_digits += (n - power_of_10 + 1) * len;

    printf("%d %lld\n", len - 1, total_digits);
    return 0;
}
