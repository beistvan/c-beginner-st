#include <stdio.h>

int main() {
    float length, width;
    
    scanf("%f %f", &length, &width);
    
    float area = length * width;
    
    printf("%.6f\n", area);
    
    return 0;
}
