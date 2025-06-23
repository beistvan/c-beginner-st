#include <stdlib.h>
#include <string.h>
#include <ctype.h>

LongN getLongN(char *s) {
    LongN res;
    int i = 0;

    if (s[0] == '-') {
        res.sign = 1;
        i = 1;
    } else {
        res.sign = 0;
        if (s[0] == '+') i = 1;
    }

    while (s[i] == '0' && s[i+1] != '\0') i++;

    char *digits = s + i;
    int dig_len = strlen(digits);

    if (dig_len == 1 && digits[0] == '0') {
        res.n = 1;
        res.dig = (char*)malloc(1);
        res.dig[0] = 0;
        res.sign = 0;
        return res;
    }

    int padded_len = dig_len;
    if (dig_len % 2 != 0) padded_len++;

    char *padded = (char*)malloc(padded_len + 1);
    if (dig_len % 2 != 0) {
        padded[0] = '0';
        strcpy(padded + 1, digits);
    } else {
        strcpy(padded, digits);
    }

    res.n = padded_len / 2;
    res.dig = (char*)malloc(res.n);
    
    int idx = 0;
    for (int j = padded_len - 2; j >= 0; j -= 2) {
        int value = (padded[j] - '0') * 10 + (padded[j+1] - '0');
        res.dig[idx++] = (char)value;
    }

    free(padded);
    return res;
}
