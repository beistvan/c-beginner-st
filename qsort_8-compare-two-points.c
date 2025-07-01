int cmp_Point(const void *p1, const void *p2) {
    const struct Point *a = (const struct Point *)p1;
    const struct Point *b = (const struct Point *)p2;

    long long dist1 = (long long)a->x * a->x + (long long)a->y * a->y;
    long long dist2 = (long long)b->x * b->x + (long long)b->y * b->y;

    if (dist1 < dist2) return -1;
    if (dist1 > dist2) return 1;
    return 0;
}
