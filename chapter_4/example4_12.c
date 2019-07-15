/*
    输入一个整数，连续显示出该整数个 *（for）
*/
#include <stdio.h>

int main() {
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
        putchar('*');
    putchar('\n');

    return 0;
}