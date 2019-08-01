#include<stdio.h>

int main() {
    int i, times = 0;
    double mm, meter;
    printf("请输入一张纸的厚度，单位为mm：");
    scanf("%lf", &mm);
    meter = mm / 1000;

    if (meter > 0) {
        while (meter < 8848.13) {
            meter *= 2;
            times++;
        }

        printf("需要对折%d次才能达到珠穆朗玛峰的高度。\n", times);
    } else {
        printf("输入有误！\n");
    }

    return 0;
}