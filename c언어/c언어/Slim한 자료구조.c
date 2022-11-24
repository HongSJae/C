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

//MARK: - 이중 연결 리스트
//#include <stdio.h>
//#include <stdlib.h>
//typedef int element;
//typedef struct DListNode {
//    element data;
//    struct DListNode* rlink;
//    struct DListNode* llink;
//} DListNode;
//
//void init(DListNode* phead) {
//    phead->llink = phead->rlink = phead;
//}
//
//void print_dlist(DListNode* phead) {
//    DListNode* p;
//    for (p = phead->rlink; p != phead; p = p->rlink) {
//        printf("<-| %d |->", p->data);
//    }
//    printf("\n");
//}
//
//void dinsert(DListNode *before, element data) {
//    DListNode* newnode = (DListNode*)malloc(sizeof(DListNode));
//    newnode->data = data;
//    newnode->llink = before;
//    newnode->rlink = before->rlink;
//    before->rlink->llink = newnode;
//    before->rlink = newnode;
//}
//
//void ddelete(DListNode* head, DListNode* removed) {
//    if (head == removed) return;
//    removed->rlink->llink = head;
//    head->rlink = removed->rlink;
//    free(removed);
//}
//
//int main() {
//    DListNode* head = (DListNode*)malloc(sizeof(DListNode));
//    init(head);
//    printf("추가 단계\n");
//    for (int i = 0; i < 5; i++) {
//        dinsert(head, i);
//        print_dlist(head);
//    }
//    printf("\n삭제 단계\n");
//    for (int i = 0; i < 5; i++) {
//        print_dlist(head);
//        ddelete(head, head->rlink);
//    }
//    free(head);
//}
//MARK: - 연결리스트로 구현한 스택
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//typedef struct StackNode {
//    element data;
//    struct StackNode* link;
//} StackNode;
//
//typedef struct LinkedStackType {
//    StackNode* top;
//} LinkedStackType;
//
//void init(LinkedStackType* s) { s->top = NULL; }
//int is_empty(LinkedStackType* s) { return (s->top == NULL); }
//void push(LinkedStackType* s, element item) {
//    StackNode* temp =(StackNode*)malloc(sizeof(StackNode));
//    temp->data = item;
//    temp->link = s->top;
//    s->top = temp;
//}
//element pop(LinkedStackType* s) {
//    if (is_empty(s)) {
//        fprintf(stderr, "스택이 비어있음\n");
//        exit(1);
//    }
//    StackNode* temp = s->top;
//    element data = temp->data;
//    s->top = temp->link;
//    free(temp);
//    return data;
//}
//element peek(LinkedStackType* s) {
//    if (is_empty(s)) {
//        fprintf(stderr, "스택이 비어있음\n");
//        exit(1);
//    }
//    return s->top->data;
//}
//void print_stack(LinkedStackType *s) {
//    StackNode* p;
//    for (p = s->top; p != NULL; p = p->link)
//        printf("%d->", p->data);
//    printf("NULL\n");
//}
//int main(void) {
//    LinkedStackType s;
//    init(&s);
//    push(&s, 1); print_stack(&s);
//    push(&s, 2); print_stack(&s);
//    push(&s, 3); print_stack(&s);
//    pop(&s); print_stack(&s);
//    pop(&s); print_stack(&s);
//    pop(&s); print_stack(&s);
//    return 0;
//}
//MARK: - 연결리스트로 구현한 큐
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//typedef struct QueueNode {
//    element data;
//    struct QueueNode* link;
//} QueueNode;
//
//typedef struct {
//    QueueNode *front, *rear;
//} LinkedQueueType;
//
//void init(LinkedQueueType *q) {
//    q->front = q->rear = NULL;
//}
//
//int is_empty(LinkedQueueType *q) {
//    return q->front == NULL;
//}
//
//void enqueue(LinkedQueueType *q, element data) {
//    QueueNode *temp = (QueueNode*)malloc(sizeof(QueueNode));
//    temp->data = data;
//    temp->link = NULL;
//    if (is_empty(q)) {
//        q->front = q->rear = temp;
//        return;
//    }
//    q->rear->link = temp;
//    q->rear = temp;
//}
//
//element dequeue(LinkedQueueType *q) {
//    QueueNode *temp = q->front;
//    element data;
//    if (is_empty(q)) {
//        fprintf(stderr, "스택이 비어있음\n");
//        exit(1);
//    }
//    data = temp->data;
//    q->front = temp->link;
//    if (is_empty(q)) {
//        q->front = NULL;
//    }
//    free(temp);
//    return data;
//}
//
//void print_queue(LinkedQueueType* q) {
//    QueueNode *p;
//    for (p = q->front; p != NULL; p = p->link) {
//        printf("%d->", p->data);
//    }
//    printf("NULL\n");
//}
//
//int main(void) {
//    LinkedQueueType queue;
//    init(&queue);
//    enqueue(&queue, 1); print_queue(&queue);
//    enqueue(&queue, 2); print_queue(&queue);
//    enqueue(&queue, 3); print_queue(&queue);
//    dequeue(&queue); print_queue(&queue);
//    dequeue(&queue); print_queue(&queue);
//    dequeue(&queue); print_queue(&queue);
//    return 0;
//}
