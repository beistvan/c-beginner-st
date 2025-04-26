#include <stdio.h>

Data getData() {
    Data d;
    scanf("%d-%hhd-%hhd", &d.yy, &d.mm, &d.dd);
    return d;
}

void printData(Data d) {
    printf("%04d-%02d-%02d\n", d.yy, d.mm, d.dd);
}


Season convToSeas(Data d) {
    Season s;
    s.yy = d.yy;

    int day = 0;
    switch (d.mm) {
        case 12:
            s.season = 0;
            day = d.dd;
            break;
        case 1:
            s.season = 0;
            day = 31 + d.dd;
            break;
        case 2:
            s.season = 0;
            day = 31 + 31 + d.dd;
            break;
        case 3:
            s.season = 1;
            day = d.dd;
            break;
        case 4:
            s.season = 1;
            day = 31 + d.dd;
            break;
        case 5:
            s.season = 1;
            day = 31 + 30 + d.dd;
            break;
        case 6:
            s.season = 2;
            day = d.dd;
            break;
        case 7:
            s.season = 2;
            day = 30 + d.dd;
            break;
        case 8:
            s.season = 2;
            day = 30 + 31 + d.dd;
            break;
        case 9:
            s.season = 3;
            day = d.dd;
            break;
        case 10:
            s.season = 3;
            day = 30 + d.dd;
            break;
        case 11:
            s.season = 3;
            day = 30 + 31 + d.dd;
            break;
    }

    s.day = day;
    return s;
}

void printSeas(Season s) {
    printf("%04d-%02d-%02d\n", s.yy, s.season, s.day);
}
