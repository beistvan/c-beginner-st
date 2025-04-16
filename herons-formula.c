#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    // Вычисляем длины сторон
    float a = dist(x1, y1, x2, y2);
    float b = dist(x2, y2, x3, y3);
    float c = dist(x3, y3, x1, y1);
    
    float p = (a + b + c) / 2;
    
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    
    float s = area(x1, y1, x2, y2, x3, y3);
    
    printf("%.3f\n", s);
    
    return 0;
}
