#include <stdio.h>
#include <string.h>
#include <ctype.h>

void stringtolower(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower((unsigned char)s[i]);
    }
}

int main() {
    char text[1000];
    
    fgets(text, sizeof(text), stdin);

    stringtolower(text);

    if (strstr(text, "bomb") != NULL) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
