#include <stdio.h>
#include <math.h>
int main() {
    int a, n = 0, i;
    double b = 0;
    printf("请输入一个正整数：\n");
    scanf("%d", &a);

    do {
        b = pow(2, n); n++;
    } while (b < a);
    n = n - 2;
    for (i = 0; i <= n; i++)
        printf("%f\n", pow(2, i));
    return 0;
}