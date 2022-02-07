#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases; cin >> cases;
    while(cases--) {
        int contador = 0;
        int n, anillos; cin >> n;
        contador += n*6;
        cin >> n;
        contador += n*8;
        cin >> n;
        contador += n*10;
        cin >> n >> anillos;
        contador += n*anillos*2;
        cout << contador << "\n";
    }

    return 0;
}