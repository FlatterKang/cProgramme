/*
    输入一个整数，显示出该整数个 *（循环次数可以任意指定）
*/
#include <stdio.h>

int main()
{
    int n;

    do {
        int i, no;
        while (no <= 0){
            printf("请输入一个正整数：");
            scanf("%d", &no);
            if (no <= 0)
                puts("请不要输入非正整数！！！");
        } 

        for (i = 1; i <= no; i++)
            putchar('*');
        putchar('\n');
        
        printf("是否继续执行？【Yes……0/NO……9】：");
        scanf("%d", &retry);
    } while (n == 0);

    return 0;
}