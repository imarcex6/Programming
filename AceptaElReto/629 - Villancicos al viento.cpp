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

int arr[500050];

int main()
{
    int N;
    while(scanf("%d", &N) == 1 && N != 0) {
        for (int i = 0; i < N; ++i) {
            scanf("%d", &arr[i]);
        }
        int contador = 0, pila = 0;
        for (int i = N-1; i >= 0; --i) {
            if (pila > 0)
            {
                contador++;
                pila--;
            }
            if (pila < arr[i]) pila = arr[i];
        }
        cout << contador << "\n";
    }
    return 0;
}