//
//  Factial.c
//  c언어
//
//  Created by 홍승재 on 2022/08/30.
//

#include "stdio.h"

int Factorial(int num) {
    if (num == 1) return  1;
    else return num * Factorial(num - 1);
    return 0;
}

int main() {
    int a;

    scanf("%d", &a);
    printf("%d\n", Factorial(a));
}
