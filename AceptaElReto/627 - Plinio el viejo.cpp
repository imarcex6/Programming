#include<bits/stdc++.h>

using namespace std;

bool isLeap(int year);

int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void) {
    int D, M, Y, y, m, d;

    while (scanf("%d/%d/%d %d %d %d", &D, &M, &Y, &y, &m, &d) == 6 &&
           (D != 0 || M != 0 || Y != 0 || y != 0 || m != 0 || d != 0)) {
        int addDays = y * 336 + m * 28 + d;
        if (addDays >= 365) {
            if (M > 2 || (M == 2 && D > 28)) {
                bool continuar = true;
                while (addDays > 364 && continuar) {
                    if (isLeap(Y+1)){
                        if (addDays > 365) {
                            Y++;
                            addDays -= 366;
                        } else {
                            continuar = false;
                        }
                    } else {
                        Y++;
                        addDays -= 365;
                    }
                }
            } else {

            }
        }
        if (isLeap(Y)) {
            months[2] = 29;
        } else {
            months[2] = 28;
        }
        while (addDays--) {
            D++;
            if (D > months[M]) {
                D = 1;
                M++;
                if (M == 13) {
                    Y++;
                    M = 1;
                    if (isLeap(Y)) {
                        months[2] = 29;
                    } else {
                        months[2] = 28;
                    }
                }
            }
        }
        printf("%02d/%02d/%04d\n", D, M, Y);
    }
}

bool isLeap(int year) {
    if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}