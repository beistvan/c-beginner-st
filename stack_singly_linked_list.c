#include <stdio.h>
#include <stdlib.h>

/*
typedef int Data;

struct Node {
    Data val;
    struct Node* next;
};

typedef struct Node* List;
*/

List list_create() {
    return NULL;
}

void list_push(List* plist, Data x) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->val = x;
    new_node->next = *plist;
    *plist = new_node;
}

Data list_pop(List* plist) {
    if (*plist == NULL) {
        fprintf(stderr, "Error: popping from empty list\n");
        exit(1);
    }
    struct Node* temp = *plist;
    Data value = temp->val;
    *plist = temp->next;
    free(temp);
    return value;
}

Data list_get(List list) {
    if (list == NULL) {
        fprintf(stderr, "Error: getting from empty list\n");
        exit(1);
    }
    return list->val;
}

void list_print(List list) {
    while (list) {
        printf("%d", list->val);
        if (list->next) printf(" ");
        list = list->next;
    }
    printf("\n");
}

int list_size(List list) {
    int count = 0;
    while (list) {
        count++;
        list = list->next;
    }
    return count;
}

int list_is_empty(List list) {
    return list == NULL ? 1 : 0;
}

void list_clear(List* plist) {
    while (*plist) {
        struct Node* temp = *plist;
        *plist = temp->next;
        free(temp);
    }
}

/*
void test0()
{
    List list = list_create();
    list_print(list);                               // empty line
    printf("is_empty = %d\n", list_is_empty(list)); // is_empty = 1
    printf("size = %d\n", list_size(list));         // size = 0

    list_push(&list, 21);
    list_print(list);                               // 21
    list_push(&list, 17);
    list_print(list);                               // 17 21
    list_push(&list, 3);
    list_print(list);                               // 3 17 21
    printf("is_empty = %d\n", list_is_empty(list)); // is_empty = 0
    printf("size = %d\n", list_size(list));         // size = 3

    Data x = list_pop(&list);
    printf("pop %d\n", x);                          // pop 3
    list_print(list);                               // 17 21
    printf("size = %d\n", list_size(list));         // size = 2

    list_clear(&list);
    list_print(list);                               // empty line
    printf("is_empty = %d\n", list_is_empty(list)); // is_empty = 1
    printf("size = %d\n", list_size(list));         // size = 0
}
*/
