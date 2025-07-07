#include <stdio.h>
#include <ctype.h>

int main() {

    int d;
    int count = 0;
    int c;
    
    scanf("%d", &d);
    
    getchar();
    
    char k[1000001];
    int index = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        k[index++] = c;
    }
    k[index] = '\0';

    for (int i = 0; i < index; i++) {
        if (k[i] == '0' + d) {
            count++;
        }
    }

    printf("%d %s %d\n", d, k, count);
    
    return 0;
}
