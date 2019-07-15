#include<stdio.h>
int main()
{
	int i,j,n;
	printf("请输入要打印的正方形边长：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}