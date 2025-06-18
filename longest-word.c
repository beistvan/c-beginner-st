#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1001] = "";
    char word[1001];
    char longest[1001];
    int max_len = 0;

    while (fgets(word, sizeof(word), stdin)) {
        strcat(str, word);
    }

    int i = 0;
    while (str[i] != '\0') {
        while (isspace(str[i])) i++;

        int start = i;
        while (str[i] != '\0' && !isspace(str[i])) i++;

        int len = i - start;

        if (len > max_len) {
            max_len = len;
            strncpy(longest, &str[start], len);
            longest[len] = '\0';
        }
    }

    printf("%s %d\n", longest, max_len);
    return 0;
}
