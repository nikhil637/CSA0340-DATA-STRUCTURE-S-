#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 
struct Queue {
    int items[SIZE];
    int front;
    int rear;
};

void enqueue(struct Queue* q, int value) {
    if (q->rear == SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

int dequeue(struct Queue* q) {
    if (q->front == -1) {
        printf("Queue is empty\n");
        return -1;
    } else {
        int removed = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
        return removed;
    }
}

void display(struct Queue* q) {
    if (q->front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements:\n");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    q.front = -1;
    q.rear = -1;

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    int removed = dequeue(&q);
    if (removed != -1) {
        printf("Dequeued: %d\n", removed);
    }

    display(&q);

    return 0;
}
