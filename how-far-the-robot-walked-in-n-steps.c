#include <stdio.h>

int next_step(int step, int k)
{
    step = step - k;
    if (step < 0)
        step = 0;
    return step;
}

int main()
{
    int L;
    int k;
    int i;
    int step;
    int path;

    scanf("%d %d", &L, &k);

    i = 0;
    step = L;
    path = 0;

    while (i < 20) {
        path += step;
        i++;
        step = next_step(step, k);
    }

    printf("%d\n", path);

    return 0;
}
