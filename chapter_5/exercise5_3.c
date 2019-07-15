/*
    从头开始依次使用1、2、3、4、5对数组各元素进行初始化并显示
*/
#include <stdio.h>

int main(void)
{
    int i;
    int v[5] = {5,4,3,2,1};

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}