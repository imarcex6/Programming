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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p,t,c;
    while(scanf("%d %d %d", &c, &p, &t) == 3 && p != 0 && t != 0 && c != 0) {
        int current = p+t;
        if (current > c) {
            t -= c - p;
            current = c-t;
        }
        cout << current << "\n";
    }

    return 0;
}