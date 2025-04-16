#include <stdio.h>

int main() {
    int bell, nBell;
    scanf("%d %d", &bell, &nBell);
    
    int n = nBell - bell + 1;
    
    int total = n * (bell + nBell) / 2;
    
    printf("%d\n", total);
    return 0;
}
