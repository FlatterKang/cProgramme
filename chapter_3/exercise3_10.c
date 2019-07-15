#include <stdio.h>

int main() {
    int a, b, c;
    printf("请输入三个整数；\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a == b && a == c)
        printf("三个值都相等\n");
    else if (a != b && a != c && b != c)
        printf("三个值都不相等\n");
    else
        printf("有两个值相等\n");
}