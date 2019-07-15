#include<stdio.h>
int main() {
    int i,n;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &n);

        if (n <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (n <= 0);
    for(i = 0;i<n;i++)
    {
    	printf("*");
    	if((i+1)%5 == 0)
    		printf("\n");
    }
    
    printf("\n");
    return 0;
}