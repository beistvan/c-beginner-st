#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    char expr[MAX];
    int stack[MAX];
    int top = -1;

    scanf("%s", expr);

    for (int i = 0; expr[i] != '='; i++) {
        char ch = expr[i];
        if (ch == '0' || ch == '1') {
            stack[++top] = ch - '0';
        } else if (ch == '!') {
            if (top < 0) {
                printf("Error: Not enough operands for '!'\n");
                return 1;
            }
            stack[top] = !stack[top];
        } else if (ch == '&' || ch == '|') {
            if (top < 1) {
                printf("Error: Not enough operands for '%c'\n", ch);
                return 1;
            }
            int b = stack[top--];
            int a = stack[top--];
            if (ch == '&') {
                stack[++top] = a & b;
            } else {
                stack[++top] = a | b;
            }
        } else {
            printf("Error: Invalid character '%c'\n", ch);
            return 1;
        }
    }

    if (top != 0) {
        printf("Error: Invalid expression. Stack size = %d\n", top + 1);
        return 1;
    }

    printf("%d\n", stack[top]);
    return 0;
}
