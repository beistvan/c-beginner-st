struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

void normalize(struct Rect *r, int *left, int *right, int *top, int *bottom) {
    *left   = (r->lt.x < r->rb.x) ? r->lt.x : r->rb.x;
    *right  = (r->lt.x > r->rb.x) ? r->lt.x : r->rb.x;
    *top    = (r->lt.y > r->rb.y) ? r->lt.y : r->rb.y;
    *bottom = (r->lt.y < r->rb.y) ? r->lt.y : r->rb.y;
}

int is_crossed(struct Rect a, struct Rect b) {
    int leftA, rightA, topA, bottomA;
    int leftB, rightB, topB, bottomB;

    normalize(&a, &leftA, &rightA, &topA, &bottomA);
    normalize(&b, &leftB, &rightB, &topB, &bottomB);


    if (leftA > rightB || leftB > rightA)
        return 0;
    if (topA < bottomB || topB < bottomA)
        return 0;
    return 1;
}
