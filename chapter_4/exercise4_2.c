//求两个整数之间所有数字的和
#include<stdio.h>
int main() {
    int a, b;
    int i = 0, sum = 0;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    do {
        sum += a + i++;
    } while (i < b - a + 1);

    printf("整数%d，%d之间所有整数的和为：%d\n", a, b, sum);
    return 0;
}