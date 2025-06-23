void stack_init(Stack *s) {
    s->n = 0;
}

void stack_push(Stack *s, Data x) {
    if (s->n < N) {
        s->a[s->n] = x;
        s->n++;
    }
}

Data stack_pop(Stack *s) {
    if (s->n > 0) {
        s->n--;
        return s->a[s->n];
    }
    return 0;
}

Data stack_get(Stack *s) {
    if (s->n > 0) {
        return s->a[s->n - 1];
    }
    return 0;
}

void stack_clear(Stack *s) {
    s->n = 0;
}

void stack_print(Stack *s) {
    for (unsigned int i = 0; i < s->n; i++) {
        printf("%d ", s->a[i]);
    }
    printf("\n");
}

int stack_size(Stack *s) {
    return s->n;
}

int stack_is_empty(Stack *s) {
    return s->n == 0;
}

int stack_is_full(Stack *s) {
    return s->n == N;
}
