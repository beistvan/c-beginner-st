#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char str[1001];
    fgets(str, sizeof(str), stdin);

    char *dot_pos = strchr(str, '.');
    int len = 0;

    if (dot_pos != NULL) {
        len = dot_pos - str;
    } else {
        len = strlen(str);
    }

    qsort(str, len, sizeof(char), cmp);

    for (int i = 0; i < len; ++i) {
        putchar(str[i]);
    }

    putchar('.');

    return 0;
}
