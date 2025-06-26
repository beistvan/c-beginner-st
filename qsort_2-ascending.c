#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;

    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
