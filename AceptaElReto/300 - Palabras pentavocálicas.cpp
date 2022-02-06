#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        string palabra; cin >> palabra;
        map <char, bool> vocales;
        for (auto letra : palabra) {
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||letra == 'u') {
                vocales[letra] = true;
            }
        }
        if (vocales['a'] && vocales['e'] && vocales['i'] && vocales['o'] && vocales['u']){
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}