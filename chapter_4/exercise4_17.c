#include<stdio.h>
#include <math.h>
int main()
{
	int a,b,i;
	printf("请输入一个正整数。\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
		printf("%d   %d\n",i,(int)pow(i,2));
	return 0;
}