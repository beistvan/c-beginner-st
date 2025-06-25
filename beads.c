#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char* s, int len) {
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[101];
    scanf("%100s", s);
    int len = strlen(s);

    if (len == 1) {
        printf("%c\n", s[0]);
        return 0;
    }

    for (int p = 1; p <= len / 2; p++) {
        if (len % p != 0) continue;

        if (!is_palindrome(s, p)) continue;

        bool match = true;
        for (int i = 0; i < len; i++) {
            if (s[i] != s[i % p]) {
                match = false;
                break;
            }
        }

        if (match) {
            for (int i = 0; i < p; i++) {
                putchar(s[i]);
            }
            putchar('\n');
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
