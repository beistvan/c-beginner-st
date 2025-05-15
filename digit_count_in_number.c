#include <stdio.h>

int main() {
    char d;
    char k[20];

    scanf(" %c %s", &d, k);

    int count = 0;

    for (int i = 0; k[i] != '\0'; i++) {
        if (k[i] == d) {
            count++;
        }
    }

    printf("%c %s %d\n", d, k, count);

    return 0;
}
