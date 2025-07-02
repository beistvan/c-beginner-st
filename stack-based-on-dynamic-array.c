#include <stdio.h>
#include <stdlib.h>

typedef int Data;

Stack * stack_create(int size) {
    Stack *s = malloc(sizeof(Stack));
    if (!s) return NULL;
    s->n = 0;
    s->size = size > 0 ? size : 1;
    s->a = malloc(sizeof(Data) * s->size);
    if (!s->a) {
        free(s);
        return NULL;
    }
    return s;
}

void stack_push(Stack * s, Data x) {
    if (s->n == s->size) {
        int new_size = s->size * 2;
        Data * new_a = realloc(s->a, sizeof(Data) * new_size);
        if (!new_a) {
            return;
        }
        s->a = new_a;
        s->size = new_size;
    }
    s->a[s->n++] = x;
}

Data stack_pop(Stack * s) {
    if (s->n == 0) {
        return 0;
    }
    return s->a[--s->n];
}

Data stack_get(Stack * s) {
    if (s->n == 0) return 0;
    return s->a[s->n - 1];
}

int stack_is_empty(Stack * s) {
    return s->n == 0 ? 1 : 0;
}

void stack_print(Stack * s) {
    for (int i = 0; i < s->n; i++) {
        printf("%d", s->a[i]);
        if (i + 1 < s->n) printf(" ");
    }
    printf("\n");
}

int stack_size(Stack * s) {
    return s->n;
}

void stack_clear(Stack * s) {
    s->n = 0;
}

Stack * stack_destroy(Stack * s) {
    if (!s) return NULL;
    if (s->a) free(s->a);
    free(s);
    return NULL;
}
