#include <stdio.h>

int main() {
    int original, reversed = 0, temp;
    scanf("%d", &original);
    temp = original;

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (original == reversed)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
