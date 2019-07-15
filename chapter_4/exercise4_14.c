//循环显示1234567890
#include<stdio.h>
int main() {
    int i, j, num;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &num);
        getchar();
        if (num <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (num <= 0);

    for (i = 0; i < num / 10; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d", j);
        }

        printf("0");
    }

    for (i = 1; i < num % 10; i++) {
        printf("%d", i);
    }

    printf("\n");
    return 0;
}