#include <stdio.h>
#include <string.h>

#define MAX 3000

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int multiply(int x, int res[], int res_size) {
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

int factorial_digit_sum(int n) {
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    int sum = 0;
    for (int i = 0; i < res_size; i++)
        sum += res[i];
    return sum;
}

int main() {
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int sum = factorial_digit_sum(i);
        if (is_prime(sum)) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
