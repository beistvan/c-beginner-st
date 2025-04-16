#include <stdio.h>

void print_revers(int x) {
    while (x > 0) {
        printf("%d", x % 10);
        x /= 10;
    }
}
