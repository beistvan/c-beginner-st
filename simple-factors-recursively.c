#include <stdio.h>

void printFactor(unsigned int last, unsigned int n) {
    if (n == 0) return;
    if (n == 1)
        printf("%u ", last);
    else
        printf("%u^%u ", last, n);
}

void simpleFactors(unsigned int a, unsigned int last, unsigned int n) {
    if (a % last == 0) {
        simpleFactors(a / last, last, n + 1);
    } else {
        if (a > 1)
            simpleFactors(a, last + 1, 0);
        if (n > 0)
            printFactor(last, n);
    }
}
