#include <stdio.h>

int delim(int a[], int i, int j) {
    int total = a[i] + a[j];
    a[i] = a[j] = total / 2;
    return total % 2;
}

int all_equal(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0])
            return 0;
    }
    return 1;
}

int make_all_happy(int a[], int n) {
    int schoolboy = 0;

    while (!all_equal(a, n)) {
        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            schoolboy += delim(a, i, j);
        }
    }

    return schoolboy;
}

int main() {
    int a[100];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int schoolboy = make_all_happy(a, n);
    printf("%d %d\n", schoolboy, a[0]);

    return 0;
}
