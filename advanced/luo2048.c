#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void display(int a[][4]) {
    printf("\n\n\t\t\t\t—————————————————————————————\n");

    for (int i = 0; i < 4; i++) {
        printf("\t\t\t\t");

        for (int j = 0; j < 4; j++) {
            if (!a[i][j]) {
                if (j != 3) {
                    printf("|      ");
                } else {
                    printf("|      |");
                }
            } else {
                if (j != 3) {
                    printf("|%6d", a[i][j]);
                } else {
                    printf("|%6d|", a[i][j]);
                }
            }
        }

        printf("\n");
        printf("\t\t\t\t—————————————————————————————\n");

    }
}
void input(int a[][4]) {
    int m[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 4};
    int x, y;
    int flag = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[j][i] == 0) {
                flag = 0;

            }

        }
    }

    if (flag) {
        return ;
    }


    do {

        x = rand() % 4;
        y = rand() % 4;
    } while (a[x][y]);

    int i = rand() % 10;
    a[x][y] = m[i];
    return ;
}
int choice(int a[][4]) {
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[j][i] == a[j][i + 1]) {
                flag1 = 1;

            }

        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[j][i] == a[j + 1][i]) {
                flag2 = 1;

            }

        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[j][i] == 0) {
                flag3 = 1;

            }

        }
    }


    if (flag1 || flag2 || flag3) {
        return 0;
    } else {
        return 1;
    }
}
int move(int a[][4], int *score) {
    system("stty raw");
    char s = getchar();
    getchar();
    char m = getchar();
    system("stty -raw");
    int flag = 0;

    if (s == 'q') {
        return 1;
    }

    if (m == 'A') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[j][i]) {
                    int temp = a[j][i];
                    a[j][i] = 0;
                    int k = j;

                    for (; k > 0; k--) {
                        if (a[k - 1][i]) {
                            break;
                        }
                    }

                    a[k][i] = temp;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[j][i] == a[j + 1][i]) {
                    flag = 1;
                    a[j][i] *= 2;
                    *score += a[j][i];
                    a[j + 1][i] = 0;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[j][i]) {
                    int temp = a[j][i];
                    a[j][i] = 0;
                    int k = j;

                    for (; k > 0; k--) {
                        if (a[k - 1][i]) {
                            break;
                        }
                    }

                    if (k != j) {
                        flag = 1;
                    }

                    a[k][i] = temp;
                }
            }
        }
    } else if (m == 'B') {
        for (int i = 0; i < 4; i++) {
            for (int j = 3; j >= 0; j--) {
                if (a[j][i]) {
                    int temp = a[j][i];
                    a[j][i] = 0;
                    int k = j;

                    for (; k < 3; k++) {
                        if (a[k + 1][i]) {
                            break;
                        }
                    }

                    a[k][i] = temp;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 3; j >= 0; j--) {
                if (a[j][i] == a[j - 1][i]) {
                    flag = 1;
                    a[j][i] *= 2;
                    *score += a[j][i];
                    a[j - 1][i] = 0;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 3; j >= 0; j--) {
                if (a[j][i]) {
                    int temp = a[j][i];
                    a[j][i] = 0;
                    int k = j;

                    for (; k < 3; k++) {
                        if (a[k + 1][i]) {
                            break;
                        }
                    }

                    if (k != j) {
                        flag = 1;
                    }

                    a[k][i] = temp;
                }
            }
        }
    } else if (m == 'C') {
        for (int i = 0; i < 4; i++) {
            for (int j = 3; j >= 0; j--) {
                if (a[i][j]) {
                    int temp = a[i][j];
                    a[i][j] = 0;
                    int k = j;

                    for (; k < 3; k++) {
                        if (a[i][k + 1]) {
                            break;
                        }
                    }

                    a[i][k] = temp;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 3; j >= 0; j--) {
                if (a[i][j] == a[i][j - 1]) {
                    flag = 1;
                    a[i][j] *= 2;
                    *score += a[i][j];
                    a[i][j - 1] = 0;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 3; j >= 0; j--) {
                if (a[i][j]) {
                    int temp = a[i][j];
                    a[i][j] = 0;
                    int k = j;

                    for (; k < 3; k++) {
                        if (a[i][k + 1]) {
                            break;
                        }
                    }

                    a[i][k] = temp;

                    if (k != j) {
                        flag = 1;
                    }
                }
            }
        }
    }

    if (m == 'D') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[i][j]) {
                    int temp = a[i][j];
                    a[i][j] = 0;
                    int k = j;

                    for (; k > 0; k--) {
                        if (a[i][k - 1]) {
                            break;
                        }
                    }

                    a[i][k] = temp;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[i][j] == a[i][j + 1]) {
                    flag = 1;
                    a[i][j] *= 2;
                    *score += a[i][j];
                    a[i][j + 1] = 0;
                }
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[i][j]) {
                    int temp = a[i][j];
                    a[i][j] = 0;
                    int k = j;

                    for (; k > 0; k--) {
                        if (a[i][k - 1]) {
                            break;
                        }
                    }

                    a[i][k] = temp;

                    if (k != j) {
                        flag = 1;
                    }
                }
            }
        }
    }

    if (flag) {
        input(a);
    }

    system("clear");
    display(a);
    printf("\n\n\n\t\t\t\t分数:%d(三次q键退出)", *score);

    if (choice(a)) {
        printf("\n\n\n\t\t\t\t游戏结束！\n");
        return 1;
    } else {
        return 0;
    }


}
int main() {
    system("clear");
    srand((unsigned)time(NULL));
    int score = 0;
    int a[4][4] = {0};
    input(a);
    display(a);

    while (1) {
        if (move(a, &score)) {
            break;
        }
    }

    return 0;
}