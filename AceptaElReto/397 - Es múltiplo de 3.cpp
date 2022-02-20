#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases; cin >> cases;
    for (int i = 0; i < cases; ++i) {
        long long N;
        cin >> N;
        long long num = (N * (N + 1)) / 2;
        if (num % 3 == 0) cout << "SI\n";
        else cout << "NO\n";
    }


    return 0;
}