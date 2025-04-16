#include <stdio.h>

int main()
{

    int h, m;

    scanf("%d%d", &h, &m);

    int min = 60 * h + m;
    int sec = 3600 * h + 60 * m;

    printf("%d\n%d", min, sec);
    return 0;
}
