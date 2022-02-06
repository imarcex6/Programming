#include <bits/stdc++.h>

using namespace std;

int mult(int num) {
    int total = 1;
    while (num > 0) {
        total *= num%10;
        num/=10;
    }
    return total;
}

int solve(int num) {
    if (num < 10) {
        return 0;
    }
    return 1 + solve(mult(num));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases; cin >> cases;
    while (cases--) {
        int num; cin >> num;
        cout << solve(num) << "\n";
    }

    return 0;
}