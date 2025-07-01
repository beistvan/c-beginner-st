#include <stdio.h>
#include <stdlib.h>

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

    if (a->x != b->x) return a->x - b->x;

    return a->y - b->y;
}

int main() {
    int N;
    scanf("%d", &N);

    struct Point points[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    qsort(points, N, sizeof(struct Point), cmp_Point);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", points[i].x, points[i].y);
    }

    return 0;
}
