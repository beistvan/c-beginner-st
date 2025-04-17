struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

int area(struct Rect a) {
    int width = a.rb.x - a.lt.x;
    int height = a.lt.y - a.rb.y;
    return width * height;
}
