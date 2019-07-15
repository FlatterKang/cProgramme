//编写一段程序，使之连续显示*,总个数等于所输入的整数值。
//另外，当输入0以下的整数时，则什么也不显示。
#include<stdio.h>
int main() {
    int i = 0, n;
    printf("请输入正整数：");
    scanf("%d", &n);

    while (i < n) {
        i++;
        printf("*\n");
    }

    return 0;
}