#include <bits/stdc++.h>
#define oo 0x3f3f3f3f3f3f3f3fLL
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define FOR(i, a, b) for(int i = (a); i < int(b); i++)
#define trav(i, v) for(auto &i : v)
#define has(c, e) ((c).find(e) != (c).end())
#define sz(c) int((c).size())
#define all(c) c.begin(), c.end()
#define debug(x) cerr << #x << ": " << x << endl;

int main(){

    int N;
    while (cin >> N && N != 0) {
        bool aviso = true;
        int x, contador = 0;
        for (int i = 0; i < N; ++i) {
            cin >> x;
            if (x <= 4 && aviso) { contador++; aviso = !aviso;}
            if (x > 6 && !aviso) aviso = !aviso;
        }
        cout << contador << "\n";
    }

    return 0;
}
