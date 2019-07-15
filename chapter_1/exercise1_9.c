#include<stdio.h>
int main() {
    int a, b, c;
    printf("请输入3个整数。\n");
    printf("整数1:");
    scanf("%d", &a);
    printf("整数2:");
    scanf("%d", &b);
    printf("整数3:");
    scanf("%d", &c);
    printf("他们的和为：%d\n",a+b+c);
    return 0;
}