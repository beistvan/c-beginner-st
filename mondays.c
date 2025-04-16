#include <stdio.h>

int main() {
    int n, day;
    scanf("%d %d", &n, &day);

    int count = 1 + (n - day) / 7;
    printf("%d\n", count);
    return 0;
}
