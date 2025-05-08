#include <stdio.h>

int minutes_until_next_bus(int start_hour, int start_minute, int interval, int current_time_min) {
    int start_time_min = start_hour * 60 + start_minute;
    if (current_time_min <= start_time_min) {
        return start_time_min - current_time_min;
    }
    int diff = (current_time_min - start_time_min) % interval;
    return (diff == 0) ? 0 : interval - diff;
}

int main() {
    int h, m, t1, t2;
    scanf("%d %d", &h, &m);
    scanf("%d", &t1);
    scanf("%d", &t2);

    int current_time_min = h * 60 + m;
    if (current_time_min < 330) {
        current_time_min = 330;
    }

    int wait_A = minutes_until_next_bus(6, 0, t1, current_time_min);
    int wait_B = minutes_until_next_bus(5, 45, t2, current_time_min);

    printf("%d\n%d\n", wait_A, wait_B);

    if (wait_A <= wait_B) {
        printf("A\n");
    } else {
        printf("B\n");
    }

    return 0;
}
