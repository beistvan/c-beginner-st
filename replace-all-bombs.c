#include <stdio.h>
#include <string.h>

int main() {
    char text[10000];
    int index = 0;
    char ch;

    while ((ch = getchar()) != EOF && index < sizeof(text) - 1) {
        text[index++] = ch;
    }
    text[index] = '\0';

    char *p = text;
    while (*p) {
        char *found = strstr(p, "bomb");
        if (found != NULL) {
            while (p < found) {
                putchar(*p);
                p++;
            }
            printf("watermelon");
            p += 4;
        } else {
            printf("%s", p);
            break;
        }
    }

    return 0;
}
