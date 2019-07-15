/*
    根据读取的整数值显示所出的拳（只接收0、1、2）
*/
#include <stdio.h>

int main() {
    int hand;
    while (hand >= 0 && hand <= 2)
        printf("请选择出什么拳【0……石头/1……剪刀/2……布】：");
    scanf("%d", &hand);

    printf("你出");
    switch (hand) {
    case 0: printf("石头\n"); break;
    case 1: printf("剪刀\n"); break;
    case 2: printf("布\n"); break;
    }

    return 0;
}