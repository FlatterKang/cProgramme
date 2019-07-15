#include<stdio.h>
int main() {
    int grade;
    printf("请输入学生的成绩：");
    scanf("%lf", &grade);

    if (grade >= 80) {
        printf("优秀\n");
    } else if (grade >= 70) {
        printf("良好\n");
    } else if (grade >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }

    return 0;
}