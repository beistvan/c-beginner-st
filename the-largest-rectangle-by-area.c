#include <stdlib.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

int area(struct Rect *r) {
    int width = abs(r->rb.x - r->lt.x);
    int height = abs(r->lt.y - r->rb.y);
    return width * height;
}

struct Rect * max(struct Rect * pa, struct Rect * pb) {
    int areaA = area(pa);
    int areaB = area(pb);
    return (areaA >= areaB) ? pa : pb;
}
