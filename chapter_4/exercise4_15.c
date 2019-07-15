#include <stdio.h>

int main() {
    int a, b, n, h;
    double w;//h,w分别代表身高 体重
    printf("请输入身高范围最小数值\n"); scanf("%d", &a);
    printf("请输入身高范围最大数值\n"); scanf("%d", &b);
    printf("请输入间隔范围\n"); scanf("%d", &n);
    h = a;

    do {
        w = (h - 100) * 0.9;
        printf("%d", h); printf("  "); printf("%0.2f\n", w);
        h = h + n;
    } while (h <= b);
}