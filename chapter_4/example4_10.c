/*
    逆向显示正整数
*/
#include <stdio.h>

int main() {
    int no;

    while (no <= 0) {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("请不要输入非正整数！！！");
    }

    printf("该整数逆向显示的结果是：");
    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }

    return 0;
}