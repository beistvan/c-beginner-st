#include <stdio.h>
#include <string.h>

int main() {
    char line[1024];
    int found = 0;

    while (fgets(line, sizeof(line), stdin)) {
        if (strstr(line, "bomb") != NULL) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
