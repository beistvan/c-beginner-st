#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int tables_from_legs = N / 4;
    int max_tables = tables_from_legs < K ? tables_from_legs : K;

    printf("%d\n", max_tables);
    return 0;
}
