#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define LENGTH 4
#define R 114
#define B 98
#define Q 113
#define UP 65
#define DOWN 66
#define LEFT 68
#define RIGHT 67
int arr[LENGTH][LENGTH];

void initialize();
void addOne();
int playGame();
bool lose();
bool win();
void inputChoice(int &choice);
void menu();
void printfMatrix();
bool move(int dir);
bool moveUp();
bool moveDown();
bool moveRight();
bool moveLeft();

int main() {
    do {
        menu();
    } while (1);
    return 0;
}

bool move(int dir) {
    bool flag;
    switch (dir) {
    case UP: flag = moveUp(); break;
    case DOWN: flag = moveDown(); break;
    case RIGHT: flag = moveRight(); break;
    case LEFT: flag = moveLeft(); break;
    }
    return flag;
}

bool moveUp() {
    int p0, p1, tmp, i;
    bool flag = false;

    for (i = 0; i < LENGTH; i++) {
        //printf("第%d条\n",i+1);
        p0 = 0;
        do {
            while (arr[p0][i] != 0 && p0 < LENGTH)
                p0++;
            if (p0 == LENGTH) break;
            p1 = p0 + 1;
            while (arr[p1][i] == 0 && p1 < LENGTH)
                p1++;
            if (p1 == LENGTH) break;

            arr[p0][i] = arr[p1][i];
            arr[p1][i] = 0;
            //printf("调用过程1\n");
            flag = true;
        } while (1);

        tmp = 0;
        do {
            if (arr[tmp][i] == arr[tmp + 1][i] && arr[tmp][i] != 0) {
                arr[tmp][i] *= 2;
                arr[tmp + 1][i] = 0;
                tmp++;
                flag = true;
                //printf("调用过程2\n");
            }
            tmp++;
        } while (tmp < LENGTH - 1 );

        p0 = 0;
        do {
            while (arr[p0][i] != 0 && p0 < LENGTH)
                p0++;
            if (p0 == LENGTH) break;
            p1 = p0 + 1;
            while (arr[p1][i] == 0 && p1 < LENGTH)
                p1++;
            if (p1 == LENGTH) break;
            arr[p0][i] = arr[p1][i];
            arr[p1][i] = 0;
            flag = true;
            //printf("调用过程3\n");
        } while (1);
    }
    return flag;
}
bool moveDown() {
    int p0, p1, tmp, i;
    bool flag = false;
    //printf("调用DOWN\n");
    for (i = 0; i < LENGTH; i++) {
        //printf("第%d条\n",i+1);
        p0 = LENGTH - 1;
        do {
            while (arr[p0][i] != 0 && p0 > 0)
                p0--;
            if (p0 == 0) break;
            p1 = p0 - 1;
            while (arr[p1][i] == 0 && p1 > -1)
                p1--;
            if (p1 == -1) break;
            arr[p0][i] = arr[p1][i];
            arr[p1][i] = 0;
            flag = true;
            //printf("调用过程1\n");
        } while (1);


        tmp = LENGTH - 1;
        do {
            if (arr[tmp][i] == arr[tmp - 1][i] && arr[tmp][i] != 0) {
                arr[tmp][i] *= 2;
                arr[tmp - 1][i] = 0;
                tmp--;
                flag = true;
                //printf("调用过程2\n");
            }
            tmp--;
        } while (tmp > 0 );


        p0 = LENGTH - 1;
        do {
            while (arr[p0][i] != 0 && p0 > 0)
                p0--;
            if (p0 == 0) break;
            p1 = p0 - 1;
            while (arr[p1][i] == 0 && p1 > -1)
                p1--;
            if (p1 == -1) break;
            arr[p0][i] = arr[p1][i];
            arr[p1][i] = 0;
            flag = true;
            //printf("调用过程3\n");
        } while (1);
    }
    return flag;
}
bool moveRight() {
    int p0, p1, tmp, i;
    int flag = false;
    //printf("调用RIGHT\n");
    for (i = 0; i < LENGTH; i++) {
        //printf("第%d条\n",i+1);
        p0 = LENGTH - 1;
        do {
            while (arr[i][p0] != 0 && p0 > 0)
                p0--;
            if (p0 == 0) break;
            p1 = p0 - 1;
            while (arr[i][p1] == 0 && p1 > -1)
                p1--;
            if (p1 == -1) break;
            arr[i][p0] = arr[i][p1];
            arr[i][p1] = 0;
            flag = true;
            //printf("调用过程1\n");
        } while (1);

        tmp = LENGTH - 1;
        do {
            if (arr[i][tmp] == arr[i][tmp - 1] && arr[i][tmp] != 0) {
                arr[i][tmp] *= 2;
                arr[i][tmp - 1] = 0;
                tmp--;
                flag = true;
                //printf("调用过程2\n");
            }
            tmp--;
        } while (tmp > 0 );

        p0 = LENGTH - 1;
        do {
            while (arr[i][p0] != 0 && p0 > 0)
                p0--;
            if (p0 == 0) break;
            p1 = p0 - 1;
            while (arr[i][p1] == 0 && p1 > -1)
                p1--;
            if (p1 == -1) break;
            arr[i][p0] = arr[i][p1];
            arr[i][p1] = 0;
            flag = true;
            //printf("调用过程3\n");
        } while (1);
    }
    return flag;
}
bool moveLeft() {
    int p0, p1, tmp, i;
    bool flag = false;
    //printf("调用LEFT\n");
    for (i = 0; i < LENGTH; i++) {
        //printf("第%d条\n",i+1);
        p0 = 0;
        do {
            while (arr[i][p0] != 0 && p0 < LENGTH)
                p0++;
            if (p0 == LENGTH) break;
            p1 = p0 + 1;
            while (arr[i][p1] == 0 && p1 < LENGTH)
                p1++;
            if (p1 == LENGTH) break;
            arr[i][p0] = arr[i][p1];
            arr[i][p1] = 0;
            flag = true;
            //printf("调用过程1\n");
        } while (1);

        tmp = 0;
        do {
            if (arr[i][tmp] == arr[i][tmp + 1] && arr[i][tmp] != 0) {
                arr[i][tmp] *= 2;
                arr[i][tmp + 1] = 0;
                tmp++;
                flag = true;
                //printf("调用过程2\n");
            }
            tmp++;
        } while (tmp < LENGTH - 1 );

        p0 = 0;
        do {
            while (arr[i][p0] != 0 && p0 < LENGTH)
                p0++;
            if (p0 == LENGTH) break;
            p1 = p0 + 1;
            while (arr[i][p1] == 0 && p1 < LENGTH)
                p1++;
            if (p1 == LENGTH) break;
            arr[i][p0] = arr[i][p1];
            arr[i][p1] = 0;
            flag = true;
            //printf("调用过程3\n");
        } while (1);
    }
    return flag;
}

int playGame() {
    int init1, init2;
    char dir;
    bool sucMove = true;
    initialize();
    do {
        if (win()) {
            //printf("判定成功");
            return 1;
        }
        if (sucMove) {
            //printf("有效移动！\n");
            addOne();
            printfMatrix();
        } else {
            //printf("无效移动！\n");
        }

        if (lose()) {
            //printf("判定失败");
            return 0;

        }
        system("stty raw");
        dir = getchar();
        system("stty cooked");
        if (dir == 27) {
            getchar();
            system("stty raw");
            dir = getchar();
            system("stty cooked");

            if (dir == UP) {
                sucMove = move(UP);
            } else if (dir == DOWN) {
                sucMove = move(DOWN);
            } else if (dir == RIGHT) {
                sucMove = move(RIGHT);
            } else if (dir == LEFT) {
                sucMove = move(LEFT);
            }
        }
    } while (dir != 'r' && dir != 'b' && dir != 'q');
    if (dir == 'q')
        exit(0);
    else
        return dir;
}

void printfMatrix() {
    int i, j;
    system("clear");
    for (i = 0; i < LENGTH; i++) {
        printf("--------------------------------\n");
        for (j = 0; j < LENGTH; j++) {
            printf("|");
            if (arr[i][j] == 0)
                printf("    \t");
            else
                printf("%4d\t", arr[i][j]);
            if (3 == j) printf("|\n");
        }
        printf("|    \t|    \t|    \t|    \t|\n");
    }
    printf("--------------------------------\n");
    printf("按R重新开始\n按Q退出游戏\n按B返回菜单\n");
}

void addOne() {
    int init, location;
    location = rand() % 16 + 1;
    if (rand() % 10) {
        init = 2;
    } else {
        init = 4;
    }
    while (arr [location / 4][location % 4] != 0) {
        location = (++location) % 16;
    }
    arr [location / 4][location % 4] = init;
}

bool lose() {
    int flag = 1;
    int i, j;
    //printf("调用lose()\n");
    for (int i = 0; i < LENGTH; i++)
        for (int j = 0; j < LENGTH; j++) {
            if (arr[i][j] == 0) {
                flag = 0;
                break;
            }
        }
    //有可能输了
    if (flag) {
        for (i = 0; i < LENGTH - 1; i++)
            for (j = 0; j < LENGTH; j++)
                if (arr[i][j] == arr[i + 1][j]) {
                    printf("您就要输了！\n");
                    flag = 0;
                    return flag;
                }
        for (i = 0; i < LENGTH - 1; i++)
            for (j = 0; j < LENGTH; j++)
                if (arr[j][i] == arr[j][i + 1]) {
                    printf("您就要输了！\n");
                    flag = 0;
                    return flag;
                }
    }
    return flag;
}

bool win() {
    int flag = 0;
    for (int i = 0; i < LENGTH; i++)
        for (int j = 0; j < LENGTH; j++) {
            if (arr[i][j] == 2048) {
                flag = 1;
                break;
            }
        }
    return flag;
}

void initialize() {
    int i, j, init;
    int location;
    for (i = 0; i < LENGTH; i++)
        for (j = 0; j < LENGTH; j++)
            arr[i][j] = 0;
    srand((unsigned)time(NULL));
    if (rand() % 10) {
        init = 2;
    } else {
        init = 4;
    }
    location = (rand() % 16);
    arr [location / 4][location % 4] = init;
    system("clear");
}

void inputChoice(int &choice) {
    do {
        system("clear");
        printf("------------------------------------\n");
        printf("\t欢迎来到2048小游戏！\t\n");
        printf("------------------------------------\n");
        printf("-------------1. 简单模式------------\n");
        printf("-------------2. 游戏说明------------\n");
        printf("-------------3. 退出游戏------------\n");
        system("stty raw");
        choice = getchar();
        system("stty cooked");
        system("clear");
    } while (choice < 49 || choice > 51);
}

void menu() {
    int choice, option;
    inputChoice(choice);
    switch (choice) {
    case '1': do {
            option = playGame();
        } while (option == R);
        if (option == 0) {
            printf("您输了！请按回车键继续！\n");
            system("stty raw");
            do {} while (getchar() == 13);
            system("stty cooked");
            break;
        } else {
            printf("您赢了！请按任意键继续！\n");
            system("stty raw");
            getchar();
            system("stty cooked");
        }
        break;

    case '2': printf("\t2048游戏共有16个格子，初始时初始数字由2或者4构成。\n");
        printf("\t1.按↑↓← →键进行移动，所有格子会向那个方向运动。\n");
        printf("\t2.相同数字的两个格子，相撞时数字会相加。 \n");
        printf("\t3.每次滑动时，空白处会随机刷新出一个数字的格子。\n");
        printf("\t4.当界面不可运动时（且界面全部被数字填满时），游戏结束；\n");
        printf("\t当界面中最大数字是2048时，游戏胜利。\n\n");
        printf("\t返回请按回车键");
        do {} while (getchar() == 13);
        system("clear");
        menu();
        break;

    case '3': exit(0);
    }
}