#include<stdio.h>
int main() {
    int ft[4][3], tf[3][4];
    int i, j, k;
    double sum, result[4][4];
    printf("请输入四行三列的矩阵，回车结束输入一行\n");

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            scanf("%d", &ft[i][j]);
            getchar();
        }
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            printf("%d",ft[i][j]);
        }




    printf("请输入三行四列的矩阵，回车结束输入一行\n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            scanf("%d", &tf[i][j]);
            getchar();
        }

            for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            printf("%d",tf[i][j]);
        }


    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            sum = 0;

            for (k = 0; k < 3; k++) {
                sum += ft[i][k] * tf[k][j];
            }

            result[i][j] = sum;
        }


    printf("\n矩阵相乘结果为：\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%-6.1f", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
