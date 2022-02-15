#include<bits/stdc++.h>

using namespace std;

int used[1000000];

int main() {

    int i, j;
    while (cin >> i >> j) {
        memset(used, 0, sizeof(used));
        int bestcontador = INT_MIN;
        bool dereve = false;
        if (j < i) {
            int aux = i; i = j; j = aux; dereve = true;
        }
        for (int k = i; k <= j; ++k) {
            int m = k;
            int contador = 1;
            if (used[m] == 0) {
                used[m] = 1;
                while (m != 1) {
                    contador++;
                    if (m % 2 == 0) {
                        m/=2;
                    } else {
                        m = m*3 + 1;
                    }
                }
            }
            bestcontador = max(bestcontador,contador);
        }
        if (!dereve) cout << i << " " << j << " " << bestcontador << "\n";
        else cout << j << " " << i << " " << bestcontador << "\n";

    }

    return 0;
}