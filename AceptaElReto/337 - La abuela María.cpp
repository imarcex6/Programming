#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        int dientesArriba[6], dientesAbajo[6];
        bool correcto = true;
        for (int & j : dientesArriba) {
            cin >> j;
        }
        int oldSum = -1;
        for (int j = 0; j < 6; ++j) {
            cin >> dientesAbajo[j];
            int newSum = dientesArriba[j]+dientesAbajo[j];
            if (newSum != oldSum && oldSum != -1) {
                correcto = false;
            }
            oldSum = newSum;
        }
        if (correcto) cout << "SI\n";
        else cout << "NO\n";
    }

    return 0;
}