#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数，用空格隔开：");
	scanf("%d %d",&a,&b);
	printf("两数之和为：%d\n",a+b);
	printf("两数之积为：%d\n",a*b);
	return 0;
}