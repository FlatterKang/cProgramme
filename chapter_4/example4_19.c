//显示直角在右下方的等腰直角三角形
#include <stdio.h>
int main() {
    int i , j, len;

    puts("生成直角在右下方的等腰直角三角形。");
    printf("短边："); scanf("%d", &len);

    for (i = 1; i <= len; i ++) {
        for (j = 1; j <= len - i; j++) {
            putchar(' ');
        }

        for (j = 1; j <= i; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}