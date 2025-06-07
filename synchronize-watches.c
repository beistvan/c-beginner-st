#include <stdio.h>

int mod720(int x) {
    x %= 720;
    if (x < 0) x += 720;
    return x;
}

int main() {
    int hb, minb, nb, hbf, minbf;
    int hm, minm, nm, hmb, minmb;

    scanf("%d:%d %d %d:%d", &hb, &minb, &nb, &hbf, &minbf);
    scanf("%d:%d %d %d:%d", &hm, &minm, &nm, &hmb, &minmb);

    int startB = mod720(hb * 60 + minb + hbf * 60 + minbf);
    int stepB = hbf * 60 + minbf;

    int startM = mod720(hm * 60 + minm - (hmb * 60 + minmb));
    int stepM = hmb * 60 + minmb;

    int max_time = 7 * 24 * 60;

    if (startB == startM) {
        printf("0 00:00\n");
        return 0;
    }

    for (int t = 1; t <= max_time; t++) {
        int timeB, timeM;

        int kB = nb == 0 ? 0 : (t / nb);
        int kM = nm == 0 ? 0 : (t / nm);

        timeB = mod720(startB + kB * stepB);
        timeM = mod720(startM - kM * stepM);

        if (timeB == timeM) {
            int days = t / (24 * 60);
            int minutes_in_day = t % (24 * 60);
            int hours = minutes_in_day / 60;
            int minutes = minutes_in_day % 60;
            printf("%d %02d:%02d\n", days, hours, minutes);
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
