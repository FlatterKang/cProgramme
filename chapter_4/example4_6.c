/*
    从输入的整数开始倒数到0
*/
#include <stdio.h>

int main() {
    int n;

    printf("请输入一个正整数：");
    scanf("%d", &n);

    do {
        printf("%d ", no--);
    } while (no >= 0);

    printf("\n");

}