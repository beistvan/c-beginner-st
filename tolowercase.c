#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    scanf("%c", &ch);
    
    printf("%c\n", tolower(ch));
    
    return 0;
}
