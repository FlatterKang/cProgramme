/*
    从输入的整数开始倒数到1
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    if (no > 0) {
        while (no > 0) {
            printf("%d ", no--);
        }

        printf("\n");
    }

    return 0;
}