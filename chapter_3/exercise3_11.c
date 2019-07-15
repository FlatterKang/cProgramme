//需要使用逻辑或运算符
#include <stdio.h>

int main()
{
	int a,b;
	printf("请输入两个整数\n");
	scanf("%d,%d",&a,&b);
	if(a-b<=10&&a-b>=-10)
		printf("它们的差值小于等于10\n");
	else if(a-b<=-11||a-b>=11)
		printf("它们的差值大于等于11\n");
	return 0;
}