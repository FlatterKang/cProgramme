//1分钱、2分钱、五分钱组成1元钱的方式：
#include<stdio.h>
int main() {
    int i, j, k, count = 0; //i,j,k分别为5分，2分，1分钱的个数
    int money = 100;  //money是总钱数，单位是分，当前为100分
    printf("5分个数\t2分个数\t1分个数\n");

    for (i = 0; i <= money / 5; i++) {
        for (j = 0; j <= money / 2; j++) {
            for (k = 0; k <= money / 1; k++) {
                if (100 == i * 5 + j * 2 + k * 1) {
                    count++;
                    printf("%d\t%d\t%d\n", i, j, k);
                }
            }
        }
    }

    printf("5分、2分、1分组成1元，共有%d种方案。\n", count);
    return 0;
}