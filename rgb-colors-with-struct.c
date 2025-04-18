#include <stdio.h>

typedef struct
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

Color getColor() {
    Color c;
    scanf("%hhu %hhu %hhu", &c.red, &c.green, &c.blue);
    return c;
}

unsigned long long convertToHTML(Color c) {
    return ((unsigned long long)c.red << 16) | ((unsigned long long)c.green << 8) | c.blue;
}

Color convertToRGB(unsigned long long html) {
    Color c;
    c.red = (html >> 16) & 0xFF;
    c.green = (html >> 8) & 0xFF;
    c.blue = html & 0xFF;
    return c;
}

void printRGB(Color c) {
    printf("%d %d %d\n", c.red, c.green, c.blue);
}

void printHTML(Color c) {
     printf("%02X%02X%02X\n", c.red, c.green, c.blue);
}

int main(){
    Color z, z2;
    unsigned long long html;

    z = getColor();
    printRGB(z);

    html = convertToHTML(z);
    printf("%llu\n", html);
    printHTML(z);

    z2 = convertToRGB(html);
    printRGB(z2);

    return 0;
}
