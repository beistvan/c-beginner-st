#include <stdio.h>

int main() {
    char row;
    int col;
    
    scanf("%c%d", &row, &col);
    
    printf("%c%d ", row - 1, col);
    printf("%c%d ", row, col + 1);
    printf("%c%d ", row + 1, col);
    printf("%c%d", row, col - 1);
    
    return 0;
}
