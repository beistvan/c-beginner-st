#include <stdio.h>

int main() {
    char col;
    int row;
    
    scanf("%c%d", &col, &row);
    
    row++;
    
    printf("%c%d\n", col, row);
    
    return 0;
}
