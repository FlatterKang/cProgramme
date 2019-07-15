#include<stdio.h>
int main() {
    int i, n, result = 1;

    printf("您要求二的几次幂？");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        result *= 2;
    }

    printf("2的%d次幂为：%d\n", n, result);

    return 0;
}
