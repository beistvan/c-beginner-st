struct Rect {
    int x;
    int y;
    int width;
    int height;
};

int area(struct Rect a) {
    return a.width * a.height;
}
