#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;
    Point b;
    float len;
} Line;

float distance(Point a, Point b) {
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

void scanLine(Line * t) {
    scanf("%d %d %d %d", &(t->a.x), &(t->a.y), &(t->b.x), &(t->b.y));
}

void printLine(Line t) {
    printf("%d %d %d %d %.3f\n", t.a.x, t.a.y, t.b.x, t.b.y, t.len);
}

void rotRLine(Line * t) {
    int tempA_x = t->a.x;
    t->a.x = t->a.y;
    t->a.y = -tempA_x;

    int tempB_x = t->b.x;
    t->b.x = t->b.y;
    t->b.y = -tempB_x;

    t->len = distance(t->a, t->b);
}

int main() {
    Line t;

    scanLine(&t);

    rotRLine(&t);

    printLine(t);

    return 0;
}
