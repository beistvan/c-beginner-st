#include <stdio.h>

int main() {
    int N, count = 0;
    char line[101];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%100s", line);
        for (int j = 0; line[j] != '\0'; j++) {
            if (line[j] == '*') {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
