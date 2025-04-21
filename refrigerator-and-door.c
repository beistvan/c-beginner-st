#include <stdio.h>

int can_pass(int w, int h, int x, int y) {
    return (x <= w && y <= h) || (x <= h && y <= w);
}

int main() {
    int door_w, door_h;
    int a, b, c;

    scanf("%d %d", &door_h, &door_w);
    scanf("%d %d %d", &a, &b, &c);

    if (
        can_pass(door_w, door_h, a, b) ||
        can_pass(door_w, door_h, a, c) ||
        can_pass(door_w, door_h, b, c)
    ) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
