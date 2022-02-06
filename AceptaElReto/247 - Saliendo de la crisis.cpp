#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while(cin >> N && N != 0) {
        int anterior = 0;
        bool correcto = true;
        for (int i = 0; i < N; ++i) {
            int current; cin >> current;
            if (current <= anterior) correcto = false;
            anterior = current;
        }
        if (correcto) cout << "SI\n";
        else cout << "NO\n";
    }

    return 0;
}