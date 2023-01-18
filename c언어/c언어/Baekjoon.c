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
#include <stdio.h>
#include <stdlib.h>

int main() {
    long n, m;
    scanf("%ld %ld", &n, &m);
    printf("%ld",labs(n - m));
}
