#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char buyers[1001] = {0};
    int timestamp, id, recept_id;

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &timestamp, &id, &recept_id);
        buyers[id] = 1;
    }

    int unique_count = 0;
    for (int i = 1; i <= 1000; i++) {
        if (buyers[i]) unique_count++;
    }

    printf("%d\n", unique_count);
    return 0;
}
