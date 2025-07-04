#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000000

int is_matching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}') ||
           (open == '<' && close == '>');
}

int main() {
    char *input = malloc((MAX_LEN + 1) * sizeof(char));
    char *stack = malloc(MAX_LEN * sizeof(char));
    int top = -1;

    if (!input || !stack) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    if (scanf("%1000000s", input) != 1) {
        printf("NO\n");
        free(input);
        free(stack);
        return 1;
    }

    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        char ch = input[i];

        if (ch == '(' || ch == '[' || ch == '{' || ch == '<') {
            if (top >= MAX_LEN - 1) {
                printf("NO\n");
                free(input);
                free(stack);
                return 0;
            }
            stack[++top] = ch;
        } else if (ch == ')' || ch == ']' || ch == '}' || ch == '>') {
            if (top == -1 || !is_matching(stack[top], ch)) {
                printf("NO\n");
                free(input);
                free(stack);
                return 0;
            }
            top--;
        }
    }

    if (top == -1)
        printf("YES\n");
    else
        printf("NO\n");

    free(input);
    free(stack);

    return 0;
}
