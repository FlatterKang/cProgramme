#include<stdio.h>
#include<stdlib.h>

void printRegTri(int n) {
    int i, j;

    if (n > 0) {
        for (i = 1; i <= n; i++) { //控制行数i循环
            for (j = 0; j < n - i; j++) { //控制空格打印
                printf(" ");
            }

            for (j = 0; j < i; j++) { //控制*打印，行数等于星号数
                printf("* ");
            }

            printf("\n");
        }
    } else {
        printf("输入有误！\n");
    }

}

void printDowTri(int n) {
    int i, j;

    if (n > 0) {
        for (i = n; i > 0; i--) {
            for (j = 0; j < n - i; j++) { //控制空格打印
                printf(" ");
            }

            for (j = 0; j < i; j++) { //控制*打印，行数等于星号数
                printf("* ");
            }

            printf("\n");
        }
    } else {
        printf("输入有误！\n");
    }
}
void printDiamond(int n) {
    int i, j;

    if (n <= 0) {
        printf("输入有误！\n");
    } else {
        for (i = 1; i <= n; i++) { //先打印上半部分（包括最长的行）
            for (j = 0; j < n - i; j++) {
                printf(" ");
            }

            for (j = 0; j < i; j++) {
                printf("* ");
            }

            printf("\n");
        }

        for (i -= 2; i > 0; i--) { //下半部分逆向打印（不包括最长的行）
            for (j = 0; j < n - i; j++) {
                printf(" ");
            }

            for (j = 0; j < i; j++) {
                printf("* ");
            }

            printf("\n");
        }
    }
}
int main() {
    int n, choice;

    printf("请输入要打印的图形的边长：");
    scanf("%d", &n);
    system("clear");
    printf("-----1.正三角形-----\n");
    printf("-----2.倒三角形-----\n");
    printf("-----3.打印菱形-----\n");
    printf(" 请输入您要打印的图形：");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printRegTri(n);
        break;

    case 2:
        printDowTri(n);
        break;

    case 3:
        printDiamond(n);
        break;

    default:
        printf("输入有误！\n");
        break;

    }

    return 0;
}