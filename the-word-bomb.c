#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_word_equal(const char *word, const char *target) {
    return strcmp(word, target) == 0;
}

int main() {
    char text[10000];
    char c;
    int i = 0;

    while ((c = getchar()) != EOF && i < 9999) {
        text[i++] = c;
    }
    text[i] = '\0';

    char *delimiters = " \n\r\t.,!?;:()[]{}\"'";
    char *word = strtok(text, delimiters);

    while (word != NULL) {
        if (is_word_equal(word, "bomb")) {
            printf("YES\n");
            return 0;
        }
        word = strtok(NULL, delimiters);
    }

    printf("NO\n");
    return 0;
}
