#include<stdio.h>
#include<stdlib.h>
int main() {
    int dir;

    for (int i = 0; i < 4; i++) {
        system("stty raw");
        dir = getchar();

        if (dir == 27) {
            getchar();
            dir = getchar();
        }

        system("stty cooked");
        printf("%d\n", dir);
        
    }
    return 0;
}