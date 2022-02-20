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
    while (cin >> N) {
        int resto = 1, k = 1;
        while (resto % N != 0) {
            resto = (resto % N)*10 + 1;
            k++;
        }
        cout << k << "\n";
    }

    return 0;
}
