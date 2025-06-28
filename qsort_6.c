#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

int compare(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;

    for (int i = 0; i < MAX_DIGITS; i++) {
        int dx = (x / (int)pow(10, i)) % 10;
        int dy = (y / (int)pow(10, i)) % 10;
        if (dx != dy)
            return dx - dy;
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
