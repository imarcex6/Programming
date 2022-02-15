#include<bits/stdc++.h>

using namespace std;

int main() {

    long long i, useles, j, suma = 0;
    int cases; cin >> cases;
    while (cases--) {
        suma = 0;
        int longitud; cin >> longitud;
        for (int m = 0; m < longitud; ++m) {
            cin >> i >> useles >> j;
            suma += i*j;
        }
        cout << suma << "\n";
    }

    return 0;
}