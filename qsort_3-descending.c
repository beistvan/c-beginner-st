#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) return 1;
    if (x > y) return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare_desc);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
