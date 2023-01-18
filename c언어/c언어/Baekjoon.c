//MARK: - 10699번
//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t timer;
//    struct tm* t;
//    timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초
//    t = localtime(&timer); // 포맷팅을 위해 구조체에 넣기
//
//    printf("%d-%02d-%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
//
//    return 0;
//}
//MARK: - 7287번
//#include <stdio.h>
//
//int main() {
//    printf("20\n");
//    printf("gtw030488");
//}
//MARK: - 11382번
//#include <stdio.h>
//
//int main() {
//    long a, b, c;
//    scanf("%ld %ld %ld", &a, &b, &c);
//    printf("%ld", a + b + c);
//}
//MARK: - 14681번
//#include <stdio.h>
//
//int main() {
//    int x, y;
//    int quadrant = 0;
//    scanf("%d %d", &x, &y);
//    if (x > 0 && y > 0) {
//        quadrant = 1;
//    }
//    if (x > 0 && y < 0) {
//        quadrant = 4;
//    }
//    if (x < 0 && y > 0) {
//        quadrant = 2;
//    }
//    if (x < 0 && y < 0) {
//        quadrant = 3;
//    }
//    printf("%d", quadrant);
//
//}
//MARK: - 2420번
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    long n, m;
//    scanf("%ld %ld", &n, &m);
//    printf("%ld",labs(n - m));
//}
//MARK: - 2741번
//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    for (int i = 1; i <= a; i++) {
//        printf("%d\n", i);
//    }
//}
//MARK: - 10872번
//#include <stdio.h>
//
//int main() {
//    int a;
//    int fac = 1;
//    scanf("%d", &a);
//    for (int i = 1; i <= a; i++) {
//        fac *= i;
//    }
//    printf("%d", fac);
//}
//MARK: - 10950번
//#include <stdio.h>
//
//int main() {
//    int count = 0;
//    scanf("%d", &count);
//    int a[100], b[100] = {0};
//    for (int i = 0; i < count; i++) {
//        scanf("%d %d", &a[i], &b[i]);
//    }
//    for (int i = 0; i < count; i++) {
//        printf("%d\n", a[i] + b[i]);
//    }
//}
//MARK: - 2739번
//#include <stdio.h>
//
//int main() {
//    int count = 0;
//    scanf("%d", &count);
//    for (int i = 1; i <= 9; i++) {
//        printf("%d * %d = %d\n", count, i, count * i);
//    }
//}
//MARK: - 2438번
//#include <stdio.h>
//
//int main() {
//    int count = 0;
//    scanf("%d", &count);
//    for (int i = 1; i <= count; i++) {
//        for (int j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//MARK: - 10951번
#include <stdio.h>

int main(void) {
    int a,b;
    while(scanf("%d %d", &a, &b)!=EOF) {
        printf("%d\n", a+b);
    }
}
