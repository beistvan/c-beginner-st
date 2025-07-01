#include <stdio.h>

struct Point {
    int x;
    int y;
};

int cmp_Point(const void *p1, const void *p2) {
    const struct Point *a = (const struct Point *)p1;
    const struct Point *b = (const struct Point *)p2;

    long long dist1 = (long long)a->x * a->x + (long long)a->y * a->y;
    long long dist2 = (long long)b->x * b->x + (long long)b->y * b->y;

    if (dist1 < dist2) return -1;
    if (dist1 > dist2) return 1;
    return 0;
}

int main()
{
    struct Point a, b;
    scanf("%d%d", &a.x, &a.y);
    scanf("%d%d", &b.x, &b.y);

    int res = cmp_Point(&a, &b);

    if (res < 0)
        printf("<\n");
    else if (res > 0)
        printf(">\n");
    else
        printf("=\n");

    return 0;
}
