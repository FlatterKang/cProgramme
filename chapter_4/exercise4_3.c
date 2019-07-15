/*
    从输入的整数开始倒数到0
*/
#include <stdio.h>

int main(void) {
    int no;
    int n;

    printf("请输入一个整数：");
    scanf("%d", &no);
    n=no;

    if (no >= 0)
        while (no >= 0) {
            printf("%d ", no);
            no--;
        }
    else
        while (no <= 0) {
            printf("%d ", no);
            no++;
        }
        if(n>=0)
            printf("\n");

    return 0;
}