#include <stdio.h>

int main() {
    int a;
    printf("请输入一个正整数值。\n");
    scanf("%d", &a);
    if (a > 0)
        do {
            if (a % 2)
                printf("+");
            else
                printf("-");
            a--;
        } while (a > 0);
    printf("\n");
    return 0;
}