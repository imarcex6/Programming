#include <bits/stdc++.h>
using namespace std;

int solution(int n);

int main() {
    int y; scanf("%d", &y);

    int sol = solution(y+1);

    printf("%d", sol);

    return 0;
}

int solution(int n) {
    map <int, int> v;
    bool different = true; int ncopy = n;
    while (ncopy != 0) {
        int lastDigit = ncopy % 10;
        if (v[lastDigit] == 0) {
            v[lastDigit] = 1;
        } else {
            different = false;
        }
        ncopy /= 10;
    }
    v.clear();
    if (different) return n;
    else return solution(n+1);
}