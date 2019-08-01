#include<stdio.h>

int calc_number(int y, int m, int d) {
    int sum = 0;

    switch (m) {
    case 12:
    case 11: sum += 31;

    case 10: sum += 30;

    case 9: sum += 31;

    case 8: sum += 31;

    case 7: sum += 30;

    case 6: sum += 31;

    case 5: sum += 30;

    case 4: sum += 31;

    case 3: if (y % 4 == 0 && y % 100 != 0) { //如果是闰年
            sum += 29;
        } else {
            sum += 28;
        }

    case 2: sum += 31;

    case 1: sum += d; break;

    }

    return sum;
}
void decrement_date(int *y, int *m, int *d) {
    int sum = calc_number(y, m, d); //这是今年的第sum天
    sum -= 1;

    if (0 == sum) {
        *y -= 1;
        *m = 12;
        * = 31;
        return;
    } else {
        if (sum -31 > 0){
        	*m = 1;}elseif(sum-){

        }
    }
}
void incremrnt_date(int *y, int *m, int *d);
int main() {
    int year, month, day;
    int *y = &year, *m = &month, *d = &day;
    decrement_date(y, m, d);
    incremrnt_date(y, m, d);
}