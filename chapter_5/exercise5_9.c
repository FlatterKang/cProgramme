//输入学生的分数并显示出分布情况
#include <stdio.h>
#define NUMBER 80    /*总人数上限*/

int main(void) {
    int i, j;             //用于循环的临时变量
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/
    int max;              //分布图中的最长一条的*个数

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("请输入1-%d的数：", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d号:", i + 1);

        do {
            scanf("%d", &tensu[i]);

            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("请输入1-100的数：");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[tensu[i] / 10]++;
    }


    max=bunpu[10];      //假设考100的人数最多
    for(i=0;i<10;i++)   //求出人数段最多分数段的人数
        if(bunpu[i]>max)
            max = bunpu[i];    


    for(i=0;i<max;i++)      //i控制行数，逻辑行数是i-1
    {
        for(j=0;j<11;j++)   //j控制分数段
        {
            if(bunpu[j]>=max-i)
                printf("*   ");
            else
                printf("    ");
        }
        printf("\n");
    }
    for(i=0;i<44;i++)
    printf("-");
printf("\n");

printf(" 0  ");
for(i=1;i<11;i++)
printf("%2d  ",i*10);
printf("\n");

    // puts("\n---分布图---");

    // for (i = 0; i < 10; i++) {
    //     printf("%2d-%2d:", i * 10, i * 10 + 9);

    //     for (j = 0; j < bunpu[i]; j++) {
    //         putchar('*');
    //     }

    //     putchar('\n');
    // }

    // printf("  100:");

    // for (j = 0; j < bunpu[10]; j++) {
    //     putchar('*');
    // }

    // putchar('\n');

    return 0;
}