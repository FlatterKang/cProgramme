//升序打印所有小于该数的正偶数
#include<stdio.h>
int main() {
    int i = 2, n;
    printf("请输入一个正数：");
    scanf("%d", &n);
    n = n + 1;
    n = n - n % 2;   //得到比原数大的偶数

    if (i < n) {
        while (i < n) {
            printf("%d", i);
            i = i + 2;
        }

        printf("\n");
    }

    return 0;
}