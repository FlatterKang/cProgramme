#include<stdio.h>
int main()
{
	int high;
	printf("请输入您的身高：");
	scanf("%d",&high);
	printf("您的标准体重是%gkg\n",(high-100)*0.9);
	return 0;
}