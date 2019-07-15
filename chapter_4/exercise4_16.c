//编写一段程序，输入一个整数值，显示该整数值及以下的所有奇数。
#include<stdio.h>
int main() {
    int n,i=1;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &n);

        if (n <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (n <= 0);

    n += n % 2;  //变为大于等于原数的偶数
    n -= 1;      //变为小于等于原数的奇数

    if (n > 0) {
        while (i <= n) {
            printf("%d ", i);
            i += 2;
        }

        printf("\n");
    }

    return 0;
}