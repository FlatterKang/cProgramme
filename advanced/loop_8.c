#include<stdio.h>

int main() {
    int bottle = 0, money;
    printf("请输入您现在有多少钱：");
    scanf("%d", &money);

    while (money > 2) {
        money -= 2;
        bottle++;

    }

    printf("您可以喝%d瓶可乐。\n", bottle);

    return 0;
}