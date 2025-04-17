struct Rect {
    int x;
    int y;
    int width;
    int height;
};

void move(struct Rect * p, int dx) {
    p->x += dx;
}
