#include <stdio.h>

int main() {
    int a, b, c, d, m;
    printf("请输入4个整数\n");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    if (a <= b)
        m = a;
    else if (a >= b)
        m = b;
    if (m < c)
        m = c;
    if (m >= d)
        printf("最大值是%d\n", m);
    else if (m <= d)
        printf("最大值是%d\n", d);
    return 0;
}