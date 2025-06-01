#define N 100

#define N 100
typedef struct {
    char a[N];
    unsigned int n;
} Decimal;

void elong_print(Decimal x) {
    if (x.n == 0 && x.a[0] == 0) {
        printf("0\n");
        return;
    }

    for (int i = x.n; i >= 0; i--) {
        printf("%d", x.a[i]);
    }
    printf("\n");
}

Decimal add(Decimal x, Decimal y) {
    Decimal result = {{0}, 0};
    int carry = 0;
    int max_n = (x.n > y.n) ? x.n : y.n;

    for (int i = 0; i <= max_n || carry; i++) {
        int sum = carry;
        if (i <= x.n) sum += x.a[i];
        if (i <= y.n) sum += y.a[i];

        result.a[i] = sum % 10;
        carry = sum / 10;
        result.n = i;
    }

    return result;
}

int main(){
    Decimal x = {{7, 4, 1}, 2};
    Decimal y = {{3, 1}, 1};
    Decimal res;

    res = add(x, y);
    elong_print(res);

    return 0;
}
