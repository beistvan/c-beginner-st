Decimal * elong_add (const Decimal * a, const Decimal * b) {
    unsigned int max_len = (a->n > b->n ? a->n : b->n) + 1;
    Decimal * res = (Decimal *)malloc(sizeof(Decimal));
    res->a = (char *)calloc(max_len + 1, sizeof(char));
    res->size = max_len + 1;
    res->n = max_len;

    unsigned int i;
    int carry = 0;
    for (i = 0; i <= max_len; i++) {
        int digit_a = (i <= a->n) ? a->a[i] : 0;
        int digit_b = (i <= b->n) ? b->a[i] : 0;
        int sum = digit_a + digit_b + carry;
        res->a[i] = sum % 10;
        carry = sum / 10;
    }

    while (res->n > 0 && res->a[res->n] == 0) {
        res->n--;
    }

    return res;
}
