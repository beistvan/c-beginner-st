#include <stdio.h>

int main() {
    char c;
    int balance = 0;
    int valid = 1;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        if (balance < 0) {
            valid = 0;
            break;
        }
    }

    if (balance != 0) {
        valid = 0;
    }

    if (valid) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
