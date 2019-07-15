#include<stdio.h>
int GreComDiv(int a, int b);
int LeaComMul(int a, int b);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("最大公约数为：%d\n", GreComDiv(a, b));
    printf("最小公倍数为：%d\n", LeaComMul(a, b));
    return 0;
}

int GreComDiv(int divisor, int dividend) {
    if (divisor > dividend) {  //如果除数大于被除数则交换
        dividend = dividend + divisor;
        divisor = dividend - divisor;
        dividend = dividend - divisor;
    }

    while (divisor != 0) {
        divisor = (dividend) % (dividend = divisor);
    }

    return dividend;
}

int LeaComMul(int a, int b) {
    return (a * b) / GreComDiv(a, b);
}
