#include<stdio.h>
int main() {
    char a, b;
    printf("请输入星期的第一个首字母：");
    scanf("%c", &a);
    getchar();

    switch (a) {
    case 'm':
        printf("Monday\n");
        break;

    case 'w':
        printf("Wednesday\n");
        break;

    case 'f':
        printf("Friday\n");
        break;

    case 't':
        printf("请输入星期的第二个首字母：");
        scanf("%c", &b);

        if (b == 'u') {
            printf("Tuesday\n");
        } else if (b == 'h') {
            printf("Thursday\n");
        } else {
            printf("输入有误！\n");
        }

        break;

    case 's':
        printf("请输入星期的第二个首字母：");
        scanf("%c", &b);

        if (b == 'a') {
            printf("Saturday\n");
        } else if (b == 'u') {
            printf("Sunday\n");
        } else {
            printf("输入有误！\n");
        }

        break;

    default:
        printf("输入有误！\n");
    }
}