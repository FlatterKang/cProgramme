#include<stdio.h>
#include<stdlib.h>
int main() {
    double salary, tax = 0;
    printf("请输入您的个人月工资：");
    scanf("%lf", &salary);

    if (salary > 85000) {
        tax = (salary - 85000) * 0.45 + 25000 * 0.35 + 20000 * 0.3 + 10000 * 0.25 + 13000 * 0.2 + 9000 * 0.1 + 3000 * 0.03;
    } else if (salary > 60000) {
        tax = (salary - 60000) * 0.35 + 20000 * 0.3 + 10000 * 0.25 + 13000 * 0.2 + 9000 * 0.1 + 3000 * 0.03;
    } else if (salary > 40000) {
        tax = (salary - 40000) * 0.3 + 10000 * 0.25 + 13000 * 0.2 + 9000 * 0.1 + 3000 * 0.03;
    } else if (salary > 30000) {
        tax = (salary - 30000) * 0.25 + 13000 * 0.2 + 9000 * 0.1 + 3000 * 0.03;
    } else if (salary > 17000) {
        tax = (salary - 17000) * 0.2 + 9000 * 0.1 + 3000 * 0.03;
    } else if (salary > 8000) {
        tax = (salary > 8000) * 0.1 + 3000 * 0.03;
    } else if (salary > 5000) {
        tax = (salary - 5000) * 0.03;
    } else {
        printf("恭喜您，您不用交税！\n");
        exit(0);
    }

    printf("您的应交税费为：%.2f\n", tax);
    return 0;
}