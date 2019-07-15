//输入规定个数整数并显示出它们的合计值和平均值
#include <stdio.h>
int main() {
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("要输入多少个整数：");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("No.%d:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合计值：%d\n", sum);
    printf("平均值：%.2f\n", (double)sum / num);

    return 0;
}