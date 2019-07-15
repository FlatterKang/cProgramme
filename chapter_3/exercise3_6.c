#include <stdio.h>

int main() {
    int a, b, c, m;
    printf("请输入3个整数\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a <= b)
        m = a;
    else if (a >= b)
        m = b;
    if (m <= c)
        printf("最小值是%d\n", m);
    else if (m >= c)
        printf("最小值是%d\n", c);
    return 0;
}