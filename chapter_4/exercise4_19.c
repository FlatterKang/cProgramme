/*
    显示输入的整数值以下的约数
*/
#include <stdio.h>

int main(void)
{
    int i , n, m=0;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0)
            printf("%d ", i);
        if (n%i==0)
        	m++;
    }
    putchar('\n');
    printf("%d\n", m);

    return 0;
}