/*
    显示直角在左下方的等腰直角三角形
*/
#include <stdio.h>

int main()
{
    int i , j, l;

    puts("生成直角在左下方的等腰直角三角形。");
    printf("短边是："); scanf("%d", &l);

    for (i = 1; i <= l; i ++) {
        for (j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}