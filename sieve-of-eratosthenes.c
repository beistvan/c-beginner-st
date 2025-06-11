#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1300000

char prime[MAX + 1];

void sieve() {
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;

    int i, j;
    int limit = sqrt(MAX);

    for (i = 2; i <= limit; i++) {
        if (prime[i]) {
            for (j = i * i; j <= MAX; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Memory allocation error\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sieve();

    for (int i = 0; i < n; i++) {
        if (prime[arr[i]]) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    free(arr);
    return 0;
}
