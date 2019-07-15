/*
    输入的整数是奇数还是偶数,改用switch语句
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    switch (no % 2) {
    case 1: printf("输入的整数是奇数\n"); break;
    case 0: printf("输入的整数是偶数\n"); break;
    }
    return 0;
}