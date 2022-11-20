//
//  Slim한 자료구조.c
//  c언어
//
//  Created by 홍승재 on 2022/11/08.
//

//MARK: - 3. 덱(DeQueue)
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//#define MAX_QUEUE_SIZE 5
//
//typedef int element;
//typedef struct {
//    int front, rear;
//    element data[MAX_QUEUE_SIZE];
//} DequeueType;
//
//void init_deque(DequeueType *q) {
//    q->front = q->front = 0;
//}
//
//bool is_empty(DequeueType *q) {
//    return q->front == q->rear ? 1 : 0;
//}
//
//bool is_full(DequeueType *q) {
//    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front ? 1 : 0;
//}
//
//void deque_print(DequeueType *q) {
//    int i;
//    printf("DEQUE(front=%d rear=%d) = ", q->front, q->rear);
//    for (i = (q->front + 1) % MAX_QUEUE_SIZE;
//         i != q->front;
//         i = (i + 1) % MAX_QUEUE_SIZE) {
//        printf("%d | ", q->data[i]);
//        if (i == q->rear) break;
//    }
//    printf("\n");
//}
//
//void add_rear(DequeueType *q, element item) {
//    if(is_full(q))
//        printf("=== Dequeue is Full !! ===\n");
//    else
//        q->data[++q->rear] = item;
//}
//
//element del_front(DequeueType *q) {
//    if (is_empty(q)) {
//        printf("=== Dequeue is empty !! ===\n");
//        exit(1);
//    }
//    return q->data[++q->front];
//}
//
//element get_front(DequeueType *q) {
//    if (is_empty(q)) {
//        printf("=== Dequeue is empty !! ===\n");
//        exit(1);
//    }
//    return q->data[q->front];
//}
//
//void add_front(DequeueType *q, element item) {
//    if(is_full(q))
//        printf("=== Dequeue is Full !! ===\n");
//    else
//        q->data[(q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE] = item;
//}
//
//element del_rear(DequeueType *q) {
//    if (is_empty(q)) {
//        printf("=== Dequeue is empty !! ===\n");
//        exit(1);
//    }
//    return q->data[++q->rear];
//}
//
//element get_rear(DequeueType *q) {
//    if (is_empty(q)) {
//        printf("=== Dequeue is empty !! ===\n");
//        exit(1);
//    }
//    return q->data[q->rear];
//}
//
//int main() {
//    DequeueType q;
//    int i;
//    
//    init_deque(&q);
//    
//    for (i = 0; i <= MAX_QUEUE_SIZE; i++) {
//        add_front(&q, i + 1);
//        deque_print(&q);
//    }
//    
//    for (i = 0; i <= MAX_QUEUE_SIZE; i++) {
//        printf("dequeue: %d \t", del_rear(&q));
//        deque_print(&q);
//    }
//}

//MARK: - 리스트 자료구조

//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_LIST_SIZE 4
//
//typedef int element;
//typedef struct {
//    element array[MAX_LIST_SIZE];
//    int size;
//} ArrayListType;
//
//void init(ArrayListType *L) {
//    L->size = 0;
//}
//
//int is_empty(ArrayListType *L) {
//    return L->size == 0 ? 1 : 0;
//}
//
//int is_full(ArrayListType *L) {
//    return L->size == MAX_LIST_SIZE ? 1 : 0;
//}
//
//element get_entry(ArrayListType *L, int pos) {
//    if (0 > pos || pos >= L->size) {
//        printf("Positioin Error");
//        exit(1);
//    }
//    return L->array[pos];
//}
//
//void print_list(ArrayListType *L) {
//    if (is_empty(L)) {
//        printf("List is empty! \n");
//        return;
//    }
//    int i;
//    for (i = 0; i < L->size; i++)
//        printf("%d-> ", L->array[i]);
//    printf("\n");
//}
//
//void insert(ArrayListType *L, int pos, element item) {
//    if(is_full(L)) {
//        printf("List OverFlow\n");
//        return;
//    }
//    int i;
//    if (0 <= pos && pos <= L->size) {
//        for (i = L->size - 1; i >= pos; i--)
//            L->array[i + 1] = L->array[i];
//        L->array[pos] = item;
//        L->size++;
//    }
//}
//
//void insert_first(ArrayListType *L, element item) {
//    insert(L, 0, item);
//}
//
//void insert_last(ArrayListType *L, element item) {
//    if(is_full(L)) {
//        printf("List OverFlow\n");
//        return;
//    }
//    L->array[L->size++] = item;
//}
//
//element delete(ArrayListType *L, int pos) {
//    element item;
//    int i;
//    if(is_empty(L)) {
//        printf("List is Empty! \n");
//        exit(1);
//    }
//    if (0 > pos || pos >= L->size) {
//        printf("Positioin Error");
//        exit(1);
//    }
//    for (i = pos - 1; i >= L->size - 1; i--)
//        L->array[i + 1] = L->array[i];
//    item = L->array[pos];
//    L->size++;
//    return item;
//}
//
//int main(void) {
//    ArrayListType list;
//    init(&list);
//    insert(&list, 0, 10);
//    print_list(&list);
//    insert(&list, 1, 20);
//    print_list(&list);
//    insert_first(&list, 30);
//    print_list(&list);
//    insert_last(&list, 40);
//    print_list(&list);
//    insert(&list, 0, 50);
//    print_list(&list);
//
//    int i = 0, j = list.size;
//    for (; i < j; i++) {
//        delete(&list, 0);
//        print_list(&list);
//    }
//}

//MARK: - 원형 리스트 자료구조

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//typedef struct {
//    element data;
//    struct ListNode *link;
//} ListNode;
//
//void print_list(ListNode *head) {
//    ListNode *p;
//    if(head == NULL) return;
//    p = head->link;
//    while (p != head) {
//        printf("%d->", p->data);
//        p = p->link;
//    }
//    printf("%d\n", p->data);
//}
//
//ListNode* insert_first(ListNode *head, element data) {
//    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
//    node->data = data;
//    if (head == NULL) {
//        head = node;
//        node = node->link;
//    } else {
//        node->link = head->link;
//        head->link = node;
//    }
//    return head;
//}
//
//ListNode* insert_last(ListNode *head, element data) {
//
//}
