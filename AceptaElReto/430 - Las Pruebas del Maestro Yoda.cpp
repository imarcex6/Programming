#include<bits/stdc++.h>

using namespace std;

int main() {
    int P, aux, n1, n2;
    while (cin >> P && P != 0) {
        if (P == 0) aux = 0;
        for (int i = 0; i < P; ++i) {
            cin >> n1 >> n2;
            if (i == 0) aux = n1;
            else {
                while (n1 <= aux)
                    n1 += n2;
                aux = n1;
            }
        }
        cout << aux << "\n";
    }

    return 0;
}