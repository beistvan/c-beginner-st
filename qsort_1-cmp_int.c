int cmp_int(const void *p1, const void *p2) {
    int a = *(const int *)p1;
    int b = *(const int *)p2;

    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}
