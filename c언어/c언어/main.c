#include <stdio.h>
//
//int GetMax(int num1, int num2, int num3);
//int Getmin(int num1, int num2, int num3);
//int main()
//{
//    int num1, num2, num3;
//    printf("세 개의 정수 입력 : ");
//    scanf("%d %d %d", &num1, &num2, &num3);
//    printf("가장 큰 수: %d\n", GetMax(num1, num2, num3));
//    printf("가장 작은 수: %d\n", Getmin(num1, num2, num3));
//}
//
//int GetMax(int a, int b, int c)
//{
//    int sum;
//    sum = a>b?(a>c?a:c):(b>c?b:c);
//    return sum;
//}
//int Getmin(int a, int b, int c)
//{
//    int sum;
//    sum = a<b?(a<c?a:c):(b<c?b:c);
//    return sum;
//}
//#include "stdio.h"
//int square(int a) {
//    a *= a;
//    return a;
//}
//
//int main() {
//    int num;
//    printf("정사각형의 한 변의 길이는? : ");
//    scanf("%d", &num);
//    printf("정사각형의 넓이는 %d입니다.", square(num));
//}
//#include <stdio.h>
//int plus(int a){
//    a += 10;
//    return a;
//}
//int minus(int a){
//    a -= 10;
//    return a;
//}
//int main(){
//    int num;
//    printf("정수 입력 : ");
//    scanf("%d", &num);
//    printf("10을 더한 값 :%d\n", plus(num));
//    printf("10을 뺀 값 : %d\n", minus(num));
//}

//
//#include <stdio.h>       //예제 3
//void func(int n);
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    func(num);
//    return 0;
//}
//void func(int n)
//{
//    if (n<1) return;
//
//    func(n-1);
//    printf("%d\n", n);
//}


//#include <stdio.h>     예제 4
//void func(int n);
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    func(num);
//    return 0;
//}
//void func(int n)
//{
//    if (n<1) return;
//    printf("%d\n", n);
//    func(n-1);
//}


//#include <stdio.h>     //예제 5
//int func(int n);
//int total;
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    func(num);
//    printf("%d\n", total);
//    return 0;
//}
//int func(int n)
//{
//    if (n<1) return 0;
//    total += n;
//    func(n-1);
//    return total;
//}

//#include <stdio.h>     //예제 6
//void func(int n1, int n2);
//int result;
//int main()
//{
//    int num1, num2;
//    scanf("%d %d", &num1, &num2);
//    func(num1, num2);
//    return 0;
//}
//void func(int n1, int n2)
//{
//    if (n2<n1) return;
//
//    func(n1, n2 - 1);
//    if (n2%2 != 0) printf("%d ", n2);
//    return;
//}

//#include <stdio.h>
//int main()
//{
//    int num1 = 20;
//    int num2 = 30;
//
//    int* pnum1 = &num1;
//    int* pnum2 = &num2;
//
//    printf(" num1 value : %14d, &num1  : %p\n", num1, &num1);
//    printf(" num2 value : %14d, &num2  : %p\n", num2, &num2);
//    printf("pnum1 value : %p, &pnum1 : %p\n", pnum1, &pnum1);
//    printf("pnum1 value : %p, &pnum2 : %p\n", pnum2, &pnum2);
//}

//#include <stdio.h>
//int main() {
//    int a, b = 0;
//    printf("1부터 무슨 수 까지 출력할까요? : ");
//    scanf("%d", &a);
//    while (a > b) {
//        b++;
//        printf("%d ", b);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int a, b = 1;
//    printf("무슨 수의 약수를 출력할까요? : ");
//    scanf("%d", &a);
//    while (a >= b) {
//        if (a%b == 0) {
//            printf("%d", b);
//        }
//        b++;
//    }
//    return 0;
//}
//#include <stdio.h>//>
//#include "string.h"
//struct Person {
//    double height;
//    double weight;
//    char name[10];
//    short grade;
//};
//int main() {
//    struct Person person;
//    person.height = 174.2;
//    person.weight = 67.8;
//    strcpy(person.name, "홍승재");
//    person.grade = 1;
//    printf("person.height : %.1lf\n", person.height);
//    printf("person.weight : %.1lf\n", person.weight);
//    printf("person.height : %s\n", person.name);
//    printf("person.height : %d\n", person.grade);
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//struct point {
//    double x;
//    double y;
//};
//int main() {
//    struct point p1, p2;
//    double Difference;
//    printf("두 점의 거리를 구합니다.\n");
//    printf("(a, b)(c, d)로 입력해주세요. : ");
//    scanf("%lf %lf", &p1.x, &p1.y);
//    scanf("%lf %lf", &p2.x, &p2.y);
//    Difference = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
//    printf("%lf", Difference);
//}
//#include <stdio.h>
//#include <stdlib.h>
//struct point {
//    int x;
//    int y;
//};
//
//struct rec {
//    struct point p1, p2;
//}r1;
//
//int check(int a) {
//    if (a < 0) {
//        a *= -1;
//        return a;
//    } else {
//        return a;
//    }
//}
//
//int main() {
//    int result;
//    printf("두 점의 좌표를 입력받아 넓이를 출력하시오.\n");
//    printf("첫번째 점의 좌표 (x y) : ");
//    scanf("%d %d", &r1.p1.x, &r1.p1.y);
//    printf("두번째 점의 좌표 (x y) : ");
//    scanf("%d %d", &r1.p2.x, &r1.p2.y);
//    result = (r1.p2.x - r1.p1.x) * (r1.p2.x - r1.p1.x);
//    result = (check(result));
//    printf("넓이 : %d\n", check(result));
//}

//int Factorial(int num) {
//    if (num == 1) return  1;
//    else return num * Factorial(num - 1);
//    return 0;
//}
//
//int main() {
//    int a;
//
//    scanf("%d", &a);
//    printf("%d\n", Factorial(a));
//}

//int fibo(int num) {
//    if (num == 1 || num == 2) return  1;
//    else return  fibo(num - 1) + fibo(num - 2);
//}
//
//int main() {
//    int a;
//
//    scanf("%d", &a);
//    printf("%d\n", fibo(a));
//}

//int hanoi(int n) {
//    if (n == 1) return 1;
//    else return 2 * hanoi(n - 1) + 1;
//}
//
//int main() {
//    int num;
//    scanf("%d", &num);
//    printf("%d", hanoi(num));
//
//}

//int hanoi(int n) {
//    if (n == 1) return 1;
//    else return 2 * hanoi(n - 1) + 1;
//}
//
//void hanoi_tower(int n, char start, char mid, char end) {
//    if (n == 1) {
//        printf("%d번 원판을 %c 에서 %c 로 옮긴다.\n", n, start, end);
//    } else {
//        hanoi_tower(n - 1 , start, end, mid);
//        printf("%d번 원판을 %c 에서 %c 로 옮긴다.\n", n, start, end);
//        hanoi_tower(n - 1, mid, start, end);
//    }
//}
//
//int main() {
//    int a;
//    char start = 'A';
//    char mid = 'B';
//    char end = 'C';
//
//    scanf("%d번 이동", &a);
//
//    printf("%d\n", hanoi(a));
//    hanoi_tower(a, start, mid, end);
//}
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//
//int stack[MAX_STACK_SIZE];
//int top = -1;
//
////포화상태 확인
//int is_full(void) {
//    if (top == MAX_STACK_SIZE - 1) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
////공백상태 확인
//int is_empty(void) {
//    if (top == -1) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
//void push(int n) {
//    // 스택에 새로운 요소를 삽입, 그 전에 스택이 가득 차지 않았는지 검사
//    if (is_full()) {
//        printf("error : over_flow\n");
//    } else {
//        stack[++top] = n;
//    }
//}
//
//int pop(void) {
//    // 스택에 하나의 요소를 제거, 그 전에 스택이 비어있는지 검사
//    int e;
//    if (is_empty()) {
//        printf("error : under_flow\n");
//        return 0;
//    } else {
//        e = stack[top--];
//        return  e;
//    }
//}
//
//int main() {
//    push(1);
//    push(2);
//    push(3);
//    printf("%d\n", pop());
//    printf("%d\n", pop());
//    printf("%d\n", pop());
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
//
//int arr[MAX_SIZE];
//
//int bubbleSort(void);
//int selectionSort(void);
//int insertSort(void);
//int QuickSort(int left, int right);
//int partition(int left, int right);
//int onlyQuickSort(int left, int right);
//
//void prnSrc(void) {
//    int i;
//    printf("Src : ");
//    for (i = 0; i<MAX_SIZE; i++) {
//        printf("%4d", arr[i]);
//    }
//    printf("\n---------------\n");
//}
//
//
//void prnRst(void) {
//    int i;
//    for (i = 0; i<MAX_SIZE; i++) {
//        printf("%4d", arr[i]);
//    }
//    printf("\n\n");
//}
//
//int main() {
//    int choice;
//    srand(time(NULL));
//    int i;
//    int again = 0;
//    do {
//        for (i = 0; i<MAX_SIZE; i++) {
//            arr[i] = rand() % 100;
//        }
//        prnSrc();
//        printf("종료: 0, 선택: 1, 버블: 2, 삽입: 3, 퀵: 4, New Quick: 5 \n정렬을 선택하세요 : ");
//        scanf("%d", &choice);
//        switch(choice) {
//            case 1:
//                selectionSort();
//                break;
//            case 2:
//                bubbleSort();
//                break;
//            case 3:
//                insertSort();
//                break;
//            case 4:
//                QuickSort(0, MAX_SIZE - 1);
//                break;
//            case  5:
//                onlyQuickSort(0, MAX_SIZE - 1);
//                break;
//            default:
//                printf("정렬 선택이 잘못 되었습니다.\n");
//        }
//        printf("계속 하실려유? : 0 or 1\n : ");
//        scanf("%d", &again);
//    } while (again);
//    return 0;
//}
//
//int bubbleSort() {
//    int temp;
//    for (int i = MAX_SIZE-1; i >=1 ; i--) { // 총 단계는 배열 사이즈-1 수행됨
//        for (int j = 0; j <= i-1; j++) { // 뒤에서부터 거품처럼 정렬되는 구조
//            if (arr[j] > arr[j + 1]) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//            prnRst();
//        }
//    }
//    return 0;
//}
//
//int selectionSort() {
//    int least, tmp;
//    for(int i=0; i<MAX_SIZE-1; i++){   // n-1단계 수행되도록 반복횟수 설정
//        least = i;
//        for(int j=i+1; j<MAX_SIZE; j++){    // 각 단계에 맞는 최소값의 인덱스 찾기
//            if(arr[least] > arr[j])
//                least = j;
//        }
//        tmp = arr[i];         // 값 교환(제 자리 위치에 최소값 넣기)
//        arr[i] = arr[least];
//        arr[least] = tmp;
//        prnRst();
//    }
//    return 0;
//}
//
//int insertSort() {
//    int key, i, j;
//    for (i = 1; i < MAX_SIZE; i++) { // i가 1부터 시작하는 것에 유의
//        key = arr[i];
//        for (j = i - 1; j >= 0 && arr[j] > key; j--) // key 값의 위치 찾기
//            arr[j + 1] = arr[j];
//        arr[j + 1] = key; // key 값 삽입
//        prnRst();
//    }
//    return 0;
//}
//
//int QuickSort(int left, int right) {
//    // left는 정렬해야 할 배열의 첫 인덱스 값, right는 마지막 인덱스 값
//    if (left < right) {
//        int q = partition(left, right); // partition함수는 피봇의 위치(인덱스)를 반환
//        QuickSort(left, q - 1);
//        QuickSort(q + 1, right); // 오른쪽 리스트 매개변수는?
//    }
//    return 0;
//}
//
//int partition(int left, int right) {
//    int pivot = arr[left];
//    int low = left + 1;
//    int high = right;
//    int temp;
//    do {
//        while (arr[low] < pivot) {
//            low++;
//        }
//        while (arr[high] > pivot) {
//            high--;
//        }
//        if (low < high) {
//            // 값 교환
//            temp = arr[low];
//            arr[low] = arr[high];
//            arr[high] = temp;
//        }
//    } while (low < high);
//
//    // 값 교환(어떤 값들을 바꿔줘야할까요?)
////    temp = arr[left];
//    arr[left] = arr[high];
//    arr[high] = pivot;
//    prnRst();
//    return high;
//}
//
//int onlyQuickSort(int left, int right) {
//    if (left < right) {
//        int temp, pivot = arr[left];
//        int L = left + 1, R = right;
//        while (L <= R) {
//            while (arr[L] < pivot) L++;
//            while (arr[R] > pivot) R--;
//            if (L < R) SWAP(arr[L], arr[R], temp);
//        }
//        SWAP(arr[left], arr[R], temp);
//        prnRst();
//        if (left < R) onlyQuickSort(left, R - 1);
//        if (L < right) onlyQuickSort(L, right);
//    }
//    return 0;
//}
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//
//struct StackType{
//    int data[MAX_STACK_SIZE];
//    int top;
//};
//
//// 스택 초기화 함수
//void init_stack(struct StackType *p)
//{
//    p->top = -1;
//}
//
//// 공백 상태 검출 함수
//int is_empty(struct StackType *p)
//{
//    // 공백 검출
//    return (p -> top == -1) ? 1 : 0;
//}
//// 포화 상태 검출 함수
//int is_full(struct StackType *p)
//{
//    // 포화 상태 검출
//    return (p -> top == MAX_STACK_SIZE - 1) ? 1 : 0;
//}
//// 삽입함수
//void push(struct StackType *p, int item)
//{
//    // 삽입함수
//    if (is_full(p)) {
//        printf("error : over_flow\n");
//    } else {
//        p -> data[++p -> top] = item;
//    }
//}
//// 삭제함수
//int pop(struct StackType *p)
//{
//    // 삭제함수
//    int e;
//    if (is_empty(p)) {
//        printf("error : under_flow\n");
//        return 0;
//    } else {
//        e = p -> data[p -> top--];
//        return  e;
//    }
//}
//int main(void)
//{
//    struct StackType s;  // 스택을 정적으로 생성
//
//    init_stack(&s);   // 함수를 호출할 때 매개변수로 스택의 주소를 전달
//    push(&s, 1);
//    push(&s, 2);
//    push(&s, 3);
//    push(&s, 4);
//    push(&s, 5);
//    push(&s, 6);
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//}
//
#include<stdio.h>
#include<string.h>
#define MAX_STACK_SIZE 100

struct stacks {
    char stack[MAX_STACK_SIZE];
    char top;
};

void init_stack(struct stacks *p) {
    p->top = -1;
}

//스택과 관련된 함수 모두 작성
// 공백 상태 검출 함수
int is_empty(struct stacks *p) {
    // 공백 검출
    return (p -> top == -1) ? 1 : 0;
}
// 포화 상태 검출 함수
int is_full(struct stacks *p) {
    // 포화 상태 검출
    return p -> top == MAX_STACK_SIZE - 1 ? 1 : 0;
}
// 삽입함수
void push(struct stacks *p, char item) {
    // 삽입함수
    if (is_full(p)) {
        printf("error : over_flow\n");
    } else {
        p -> stack[++p -> top] = item;
    }
}
// 삭제함수
char pop(struct stacks *p) {
    // 삭제함수
    int e;
    if (is_empty(p)) {
        printf("error : under_flow\n");
        return 0;
    } else {
        e = p -> stack[p -> top--];
        return  e;
    }
}
//연산자 우선순위 결정하는 함수
int rank(char c) {
    if (c == '(' ||
        c == ')')
        return 0;
    else if (c == '+' ||
             c == '-')
        return 1;
    else if (c == '*' ||
             c == '/')
        return 2;
    else return -1;
}

char peek(struct stacks* s) {
    if (is_empty(s)) return 'E';
    else return s->stack[s->top];
}

//전위 -> 후위
void infix_to_postfix(char* s) {
    struct stacks st;
    char ch;
    int length = strlen(s);
    init_stack(&st);
    for (int i = 0; i < length; i++) {
        ch = s[i];
        //연산자일때
        if (rank(ch) >= 1) {
            while (rank(peek(&st)) >= rank(ch)) {
                printf("%c", pop(&st));
            }
            push(&st, ch);
        }
        //왼쪽 괄호일때 (
        else if (ch == '(') {
            push(&st, ch);
        }
        //오른쪽 괄호일때 )
        else if (ch == ')') {
            while (peek(&st) != '(') {
                printf("%c", pop(&st));
            }
        }
        //나머지(피연산자일때)
        else {
            printf("%c", ch);
        }
    }

    //스택에 남아있는 것들 모두 출력
    while (!is_empty(&st)) {
        printf("%c", pop(&st));
    }
}

int main() {
    char* s = "(2+3)*4+9";
    printf("중위표기수식 %s\n", s);
    printf("후위표기수식 ");
    infix_to_postfix(s);
    return 0;
}

