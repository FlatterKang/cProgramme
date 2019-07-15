#include <stdio.h>

int main()
{
	int a;
	printf("请输入一个整数值。\n");
	scanf("%d",&a);
	if(a>=0)
		printf("它的绝对值是：%d\n",a);
	if(a<0)
		printf("它的绝对值是：%d\n",-a);
	return 0;
}