#include<stdio.h>
int main() {
    int i, j, n;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &n);

        if (n <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}