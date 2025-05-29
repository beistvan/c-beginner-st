#include <stdio.h>
#include <stdlib.h>

#define MAX_TURNS 1000000

typedef struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
    int size;
} Queue;

Queue* create_queue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    q->size = 0;
    return q;
}

void enqueue(Queue* q, int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    node->prev = q->rear;

    if (q->rear)
        q->rear->next = node;
    else
        q->front = node;

    q->rear = node;
    q->size++;
}

int dequeue(Queue* q) {
    if (q->front == NULL) return -1;

    Node* temp = q->front;
    int val = temp->value;

    q->front = temp->next;
    if (q->front)
        q->front->prev = NULL;
    else
        q->rear = NULL;

    free(temp);
    q->size--;
    return val;
}

int is_empty(Queue* q) {
    return q->front == NULL;
}

void free_queue(Queue* q) {
    while (!is_empty(q)) {
        dequeue(q);
    }
    free(q);
}

int beats(int a, int b) {
    if (a == 0 && b == 9) return 1;
    if (a == 9 && b == 0) return 0;
    return a > b;
}

int main() {
    Queue* first = create_queue();
    Queue* second = create_queue();

    int i, card;

    for (i = 0; i < 5; i++) {
        scanf("%d", &card);
        enqueue(first, card);
    }

    for (i = 0; i < 5; i++) {
        scanf("%d", &card);
        enqueue(second, card);
    }

    int turn;
    for (turn = 1; turn <= MAX_TURNS; turn++) {
        if (is_empty(first)) {
            printf("second %d\n", turn - 1);
            break;
        }
        if (is_empty(second)) {
            printf("first %d\n", turn - 1);
            break;
        }

        int f = dequeue(first);
        int s = dequeue(second);

        if (beats(f, s)) {
            enqueue(first, f);
            enqueue(first, s);
        } else {
            enqueue(second, f);
            enqueue(second, s);
        }
    }

    if (turn > MAX_TURNS)
        printf("botva\n");

    free_queue(first);
    free_queue(second);
    return 0;
}
