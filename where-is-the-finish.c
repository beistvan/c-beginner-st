#include <stdio.h>

int main() {
    int round, total;
    
    scanf("%d %d", &round, &total);
    
    int full_laps = total / round;
    
    int finish_distance = total % round;
    
    printf("%d %d\n", full_laps, finish_distance);
    
    return 0;
}
