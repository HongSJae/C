//#include <stdio.h>
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

