/*
    求4名学生在两次考试中3门课程的总分并显示
*/
#include <stdio.h>

int main(void) {
    int i, j, k;
    int tensu[4][3][2] = {{{91, 97}, {63, 67}, {78, 72}},
                          {{67, 73}, {72, 43}, {46, 46}},
                          {{89, 97}, {34, 56}, {53, 21}},
                          {{32, 85}, {54, 46}, {34, 35}}};
    int sum[4][3]={0};

    /*求两次考试的分数之和*/
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                sum[i][j] += tensu[i][j][k];
            }
        }
    }

    /*显示第一次考试的分数*/
    puts("第一次考试的分数");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu[i][j][0]);
        }

        putchar('\n');
    }

    /*显示第二次考试的分数*/
    puts("第二次考试的分数");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu[i][j][1]);
        }

        putchar('\n');
    }

    /*显示总分*/
    puts("总分");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", sum[i][j]);
        }

        putchar('\n');
    }

    return 0;
}