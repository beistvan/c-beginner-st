#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Data;

struct Node {
    struct Node *next;
    struct Node *prev;
    Data data;
};

void list_init(struct Node *list) {
    list->next = list;
    list->prev = list;
}

void list_insert(struct Node *list, struct Node *t) {
    t->next = list->next;
    t->prev = list;
    list->next->prev = t;
    list->next = t;
}

void list_insert_before(struct Node *list, struct Node *t) {
    t->prev = list->prev;
    t->next = list;
    list->prev->next = t;
    list->prev = t;
}

void list_remove(struct Node *t) {
    t->prev->next = t->next;
    t->next->prev = t->prev;
}

struct Node *list_push_front(struct Node *list, Data d) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (!new_node) return NULL;
    new_node->data = d;
    list_insert(list, new_node);
    return new_node;
}

struct Node *list_push_back(struct Node *list, Data d) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (!new_node) return NULL;
    new_node->data = d;
    list_insert_before(list, new_node);
    return new_node;
}

Data list_pop_front(struct Node *list) {
    if (list->next == list) {
        return -1;
    }
    struct Node *to_remove = list->next;
    Data data = to_remove->data;
    list_remove(to_remove);
    free(to_remove);
    return data;
}

Data list_pop_back(struct Node *list) {
    if (list->prev == list) {
        return -1;
    }
    struct Node *to_remove = list->prev;
    Data data = to_remove->data;
    list_remove(to_remove);
    free(to_remove);
    return data;
}

Data list_delete(struct Node *t) {
    Data data = t->data;
    list_remove(t);
    free(t);
    return data;
}

void list_print(struct Node *list) {
    struct Node *current = list->next;
    while (current != list) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int list_is_empty(struct Node *list) {
    return list->next == list;
}

void list_clear(struct Node *list) {
    struct Node *current = list->next;
    while (current != list) {
        struct Node *next_node = current->next;
        free(current);
        current = next_node;
    }
    list_init(list);
}

int main() {
    struct Node list;
    list_init(&list);

    list_push_back(&list, 1);
    list_push_back(&list, 2);
    list_push_back(&list, 3);
    list_print(&list);

    list_pop_back(&list);
    list_print(&list);

    list_pop_front(&list);
    list_print(&list);

    list_clear(&list);
    list_print(&list);

    return 0;
}
