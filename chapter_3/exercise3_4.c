#include <stdio.h>

int main() {
    int a, b;
    printf("请输入两个整数A,B。");
    scanf("%d,%d", &a, &b);
    if (a == b)
        printf("A等于B\n");
    else if (a < b)
        printf("A小于B\n");
    else if (a > b)
        printf("A大于B\n");
    return 0;
}