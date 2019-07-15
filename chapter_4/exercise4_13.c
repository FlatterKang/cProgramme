#include <stdio.h>

int main()
{
	int n,sum=0;
	printf("请输入一个整数值");
	scanf("%d",&n);

	do{
		sum+=n;
		n--;
	}while(n>0);
	printf("%d\n", sum);
	return 0;
}