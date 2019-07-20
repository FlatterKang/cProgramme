//编写一段程序，输入6名学生2门课程(语文、数学)的分数，显示各门课程的总分和平均分，以及各个学生的总分和平均分。
#include <stdio.h>
#define N 6

int main() {
    int a[N], b[N], i;
    int sum1=0,sum2=0,anv1=0,anv2=0;

    printf("请按顺序输入学生的语文成绩\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        sum1+=a[i];
    }
    anv1=sum1/N;
    

    printf("请按顺序输入学生的数学成绩\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &b[i]);
        sum2+=b[i];
    }
    anv2=sum2/N;
    
    printf("语文的总分是%d\n",sum1);printf("语文的平均分是%d\n",anv1);
    printf("数学的总分是%d\n",sum2);printf("数学的平均分是%d\n",anv2);
    for(i=0;i<N;i++)
    {
        printf("第%d位学生  总分：%d    平均分：%d   \n",i+1,a[i]+b[i],(a[i]+b[i])/2);
    }

}