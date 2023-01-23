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
//#include <stdio.h>
//
//int main(void) {
//    int a,b;
//    while(scanf("%d %d", &a, &b)!=EOF) {
//        printf("%d\n", a+b);
//    }
//}
//MARK: - 15552번
//#include <stdio.h>
//
//int main() {
//    int count;
//    scanf("%d", &count);
//    for (int i = 0; i < count; i++) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        printf("%d\n", a + b);
//    }
//}
//MARK: -  10871번
//#include <stdio.h>
//
//int main() {
//    int n, x;
//    scanf("%d %d", &n, &x);
//
//    int value;
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &value);
//        if (value < x) printf("%d ", value);
//    }
//    return 0;
//}
//MARK: - 10807번
//#include <stdio.h>
//
//int main() {
//    int n, v;
//    scanf("%d", &n);
//
//    int arr[100] = {0};
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &v);
//    int count = 0;
//    for (int i = 0; i < n; ++i) {
//        if (arr[i] == v) {
//            count ++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//MARK: - 5597번
//#include <stdio.h>
//
//int main() {
//    int arr[28] = {0};
//    for (int i = 0; i < 28; i++) {
//        int n;
//        scanf("%d", &n);
//        arr[n - 1] = 1;
//    }
//    for (int i = 0; i < 30; i++)
//        if (arr[i] == 0)
//            printf("%d \n", i + 1);
//}
//MARK: - 2738번
//#include <stdio.h>
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int a[100][100], b[100][100];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%d ", a[i][j] + b[i][j]);
//        }
//        printf("\n");
//    }
//}
//MARK: - 11654번
//#include <stdio.h>
//
//int main() {
//    char c;
//    scanf("%c", &c);
//    printf("%d", c);
//}
//MARK: - 2743번
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char s[100] = {""};
//    scanf("%s", s);
//    printf("%ld", strlen(s));
//}
//MARK: - 2744번
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    //97~122 a~z
//    //65~90 A~Z
//    char str[100] = " ";
//    int length, i;
//
//    scanf("%s", str);
//
//    length = strlen(str);
//
//    for (i = 0; i < length; i++) {
//        if (str[i] >= 97 && str[i] <= 122)
//            str[i] -= 32;
//        else if (str[i] >= 65 && str[i] <= 90)
//            str[i] += 32;
//    }
//    printf("%s", str);
//}
//MARK: - 2754번
//#include <stdio.h>
//
//int main(void)
//{
//    char str[3];
//    double score = 4.0;
//    scanf("%s", str);
//
//    if (str[0] == 'F') {
//        printf("0.0\n");
//        return 0;
//    }
//
//    score -= str[0] - 'A';
//    if (str[1] == '+')
//        score += 0.3;
//    if (str[1] == '-')
//        score -= 0.3;
//
//    printf("%.1lf", score);
//    return 0;
//}
//MARK: - 10809번
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str[100];
//    scanf("%s", str);
//
//    for (int i = 0; i < 26; i++) {
//        int value[26] = {0};
//        char alpha = i + 97;
//        for (int j = 0; j < strlen(str); j++) {
//            if (str[j] == alpha) {
//                value[i] = j;
//                break;
//            } else {
//                value[i] = -1;
//            }
//        }
//        printf("%d ", value[i]);
//    }
//    printf("\n");
//}
//MARK: - 11718번
//#include <stdio.h>
//
//int main() {
//    char s[101];
//    while (scanf("%[^\n]\n",s)==1) {
//        printf("%s\n",s);
//    }
//    return 0;
//}
//MARK: - 9086번
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int count = 0;
//    char str[100] = {};
//    scanf("%d", &count);
//    for (int i = 0; i < count; i++) {
//        scanf("%s", str);
//        int front = str[0];
//        int rear = str[strlen(str) - 1];
//        char result[2] = {front, rear};
//        printf("%c%c\n", result[0], result[1]);
//    }
//}
//MARK: - 15964번
//#include <stdio.h>
//#define hi(x, y) (x + y) * (x - y)
//
//int main() {
//    long a, b;
//    scanf("%ld %ld", &a, &b);
//    printf("%ld", hi(a, b));
//}
//MARK: - 2475번
//#include <stdio.h>
//
//void input(int* value) {
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &value[i]);
//    }
//}
//
//void output(int* value) {
//    int result = 0;
//    for (int i = 0; i < 5; i++) {
//        result += value[i] * value[i];
//    }
//    printf("%d", result % 10);
//}
//
//int main() {
//    int arr[5] = {};
//    input(arr);
//    output(arr);
//}
//MARK: - 2562번
//#include <stdio.h>
//
//void printMax(int* arr) {
//    int maxValue = 0;
//    int maxIndex = 0;
//    for (int i = 0; i < 9; i++) {
//        if (maxValue <= arr[i]) {
//            maxValue = arr[i];
//            maxIndex = i + 1;
//        }
//    }
//    printf("%d\n%d", maxValue, maxIndex);
//}
//
//int main() {
//    int arr[9] = {};
//    for (int i = 0; i < 9; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printMax(arr);
//}
//MARK: - 2675번
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char S[1000][1000] = {};
//    int R[1000] = {};
//    int T = 0;
//    scanf("%d", &T);
//    for (int i = 0; i < T; i++) {
//        scanf("%d %s", &R[i], S[i]);
//    }
//    for (int i = 0; i < T; i++) {
//        for (int j = 0; j < strlen(S[i]); j++) {
//            for (int k = 0; k < R[i]; k++) {
//                printf("%c", S[i][j]);
//            }
//        }
//        printf("\n");
//    }
//}
//MARK: - 2920번
//#include <stdio.h>
//
//int main() {
//    int arr[1000] = {};
//    int check = 0;
//    for (int i = 0; i < 8; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 7; i++) {
//        if (arr[i] + 1 == arr[i + 1]) {
//            check = 0;
//        } else if (arr[i] - 1 == arr[i + 1]) {
//            check = 1;
//        } else {
//            printf("mixed");
//            return 0;
//        }
//    }
//    if (check == 0) {
//        printf("ascending");
//        return 0;
//    }
//    printf("descending");
//}
//MARK: -  8958번
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int number = 0;
//    char input[100] = {};
//    scanf("%d", &number);
//    for (int i = 0; i < number; i++) {
//        int sum = 0;
//        int add = 0;
//        scanf("%s", input);
//        for (int j = 0; j < strlen(input); j++) {
//            if (input[j] == 'O') {
//                sum += ++add;
//            } else
//                add = 0;
//        }
//        printf("%d\n", sum);
//    }
//}
//MARK: - 10818번
//#include <stdio.h>
//
//int main() {
//    int number;
//    scanf("%d", &number);
//    int arr[number];
//    for (int i = 0; i < number; i++) {
//        scanf("%d", &arr[i]);
//    }
//    int min = arr[0], max = arr[0];
//    for (int i = 0; i < number; i++) {
//        if (arr[i] < min)
//            min = arr[i];
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("%d %d", min, max);
//}
//MARK: - 11720번
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int number, sum = 0;
//    scanf("%d", &number);
//    char input[number];
//    scanf("%s", input);
//    for (int i = 0; i < number; i++) {
//        sum += input[i] - '0';
//    }
//    printf("%d", sum);
//}
//MARK: - 1152번
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char string[1000000] = {};
//    int count = 0;
//    scanf("%[^\n]s", string);
//    if(string[0]!=' ') count++;
//    for (int i = 1; i < strlen(string); i++) {
//        if (string[i - 1] == ' ' && string[i] != ' ') {
//            count++;
//        }
//    }
//    printf("%d", count);
//}
//MARK: - 1157번
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char a[1000000] = {};
//    int arr[26];
//    char output = '\0';
//    scanf("%s", a);
//    unsigned long size = strlen(a);
//    int max = 0;
//    for (int i = 0; i < size; i++) {
//        if (a[i] >= 'a') arr[a[i] - 'a']++;
//        else arr[a[i] - 'A']++;
//    }
//    for (int i = 0; i < 26; i++) {
//        if (arr[i] == max)
//            output = '?';
//        else if (arr[i] > max) {
//            max = arr[i];
//            output = i + 'A';
//        }
//    }
//    printf("%c", output);
//}
//MARK: - 1546번
//#include <stdio.h>
//
//double average(double arr[], int size) {
//    int aver = 0;
//    for (int i = 0; i < size; i++)
//        aver += arr[i];
//    aver /= size;
//    return aver;
//}
//
//int main() {
//    int size;
//    scanf("%d", &size);
//    double score[size];
//    int max = 0;
//    for (int i = 0; i < size; i++) {
//        scanf("%lf", &score[i]);
//        if (score[i] > max) {
//            max = score[i];
//        }
//    }
//    for (int i = 0; i < size; i++)
//        score[i] *= 100.0 / max;
//    printf("%lf", average(score, size));
//}
//MARK: - 2439번
#include <stdio.h>

int main() {
    int size;
    int j, i;
    scanf("%d", &size);
    for (i = 1; i <= size; i++) {
        for (j = size - i; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
