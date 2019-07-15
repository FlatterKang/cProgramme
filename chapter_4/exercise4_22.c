#include<stdio.h>

int main() {
    int i , j;
    int height, width, temp;

    puts("让我们来画一个长方形。");
    printf("边长1："); scanf("%d", &height);
    printf("边长2："); scanf("%d", &width);

    if (height > width) {
        temp = height;
        height = width;
        width = temp;
    }

    for (i = 1; i <= height; i ++) {
        for (j = 1; j <= width; j++) {
            printf("* ");
        }

        putchar('\n');
    }

    return 0;
}