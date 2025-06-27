#include <stdio.h>
#include <stdlib.h>

int compare_float(const void *a, const void *b) {
    float x = *(float*)a;
    float y = *(float*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    float arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    qsort(arr, n, sizeof(float), compare_float);

    for (int i = 0; i < n; i++) {
        printf("%.2f", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
