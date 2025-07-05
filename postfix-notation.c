#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int main() {
    char token[10];

    while (scanf("%s", token)) {
        if (isdigit(token[0])) {
            push(atoi(token));
        } else if (token[0] == '+' || token[0] == '-' || token[0] == '*') {
            int b = pop();
            int a = pop();
            int result;

            switch (token[0]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
            }

            push(result);
        } else if (token[0] == '=') {
            printf("%d\n", pop());
            break;
        } else {
            printf("Invalid token: %s\n", token);
            exit(1);
        }
    }

    return 0;
}
