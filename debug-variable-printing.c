#include <stdio.h>

#define DBG_PRN(format, x) printf(#x " = " format "\n", x)

int main() {
    float x = 3.14;
    int a = 56;
    char *str = "Hello";

    DBG_PRN("%.1f", x);
    DBG_PRN("%d", a);
    DBG_PRN("%s", str);

    return 0;
}
