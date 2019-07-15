#include<stdio.h>
int main() {
    int year, month;
    printf("请输入年份和月份，并用空格隔开:");
    scanf("%d %d", &year, &month);

    if (year > 0 && month > 0 && month < 13) {
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("本月有31天。\n");
            break;

        case 2:
            if (0 == year % 4 && 0 != year % 100) {
                printf("本月有29天。\n");
            } else {
                printf("本月有28天。\n");
            }

            break;

        default:
            printf("本月有30天。\n");
        }
    } else {
        printf("输入有误！\n");
    }

    return 0;
}