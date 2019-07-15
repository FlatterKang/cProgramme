/*
    显示输入的整数值以下的偶数
*/
#include <stdio.h>

int main()
{
    int i , n;

    printf("请输入一个整数值：");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i );
    }
    putchar('\n');

    return 0;
}