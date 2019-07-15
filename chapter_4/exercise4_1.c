/*
    判断输入的整数的符号
*/
#include <stdio.h>

int main(void) {
    int no;
    int n;
    do {
        printf("请输入一个整数：");
        scanf("%d", &no);

        if (no == 0)
            puts("该整数为0");
        else if (no > 0)
            puts("该整数为正数");
        else
            puts("该整数为负数");
        
        printf("是否要继续(继续请输入1，退出输入任意数字)\n");
        scanf("%d", &n);
    } while (n == 1);
    return 0;
}