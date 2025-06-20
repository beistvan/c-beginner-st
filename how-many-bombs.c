#include <stdio.h>
#include <string.h>

int main() {
    char text[10000];
    int count = 0;

    int index = 0;
    char ch;
    while ((ch = getchar()) != EOF && index < sizeof(text) - 1) {
        text[index++] = ch;
    }
    text[index] = '\0';

    char *p = text;
    while ((p = strstr(p, "bomb")) != NULL) {
        count++;
        p++;
    }

    printf("%d\n", count);
    return 0;
}
