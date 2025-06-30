#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int even[N];
    int even_pos[N];
    int even_count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[even_count] = arr[i];
            even_pos[even_count] = i;
            even_count++;
        }
    }

    qsort(even, even_count, sizeof(int), cmp);

    for (int i = 0; i < even_count; i++) {
        arr[even_pos[i]] = even[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
