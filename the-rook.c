#include <stdio.h>

int main() {
    char from_col, to_col;
    int from_row, to_row;
    char dash;

    scanf("%c%d%c%c%d", &from_col, &from_row, &dash, &to_col, &to_row);

    printf("%c%d-%c%d\n", from_col, from_row, to_col, to_row);

    if (from_col == to_col || from_row == to_row) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
