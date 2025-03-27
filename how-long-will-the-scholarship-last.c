#include <stdio.h>

int main() {
    int price, delta, money;
    scanf("%d %d %d", &price, &delta, &money);

    int wday = 0;
    int days = 0;

    while (money >= price) {
        money -= price;
        days++;
        wday++;

        if (wday == 7) {
            wday = 0;
            price += delta;
        }
    }

    printf("%d\n", days);
    return 0;
}
