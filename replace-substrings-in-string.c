#include <stdlib.h>
#include <string.h>

char *replace(const char *src) {
    const char *from = "bomb";
    const char *to = "watermelon";
    size_t from_len = strlen(from);
    size_t to_len = strlen(to);

    int count = 0;
    const char *p = src;
    while ((p = strstr(p, from)) != NULL) {
        count++;
        p += from_len;
    }

    size_t new_len = strlen(src) + count * (to_len - from_len) + 1;
    char *result = malloc(new_len);
    if (!result) return NULL;

    const char *src_ptr = src;
    char *res_ptr = result;
    while ((p = strstr(src_ptr, from)) != NULL) {
        size_t bytes = p - src_ptr;
        memcpy(res_ptr, src_ptr, bytes);
        res_ptr += bytes;
        memcpy(res_ptr, to, to_len);
        res_ptr += to_len;
        src_ptr = p + from_len;
    }
    strcpy(res_ptr, src_ptr);

    return result;
}
