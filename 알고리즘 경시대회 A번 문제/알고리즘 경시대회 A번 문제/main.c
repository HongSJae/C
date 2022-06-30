#include <stdio.h>
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main(void) {
    int StudentCNT, LimitHight, i, StudentHight[10], j1=0,j2=0;
    scanf("%d %d", &StudentCNT, &LimitHight);
    for(i = 0; i < StudentCNT; i++){
        scanf("%d",&StudentHight[i]);
        if(StudentHight[i] <= LimitHight) j1++;
        else j2++;
    }
    printf("%d", factorial(j1) * factorial(j2));
}

