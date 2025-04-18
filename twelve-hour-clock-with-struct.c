#include <stdio.h>

int timeToMinutes(TicTac a) {
    return a.h * 60 + a.min;
}

TicTac minutesToTime(int minutes) {
    TicTac result;
    minutes = minutes % 720;
    result.h = minutes / 60;
    result.min = minutes % 60;
    return result;
}

TicTac after(TicTac a, int min) {
    int totalMinutes = timeToMinutes(a) + min;
    return minutesToTime(totalMinutes);
}

void forward(TicTac * me, TicTac a) {
    int totalMinutes = timeToMinutes(*me) + timeToMinutes(a);
    *me = minutesToTime(totalMinutes);
}

void backward(TicTac * me, TicTac a) {
    int totalMinutes = timeToMinutes(*me) - timeToMinutes(a);
    if (totalMinutes < 0) {
        totalMinutes += 720;
    }
    *me = minutesToTime(totalMinutes);
}

int isEqualTime(TicTac a, TicTac b) {
    return (a.h == b.h && a.min == b.min) ? 1 : 0;
}

void printTic(TicTac a) {
    printf("%02d:%02d\n", a.h, a.min);
}

int main(){
    TicTac a,b,c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n",isEqualTime(a,b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}
