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

    int cases; cin >> cases;
    while (cases--) {
        int num; cin >> num;
        int counter = 0;
        while (num != 0 && counter < 2) {
            if (num % 5 == 4) counter++;
            num /= 5;
        }
        if (counter == 2) cout << "SI\n";
        else cout << "NO\n";
    }

    return 0;
}