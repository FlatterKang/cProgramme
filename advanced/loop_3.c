//判断一个数是否为素数
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool judge(int x) {
    int i;
    int k = sqrt(x);

    if (x <= 1) {
        return false;
    } else {
        for (i = 2; i <= k; i++) {
            if (0 == x % i) {
                return false;
            }
        }

        return true;
    }
}
int main() {
    int x;
    printf("请输入一个正整数x:");
    scanf("%d", &x);

    if (judge(x)) {
        printf("x是一个素数！\n");
    } else {
        printf("x不是一个素数！\n");
    }

    return 0;
}