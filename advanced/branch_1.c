#include<stdio.h>

void fun1(int x, int y, int z) {
    if (a < b && b < c) {
        printf("%d %d %d\n", a, b, c);
    } else if (a < c && c < b) {
        printf("%d %d %d\n", a, c, b);
    } else if (b < c && c < a) {
        printf("%d %d %d\n", b, c, a);
    } else if (b < a && a < c) {
        printf("%d %d %d\n", b, a, c);
    } else if (c < a && a < b) {
        printf("%d %d %d\n", c, a, b);
    } else {
        printf("%d %d %d\n", c, b, a);
    }
}

void fun2(int x, int y, int z) {
    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }

    if (y > z) {
        y = y + z;
        z = y - z;
        y = y - z ;
    }

    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }

    printf("%d %d %d", x, y, z);
}
int main() {
    int a, b, c;
    printf("请输入三个整数并用空格隔开：");
    scanf("%d %d %d", &a, &b, &c);
    fun1(a, b, c);
    fun2(a, b, c);
    return 0;
}