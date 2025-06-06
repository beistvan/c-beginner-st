#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int colors[10] = {0};
    
    for (int i = 0; i < n; i++) {
        int color;
        scanf("%d", &color);
        colors[color]++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d %d\n", i, colors[i]);
    }

    return 0;
}
