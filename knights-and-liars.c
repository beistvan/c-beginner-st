#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int answers[255];
    for (int i = 0; i < n; i++) {
        scanf("%d", &answers[i]);
    }

    int min_knights = n + 1;

    for (int first = 0; first <= 1; first++) {
        int knights[255];
        knights[0] = first;

        int possible = 1;
        for (int i = 1; i < n; i++) {
            int left = (i - 1 + n) % n;
        }

        for (int i = 1; i < n; i++) {
            int prev = i - 1;
            int left = (prev - 1 + n) % n;
            if (knights[prev] == 1) {
                knights[i] = answers[prev];
            } else {
                knights[i] = 1 - answers[prev];
            }
        }

        int last = n - 1;
        int left = (last - 1 + n) % n;
        int expected;

        if (knights[last] == 1) {
            expected = answers[last];
        } else {
            expected = 1 - answers[last];
        }

        if (expected != knights[0]) {
            possible = 0;
        }

        if (possible) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (knights[i] == 1) cnt++;
            }
            if (cnt < min_knights) min_knights = cnt;
        }
    }

    printf("%d\n", min_knights);
    return 0;
}
