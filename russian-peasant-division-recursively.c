#include <stdio.h>

typedef struct {
    int mult;
    int rem;
} Step;

Step steps[1000];
int stepCount = 0;

int rusDel(int a, int b) {
    if (a == 0) {
        return 0;
    }
    if (a == b) {
        printf("1\n");
        return 1;
    }

    int mult, rem;

    if (a % 2 == 0) {
        a /= 2;
        mult = 2;
        rem = 0;
    } else {
        a -= b;
        mult = 1;
        rem = 1;
    }

    printf("%d %d %d\n", a, mult, rem);
    steps[stepCount].mult = mult;
    steps[stepCount].rem = rem;
    stepCount++;

    int part = rusDel(a, b);
    int new_part = part * mult + rem;
    printf("%d * %d + %d = %d\n", part, mult, rem, new_part);
    return new_part;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = rusDel(a, b);
    printf("%d\n", result);
    return 0;
}
