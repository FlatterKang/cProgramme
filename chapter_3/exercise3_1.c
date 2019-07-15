#include <stdio.h>

int main()
{
	int a,b,c;
	printf("请输入两个整数。\n");
	scanf("%d,%d",&a,&b);
	printf("整数A：%d\n",a);
	printf("整数B：%d\n",b);
	c=a%b;
	if(!c)
		printf("B是A的约数。\n");
	else
		printf("B不是A的约数。\n");
	return 0;
}