#include<stdio.h>
int main() {
    int i, x, n;
    int sum = 0;
    printf("您要输入的整数个数：");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        getchar();
        sum += x;
    }

    printf("这%d个整数的和为：%d\n", n, sum);
    return 0;
}