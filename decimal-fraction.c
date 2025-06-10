#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 10000

int main() {
    int numerator, denominator;
    scanf("%d %d", &numerator, &denominator);

    printf("0,");

    int remainder = numerator % denominator;
    int pos[MAX_LEN];
    for (int i = 0; i < MAX_LEN; i++) pos[i] = -1;

    char result[MAX_LEN];
    int index = 0;
    int start_repeat = -1;

    while (remainder != 0) {
        if (pos[remainder] != -1) {
            start_repeat = pos[remainder];
            break;
        }

        pos[remainder] = index;
        remainder *= 10;
        result[index++] = (remainder / denominator) + '0';
        remainder %= denominator;
    }

    for (int i = 0; i < index; i++) {
        if (i == start_repeat)
            printf("(");
        printf("%c", result[i]);
    }

    if (start_repeat == -1)
        printf("(0)");
    else
        printf(")");

    return 0;
}
