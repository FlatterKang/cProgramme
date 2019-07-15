#include<stdio.h>
int main() {
    int a, b;
    printf("请输入两个整数并用空格隔开：");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("除零错误！");
    } else {
        printf("前者是后者的：%.4lf%%\n", ((double)a / b) * 100);
    }

    return 0;
}