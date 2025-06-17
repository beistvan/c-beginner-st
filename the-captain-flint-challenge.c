#include <stdio.h>
#include <string.h>

int main() {
    int x = 0, y = 0;
    char s[10];
    int steps;

    while (1) {
        scanf("%9s", s);
        if (strcmp(s, "Treasure!") == 0) {
            break;
        }
        scanf("%d", &steps);

        if (strcmp(s, "North") == 0) {
            y += steps;
        } else if (strcmp(s, "South") == 0) {
            y -= steps;
        } else if (strcmp(s, "East") == 0) {
            x += steps;
        } else if (strcmp(s, "West") == 0) {
            x -= steps;
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}
