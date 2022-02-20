#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases; cin >> cases;
    for (int i = 0; i < cases; ++i) {
        float n, m, r; cin >> n >> m >> r;
        float total = r/(n*m);
        printf("%.0f\n", ceil(total));
    }
    return 0;
}