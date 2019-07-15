#include<stdio.h>
int main() {
    double money = 10000;
    int i;

    for (i = 0; i < 5; i++) {
        money += money * 0.003;
    }

    printf("%.2f", money);
    return 0;
}