//
//  Slim한 자료구조.c
//  c언어
//
//  Created by 홍승재 on 2022/11/08.
//

//MARK: - 3. 덱(DeQueue)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
    int front, rear;
    element data[MAX_QUEUE_SIZE];
} DequeueType;

void init_deque(DequeueType *q) {
    q->front = q->front = 0;
}

bool is_empty(DequeueType *q) {
    return q->front == q->rear ? 1 : 0;
}

bool is_full(DequeueType *q) {
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front ? 1 : 0;
}

void deque_print(DequeueType *q) {
    int i;
    printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
    for (i = (q->front + 1) % MAX_QUEUE_SIZE;
         i != q->front;
         i = (i + 1) % MAX_QUEUE_SIZE) {
        printf("%d | ", q->data[i]);
        if (i == q->rear) break;
    }
    printf("\n");
}

void add_rear(DequeueType *q, element item) {
    if(is_full(q))
        printf("=== Dequeue is Full !! ===\n");
    else
        q->data[++q->rear] = item;
}

element del_front(DequeueType *q) {
    if (is_empty(q)) {
        printf("=== Dequeue is empty !! ===\n");
        exit(1);
    }
    return q->data[++q->front];
}

element get_front(DequeueType *q) {
    if (is_empty(q)) {
        printf("=== Dequeue is empty !! ===\n");
        exit(1);
    }
    return q->data[q->front];
}

void add_front(DequeueType *q, element item) {
    if(is_full(q))
        printf("=== Dequeue is Full !! ===\n");
    else
        q->data[(q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE] = item;
}

element del_rear(DequeueType *q) {
    if (is_empty(q)) {
        printf("=== Dequeue is empty !! ===\n");
        exit(1);
    }
    return q->data[++q->rear];
}

element get_rear(DequeueType *q) {
    if (is_empty(q)) {
        printf("=== Dequeue is empty !! ===\n");
        exit(1);
    }
    return q->data[q->rear];
}

int main() {
    DequeueType q;
    int i;
    
    init_deque(&q);
    
    for (i = 0; i <= MAX_QUEUE_SIZE; i++) {
        add_front(&q, i + 1);
        deque_print(&q);
    }
    
    for (i = 0; i <= MAX_QUEUE_SIZE; i++) {
        printf("dequeue: %d \t", del_rear(&q));
        deque_print(&q);
    }
}
