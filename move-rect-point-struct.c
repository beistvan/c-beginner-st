struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

void move(struct Rect * p, int dx) {
    p->lt.x += dx;
    p->rb.x += dx;
}
