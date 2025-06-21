#include <stdlib.h>

void elong_add(const Decimal *a, const Decimal *b, Decimal *res) {
    unsigned int max_n = (a->n > b->n) ? a->n : b->n;
    res->size = max_n + 2;
    res->a = (char *)malloc(res->size * sizeof(char));
    
    int carry = 0;
    unsigned int i;
    for (i = 0; i <= max_n; i++) {
        int digit_a = (i <= a->n) ? a->a[i] : 0;
        int digit_b = (i <= b->n) ? b->a[i] : 0;
        
        int sum = digit_a + digit_b + carry;
        res->a[i] = sum % 10;
        carry = sum / 10;
    }
    
    if (carry > 0) {
        res->a[i] = carry;
        res->n = i;
    } else {
        res->n = i - 1;
    }
}
