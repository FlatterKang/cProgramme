//编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
#include <stdio.h>
#define N 10

int main()
{
	int i,m=0;
    int x[N];

    for (i = 0; i < N; i++)
    {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
        m++;
    }
    printf("数组中的元素个数是%d\n", m);
    printf("{");
    for(i=0;i<N;i++)
    {
    	printf("%d, ",x[i]);
    }
    printf("}");
}