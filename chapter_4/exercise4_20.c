#include <stdio.h>

int main() {
    int i , j;
    printf("     九     九     乘     法     表\n");

    for (i = 1; i <= 9; i ++) {
        switch (i) {
        case 1: printf("九  "); break;

        case 3: printf("九  "); break;

        case 5: printf("乘  "); break;

        case 7: printf("法  "); break;

        case 9: printf("表  "); break;

        default:
            printf("    ");
            break;
        }

        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }

        putchar('\n');
    }

    return 0;
}
