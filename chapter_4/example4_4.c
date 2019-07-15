/*
    不停的输入整数，显示其和及平均值（使用复合赋值运算符和后置递增运算符）
*/
#include <stdio.h>

int main() {
    int sum = 0;
    int cnt = 0;
    int retry;

    while (retry == 0); {
        int t;
        printf("请输入一个整数：");
        scanf("%d", &t);
        sum += t;
        cnt ++;

        printf("是否继续？【YES……0/NO……9】:");
        scanf("%d", &retry);
    }

    printf("和为：%d，平均值为：%.2f\n", sum, (double)sum / cnt);

    return 0;
}